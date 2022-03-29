/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Command: scadecg.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T10:20:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Voter_sensor.h"

/* Voter_sensor/ */
void Voter_sensor(inC_Voter_sensor *inC, outC_Voter_sensor *outC)
{
  /* output/ */
  kcg_bool output_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* output/ */
  kcg_bool _1_output_partial;
  /* SM1: */
  SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _4_SM1_fired_partial;
  /* output/ */
  kcg_bool _5_output_partial;
  /* SM1: */
  SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _8_SM1_fired_partial;
  /* output/ */
  kcg_bool _9_output_partial;
  /* SM1: */
  SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _12_SM1_fired_partial;
  /* output/ */
  kcg_bool _13_output_partial;
  /* SM1: */
  SSM_ST_SM1 _14_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _15_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _16_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:State1:<3> */
  kcg_bool tr_3_guard_State1_SM1;
  /* SM1:State1:<2> */
  kcg_bool tr_2_guard_State1_SM1;
  /* SM1:State1:<1> */
  kcg_bool tr_1_guard_State1_SM1;
  /* SM1: */
  SSM_ST_SM1 _17_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _18_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _19_SM1_fired_strong_partial;
  /* SM1:State2:<1> */
  kcg_bool tr_1_guard_State2_SM1;
  /* SM1: */
  SSM_ST_SM1 _20_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _21_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _22_SM1_fired_strong_partial;
  /* SM1:State3:<1> */
  kcg_bool tr_1_guard_State3_SM1;
  /* SM1: */
  SSM_ST_SM1 _23_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _24_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _25_SM1_fired_strong_partial;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* SM1: */
  SSM_ST_SM1 _26_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _28_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State5_SM1 :
      _26_SM1_state_act_partial = SSM_st_State5_SM1;
      outC->SM1_state_act = _26_SM1_state_act_partial;
      _28_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _28_SM1_fired_strong_partial;
      break;
    case SSM_st_State4_SM1 :
      tr_1_guard_State4_SM1 = inC->sensor_2 != inC->sensor_1;
      if (tr_1_guard_State4_SM1) {
        _23_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _23_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _23_SM1_state_act_partial;
      if (tr_1_guard_State4_SM1) {
        _25_SM1_fired_strong_partial = SSM_TR_State4_State5_1_State4_SM1;
      }
      else {
        _25_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _25_SM1_fired_strong_partial;
      break;
    case SSM_st_State3_SM1 :
      tr_1_guard_State3_SM1 = inC->sensor_1 != inC->sensor_3;
      if (tr_1_guard_State3_SM1) {
        _20_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _20_SM1_state_act_partial = SSM_st_State3_SM1;
      }
      outC->SM1_state_act = _20_SM1_state_act_partial;
      if (tr_1_guard_State3_SM1) {
        _22_SM1_fired_strong_partial = SSM_TR_State3_State5_1_State3_SM1;
      }
      else {
        _22_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _22_SM1_fired_strong_partial;
      break;
    case SSM_st_State2_SM1 :
      tr_1_guard_State2_SM1 = inC->sensor_2 != inC->sensor_3;
      if (tr_1_guard_State2_SM1) {
        _17_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _17_SM1_state_act_partial = SSM_st_State2_SM1;
      }
      outC->SM1_state_act = _17_SM1_state_act_partial;
      if (tr_1_guard_State2_SM1) {
        _19_SM1_fired_strong_partial = SSM_TR_State2_State5_1_State2_SM1;
      }
      else {
        _19_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _19_SM1_fired_strong_partial;
      break;
    case SSM_st_State1_SM1 :
      tr_3_guard_State1_SM1 = (inC->sensor_1 == inC->sensor_2) &
        (inC->sensor_1 != inC->sensor_3);
      tr_2_guard_State1_SM1 = (inC->sensor_1 == inC->sensor_3) &
        (inC->sensor_1 != inC->sensor_2);
      tr_1_guard_State1_SM1 = (inC->sensor_2 == inC->sensor_3) &
        (inC->sensor_1 != inC->sensor_2);
      if (tr_1_guard_State1_SM1) {
        SM1_state_act_partial = SSM_st_State2_SM1;
      }
      else if (tr_2_guard_State1_SM1) {
        SM1_state_act_partial = SSM_st_State3_SM1;
      }
      else if (tr_3_guard_State1_SM1) {
        SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_State1_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_State1_SM1) {
        SM1_fired_strong_partial = SSM_TR_State1_State2_1_State1_SM1;
      }
      else if (tr_2_guard_State1_SM1) {
        SM1_fired_strong_partial = SSM_TR_State1_State3_2_State1_SM1;
      }
      else if (tr_3_guard_State1_SM1) {
        SM1_fired_strong_partial = SSM_TR_State1_State4_3_State1_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State5_SM1 :
      _16_SM1_fired_partial = outC->SM1_fired_strong;
      _15_SM1_reset_nxt_partial = kcg_false;
      _14_SM1_state_nxt_partial = SSM_st_State5_SM1;
      outC->_L4_State5_SM1 = inC->sensor_2;
      _13_output_partial = outC->_L4_State5_SM1;
      outC->output = _13_output_partial;
      outC->SM1_state_nxt = _14_SM1_state_nxt_partial;
      break;
    case SSM_st_State4_SM1 :
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_State4_SM1;
      outC->_L2_State4_SM1 = inC->sensor_1;
      _9_output_partial = outC->_L2_State4_SM1;
      outC->output = _9_output_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case SSM_st_State3_SM1 :
      _8_SM1_fired_partial = outC->SM1_fired_strong;
      _7_SM1_reset_nxt_partial = kcg_false;
      _6_SM1_state_nxt_partial = SSM_st_State3_SM1;
      outC->_L2_State3_SM1 = inC->sensor_1;
      _5_output_partial = outC->_L2_State3_SM1;
      outC->output = _5_output_partial;
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case SSM_st_State2_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_State2_SM1;
      outC->_L2_State2_SM1 = inC->sensor_2;
      _1_output_partial = outC->_L2_State2_SM1;
      outC->output = _1_output_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_State1_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_State1_SM1;
      outC->_L7_State1_SM1 = inC->sensor_1;
      output_partial = outC->_L7_State1_SM1;
      outC->output = output_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State5_SM1 :
      outC->SM1_reset_nxt = _15_SM1_reset_nxt_partial;
      outC->SM1_fired = _16_SM1_fired_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_State1_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_State5_SM1 :
      _27_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_State4_SM1 :
      _24_SM1_reset_act_partial = tr_1_guard_State4_SM1;
      break;
    case SSM_st_State3_SM1 :
      _21_SM1_reset_act_partial = tr_1_guard_State3_SM1;
      break;
    case SSM_st_State2_SM1 :
      _18_SM1_reset_act_partial = tr_1_guard_State2_SM1;
      break;
    case SSM_st_State1_SM1 :
      if (tr_1_guard_State1_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_State1_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_3_guard_State1_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State5_SM1 :
      outC->SM1_reset_act = _27_SM1_reset_act_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->SM1_reset_act = _24_SM1_reset_act_partial;
      break;
    case SSM_st_State3_SM1 :
      outC->SM1_reset_act = _21_SM1_reset_act_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->SM1_reset_act = _18_SM1_reset_act_partial;
      break;
    case SSM_st_State1_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Voter_sensor_init(outC_Voter_sensor *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_State1_SM1;
  outC->SM1_state_sel = SSM_st_State1_SM1;
  outC->_L4_State5_SM1 = kcg_true;
  outC->_L2_State4_SM1 = kcg_true;
  outC->_L2_State3_SM1 = kcg_true;
  outC->_L2_State2_SM1 = kcg_true;
  outC->_L7_State1_SM1 = kcg_true;
  outC->output = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Voter_sensor_reset(outC_Voter_sensor *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2022 R1 (build 20211130) 
** Voter_sensor.c
** Generation date: 2022-03-29T10:20:14
*************************************************************$ */

