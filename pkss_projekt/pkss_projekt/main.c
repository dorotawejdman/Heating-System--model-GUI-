
#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "finale_ert_rtw/finale.h"                    /* Model's header file */
#include "finale_ert_rtw/rtwtypes.h"



void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  if (OverrunFlag) {
    rtmSetErrorStatus(rtM, "Overrun");
    return;
  }

  OverrunFlag = true;
  finale_step();
  OverrunFlag = false;

}

int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  finale_initialize();

  while ((rtmGetErrorStatus(rtM) == (NULL)) && !rtmGetStopRequested(rtM)) {
    rt_OneStep();
  }


  return 0;
}


