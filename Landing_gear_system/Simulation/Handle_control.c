/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Handle_control.h"

/* Handle_control/ */
void Handle_control(/* handle/ */ kcg_bool handle, outC_Handle_control *outC)
{
  /* analogical_switch/ */
  kcg_bool analogical_switch_partial;
  /* handle_control: */
  SSM_ST_handle_control handle_control_state_nxt_partial;
  /* handle_control: */
  kcg_bool handle_control_reset_nxt_partial;
  /* handle_control: */
  SSM_TR_handle_control handle_control_fired_partial;
  /* analogical_switch/ */
  kcg_bool _1_analogical_switch_partial;
  /* handle_control: */
  SSM_ST_handle_control _2_handle_control_state_nxt_partial;
  /* handle_control: */
  kcg_bool _3_handle_control_reset_nxt_partial;
  /* handle_control: */
  SSM_TR_handle_control _4_handle_control_fired_partial;
  /* handle_control: */
  SSM_ST_handle_control handle_control_state_act_partial;
  /* handle_control: */
  kcg_bool handle_control_reset_act_partial;
  /* handle_control: */
  SSM_TR_handle_control handle_control_fired_strong_partial;
  /* handle_control:Normal:<1> */
  kcg_bool tr_1_guard_Normal_handle_control;
  /* handle_control: */
  SSM_ST_handle_control _5_handle_control_state_act_partial;
  /* handle_control: */
  kcg_bool _6_handle_control_reset_act_partial;
  /* handle_control: */
  SSM_TR_handle_control _7_handle_control_fired_strong_partial;
  /* handle_control:Waiting:<1> */
  kcg_bool tr_1_guard_Waiting_handle_control;
  /* handle_control: */
  kcg_bool handle_control_reset_sel;
  /* handle_control: */
  kcg_bool handle_control_reset_prv;

  outC->handle_control_state_sel = outC->handle_control_state_nxt;
  switch (outC->handle_control_state_sel) {
    case SSM_st_Waiting_handle_control :
      outC->n_times_14_size = 20;
      break;
    default :
      /* this branch is empty */
      break;
  }
  handle_control_reset_prv = outC->handle_control_reset_act;
  switch (outC->handle_control_state_sel) {
    case SSM_st_Waiting_handle_control :
      if (handle_control_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_14_size = outC->n_times_14_size;
      }
      else {
        outC->v4_times_14_size = outC->v3_times_14_size;
      }
      outC->c_times_14_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_14_size < 0) {
        outC->v3_times_14_size = outC->v4_times_14_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_14_size) {
        outC->v3_times_14_size = outC->v4_times_14_size - 1;
      }
      else {
        outC->v3_times_14_size = outC->v4_times_14_size;
      }
      outC->o_times_14_size = outC->c_times_14_size & (outC->v3_times_14_size == 0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* _L18= */
  if (outC->init1) {
    outC->_L18 = kcg_false;
  }
  else {
    outC->_L18 = outC->_L8;
  }
  switch (outC->handle_control_state_sel) {
    case SSM_st_Waiting_handle_control :
      tr_1_guard_Waiting_handle_control = outC->o_times_14_size;
      if (tr_1_guard_Waiting_handle_control) {
        _5_handle_control_state_act_partial = SSM_st_Normal_handle_control;
      }
      else {
        _5_handle_control_state_act_partial = SSM_st_Waiting_handle_control;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L8 = handle;
  outC->_L9 = outC->_L8 != outC->_L18;
  outC->handle_state_changed = outC->_L9;
  /* handle_control: */
  switch (outC->handle_control_state_sel) {
    case SSM_st_Waiting_handle_control :
      outC->handle_control_state_act = _5_handle_control_state_act_partial;
      if (tr_1_guard_Waiting_handle_control) {
        _7_handle_control_fired_strong_partial =
          SSM_TR_Waiting_Normal_1_Waiting_handle_control;
      }
      else {
        _7_handle_control_fired_strong_partial = SSM_TR_no_trans_handle_control;
      }
      outC->handle_control_fired_strong = _7_handle_control_fired_strong_partial;
      break;
    case SSM_st_Normal_handle_control :
      tr_1_guard_Normal_handle_control = outC->handle_state_changed;
      if (tr_1_guard_Normal_handle_control) {
        handle_control_state_act_partial = SSM_st_Waiting_handle_control;
      }
      else {
        handle_control_state_act_partial = SSM_st_Normal_handle_control;
      }
      outC->handle_control_state_act = handle_control_state_act_partial;
      if (tr_1_guard_Normal_handle_control) {
        handle_control_fired_strong_partial =
          SSM_TR_Normal_Waiting_1_Normal_handle_control;
      }
      else {
        handle_control_fired_strong_partial = SSM_TR_no_trans_handle_control;
      }
      outC->handle_control_fired_strong = handle_control_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* handle_control: */
  switch (outC->handle_control_state_act) {
    case SSM_st_Waiting_handle_control :
      _4_handle_control_fired_partial = outC->handle_control_fired_strong;
      _3_handle_control_reset_nxt_partial = kcg_false;
      _2_handle_control_state_nxt_partial = SSM_st_Waiting_handle_control;
      outC->_L3_Waiting_handle_control = kcg_false;
      _1_analogical_switch_partial = outC->_L3_Waiting_handle_control;
      outC->analogical_switch = _1_analogical_switch_partial;
      outC->handle_control_state_nxt = _2_handle_control_state_nxt_partial;
      break;
    case SSM_st_Normal_handle_control :
      handle_control_fired_partial = outC->handle_control_fired_strong;
      handle_control_reset_nxt_partial = kcg_false;
      handle_control_state_nxt_partial = SSM_st_Normal_handle_control;
      outC->_L1_Normal_handle_control = kcg_true;
      analogical_switch_partial = outC->_L1_Normal_handle_control;
      outC->analogical_switch = analogical_switch_partial;
      outC->handle_control_state_nxt = handle_control_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  handle_control_reset_sel = outC->handle_control_reset_nxt;
  /* handle_control: */
  switch (outC->handle_control_state_act) {
    case SSM_st_Waiting_handle_control :
      outC->handle_control_reset_nxt = _3_handle_control_reset_nxt_partial;
      outC->handle_control_fired = _4_handle_control_fired_partial;
      break;
    case SSM_st_Normal_handle_control :
      outC->handle_control_reset_nxt = handle_control_reset_nxt_partial;
      outC->handle_control_fired = handle_control_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* handle_control: */
  switch (outC->handle_control_state_sel) {
    case SSM_st_Waiting_handle_control :
      _6_handle_control_reset_act_partial = tr_1_guard_Waiting_handle_control;
      outC->handle_control_reset_act = _6_handle_control_reset_act_partial;
      break;
    case SSM_st_Normal_handle_control :
      handle_control_reset_act_partial = tr_1_guard_Normal_handle_control;
      outC->handle_control_reset_act = handle_control_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init1 = kcg_false;
  switch (outC->handle_control_state_sel) {
    case SSM_st_Waiting_handle_control :
      outC->init = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Handle_control_init(outC_Handle_control *outC)
{
  outC->_L18 = kcg_true;
  outC->_L9 = kcg_true;
  outC->handle_state_changed = kcg_true;
  outC->handle_control_fired = SSM_TR_no_trans_handle_control;
  outC->handle_control_fired_strong = SSM_TR_no_trans_handle_control;
  outC->handle_control_state_act = SSM_st_Normal_handle_control;
  outC->handle_control_state_sel = SSM_st_Normal_handle_control;
  outC->_L3_Waiting_handle_control = kcg_true;
  outC->_L1_Normal_handle_control = kcg_true;
  outC->v4_times_14_size = 0;
  outC->n_times_14_size = 0;
  outC->c_times_14_size = kcg_true;
  outC->o_times_14_size = kcg_true;
  outC->_L8 = kcg_true;
  outC->v3_times_14_size = 0;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->analogical_switch = kcg_true;
  outC->handle_control_reset_nxt = kcg_false;
  outC->handle_control_reset_act = kcg_false;
  outC->handle_control_state_nxt = SSM_st_Normal_handle_control;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Handle_control_reset(outC_Handle_control *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->handle_control_reset_nxt = kcg_false;
  outC->handle_control_reset_act = kcg_false;
  outC->handle_control_state_nxt = SSM_st_Normal_handle_control;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Handle_control/
  @1: (times#14)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Handle_control.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

