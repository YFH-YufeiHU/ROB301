/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _C10_general_EV_circuit_pr_H_
#define _C10_general_EV_circuit_pr_H_

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
  kcg_size /* @1/_/v3/ */ v3_times_2_size;
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
  kcg_bool /* @1/_/o/ */ o_times_2_size;
  kcg_bool /* @1/_/c/ */ c_times_2_size;
  kcg_size /* @1/_/n/ */ n_times_2_size;
  kcg_size /* @1/_/v4/ */ v4_times_2_size;
  kcg_bool /* SM1:Failure:_L1/ */ _L1_Failure_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* general_EV_changed/ */ general_EV_changed;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
} outC_C10_general_EV_circuit_pr;

/* ===========  node initialization and cycle functions  =========== */
/* C10_general_EV_circuit_pressurized_low2high/ */
extern void C10_general_EV_circuit_pr(
  /* general_EV/ */
  kcg_bool general_EV,
  /* circuit_pressurized/ */
  kcg_bool circuit_pressurized,
  outC_C10_general_EV_circuit_pr *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C10_general_EV_circuit_pr_reset(
  outC_C10_general_EV_circuit_pr *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C10_general_EV_circuit_pr_init(
  outC_C10_general_EV_circuit_pr *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: C10_general_EV_circuit_pressurized_low2high/
  @1: (times#2)
*/

#endif /* _C10_general_EV_circuit_pr_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C10_general_EV_circuit_pr.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

