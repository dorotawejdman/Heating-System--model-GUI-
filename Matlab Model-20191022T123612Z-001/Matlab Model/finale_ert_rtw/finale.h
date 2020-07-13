/*
 * File: finale.h
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

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  real_T FilterCoefficient;            /* '<S1>/Filter Coefficient' */
  real_T IntegralGain;                 /* '<S1>/Integral Gain' */
  real_T Product1;                     /* '<Root>/Product1' */
  real_T Gain7;                        /* '<S7>/Gain7' */
  real_T FilterCoefficient_a;          /* '<S9>/Filter Coefficient' */
  real_T uMhCh;                        /* '<S8>/1//MhCh' */
  real_T IntegralGain_p;               /* '<S9>/Integral Gain' */
  real_T Gain7_o;                      /* '<S10>/Gain7' */
  real_T FilterCoefficient_b;          /* '<S12>/Filter Coefficient' */
  real_T uMhCh_o;                      /* '<S11>/1//MhCh' */
  real_T IntegralGain_g;               /* '<S12>/Integral Gain' */
  real_T Gain2;                        /* '<S13>/Gain2' */
  real_T u;                            /* '<S14>/     ' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator2' */
} DW;

/* Continuous states (auto storage) */
typedef struct {
  real_T wyjscieTpco_CSTATE;           /* '<S8>/wyjscie - Tpco' */
  real_T wyjscieTpco_CSTATE_i;         /* '<S11>/wyjscie - Tpco' */
  real_T wyjscieTzco_CSTATE;           /* '<S14>/wyjscie - Tzco ' */
  real_T Filter_CSTATE;                /* '<S1>/Filter' */
  real_T Integrator_CSTATE;            /* '<S1>/Integrator' */
  real_T wyjscieTr_CSTATE;             /* '<S7>/wyjscie - Tr' */
  real_T Integrator_CSTATE_b;          /* '<S9>/Integrator' */
  real_T Filter_CSTATE_i;              /* '<S9>/Filter' */
  real_T wyjscieTr_CSTATE_i;           /* '<S10>/wyjscie - Tr' */
  real_T Integrator_CSTATE_d;          /* '<S12>/Integrator' */
  real_T Filter_CSTATE_h;              /* '<S12>/Filter' */
  real_T wyjscieTpm_CSTATE;            /* '<S13>/wyjscie-Tpm' */
} X;

/* State derivatives (auto storage) */
typedef struct {
  real_T wyjscieTpco_CSTATE;           /* '<S8>/wyjscie - Tpco' */
  real_T wyjscieTpco_CSTATE_i;         /* '<S11>/wyjscie - Tpco' */
  real_T wyjscieTzco_CSTATE;           /* '<S14>/wyjscie - Tzco ' */
  real_T Filter_CSTATE;                /* '<S1>/Filter' */
  real_T Integrator_CSTATE;            /* '<S1>/Integrator' */
  real_T wyjscieTr_CSTATE;             /* '<S7>/wyjscie - Tr' */
  real_T Integrator_CSTATE_b;          /* '<S9>/Integrator' */
  real_T Filter_CSTATE_i;              /* '<S9>/Filter' */
  real_T wyjscieTr_CSTATE_i;           /* '<S10>/wyjscie - Tr' */
  real_T Integrator_CSTATE_d;          /* '<S12>/Integrator' */
  real_T Filter_CSTATE_h;              /* '<S12>/Filter' */
  real_T wyjscieTpm_CSTATE;            /* '<S13>/wyjscie-Tpm' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T wyjscieTpco_CSTATE;        /* '<S8>/wyjscie - Tpco' */
  boolean_T wyjscieTpco_CSTATE_i;      /* '<S11>/wyjscie - Tpco' */
  boolean_T wyjscieTzco_CSTATE;        /* '<S14>/wyjscie - Tzco ' */
  boolean_T Filter_CSTATE;             /* '<S1>/Filter' */
  boolean_T Integrator_CSTATE;         /* '<S1>/Integrator' */
  boolean_T wyjscieTr_CSTATE;          /* '<S7>/wyjscie - Tr' */
  boolean_T Integrator_CSTATE_b;       /* '<S9>/Integrator' */
  boolean_T Filter_CSTATE_i;           /* '<S9>/Filter' */
  boolean_T wyjscieTr_CSTATE_i;        /* '<S10>/wyjscie - Tr' */
  boolean_T Integrator_CSTATE_d;       /* '<S12>/Integrator' */
  boolean_T Filter_CSTATE_h;           /* '<S12>/Filter' */
  boolean_T wyjscieTpm_CSTATE;         /* '<S13>/wyjscie-Tpm' */
} XDis;

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

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    X *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[12];
    real_T odeF[3][12];
    ODE3_IntgData intgData;
  } ModelData;

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
    uint8_T clockTick0;
    time_T stepSize0;
    uint8_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Continuous states (auto storage) */
extern X rtX;

/* Block signals and states (auto storage) */
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
 * Block '<S2>/Scope' : Unused code path elimination
 * Block '<S1>/Proportional Gain' : Eliminated nontunable gain of 1
 * Block '<S9>/Proportional Gain' : Eliminated nontunable gain of 1
 * Block '<S12>/Proportional Gain' : Eliminated nontunable gain of 1
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
 * '<S7>'   : 'finale/Subsystem/Model budynku1'
 * '<S8>'   : 'finale/Subsystem/Model kaloryferów1'
 * '<S9>'   : 'finale/Subsystem/PID Controller'
 * '<S10>'  : 'finale/Subsystem1/Model budynku1'
 * '<S11>'  : 'finale/Subsystem1/Model kaloryferów1'
 * '<S12>'  : 'finale/Subsystem1/PID Controller'
 * '<S13>'  : 'finale/Subsystem2/Wymiennik ciep³a 1 '
 * '<S14>'  : 'finale/Subsystem2/Wymiennik ciep³a 2 '
 */
#endif                                 /* RTW_HEADER_finale_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
