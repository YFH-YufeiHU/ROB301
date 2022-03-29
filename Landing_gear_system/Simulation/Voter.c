/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Voter.h"

/* Voter/ */
void Voter(
  /* sensor_3/ */
  kcg_bool sensor_3,
  /* sensor_2/ */
  kcg_bool sensor_2,
  /* sensor_1/ */
  kcg_bool sensor_1,
  outC_Voter *outC)
{
  /* output/ */
  kcg_bool output_partial;
  /* error/ */
  kcg_bool error_partial;
  /* SM1: */
  _22_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _23_SSM_TR_SM1 SM1_fired_partial;
  /* output/ */
  kcg_bool _1_output_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* SM1: */
  _22_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _5_SM1_fired_partial;
  /* output/ */
  kcg_bool _6_output_partial;
  /* error/ */
  kcg_bool _7_error_partial;
  /* SM1: */
  _22_SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _10_SM1_fired_partial;
  /* output/ */
  kcg_bool _11_output_partial;
  /* error/ */
  kcg_bool _12_error_partial;
  /* SM1: */
  _22_SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _15_SM1_fired_partial;
  /* output/ */
  kcg_bool _16_output_partial;
  /* error/ */
  kcg_bool _17_error_partial;
  /* SM1: */
  _22_SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _20_SM1_fired_partial;
  /* SM1: */
  _22_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _23_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:State1:<3> */
  kcg_bool tr_3_guard_State1_SM1;
  /* SM1:State1:<2> */
  kcg_bool tr_2_guard_State1_SM1;
  /* SM1:State1:<1> */
  kcg_bool tr_1_guard_State1_SM1;
  /* SM1: */
  _22_SSM_ST_SM1 _21_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _22_SM1_reset_act_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _23_SM1_fired_strong_partial;
  /* SM1:State2:<1> */
  kcg_bool tr_1_guard_State2_SM1;
  /* SM1: */
  _22_SSM_ST_SM1 _24_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_act_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _26_SM1_fired_strong_partial;
  /* SM1:State3:<1> */
  kcg_bool tr_1_guard_State3_SM1;
  /* SM1: */
  _22_SSM_ST_SM1 _27_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _28_SM1_reset_act_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _29_SM1_fired_strong_partial;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* SM1: */
  _22_SSM_ST_SM1 _30_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _31_SM1_reset_act_partial;
  /* SM1: */
  _23_SSM_TR_SM1 _32_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State5_SM1 :
      _30_SM1_state_act_partial = SSM_st_State5_SM1;
      outC->SM1_state_act = _30_SM1_state_act_partial;
      _32_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _32_SM1_fired_strong_partial;
      break;
    case SSM_st_State4_SM1 :
      tr_1_guard_State4_SM1 = sensor_2 != sensor_1;
      if (tr_1_guard_State4_SM1) {
        _27_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _27_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _27_SM1_state_act_partial;
      if (tr_1_guard_State4_SM1) {
        _29_SM1_fired_strong_partial = SSM_TR_State4_State5_1_State4_SM1;
      }
      else {
        _29_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _29_SM1_fired_strong_partial;
      break;
    case SSM_st_State3_SM1 :
      tr_1_guard_State3_SM1 = sensor_1 != sensor_3;
      if (tr_1_guard_State3_SM1) {
        _24_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _24_SM1_state_act_partial = SSM_st_State3_SM1;
      }
      outC->SM1_state_act = _24_SM1_state_act_partial;
      if (tr_1_guard_State3_SM1) {
        _26_SM1_fired_strong_partial = SSM_TR_State3_State5_1_State3_SM1;
      }
      else {
        _26_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _26_SM1_fired_strong_partial;
      break;
    case SSM_st_State2_SM1 :
      tr_1_guard_State2_SM1 = sensor_2 != sensor_3;
      if (tr_1_guard_State2_SM1) {
        _21_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _21_SM1_state_act_partial = SSM_st_State2_SM1;
      }
      outC->SM1_state_act = _21_SM1_state_act_partial;
      if (tr_1_guard_State2_SM1) {
        _23_SM1_fired_strong_partial = SSM_TR_State2_State5_1_State2_SM1;
      }
      else {
        _23_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _23_SM1_fired_strong_partial;
      break;
    case SSM_st_State1_SM1 :
      tr_3_guard_State1_SM1 = (sensor_1 == sensor_2) & (sensor_1 != sensor_3);
      tr_2_guard_State1_SM1 = (sensor_1 == sensor_3) & (sensor_1 != sensor_2);
      tr_1_guard_State1_SM1 = (sensor_2 == sensor_3) & (sensor_1 != sensor_2);
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
      _20_SM1_fired_partial = outC->SM1_fired_strong;
      _19_SM1_reset_nxt_partial = kcg_false;
      _18_SM1_state_nxt_partial = SSM_st_State5_SM1;
      outC->_L5_State5_SM1 = kcg_true;
      _17_error_partial = outC->_L5_State5_SM1;
      outC->_L4_State5_SM1 = sensor_2;
      _16_output_partial = outC->_L4_State5_SM1;
      outC->output = _16_output_partial;
      outC->error = _17_error_partial;
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_State4_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_State4_SM1;
      outC->_L3_State4_SM1 = kcg_false;
      _12_error_partial = outC->_L3_State4_SM1;
      outC->_L2_State4_SM1 = sensor_1;
      _11_output_partial = outC->_L2_State4_SM1;
      outC->output = _11_output_partial;
      outC->error = _12_error_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_State3_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_State3_SM1;
      outC->_L3_State3_SM1 = kcg_false;
      _7_error_partial = outC->_L3_State3_SM1;
      outC->_L2_State3_SM1 = sensor_1;
      _6_output_partial = outC->_L2_State3_SM1;
      outC->output = _6_output_partial;
      outC->error = _7_error_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_State2_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_State2_SM1;
      outC->_L5_State2_SM1 = kcg_false;
      _2_error_partial = outC->_L5_State2_SM1;
      outC->_L2_State2_SM1 = sensor_2;
      _1_output_partial = outC->_L2_State2_SM1;
      outC->output = _1_output_partial;
      outC->error = _2_error_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_State1_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_State1_SM1;
      outC->_L9_State1_SM1 = kcg_false;
      error_partial = outC->_L9_State1_SM1;
      outC->_L7_State1_SM1 = sensor_1;
      output_partial = outC->_L7_State1_SM1;
      outC->output = output_partial;
      outC->error = error_partial;
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
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
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
      _31_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_State4_SM1 :
      _28_SM1_reset_act_partial = tr_1_guard_State4_SM1;
      break;
    case SSM_st_State3_SM1 :
      _25_SM1_reset_act_partial = tr_1_guard_State3_SM1;
      break;
    case SSM_st_State2_SM1 :
      _22_SM1_reset_act_partial = tr_1_guard_State2_SM1;
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
      outC->SM1_reset_act = _31_SM1_reset_act_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->SM1_reset_act = _28_SM1_reset_act_partial;
      break;
    case SSM_st_State3_SM1 :
      outC->SM1_reset_act = _25_SM1_reset_act_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->SM1_reset_act = _22_SM1_reset_act_partial;
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
void Voter_init(outC_Voter *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_State1_SM1;
  outC->SM1_state_sel = SSM_st_State1_SM1;
  outC->_L4_State5_SM1 = kcg_true;
  outC->_L5_State5_SM1 = kcg_true;
  outC->_L2_State4_SM1 = kcg_true;
  outC->_L3_State4_SM1 = kcg_true;
  outC->_L2_State3_SM1 = kcg_true;
  outC->_L3_State3_SM1 = kcg_true;
  outC->_L2_State2_SM1 = kcg_true;
  outC->_L5_State2_SM1 = kcg_true;
  outC->_L7_State1_SM1 = kcg_true;
  outC->_L9_State1_SM1 = kcg_true;
  outC->error = kcg_true;
  outC->output = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Voter_reset(outC_Voter *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Voter.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

