/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:03:03
*************************************************************$ */
#ifndef _C2_open_EV_sensors_door_o_H_
#define _C2_open_EV_sensors_door_o_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* door_opened_front/ */ door_opened_front;
  kcg_bool /* door_opened_left/ */ door_opened_left;
  kcg_bool /* door_opened_right/ */ door_opened_right;
  kcg_bool /* open_EV/ */ open_EV;
} inC_C2_open_EV_sensors_door_o;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* anomaly/ */ anomaly;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_size /* @1/_/v3/ */ v3_times_1_size;
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
  kcg_bool /* @1/_/o/ */ o_times_1_size;
  kcg_bool /* @1/_/c/ */ c_times_1_size;
  kcg_size /* @1/_/n/ */ n_times_1_size;
  kcg_size /* @1/_/v4/ */ v4_times_1_size;
  kcg_bool /* SM1:Failure:_L1/ */ _L1_Failure_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* all_doors_opened_true/ */ all_doors_opened_true;
  kcg_bool /* open_EV_changed/ */ open_EV_changed;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L19/ */ _L19;
} outC_C2_open_EV_sensors_door_o;

/* ===========  node initialization and cycle functions  =========== */
/* C2_open_EV_sensors_door_opened/ */
extern void C2_open_EV_sensors_door_o(
  inC_C2_open_EV_sensors_door_o *inC,
  outC_C2_open_EV_sensors_door_o *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C2_open_EV_sensors_door_o_reset(
  outC_C2_open_EV_sensors_door_o *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C2_open_EV_sensors_door_o_init(
  outC_C2_open_EV_sensors_door_o *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: C2_open_EV_sensors_door_opened/
  @1: (times#1)
*/

#endif /* _C2_open_EV_sensors_door_o_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C2_open_EV_sensors_door_o.h
** Generation date: 2022-03-29T22:03:03
*************************************************************$ */

