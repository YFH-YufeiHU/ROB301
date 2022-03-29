/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T10:20:14
*************************************************************$ */
#ifndef _Voter_sensor_H_
#define _Voter_sensor_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* sensor_3/ */ sensor_3;
  kcg_bool /* sensor_2/ */ sensor_2;
  kcg_bool /* sensor_1/ */ sensor_1;
} inC_Voter_sensor;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* output/ */ output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:State1:_L7/ */ _L7_State1_SM1;
  kcg_bool /* SM1:State2:_L2/ */ _L2_State2_SM1;
  kcg_bool /* SM1:State3:_L2/ */ _L2_State3_SM1;
  kcg_bool /* SM1:State4:_L2/ */ _L2_State4_SM1;
  kcg_bool /* SM1:State5:_L4/ */ _L4_State5_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Voter_sensor;

/* ===========  node initialization and cycle functions  =========== */
/* Voter_sensor/ */
extern void Voter_sensor(inC_Voter_sensor *inC, outC_Voter_sensor *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Voter_sensor_reset(outC_Voter_sensor *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Voter_sensor_init(outC_Voter_sensor *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Voter_sensor_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Voter_sensor.h
** Generation date: 2022-03-29T10:20:14
*************************************************************$ */

