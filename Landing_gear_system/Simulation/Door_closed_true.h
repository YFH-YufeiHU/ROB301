/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-28T11:29:01
*************************************************************$ */
#ifndef _Door_closed_true_H_
#define _Door_closed_true_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* door_closed_front/ */ door_closed_front;
  kcg_bool /* door_closed_left/ */ door_closed_left;
  kcg_bool /* door_closed_right/ */ door_closed_right;
  kcg_bool /* open_EV/ */ open_EV;
  kcg_int8 /* duration_ms/ */ duration_ms;
} inC_Door_closed_true;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* anomaly/ */ anomaly;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_int8 /* @1/_/v3/ */ v3_times_1_int8;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* _L8/ */ _L8;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_int8;
  kcg_bool /* @1/_/c/ */ c_times_1_int8;
  kcg_int8 /* @1/_/n/ */ n_times_1_int8;
  kcg_int8 /* @1/_/v4/ */ v4_times_1_int8;
  kcg_bool /* SM1:Failure:_L1/ */ _L1_Failure_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* all_doors_closed_true/ */ all_doors_closed_true;
  kcg_bool /* open_EV_changed/ */ open_EV_changed;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
} outC_Door_closed_true;

/* ===========  node initialization and cycle functions  =========== */
/* Door_closed_true/ */
extern void Door_closed_true(
  inC_Door_closed_true *inC,
  outC_Door_closed_true *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Door_closed_true_reset(outC_Door_closed_true *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Door_closed_true_init(outC_Door_closed_true *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Door_closed_true/
  @1: (times#1)
*/

#endif /* _Door_closed_true_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Door_closed_true.h
** Generation date: 2022-03-28T11:29:01
*************************************************************$ */

