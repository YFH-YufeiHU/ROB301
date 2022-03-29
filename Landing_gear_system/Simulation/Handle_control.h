/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _Handle_control_H_
#define _Handle_control_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* analogical_switch/ */ analogical_switch;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_size /* @1/_/v3/ */ v3_times_14_size;
  SSM_ST_handle_control /* handle_control: */ handle_control_state_nxt;
  kcg_bool /* handle_control: */ handle_control_reset_act;
  kcg_bool /* handle_control: */ handle_control_reset_nxt;
  kcg_bool /* _L8/ */ _L8;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_handle_control /* handle_control: */ handle_control_state_sel;
  SSM_ST_handle_control /* handle_control: */ handle_control_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_14_size;
  kcg_bool /* @1/_/c/ */ c_times_14_size;
  kcg_size /* @1/_/n/ */ n_times_14_size;
  kcg_size /* @1/_/v4/ */ v4_times_14_size;
  kcg_bool /* handle_control:Normal:_L1/ */ _L1_Normal_handle_control;
  kcg_bool /* handle_control:Waiting:_L3/ */ _L3_Waiting_handle_control;
  SSM_TR_handle_control /* handle_control: */ handle_control_fired_strong;
  SSM_TR_handle_control /* handle_control: */ handle_control_fired;
  kcg_bool /* handle_state_changed/ */ handle_state_changed;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L18/ */ _L18;
} outC_Handle_control;

/* ===========  node initialization and cycle functions  =========== */
/* Handle_control/ */
extern void Handle_control(
  /* handle/ */
  kcg_bool handle,
  outC_Handle_control *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Handle_control_reset(outC_Handle_control *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Handle_control_init(outC_Handle_control *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Handle_control/
  @1: (times#14)
*/

#endif /* _Handle_control_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Handle_control.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

