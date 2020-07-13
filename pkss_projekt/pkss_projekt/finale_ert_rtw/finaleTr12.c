

#include "finale.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif


FILE * pFile;
FILE *fp;



int T0counter=0;
double T0[4100];
double TrSp[4100];
real_T Tzm;
void finale_initialize(void);
double P=0.1, I=0.005, D=0.05;



/* Continuous states */
X rtX;

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
int counter=0;

/* private model entry point functions */
extern void finale_derivatives(void);

static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 12;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  finale_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  finale_step();
  finale_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  finale_step();
  finale_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void finale_step(void)
{

    //wpisaæ do tablicy te wartoœci z T0
    counter++;

  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  {
    real_T rtb_Fcob;
    real_T Fcob_i;
    int32_T i;
    real_T Gain2_tmp;
    real_T uMhCh_tmp;
    real_T Tzco;


    Tzco=TrSp[T0counter]-1.75*T0[T0counter];
    if (rtmIsMajorTimeStep(rtM)) {
      /* Delay: '<Root>/Delay' incorporates:
       *  Constant: '<Root>/Constant'
       */
      if (rtDW.icLoad != 0) {
        for (i = 0; i < 1000; i++) {
          rtDW.Delay_DSTATE[i] = T0[T0counter];
        }
      }


      //    1   //
      Fcob_i = 70.0 - (T0[T0counter] - 6.0) * 2.5;
      Tzm=Fcob_i;


      /* Saturate: '<S6>/Saturation' */
      if (Fcob_i > 135.0) {
        rtDW.Saturation = 135.0;
      } else if (Fcob_i < 70.0) {
        rtDW.Saturation = 70.0;
      } else {
        rtDW.Saturation = Fcob_i;
      }

      /* End of Saturate: '<S6>/Saturation' */
    }


    rtDW.FilterCoefficient = ((Tzco - rtX.wyjscieTzco_CSTATE) * D -
      rtX.Filter_CSTATE) * 100.0;

    // PID_Um //
    Fcob_i = (((Tzco - rtX.wyjscieTzco_CSTATE) + rtX.Integrator_CSTATE) +
                  rtDW.FilterCoefficient) * P;

    /* Saturate: '<S43>/Saturation' */
    if (Fcob_i > 1.0) {
      Fcob_i = 1.0;
    } else {
      if (Fcob_i < 0.0) {
        Fcob_i = 0.0;
      }
    }

    //  3  //
    Gain2_tmp = (rtX.wyjscieTpm_CSTATE - rtX.wyjscieTzco_CSTATE) * 250000.0;
    rtDW.Gain2 = (Fcob_i * 0.041666666666666664 * 4.2E+6 * (rtDW.Saturation
      - rtX.wyjscieTpm_CSTATE) - Gain2_tmp) * 1.234567901234568E-7;
    rtDW.IntegralGain = (Tzco - rtX.wyjscieTzco_CSTATE) * I;


    rtDW.FilterCoefficient_o = ((TrSp[T0counter] - rtX.Tr1) * D -
      rtX.Filter_CSTATE_n) * 100.0;

    Fcob_i = (((TrSp[T0counter] - rtX.Tr1) + rtX.Integrator_CSTATE_h) +
                  rtDW.FilterCoefficient_o) * P;

    /* Saturate: '<S90>/Saturation' */
    if (Fcob_i > 1.0) {
      Fcob_i = 1.0;
    } else {
      if (Fcob_i < 0.0) {
        Fcob_i = 0.0;
      }
    }


    rtb_Fcob = Fcob_i * 0.011111111111111112;

    //  5   //
    uMhCh_tmp = (rtX.wyjscieTpco_CSTATE - rtX.Tr1) * 12000.0;
    rtDW.uMhCh = ((rtX.wyjscieTzco_CSTATE - rtX.wyjscieTpco_CSTATE) * (4.2E+6 *
      rtb_Fcob) - uMhCh_tmp) * 1.234567901234568E-7;



    rtDW.FilterCoefficient_b = ((TrSp[T0counter] - rtX.Tr2) * D -
      rtX.Filter_CSTATE_g) * 100.0;

    // PID_Ub
    Fcob_i = (((TrSp[T0counter] - rtX.Tr2) + rtX.Integrator_CSTATE_hz) +
                  rtDW.FilterCoefficient_b) * P;

    /* Saturate: '<S137>/Saturation' */
    if (Fcob_i > 1.0) {
      Fcob_i = 1.0;
    } else {
      if (Fcob_i < 0.0) {
        Fcob_i = 0.0;
      }
    }


    Fcob_i *= 0.011111111111111112;

    //  4   //
    rtDW.u = ((rtX.wyjscieTzco_CSTATE - (rtX.wyjscieTpco_CSTATE +
                rtX.wyjscieTpco_CSTATE_i) * 0.5) * ((rtb_Fcob + Fcob_i) *
               -4.2E+6) + Gain2_tmp) * 1.234567901234568E-7;



    //  6   //
    Gain2_tmp = (rtX.wyjscieTpco_CSTATE_i - rtX.Tr2) * 12000.0;
    rtDW.Gain7 = (Gain2_tmp - (rtX.Tr2 - T0[T0counter]) * 15000.0) * 5.0E-8;
    rtDW.uMhCh_o = ((rtX.wyjscieTzco_CSTATE - rtX.wyjscieTpco_CSTATE_i) *
                    (4.2E+6 * Fcob_i) - Gain2_tmp) * 1.234567901234568E-7;




    rtDW.IntegralGain_o = (TrSp[T0counter] - rtX.Tr2) * I;
    rtDW.IntegralGain_j = (TrSp[T0counter] - rtX.Tr1) * I;
    rtDW.Gain7_c = (uMhCh_tmp - (rtX.Tr1 - 1.0) * 15000.0) * 5.0E-8;



if (counter%30000==0)
{

    printf("T0= %f\t ",T0[T0counter]);
    printf("Tr= %f \t", rtX.Tr1);
    printf("Tpco= %f \t", rtX.wyjscieTpco_CSTATE);
    printf("Tpm= %f \t", rtX.wyjscieTpm_CSTATE);
    printf("Tzco= %f \t", rtX.wyjscieTzco_CSTATE);
    printf("Tzm= %f \t", Tzm);
    printf("Fcob= %f \t", Fcob_i);
    printf("rtb_Fcob= %f \t", rtb_Fcob);
    printf("TrSp= %f \n", TrSp[T0counter]);


    fprintf(fp,"\n%f;%f;%f;%f;%f;%f;%f;%f;%f",T0[T0counter],rtX.Tr1,rtX.wyjscieTpco_CSTATE,rtX.wyjscieTpm_CSTATE,rtX.wyjscieTzco_CSTATE,Tzm,Fcob_i,rtb_Fcob,TrSp[T0counter]);

    T0counter++;



    if(T0counter>4033)
    {
        fclose(fp);
        exit(1);
    }

}

  }

  if (rtmIsMajorTimeStep(rtM)) {
    int_T idxDelay;
    if (rtmIsMajorTimeStep(rtM)) {
      /* Update for Delay: '<Root>/Delay' incorporates:
       *  Constant: '<Root>/Constant'
       */
      rtDW.icLoad = 0U;
      for (idxDelay = 0; idxDelay < 999; idxDelay++) {
        rtDW.Delay_DSTATE[idxDelay] = rtDW.Delay_DSTATE[idxDelay + 1];
      }

      rtDW.Delay_DSTATE[999] = 1.0;

      /* End of Update for Delay: '<Root>/Delay' */
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      rtM->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void finale_derivatives(void)
{
  XDot *_rtXdot;
  _rtXdot = ((XDot *) rtM->derivs);
  _rtXdot->wyjscieTpm_CSTATE = rtDW.Gain2;
  _rtXdot->wyjscieTzco_CSTATE = rtDW.u;
  _rtXdot->Integrator_CSTATE = rtDW.IntegralGain;
  _rtXdot->Filter_CSTATE = rtDW.FilterCoefficient;
  _rtXdot->wyjscieTpco_CSTATE = rtDW.uMhCh;
  _rtXdot->Tr1 = rtDW.Gain7_c;
  _rtXdot->Integrator_CSTATE_h = rtDW.IntegralGain_j;
  _rtXdot->Filter_CSTATE_n = rtDW.FilterCoefficient_o;
  _rtXdot->Tr2 = rtDW.Gain7;
  _rtXdot->Integrator_CSTATE_hz = rtDW.IntegralGain_o;
  _rtXdot->Filter_CSTATE_g = rtDW.FilterCoefficient_b;
  _rtXdot->wyjscieTpco_CSTATE_i = rtDW.uMhCh_o;
}

/* Model initialize function */
void finale_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtM->intgData.y = rtM->odeY;
  rtM->intgData.f[0] = rtM->odeF[0];
  rtM->intgData.f[1] = rtM->odeF[1];
  rtM->intgData.f[2] = rtM->odeF[2];
  rtM->contStates = ((X *) &rtX);
  rtsiSetSolverData(&rtM->solverInfo, (void *)&rtM->intgData);
  rtsiSetSolverName(&rtM->solverInfo,"ode3");
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 0.01;

  // InitializeConditions
  rtDW.icLoad = 1U;
  rtX.wyjscieTpm_CSTATE = 0.0;
  rtX.wyjscieTzco_CSTATE = 0.0;
  rtX.Integrator_CSTATE = 0.0;
  rtX.Filter_CSTATE = 0.0;
  rtX.wyjscieTpco_CSTATE = 0.0;
  rtX.Tr1 = 0.0;
  rtX.Integrator_CSTATE_h = 0.0;
  rtX.Filter_CSTATE_n = 0.0;
  rtX.Tr2 = 0.0;
  rtX.Integrator_CSTATE_hz = 0.0;
  rtX.Filter_CSTATE_g = 0.0;
  rtX.wyjscieTpco_CSTATE_i = 0.0;

  // OBLSUGA PLIKÓW

  char *record, *line;
  char buffer[1000];
   int cnt=0;


  pFile=fopen("Temperatura.csv","r");
  if(pFile==NULL)
  {
    printf("error");

  }


while((line=fgets(buffer,sizeof(buffer),pFile))!=NULL)
  {

      record=strtok(line,";");
      while(record!= NULL)
      {
        cnt++;
        if(cnt%2==0)
        {
            if(record[1]==',')
            {
                record[1]='.';
            }
            if(record[2]==',')
            {
                record[2]='.';
            }

            T0[cnt/2]=atof(record);
            printf("\tT0 %f \t",T0[cnt/2]);
        }
          record= strtok(NULL,";");
      }
  }


cnt=0;
  pFile=fopen("Temperatura_w_budynku.csv","r");
  if(pFile==NULL)
  {
    printf("error");

  }


while((line=fgets(buffer,sizeof(buffer),pFile))!=NULL)
  {

      record=strtok(line,";");
      while(record!= NULL)
      {
        cnt++;
        if(cnt%2==0)
        {
            if(record[1]==',')
            {
                record[1]='.';
            }
            if(record[2]==',')
            {
                record[2]='.';
            }

            TrSp[cnt/2]=atof(record);
            printf("\tTrSp %f \t",TrSp[cnt/2]);
        }
          record= strtok(NULL,";");
      }
  }



  fp=fopen("Wyniki.csv","w+");
fprintf(fp,"T0;Tr;Tpco;Tpm;Tzco;Tzm;Fcob_i;rtb_Fcob;TrSP");
}


