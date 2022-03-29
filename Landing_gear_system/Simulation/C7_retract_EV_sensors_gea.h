/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _C7_retract_EV_sensors_gea_H_
#define _C7_retract_EV_sensors_gea_H_

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
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* _L8/ */ _L8;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_size;
  kcg_bool /* @1/_/c/ */ c_times_1_size;
  kcg_size /* @1/_/n/ */ n_times_1_size;
  kcg_size /* @1/_/v4/ */ v4_times_1_size;
  kcg_bool /* SM1:Failure:_L1/ */ _L1_Failure_SM1;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* all_gears_retracted_true/ */ all_gears_retracted_true;
  kcg_bool /* retract_EV_changed/ */ retract_EV_changed;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L19/ */ _L19;
} outC_C7_retract_EV_sensors_gea;

/* ===========  node initialization and cycle functions  =========== */
/* C7_retract_EV_sensors_gear_retracted/ */
extern void C7_retract_EV_sensors_gea(
  /* gear_retracted_front/ */
  kcg_bool gear_retracted_front,
  /* gear_retracted_left/ */
  kcg_bool gear_retracted_left,
  /* gear_retracted_right/ */
  kcg_bool gear_retracted_right,
  /* retract_EV/ */
  kcg_bool retract_EV,
  outC_C7_retract_EV_sensors_gea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C7_retract_EV_sensors_gea_reset(
  outC_C7_retract_EV_sensors_gea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C7_retract_EV_sensors_gea_init(
  outC_C7_retract_EV_sensors_gea *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: C7_retract_EV_sensors_gear_retracted/
  @1: (times#1)
*/

#endif /* _C7_retract_EV_sensors_gea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C7_retract_EV_sensors_gea.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

