/*
 * File: finale.c
 *
 * Code generated for Simulink model 'finale'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Thu Nov 21 20:47:35 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "finale.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

/* Continuous states */
X rtX;

/* Block signals and states (auto storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* private model entry point functions */
extern void finale_derivatives(void);

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
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
  real_T rtb_Fcob_i;
  real_T rtb_Subtract1;
  real_T rtb_Fcob;
  real_T y;
  real_T u0;
  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  /* Gain: '<S1>/Filter Coefficient' incorporates:
   *  Gain: '<S1>/Derivative Gain'
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Integrator: '<S1>/Filter'
   *  Sum: '<Root>/Subtract'
   *  Sum: '<S1>/SumD'
   */
  rtDW.FilterCoefficient = ((46.25 - rtX.wyjscieTzco_CSTATE) * 0.0 -
    rtX.Filter_CSTATE) * 100.0;

  /* Gain: '<S1>/Integral Gain' incorporates:
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Sum: '<Root>/Subtract'
   */
  rtDW.IntegralGain = (46.25 - rtX.wyjscieTzco_CSTATE) * 0.0;

  /* Sum: '<S1>/Sum' incorporates:
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Integrator: '<S1>/Integrator'
   *  Sum: '<Root>/Subtract'
   */
  rtb_Fcob_i = ((46.25 - rtX.wyjscieTzco_CSTATE) + rtX.Integrator_CSTATE) +
    rtDW.FilterCoefficient;

  /* Saturate: '<S1>/Saturate' */
  if (rtb_Fcob_i > 1.0) {
    y = 1.0;
  } else if (rtb_Fcob_i < 0.0) {
    y = 0.0;
  } else {
    y = rtb_Fcob_i;
  }

  if (rtmIsMajorTimeStep(rtM)) {
    /* DiscretePulseGenerator: '<Root>/Pulse Generator2' */
    rtb_Fcob_i = (rtDW.clockTickCounter < 5) && (rtDW.clockTickCounter >= 0) ?
      10.0 : 0.0;
    if (rtDW.clockTickCounter >= 5.9999999999999991) {
      rtDW.clockTickCounter = 0;
    } else {
      rtDW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<Root>/Pulse Generator2' */

    /* Product: '<Root>/Product1' incorporates:
     *  Constant: '<Root>/Constant5'
     */
    rtDW.Product1 = rtb_Fcob_i * 20.0;
  }

  /* Gain: '<S7>/Gain7' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<S7>/Gain5'
   *  Gain: '<S7>/Gain6'
   *  Integrator: '<S7>/wyjscie - Tr'
   *  Integrator: '<S8>/wyjscie - Tpco'
   *  Sum: '<S7>/Subtract6'
   *  Sum: '<S7>/Tpco-Tr'
   *  Sum: '<S7>/Tr-To'
   */
  rtDW.Gain7 = ((rtX.wyjscieTpco_CSTATE - rtX.wyjscieTr_CSTATE) * 12000.0 -
                (rtX.wyjscieTr_CSTATE - 5.0) * 15000.0) * 5.0E-8;

  /* Sum: '<S2>/Subtract1' incorporates:
   *  Integrator: '<S7>/wyjscie - Tr'
   */
  rtb_Fcob_i = rtDW.Product1 - rtX.wyjscieTr_CSTATE;

  /* Gain: '<S9>/Filter Coefficient' incorporates:
   *  Gain: '<S9>/Derivative Gain'
   *  Integrator: '<S9>/Filter'
   *  Sum: '<S9>/SumD'
   */
  rtDW.FilterCoefficient_a = (0.0 * rtb_Fcob_i - rtX.Filter_CSTATE_i) * 100.0;

  /* Sum: '<S9>/Sum' incorporates:
   *  Integrator: '<S9>/Integrator'
   */
  u0 = (rtb_Fcob_i + rtX.Integrator_CSTATE_b) + rtDW.FilterCoefficient_a;

  /* Saturate: '<S9>/Saturate' */
  if (u0 > 1.0) {
    u0 = 1.0;
  } else {
    if (u0 < 0.0) {
      u0 = 0.0;
    }
  }

  /* Product: '<S2>/Product1' incorporates:
   *  Constant: '<S2>/Constant2'
   *  Saturate: '<S9>/Saturate'
   */
  rtb_Fcob = u0 * 0.011111111111111112;

  /* Gain: '<S8>/1//MhCh' incorporates:
   *  Gain: '<S8>/Gain3'
   *  Gain: '<S8>/Gain4'
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Integrator: '<S7>/wyjscie - Tr'
   *  Integrator: '<S8>/wyjscie - Tpco'
   *  Product: '<S8>/Product1'
   *  Sum: '<S8>/Subtract3'
   *  Sum: '<S8>/Tpco-Tr'
   *  Sum: '<S8>/Tzco-Tpco'
   */
  rtDW.uMhCh = ((rtX.wyjscieTzco_CSTATE - rtX.wyjscieTpco_CSTATE) * (4.2E+6 *
    rtb_Fcob) - (rtX.wyjscieTpco_CSTATE - rtX.wyjscieTr_CSTATE) * 12000.0) *
    1.234567901234568E-7;

  /* Gain: '<S9>/Integral Gain' */
  rtDW.IntegralGain_p = 0.0 * rtb_Fcob_i;

  /* Gain: '<S10>/Gain7' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<S10>/Gain5'
   *  Gain: '<S10>/Gain6'
   *  Integrator: '<S10>/wyjscie - Tr'
   *  Integrator: '<S11>/wyjscie - Tpco'
   *  Sum: '<S10>/Subtract6'
   *  Sum: '<S10>/Tpco-Tr'
   *  Sum: '<S10>/Tr-To'
   */
  rtDW.Gain7_o = ((rtX.wyjscieTpco_CSTATE_i - rtX.wyjscieTr_CSTATE_i) * 12000.0
                  - (rtX.wyjscieTr_CSTATE_i - 5.0) * 15000.0) * 5.0E-8;

  /* Sum: '<S3>/Subtract1' incorporates:
   *  Integrator: '<S10>/wyjscie - Tr'
   */
  rtb_Subtract1 = rtDW.Product1 - rtX.wyjscieTr_CSTATE_i;

  /* Gain: '<S12>/Filter Coefficient' incorporates:
   *  Gain: '<S12>/Derivative Gain'
   *  Integrator: '<S12>/Filter'
   *  Sum: '<S12>/SumD'
   */
  rtDW.FilterCoefficient_b = (0.0 * rtb_Subtract1 - rtX.Filter_CSTATE_h) * 100.0;

  /* Sum: '<S12>/Sum' incorporates:
   *  Integrator: '<S12>/Integrator'
   */
  u0 = (rtb_Subtract1 + rtX.Integrator_CSTATE_d) + rtDW.FilterCoefficient_b;

  /* Saturate: '<S12>/Saturate' */
  if (u0 > 1.0) {
    u0 = 1.0;
  } else {
    if (u0 < 0.0) {
      u0 = 0.0;
    }
  }

  /* Product: '<S3>/Product1' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Saturate: '<S12>/Saturate'
   */
  rtb_Fcob_i = u0 * 0.011111111111111112;

  /* Gain: '<S11>/1//MhCh' incorporates:
   *  Gain: '<S11>/Gain3'
   *  Gain: '<S11>/Gain4'
   *  Integrator: '<S10>/wyjscie - Tr'
   *  Integrator: '<S11>/wyjscie - Tpco'
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Product: '<S11>/Product1'
   *  Sum: '<S11>/Subtract3'
   *  Sum: '<S11>/Tpco-Tr'
   *  Sum: '<S11>/Tzco-Tpco'
   */
  rtDW.uMhCh_o = ((rtX.wyjscieTzco_CSTATE - rtX.wyjscieTpco_CSTATE_i) * (4.2E+6 *
    rtb_Fcob_i) - (rtX.wyjscieTpco_CSTATE_i - rtX.wyjscieTr_CSTATE_i) * 12000.0)
    * 1.234567901234568E-7;

  /* Gain: '<S12>/Integral Gain' */
  rtDW.IntegralGain_g = 0.0 * rtb_Subtract1;

  /* Gain: '<S13>/Gain2' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Gain: '<S13>/Gain'
   *  Gain: '<S13>/Gain1'
   *  Integrator: '<S13>/wyjscie-Tpm'
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Product: '<Root>/Product'
   *  Product: '<S13>/Product'
   *  Saturate: '<S1>/Saturate'
   *  Sum: '<S13>/Subtract2'
   *  Sum: '<S13>/Tpm-Tzco'
   *  Sum: '<S13>/Tzm-Tpm'
   */
  rtDW.Gain2 = (y * 0.041666666666666664 * 4.2E+6 * (72.5 -
    rtX.wyjscieTpm_CSTATE) - (rtX.wyjscieTpm_CSTATE - rtX.wyjscieTzco_CSTATE) *
                250000.0) * 1.234567901234568E-7;

  /* Gain: '<S14>/     ' incorporates:
   *  Gain: '<Root>/Gain'
   *  Gain: '<S14>/ '
   *  Gain: '<S14>/   '
   *  Integrator: '<S11>/wyjscie - Tpco'
   *  Integrator: '<S13>/wyjscie-Tpm'
   *  Integrator: '<S14>/wyjscie - Tzco '
   *  Integrator: '<S8>/wyjscie - Tpco'
   *  Product: '<S14>/  '
   *  Sum: '<Root>/Sum'
   *  Sum: '<Root>/Sum1'
   *  Sum: '<S14>/    '
   *  Sum: '<S14>/Tpm-Tzco1'
   *  Sum: '<S14>/Tzco-Tpco'
   */
  rtDW.u = ((rtX.wyjscieTzco_CSTATE - (rtX.wyjscieTpco_CSTATE +
              rtX.wyjscieTpco_CSTATE_i) * 0.5) * ((rtb_Fcob + rtb_Fcob_i) *
             -4.2E+6) + (rtX.wyjscieTpm_CSTATE - rtX.wyjscieTzco_CSTATE) *
            250000.0) * 1.234567901234568E-7;
  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      /* Update absolute timer for sample time: [3809.52380952381s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 3809.52380952381, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      rtM->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void finale_derivatives(void)
{
  XDot *_rtXdot;
  _rtXdot = ((XDot *) rtM->ModelData.derivs);

  /* Derivatives for Integrator: '<S8>/wyjscie - Tpco' */
  _rtXdot->wyjscieTpco_CSTATE = rtDW.uMhCh;

  /* Derivatives for Integrator: '<S11>/wyjscie - Tpco' */
  _rtXdot->wyjscieTpco_CSTATE_i = rtDW.uMhCh_o;

  /* Derivatives for Integrator: '<S14>/wyjscie - Tzco ' */
  _rtXdot->wyjscieTzco_CSTATE = rtDW.u;

  /* Derivatives for Integrator: '<S1>/Filter' */
  _rtXdot->Filter_CSTATE = rtDW.FilterCoefficient;

  /* Derivatives for Integrator: '<S1>/Integrator' */
  _rtXdot->Integrator_CSTATE = rtDW.IntegralGain;

  /* Derivatives for Integrator: '<S7>/wyjscie - Tr' */
  _rtXdot->wyjscieTr_CSTATE = rtDW.Gain7;

  /* Derivatives for Integrator: '<S9>/Integrator' */
  _rtXdot->Integrator_CSTATE_b = rtDW.IntegralGain_p;

  /* Derivatives for Integrator: '<S9>/Filter' */
  _rtXdot->Filter_CSTATE_i = rtDW.FilterCoefficient_a;

  /* Derivatives for Integrator: '<S10>/wyjscie - Tr' */
  _rtXdot->wyjscieTr_CSTATE_i = rtDW.Gain7_o;

  /* Derivatives for Integrator: '<S12>/Integrator' */
  _rtXdot->Integrator_CSTATE_d = rtDW.IntegralGain_g;

  /* Derivatives for Integrator: '<S12>/Filter' */
  _rtXdot->Filter_CSTATE_h = rtDW.FilterCoefficient_b;

  /* Derivatives for Integrator: '<S13>/wyjscie-Tpm' */
  _rtXdot->wyjscieTpm_CSTATE = rtDW.Gain2;
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
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->ModelData.derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **)
                         &rtM->ModelData.contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtM->ModelData.intgData.y = rtM->ModelData.odeY;
  rtM->ModelData.intgData.f[0] = rtM->ModelData.odeF[0];
  rtM->ModelData.intgData.f[1] = rtM->ModelData.odeF[1];
  rtM->ModelData.intgData.f[2] = rtM->ModelData.odeF[2];
  rtM->ModelData.contStates = ((X *) &rtX);
  rtsiSetSolverData(&rtM->solverInfo, (void *)&rtM->ModelData.intgData);
  rtsiSetSolverName(&rtM->solverInfo,"ode3");
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 3809.52380952381;

  /* InitializeConditions for Integrator: '<S8>/wyjscie - Tpco' */
  rtX.wyjscieTpco_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S11>/wyjscie - Tpco' */
  rtX.wyjscieTpco_CSTATE_i = 0.0;

  /* InitializeConditions for Integrator: '<S14>/wyjscie - Tzco ' */
  rtX.wyjscieTzco_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S1>/Filter' */
  rtX.Filter_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S1>/Integrator' */
  rtX.Integrator_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S7>/wyjscie - Tr' */
  rtX.wyjscieTr_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S9>/Integrator' */
  rtX.Integrator_CSTATE_b = 0.0;

  /* InitializeConditions for Integrator: '<S9>/Filter' */
  rtX.Filter_CSTATE_i = 0.0;

  /* InitializeConditions for Integrator: '<S10>/wyjscie - Tr' */
  rtX.wyjscieTr_CSTATE_i = 0.0;

  /* InitializeConditions for Integrator: '<S12>/Integrator' */
  rtX.Integrator_CSTATE_d = 0.0;

  /* InitializeConditions for Integrator: '<S12>/Filter' */
  rtX.Filter_CSTATE_h = 0.0;

  /* InitializeConditions for Integrator: '<S13>/wyjscie-Tpm' */
  rtX.wyjscieTpm_CSTATE = 0.0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
