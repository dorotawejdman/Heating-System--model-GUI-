/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: finale.h
 *
 * Code generated for Simulink model 'finale'.
 *
 * Model version                  : 1.31
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Thu Nov 21 20:56:23 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_finale_h_
#define RTW_HEADER_finale_h_
#include <string.h>
#ifndef finale_COMMON_INCLUDES_
# define finale_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* finale_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[1000];           /* '<Root>/Delay' */
  real_T Saturation;                   /* '<S6>/Saturation' */
  real_T Derivative_um;            /* '<S39>/Filter Coefficient' */
  real_T Gain2;                        /* '<S145>/Gain2' */
  real_T IntegralGain;                 /* '<S33>/Integral Gain' */
  real_T Derivative_ub1;          /* '<S86>/Filter Coefficient' */
  real_T uMhCh;                        /* '<S52>/1//MhCh' */
  real_T Derivative_ub2;          /* '<S133>/Filter Coefficient' */
  real_T u;                            /* '<S146>/     ' */
  real_T Gain7;                        /* '<S98>/Gain7' */
  real_T uMhCh_o;                      /* '<S99>/1//MhCh' */
  real_T IntegralGain_o;               /* '<S127>/Integral Gain' */
  real_T IntegralGain_j;               /* '<S80>/Integral Gain' */
  real_T Gain7_c;                      /* '<S51>/Gain7' */
  uint8_T icLoad;                      /* '<Root>/Delay' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T Tpm;            /* '<S145>/wyjscie-Tpm' */
  real_T Tzco;           /* '<S146>/wyjscie - Tzco ' */
  real_T Integrator_um;            /* '<S36>/Integrator' *///integrator_um
  real_T Filter_CSTATE;                /* '<S31>/Filter' */
  real_T Tpco1;           /* '<S52>/wyjscie - Tpco' */
  real_T Tr1;             /* '<S51>/wyjscie - Tr' */
  real_T Integrator_ub1;          /* '<S83>/Integrator' *///integrator_ub1
  real_T Filter_CSTATE_n;              /* '<S78>/Filter' */
  real_T Tr2;           /* '<S98>/wyjscie - Tr' */
  real_T Integrator_ub2;         /* '<S130>/Integrator' *///integrator_ub2
  real_T Filter_CSTATE_g;              /* '<S125>/Filter' */
  real_T Tpco2;         /* '<S99>/wyjscie - Tpco' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T Tpm;            /* '<S145>/wyjscie-Tpm' */
  real_T Tzco;           /* '<S146>/wyjscie - Tzco ' */
  real_T Integrator_um;            /* '<S36>/Integrator' */
  real_T Filter_CSTATE;                /* '<S31>/Filter' */
  real_T Tpco1;           /* '<S52>/wyjscie - Tpco' */
  real_T Tr1;             /* '<S51>/wyjscie - Tr' */
  real_T Integrator_ub1;          /* '<S83>/Integrator' */
  real_T Filter_CSTATE_n;              /* '<S78>/Filter' */
  real_T Tr2;           /* '<S98>/wyjscie - Tr' */
  real_T Integrator_ub2;         /* '<S130>/Integrator' */
  real_T Filter_CSTATE_g;              /* '<S125>/Filter' */
  real_T Tpco2;         /* '<S99>/wyjscie - Tpco' */
} XDot;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[12];
  real_T odeF[3][12];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Continuous states (default storage) */
extern X rtX;

/* Block signals and states (default storage) */
extern DW rtDW;

/* Model entry point functions */
extern void finale_initialize(void);
extern void finale_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope4' : Unused code path elimination
 * Block '<S2>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'finale'
 * '<S1>'   : 'finale/PID Controller1'
 * '<S2>'   : 'finale/Subsystem'
 * '<S3>'   : 'finale/Subsystem1'
 * '<S4>'   : 'finale/Subsystem2'
 * '<S5>'   : 'finale/Tzco ref '
 * '<S6>'   : 'finale/Tzm'
 * '<S7>'   : 'finale/PID Controller1/Anti-windup'
 * '<S8>'   : 'finale/PID Controller1/D Gain'
 * '<S9>'   : 'finale/PID Controller1/Filter'
 * '<S10>'  : 'finale/PID Controller1/Filter ICs'
 * '<S11>'  : 'finale/PID Controller1/I Gain'
 * '<S12>'  : 'finale/PID Controller1/Ideal P Gain'
 * '<S13>'  : 'finale/PID Controller1/Ideal P Gain Fdbk'
 * '<S14>'  : 'finale/PID Controller1/Integrator'
 * '<S15>'  : 'finale/PID Controller1/Integrator ICs'
 * '<S16>'  : 'finale/PID Controller1/N Copy'
 * '<S17>'  : 'finale/PID Controller1/N Gain'
 * '<S18>'  : 'finale/PID Controller1/P Copy'
 * '<S19>'  : 'finale/PID Controller1/Parallel P Gain'
 * '<S20>'  : 'finale/PID Controller1/Reset Signal'
 * '<S21>'  : 'finale/PID Controller1/Saturation'
 * '<S22>'  : 'finale/PID Controller1/Saturation Fdbk'
 * '<S23>'  : 'finale/PID Controller1/Sum'
 * '<S24>'  : 'finale/PID Controller1/Sum Fdbk'
 * '<S25>'  : 'finale/PID Controller1/Tracking Mode'
 * '<S26>'  : 'finale/PID Controller1/Tracking Mode Sum'
 * '<S27>'  : 'finale/PID Controller1/postSat Signal'
 * '<S28>'  : 'finale/PID Controller1/preSat Signal'
 * '<S29>'  : 'finale/PID Controller1/Anti-windup/Passthrough'
 * '<S30>'  : 'finale/PID Controller1/D Gain/Internal Parameters'
 * '<S31>'  : 'finale/PID Controller1/Filter/Cont. Filter'
 * '<S32>'  : 'finale/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S33>'  : 'finale/PID Controller1/I Gain/Internal Parameters'
 * '<S34>'  : 'finale/PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S35>'  : 'finale/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S36>'  : 'finale/PID Controller1/Integrator/Continuous'
 * '<S37>'  : 'finale/PID Controller1/Integrator ICs/Internal IC'
 * '<S38>'  : 'finale/PID Controller1/N Copy/Disabled'
 * '<S39>'  : 'finale/PID Controller1/N Gain/Internal Parameters'
 * '<S40>'  : 'finale/PID Controller1/P Copy/Disabled'
 * '<S41>'  : 'finale/PID Controller1/Parallel P Gain/Passthrough'
 * '<S42>'  : 'finale/PID Controller1/Reset Signal/Disabled'
 * '<S43>'  : 'finale/PID Controller1/Saturation/Enabled'
 * '<S44>'  : 'finale/PID Controller1/Saturation Fdbk/Disabled'
 * '<S45>'  : 'finale/PID Controller1/Sum/Sum_PID'
 * '<S46>'  : 'finale/PID Controller1/Sum Fdbk/Disabled'
 * '<S47>'  : 'finale/PID Controller1/Tracking Mode/Disabled'
 * '<S48>'  : 'finale/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S49>'  : 'finale/PID Controller1/postSat Signal/Forward_Path'
 * '<S50>'  : 'finale/PID Controller1/preSat Signal/Forward_Path'
 * '<S51>'  : 'finale/Subsystem/Model budynku1'
 * '<S52>'  : 'finale/Subsystem/Model kaloryferów1'
 * '<S53>'  : 'finale/Subsystem/PID Controller1'
 * '<S54>'  : 'finale/Subsystem/PID Controller1/Anti-windup'
 * '<S55>'  : 'finale/Subsystem/PID Controller1/D Gain'
 * '<S56>'  : 'finale/Subsystem/PID Controller1/Filter'
 * '<S57>'  : 'finale/Subsystem/PID Controller1/Filter ICs'
 * '<S58>'  : 'finale/Subsystem/PID Controller1/I Gain'
 * '<S59>'  : 'finale/Subsystem/PID Controller1/Ideal P Gain'
 * '<S60>'  : 'finale/Subsystem/PID Controller1/Ideal P Gain Fdbk'
 * '<S61>'  : 'finale/Subsystem/PID Controller1/Integrator'
 * '<S62>'  : 'finale/Subsystem/PID Controller1/Integrator ICs'
 * '<S63>'  : 'finale/Subsystem/PID Controller1/N Copy'
 * '<S64>'  : 'finale/Subsystem/PID Controller1/N Gain'
 * '<S65>'  : 'finale/Subsystem/PID Controller1/P Copy'
 * '<S66>'  : 'finale/Subsystem/PID Controller1/Parallel P Gain'
 * '<S67>'  : 'finale/Subsystem/PID Controller1/Reset Signal'
 * '<S68>'  : 'finale/Subsystem/PID Controller1/Saturation'
 * '<S69>'  : 'finale/Subsystem/PID Controller1/Saturation Fdbk'
 * '<S70>'  : 'finale/Subsystem/PID Controller1/Sum'
 * '<S71>'  : 'finale/Subsystem/PID Controller1/Sum Fdbk'
 * '<S72>'  : 'finale/Subsystem/PID Controller1/Tracking Mode'
 * '<S73>'  : 'finale/Subsystem/PID Controller1/Tracking Mode Sum'
 * '<S74>'  : 'finale/Subsystem/PID Controller1/postSat Signal'
 * '<S75>'  : 'finale/Subsystem/PID Controller1/preSat Signal'
 * '<S76>'  : 'finale/Subsystem/PID Controller1/Anti-windup/Passthrough'
 * '<S77>'  : 'finale/Subsystem/PID Controller1/D Gain/Internal Parameters'
 * '<S78>'  : 'finale/Subsystem/PID Controller1/Filter/Cont. Filter'
 * '<S79>'  : 'finale/Subsystem/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S80>'  : 'finale/Subsystem/PID Controller1/I Gain/Internal Parameters'
 * '<S81>'  : 'finale/Subsystem/PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S82>'  : 'finale/Subsystem/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S83>'  : 'finale/Subsystem/PID Controller1/Integrator/Continuous'
 * '<S84>'  : 'finale/Subsystem/PID Controller1/Integrator ICs/Internal IC'
 * '<S85>'  : 'finale/Subsystem/PID Controller1/N Copy/Disabled'
 * '<S86>'  : 'finale/Subsystem/PID Controller1/N Gain/Internal Parameters'
 * '<S87>'  : 'finale/Subsystem/PID Controller1/P Copy/Disabled'
 * '<S88>'  : 'finale/Subsystem/PID Controller1/Parallel P Gain/Passthrough'
 * '<S89>'  : 'finale/Subsystem/PID Controller1/Reset Signal/Disabled'
 * '<S90>'  : 'finale/Subsystem/PID Controller1/Saturation/Enabled'
 * '<S91>'  : 'finale/Subsystem/PID Controller1/Saturation Fdbk/Disabled'
 * '<S92>'  : 'finale/Subsystem/PID Controller1/Sum/Sum_PID'
 * '<S93>'  : 'finale/Subsystem/PID Controller1/Sum Fdbk/Disabled'
 * '<S94>'  : 'finale/Subsystem/PID Controller1/Tracking Mode/Disabled'
 * '<S95>'  : 'finale/Subsystem/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S96>'  : 'finale/Subsystem/PID Controller1/postSat Signal/Forward_Path'
 * '<S97>'  : 'finale/Subsystem/PID Controller1/preSat Signal/Forward_Path'
 * '<S98>'  : 'finale/Subsystem1/Model budynku1'
 * '<S99>'  : 'finale/Subsystem1/Model kaloryferów1'
 * '<S100>' : 'finale/Subsystem1/PID Controller1'
 * '<S101>' : 'finale/Subsystem1/PID Controller1/Anti-windup'
 * '<S102>' : 'finale/Subsystem1/PID Controller1/D Gain'
 * '<S103>' : 'finale/Subsystem1/PID Controller1/Filter'
 * '<S104>' : 'finale/Subsystem1/PID Controller1/Filter ICs'
 * '<S105>' : 'finale/Subsystem1/PID Controller1/I Gain'
 * '<S106>' : 'finale/Subsystem1/PID Controller1/Ideal P Gain'
 * '<S107>' : 'finale/Subsystem1/PID Controller1/Ideal P Gain Fdbk'
 * '<S108>' : 'finale/Subsystem1/PID Controller1/Integrator'
 * '<S109>' : 'finale/Subsystem1/PID Controller1/Integrator ICs'
 * '<S110>' : 'finale/Subsystem1/PID Controller1/N Copy'
 * '<S111>' : 'finale/Subsystem1/PID Controller1/N Gain'
 * '<S112>' : 'finale/Subsystem1/PID Controller1/P Copy'
 * '<S113>' : 'finale/Subsystem1/PID Controller1/Parallel P Gain'
 * '<S114>' : 'finale/Subsystem1/PID Controller1/Reset Signal'
 * '<S115>' : 'finale/Subsystem1/PID Controller1/Saturation'
 * '<S116>' : 'finale/Subsystem1/PID Controller1/Saturation Fdbk'
 * '<S117>' : 'finale/Subsystem1/PID Controller1/Sum'
 * '<S118>' : 'finale/Subsystem1/PID Controller1/Sum Fdbk'
 * '<S119>' : 'finale/Subsystem1/PID Controller1/Tracking Mode'
 * '<S120>' : 'finale/Subsystem1/PID Controller1/Tracking Mode Sum'
 * '<S121>' : 'finale/Subsystem1/PID Controller1/postSat Signal'
 * '<S122>' : 'finale/Subsystem1/PID Controller1/preSat Signal'
 * '<S123>' : 'finale/Subsystem1/PID Controller1/Anti-windup/Passthrough'
 * '<S124>' : 'finale/Subsystem1/PID Controller1/D Gain/Internal Parameters'
 * '<S125>' : 'finale/Subsystem1/PID Controller1/Filter/Cont. Filter'
 * '<S126>' : 'finale/Subsystem1/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S127>' : 'finale/Subsystem1/PID Controller1/I Gain/Internal Parameters'
 * '<S128>' : 'finale/Subsystem1/PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S129>' : 'finale/Subsystem1/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S130>' : 'finale/Subsystem1/PID Controller1/Integrator/Continuous'
 * '<S131>' : 'finale/Subsystem1/PID Controller1/Integrator ICs/Internal IC'
 * '<S132>' : 'finale/Subsystem1/PID Controller1/N Copy/Disabled'
 * '<S133>' : 'finale/Subsystem1/PID Controller1/N Gain/Internal Parameters'
 * '<S134>' : 'finale/Subsystem1/PID Controller1/P Copy/Disabled'
 * '<S135>' : 'finale/Subsystem1/PID Controller1/Parallel P Gain/Passthrough'
 * '<S136>' : 'finale/Subsystem1/PID Controller1/Reset Signal/Disabled'
 * '<S137>' : 'finale/Subsystem1/PID Controller1/Saturation/Enabled'
 * '<S138>' : 'finale/Subsystem1/PID Controller1/Saturation Fdbk/Disabled'
 * '<S139>' : 'finale/Subsystem1/PID Controller1/Sum/Sum_PID'
 * '<S140>' : 'finale/Subsystem1/PID Controller1/Sum Fdbk/Disabled'
 * '<S141>' : 'finale/Subsystem1/PID Controller1/Tracking Mode/Disabled'
 * '<S142>' : 'finale/Subsystem1/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S143>' : 'finale/Subsystem1/PID Controller1/postSat Signal/Forward_Path'
 * '<S144>' : 'finale/Subsystem1/PID Controller1/preSat Signal/Forward_Path'
 * '<S145>' : 'finale/Subsystem2/Wymiennik ciep³a 1 '
 * '<S146>' : 'finale/Subsystem2/Wymiennik ciep³a 2 '
 */
#endif                                 /* RTW_HEADER_finale_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
