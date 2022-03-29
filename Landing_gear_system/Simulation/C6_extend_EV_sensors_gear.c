/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C6_extend_EV_sensors_gear.h"

/* C6_extend_EV_sensors_gear_extended/ */
void C6_extend_EV_sensors_gear(
  /* gear_extended_front/ */
  kcg_bool gear_extended_front,
  /* gear_extended_left/ */
  kcg_bool gear_extended_left,
  /* gear_extended_right/ */
  kcg_bool gear_extended_right,
  /* extend_EV/ */
  kcg_bool extend_EV,
  outC_C6_extend_EV_sensors_gear *outC)
{
  /* anomaly/ */
  kcg_bool anomaly_partial;
  /* SM1: */
  _8_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 SM1_fired_partial;
  /* anomaly/ */
  kcg_bool _1_anomaly_partial;
  /* SM1: */
  _8_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _4_SM1_fired_partial;
  /* anomaly/ */
  kcg_bool _5_anomaly_partial;
  /* SM1: */
  _8_SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _8_SM1_fired_partial;
  /* SM1: */
  _8_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Normal:<1> */
  kcg_bool tr_1_guard_Normal_SM1;
  /* SM1: */
  _8_SSM_ST_SM1 _9_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _11_SM1_fired_strong_partial;
  /* SM1:Detection:<2> */
  kcg_bool tr_2_guard_Detection_SM1;
  /* SM1:Detection:<1> */
  kcg_bool tr_1_guard_Detection_SM1;
  /* SM1: */
  _8_SSM_ST_SM1 _12_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _13_SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _14_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case _54_SSM_st_Detection_SM1 :
      outC->n_times_1_size = 7;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  switch (outC->SM1_state_sel) {
    case _54_SSM_st_Detection_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_1_size = outC->n_times_1_size;
      }
      else {
        outC->v4_times_1_size = outC->v3_times_1_size;
      }
      outC->c_times_1_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_1_size < 0) {
        outC->v3_times_1_size = outC->v4_times_1_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_1_size) {
        outC->v3_times_1_size = outC->v4_times_1_size - 1;
      }
      else {
        outC->v3_times_1_size = outC->v4_times_1_size;
      }
      outC->o_times_1_size = outC->c_times_1_size & (outC->v3_times_1_size == 0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L6 = gear_extended_right;
  outC->_L5 = gear_extended_left;
  outC->_L4 = gear_extended_front;
  outC->_L19 = outC->_L4 & outC->_L5 & outC->_L6;
  /* _L14= */
  if (outC->init1) {
    outC->_L14 = kcg_false;
  }
  else {
    outC->_L14 = outC->_L8;
  }
  switch (outC->SM1_state_sel) {
    case _55_SSM_st_Failure_SM1 :
      _12_SM1_state_act_partial = _55_SSM_st_Failure_SM1;
      break;
    case _54_SSM_st_Detection_SM1 :
      tr_2_guard_Detection_SM1 = outC->o_times_1_size;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->all_gears_extended_true = outC->_L19;
  switch (outC->SM1_state_sel) {
    case _54_SSM_st_Detection_SM1 :
      tr_1_guard_Detection_SM1 = outC->all_gears_extended_true == kcg_true;
      if (tr_1_guard_Detection_SM1) {
        _9_SM1_state_act_partial = _56_SSM_st_Normal_SM1;
      }
      else if (tr_2_guard_Detection_SM1) {
        _9_SM1_state_act_partial = _55_SSM_st_Failure_SM1;
      }
      else {
        _9_SM1_state_act_partial = _54_SSM_st_Detection_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L8 = extend_EV;
  outC->_L9 = outC->_L8 != outC->_L14;
  outC->retract_EV_changed = outC->_L9;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _55_SSM_st_Failure_SM1 :
      outC->SM1_state_act = _12_SM1_state_act_partial;
      _14_SM1_fired_strong_partial = _57_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _14_SM1_fired_strong_partial;
      break;
    case _54_SSM_st_Detection_SM1 :
      outC->SM1_state_act = _9_SM1_state_act_partial;
      if (tr_1_guard_Detection_SM1) {
        _11_SM1_fired_strong_partial = _58_SSM_TR_Detection_Normal_1_Detection_SM1;
      }
      else if (tr_2_guard_Detection_SM1) {
        _11_SM1_fired_strong_partial = _59_SSM_TR_Detection_Failure_2_Detection_SM1;
      }
      else {
        _11_SM1_fired_strong_partial = _57_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _11_SM1_fired_strong_partial;
      break;
    case _56_SSM_st_Normal_SM1 :
      tr_1_guard_Normal_SM1 = extend_EV & outC->retract_EV_changed;
      if (tr_1_guard_Normal_SM1) {
        SM1_state_act_partial = _54_SSM_st_Detection_SM1;
      }
      else {
        SM1_state_act_partial = _56_SSM_st_Normal_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_Normal_SM1) {
        SM1_fired_strong_partial = _60_SSM_TR_Normal_Detection_1_Normal_SM1;
      }
      else {
        SM1_fired_strong_partial = _57_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _55_SSM_st_Failure_SM1 :
      _8_SM1_fired_partial = outC->SM1_fired_strong;
      _7_SM1_reset_nxt_partial = kcg_false;
      _6_SM1_state_nxt_partial = _55_SSM_st_Failure_SM1;
      outC->_L1_Failure_SM1 = kcg_true;
      _5_anomaly_partial = outC->_L1_Failure_SM1;
      outC->anomaly = _5_anomaly_partial;
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case _54_SSM_st_Detection_SM1 :
      _1_anomaly_partial = kcg_false;
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = _54_SSM_st_Detection_SM1;
      outC->anomaly = _1_anomaly_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case _56_SSM_st_Normal_SM1 :
      anomaly_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _56_SSM_st_Normal_SM1;
      outC->anomaly = anomaly_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _55_SSM_st_Failure_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case _54_SSM_st_Detection_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case _56_SSM_st_Normal_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _55_SSM_st_Failure_SM1 :
      _13_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _13_SM1_reset_act_partial;
      break;
    case _54_SSM_st_Detection_SM1 :
      if (tr_1_guard_Detection_SM1) {
        _10_SM1_reset_act_partial = kcg_true;
      }
      else {
        _10_SM1_reset_act_partial = tr_2_guard_Detection_SM1;
      }
      outC->SM1_reset_act = _10_SM1_reset_act_partial;
      break;
    case _56_SSM_st_Normal_SM1 :
      SM1_reset_act_partial = tr_1_guard_Normal_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init1 = kcg_false;
  switch (outC->SM1_state_sel) {
    case _54_SSM_st_Detection_SM1 :
      outC->init = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void C6_extend_EV_sensors_gear_init(outC_C6_extend_EV_sensors_gear *outC)
{
  outC->_L19 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->retract_EV_changed = kcg_true;
  outC->all_gears_extended_true = kcg_true;
  outC->SM1_fired = _57_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _57_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _56_SSM_st_Normal_SM1;
  outC->SM1_state_sel = _56_SSM_st_Normal_SM1;
  outC->_L1_Failure_SM1 = kcg_true;
  outC->v4_times_1_size = 0;
  outC->n_times_1_size = 0;
  outC->c_times_1_size = kcg_true;
  outC->o_times_1_size = kcg_true;
  outC->_L8 = kcg_true;
  outC->v3_times_1_size = 0;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->anomaly = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _56_SSM_st_Normal_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C6_extend_EV_sensors_gear_reset(outC_C6_extend_EV_sensors_gear *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _56_SSM_st_Normal_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: C6_extend_EV_sensors_gear_extended/
  @1: (times#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C6_extend_EV_sensors_gear.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

