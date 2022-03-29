/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _Voter_H_
#define _Voter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* output/ */ output;
  kcg_bool /* error/ */ error;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _22_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _22_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:State1:_L9/ */ _L9_State1_SM1;
  kcg_bool /* SM1:State1:_L7/ */ _L7_State1_SM1;
  kcg_bool /* SM1:State2:_L5/ */ _L5_State2_SM1;
  kcg_bool /* SM1:State2:_L2/ */ _L2_State2_SM1;
  kcg_bool /* SM1:State3:_L3/ */ _L3_State3_SM1;
  kcg_bool /* SM1:State3:_L2/ */ _L2_State3_SM1;
  kcg_bool /* SM1:State4:_L3/ */ _L3_State4_SM1;
  kcg_bool /* SM1:State4:_L2/ */ _L2_State4_SM1;
  kcg_bool /* SM1:State5:_L5/ */ _L5_State5_SM1;
  kcg_bool /* SM1:State5:_L4/ */ _L4_State5_SM1;
  _22_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _23_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _23_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Voter;

/* ===========  node initialization and cycle functions  =========== */
/* Voter/ */
extern void Voter(
  /* sensor_3/ */
  kcg_bool sensor_3,
  /* sensor_2/ */
  kcg_bool sensor_2,
  /* sensor_1/ */
  kcg_bool sensor_1,
  outC_Voter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Voter_reset(outC_Voter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Voter_init(outC_Voter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Voter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Voter.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

