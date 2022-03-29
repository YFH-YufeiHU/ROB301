/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _C5_extend_EV_sensors_gear_H_
#define _C5_extend_EV_sensors_gear_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* _L8/ */ _L8;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_size;
  kcg_bool /* @1/_/c/ */ c_times_1_size;
  kcg_size /* @1/_/n/ */ n_times_1_size;
  kcg_size /* @1/_/v4/ */ v4_times_1_size;
  kcg_bool /* SM1:Failure:_L1/ */ _L1_Failure_SM1;
  _11_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _11_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* any_gear_retracted_true/ */ any_gear_retracted_true;
  kcg_bool /* extend_EV_changed/ */ extend_EV_changed;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L18/ */ _L18;
} outC_C5_extend_EV_sensors_gear;

/* ===========  node initialization and cycle functions  =========== */
/* C5_extend_EV_sensors_gear_retracted/ */
extern void C5_extend_EV_sensors_gear(
  /* gear_retracted_front/ */
  kcg_bool gear_retracted_front,
  /* gear_retracted_left/ */
  kcg_bool gear_retracted_left,
  /* gear_retracted_right/ */
  kcg_bool gear_retracted_right,
  /* extend_EV/ */
  kcg_bool extend_EV,
  outC_C5_extend_EV_sensors_gear *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C5_extend_EV_sensors_gear_reset(
  outC_C5_extend_EV_sensors_gear *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C5_extend_EV_sensors_gear_init(
  outC_C5_extend_EV_sensors_gear *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: C5_extend_EV_sensors_gear_retracted/
  @1: (times#1)
*/

#endif /* _C5_extend_EV_sensors_gear_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C5_extend_EV_sensors_gear.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

