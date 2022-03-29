/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Compute_logical.h"

/* Compute_logical/ */
void Compute_logical(
  /* door_closed_front/ */
  kcg_bool door_closed_front,
  /* door_closed_left/ */
  kcg_bool door_closed_left,
  /* door_closed_right/ */
  kcg_bool door_closed_right,
  /* door_open_front/ */
  kcg_bool door_open_front,
  /* door_open_left/ */
  kcg_bool door_open_left,
  /* door_open_right/ */
  kcg_bool door_open_right,
  /* gear_extended_front/ */
  kcg_bool gear_extended_front,
  /* gear_extended_left/ */
  kcg_bool gear_extended_left,
  /* gear_extended_right/ */
  kcg_bool gear_extended_right,
  /* gear_retracted_front/ */
  kcg_bool gear_retracted_front,
  /* gear_retracted_left/ */
  kcg_bool gear_retracted_left,
  /* gear_retracted_right/ */
  kcg_bool gear_retracted_right,
  /* gear_shock_absorber_front/ */
  kcg_bool gear_shock_absorber_front,
  /* gear_shock_absorber_left/ */
  kcg_bool gear_shock_absorber_left,
  /* gear_shock_absorber_right/ */
  kcg_bool gear_shock_absorber_right,
  /* handle/ */
  kcg_bool handle,
  outC_Compute_logical *outC)
{
  /* gears_maneuvering/ */
  kcg_bool gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool general_EV_partial;
  /* open_EV/ */
  kcg_bool open_EV_partial;
  /* close_EV/ */
  kcg_bool close_EV_partial;
  /* extend_EV/ */
  kcg_bool extend_EV_partial;
  /* retract_EV/ */
  kcg_bool retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _1_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _2_general_EV_partial;
  /* open_EV/ */
  kcg_bool _3_open_EV_partial;
  /* close_EV/ */
  kcg_bool _4_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _5_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _6_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _7_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _8_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _9_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _10_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _11_general_EV_partial;
  /* open_EV/ */
  kcg_bool _12_open_EV_partial;
  /* close_EV/ */
  kcg_bool _13_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _14_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _15_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _16_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _18_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _19_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _20_general_EV_partial;
  /* open_EV/ */
  kcg_bool _21_open_EV_partial;
  /* close_EV/ */
  kcg_bool _22_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _23_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _24_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _25_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _26_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _27_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _28_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _29_general_EV_partial;
  /* open_EV/ */
  kcg_bool _30_open_EV_partial;
  /* close_EV/ */
  kcg_bool _31_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _32_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _33_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _34_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _36_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _37_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _38_general_EV_partial;
  /* open_EV/ */
  kcg_bool _39_open_EV_partial;
  /* close_EV/ */
  kcg_bool _40_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _41_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _42_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _43_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _44_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _45_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _46_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _47_general_EV_partial;
  /* open_EV/ */
  kcg_bool _48_open_EV_partial;
  /* close_EV/ */
  kcg_bool _49_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _50_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _51_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _52_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _53_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _54_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _55_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _56_general_EV_partial;
  /* open_EV/ */
  kcg_bool _57_open_EV_partial;
  /* close_EV/ */
  kcg_bool _58_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _59_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _60_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _61_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _62_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _63_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _64_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _65_general_EV_partial;
  /* open_EV/ */
  kcg_bool _66_open_EV_partial;
  /* close_EV/ */
  kcg_bool _67_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _68_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _69_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _70_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _71_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _72_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _73_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _74_general_EV_partial;
  /* open_EV/ */
  kcg_bool _75_open_EV_partial;
  /* close_EV/ */
  kcg_bool _76_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _77_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _78_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _79_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _80_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _81_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _82_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _83_general_EV_partial;
  /* open_EV/ */
  kcg_bool _84_open_EV_partial;
  /* close_EV/ */
  kcg_bool _85_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _86_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _87_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _88_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _89_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _90_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _91_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _92_general_EV_partial;
  /* open_EV/ */
  kcg_bool _93_open_EV_partial;
  /* close_EV/ */
  kcg_bool _94_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _95_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _96_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _97_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _98_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _99_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _100_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _101_general_EV_partial;
  /* open_EV/ */
  kcg_bool _102_open_EV_partial;
  /* close_EV/ */
  kcg_bool _103_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _104_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _105_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _106_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _107_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _108_SM1_fired_partial;
  /* gears_maneuvering/ */
  kcg_bool _109_gears_maneuvering_partial;
  /* general_EV/ */
  kcg_bool _110_general_EV_partial;
  /* open_EV/ */
  kcg_bool _111_open_EV_partial;
  /* close_EV/ */
  kcg_bool _112_close_EV_partial;
  /* extend_EV/ */
  kcg_bool _113_extend_EV_partial;
  /* retract_EV/ */
  kcg_bool _114_retract_EV_partial;
  /* SM1: */
  _20_SSM_ST_SM1 _115_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _116_SM1_reset_nxt_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _117_SM1_fired_partial;
  /* SM1: */
  _20_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:initialization:<1> */
  kcg_bool tr_1_guard_initialization_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _118_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _119_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _120_SM1_fired_strong_partial;
  /* SM1:general_EV_sim:<2> */
  kcg_bool tr_2_guard_general_EV_sim_SM1;
  /* SM1:general_EV_sim:<1> */
  kcg_bool tr_1_guard_general_EV_sim_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _121_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _122_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _123_SM1_fired_strong_partial;
  /* SM1:open_EV_smi:<1> */
  kcg_bool tr_1_guard_open_EV_smi_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _124_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _125_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _126_SM1_fired_strong_partial;
  /* SM1:Open_door:<2> */
  kcg_bool tr_2_guard_Open_door_SM1;
  /* SM1:Open_door:<1> */
  kcg_bool tr_1_guard_Open_door_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _127_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _128_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _129_SM1_fired_strong_partial;
  /* SM1:retract_EV_smi:<1> */
  kcg_bool tr_1_guard_retract_EV_smi_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _130_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _131_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _132_SM1_fired_strong_partial;
  /* SM1:extend_EV_smi:<1> */
  kcg_bool tr_1_guard_extend_EV_smi_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _133_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _134_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _135_SM1_fired_strong_partial;
  /* SM1:Retract_gears:<1> */
  kcg_bool tr_1_guard_Retract_gears_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _136_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _137_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _138_SM1_fired_strong_partial;
  /* SM1:Extend_gears:<1> */
  kcg_bool tr_1_guard_Extend_gears_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _139_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _140_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _141_SM1_fired_strong_partial;
  /* SM1:gears_retract_and_close_doors_smi:<1> */
  kcg_bool tr_1_guard_gears_retract_and_close_doors_smi_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _142_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _143_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _144_SM1_fired_strong_partial;
  /* SM1:gears_extended_and_close_doors_smi:<1> */
  kcg_bool tr_1_guard_gears_extended_and_close_doors_smi_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _145_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _146_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _147_SM1_fired_strong_partial;
  /* SM1:Close_doors:<1> */
  kcg_bool tr_1_guard_Close_doors_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _148_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _149_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _150_SM1_fired_strong_partial;
  /* SM1:all_door_closed:<1> */
  kcg_bool tr_1_guard_all_door_closed_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _151_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _152_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _153_SM1_fired_strong_partial;
  /* SM1:general_EV_END:<1> */
  kcg_bool tr_1_guard_general_EV_END_SM1;
  /* SM1: */
  _20_SSM_ST_SM1 _154_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _155_SM1_reset_act_partial;
  /* SM1: */
  _21_SSM_TR_SM1 _156_SM1_fired_strong_partial;
  /* SM1:general_EV_stop:<1> */
  kcg_bool tr_1_guard_general_EV_stop_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_general_EV_sim_SM1 :
      outC->n_times_1_size = 2;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  switch (outC->SM1_state_sel) {
    case SSM_st_general_EV_END_SM1 :
      outC->n_times_8_size = 14;
      if (SM1_reset_prv) {
        outC->init7 = kcg_true;
      }
      /* @8/_/v4= */
      if (outC->init7) {
        outC->v4_times_8_size = outC->n_times_8_size;
      }
      else {
        outC->v4_times_8_size = outC->v3_times_8_size;
      }
      outC->c_times_8_size = kcg_true;
      /* @8/_/v3= */
      if (outC->v4_times_8_size < 0) {
        outC->v3_times_8_size = outC->v4_times_8_size;
      }
      else /* @8/_/v3= */
      if (outC->c_times_8_size) {
        outC->v3_times_8_size = outC->v4_times_8_size - 1;
      }
      else {
        outC->v3_times_8_size = outC->v4_times_8_size;
      }
      outC->o_times_8_size = outC->c_times_8_size & (outC->v3_times_8_size == 0);
      break;
    case SSM_st_all_door_closed_SM1 :
      outC->n_times_7_size = 1;
      if (SM1_reset_prv) {
        outC->init6 = kcg_true;
      }
      /* @7/_/v4= */
      if (outC->init6) {
        outC->v4_times_7_size = outC->n_times_7_size;
      }
      else {
        outC->v4_times_7_size = outC->v3_times_7_size;
      }
      outC->c_times_7_size = kcg_true;
      /* @7/_/v3= */
      if (outC->v4_times_7_size < 0) {
        outC->v3_times_7_size = outC->v4_times_7_size;
      }
      else /* @7/_/v3= */
      if (outC->c_times_7_size) {
        outC->v3_times_7_size = outC->v4_times_7_size - 1;
      }
      else {
        outC->v3_times_7_size = outC->v4_times_7_size;
      }
      outC->o_times_7_size = outC->c_times_7_size & (outC->v3_times_7_size == 0);
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      outC->n_times_5_size = 1;
      if (SM1_reset_prv) {
        outC->init5 = kcg_true;
      }
      /* @6/_/v4= */
      if (outC->init5) {
        outC->v4_times_5_size = outC->n_times_5_size;
      }
      else {
        outC->v4_times_5_size = outC->v3_times_5_size;
      }
      outC->c_times_5_size = kcg_true;
      /* @6/_/v3= */
      if (outC->v4_times_5_size < 0) {
        outC->v3_times_5_size = outC->v4_times_5_size;
      }
      else /* @6/_/v3= */
      if (outC->c_times_5_size) {
        outC->v3_times_5_size = outC->v4_times_5_size - 1;
      }
      else {
        outC->v3_times_5_size = outC->v4_times_5_size;
      }
      outC->o_times_5_size = outC->c_times_5_size & (outC->v3_times_5_size == 0);
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      outC->n_times_6_size = 1;
      if (SM1_reset_prv) {
        outC->init4 = kcg_true;
      }
      /* @5/_/v4= */
      if (outC->init4) {
        outC->v4_times_6_size = outC->n_times_6_size;
      }
      else {
        outC->v4_times_6_size = outC->v3_times_6_size;
      }
      outC->c_times_6_size = kcg_true;
      /* @5/_/v3= */
      if (outC->v4_times_6_size < 0) {
        outC->v3_times_6_size = outC->v4_times_6_size;
      }
      else /* @5/_/v3= */
      if (outC->c_times_6_size) {
        outC->v3_times_6_size = outC->v4_times_6_size - 1;
      }
      else {
        outC->v3_times_6_size = outC->v4_times_6_size;
      }
      outC->o_times_6_size = outC->c_times_6_size & (outC->v3_times_6_size == 0);
      break;
    case SSM_st_extend_EV_smi_SM1 :
      outC->n_times_4_size = 1;
      if (SM1_reset_prv) {
        outC->init3 = kcg_true;
      }
      /* @4/_/v4= */
      if (outC->init3) {
        outC->v4_times_4_size = outC->n_times_4_size;
      }
      else {
        outC->v4_times_4_size = outC->v3_times_4_size;
      }
      outC->c_times_4_size = kcg_true;
      /* @4/_/v3= */
      if (outC->v4_times_4_size < 0) {
        outC->v3_times_4_size = outC->v4_times_4_size;
      }
      else /* @4/_/v3= */
      if (outC->c_times_4_size) {
        outC->v3_times_4_size = outC->v4_times_4_size - 1;
      }
      else {
        outC->v3_times_4_size = outC->v4_times_4_size;
      }
      outC->o_times_4_size = outC->c_times_4_size & (outC->v3_times_4_size == 0);
      break;
    case SSM_st_retract_EV_smi_SM1 :
      outC->n_times_3_size = 1;
      if (SM1_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_3_size = outC->n_times_3_size;
      }
      else {
        outC->v4_times_3_size = outC->v3_times_3_size;
      }
      outC->c_times_3_size = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_3_size < 0) {
        outC->v3_times_3_size = outC->v4_times_3_size;
      }
      else /* @3/_/v3= */
      if (outC->c_times_3_size) {
        outC->v3_times_3_size = outC->v4_times_3_size - 1;
      }
      else {
        outC->v3_times_3_size = outC->v4_times_3_size;
      }
      outC->o_times_3_size = outC->c_times_3_size & (outC->v3_times_3_size == 0);
      break;
    case SSM_st_open_EV_smi_SM1 :
      outC->n_times_2_size = 1;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_2_size = outC->n_times_2_size;
      }
      else {
        outC->v4_times_2_size = outC->v3_times_2_size;
      }
      outC->c_times_2_size = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_2_size < 0) {
        outC->v3_times_2_size = outC->v4_times_2_size;
      }
      else /* @2/_/v3= */
      if (outC->c_times_2_size) {
        outC->v3_times_2_size = outC->v4_times_2_size - 1;
      }
      else {
        outC->v3_times_2_size = outC->v4_times_2_size;
      }
      outC->o_times_2_size = outC->c_times_2_size & (outC->v3_times_2_size == 0);
      break;
    case SSM_st_general_EV_sim_SM1 :
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
  outC->_L37 = gear_extended_right;
  outC->_L36 = gear_extended_left;
  outC->_L35 = gear_extended_front;
  outC->_L34 = outC->_L35 & outC->_L36 & outC->_L37;
  outC->gear_locked_down = outC->_L34;
  outC->_L33 = handle;
  /* _L32=(Handle_control#2)/ */
  Handle_control(outC->_L33, &outC->Context_Handle_control_2);
  outC->_L32 = outC->Context_Handle_control_2.analogical_switch;
  outC->analogical_switch = outC->_L32;
  switch (outC->SM1_state_sel) {
    case SSM_st_general_EV_stop_SM1 :
      tr_1_guard_general_EV_stop_SM1 = kcg_true;
      if (tr_1_guard_general_EV_stop_SM1) {
        _154_SM1_state_act_partial = SSM_st_initialization_SM1;
      }
      else {
        _154_SM1_state_act_partial = SSM_st_general_EV_stop_SM1;
      }
      break;
    case SSM_st_general_EV_END_SM1 :
      tr_1_guard_general_EV_END_SM1 = outC->o_times_8_size;
      if (tr_1_guard_general_EV_END_SM1) {
        _151_SM1_state_act_partial = SSM_st_general_EV_stop_SM1;
      }
      else {
        _151_SM1_state_act_partial = SSM_st_general_EV_END_SM1;
      }
      break;
    case SSM_st_all_door_closed_SM1 :
      tr_1_guard_all_door_closed_SM1 = outC->o_times_7_size;
      if (tr_1_guard_all_door_closed_SM1) {
        _148_SM1_state_act_partial = SSM_st_general_EV_END_SM1;
      }
      else {
        _148_SM1_state_act_partial = SSM_st_all_door_closed_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L12 = door_closed_right;
  outC->_L11 = door_closed_left;
  outC->_L10 = door_closed_front;
  outC->_L13 = outC->_L10 & outC->_L11 & outC->_L12;
  outC->all_doors_closed_true = outC->_L13;
  switch (outC->SM1_state_sel) {
    case SSM_st_Close_doors_SM1 :
      tr_1_guard_Close_doors_SM1 = outC->all_doors_closed_true == kcg_true;
      if (tr_1_guard_Close_doors_SM1) {
        _145_SM1_state_act_partial = SSM_st_all_door_closed_SM1;
      }
      else {
        _145_SM1_state_act_partial = SSM_st_Close_doors_SM1;
      }
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      tr_1_guard_gears_extended_and_close_doors_smi_SM1 = outC->o_times_5_size;
      if (tr_1_guard_gears_extended_and_close_doors_smi_SM1) {
        _142_SM1_state_act_partial = SSM_st_Close_doors_SM1;
      }
      else {
        _142_SM1_state_act_partial = SSM_st_gears_extended_and_close_doors_smi_SM1;
      }
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      tr_1_guard_gears_retract_and_close_doors_smi_SM1 = outC->o_times_6_size;
      if (tr_1_guard_gears_retract_and_close_doors_smi_SM1) {
        _139_SM1_state_act_partial = SSM_st_Close_doors_SM1;
      }
      else {
        _139_SM1_state_act_partial = SSM_st_gears_retract_and_close_doors_smi_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L16 = gear_extended_right;
  outC->_L15 = gear_extended_left;
  outC->_L14 = gear_extended_front;
  outC->_L17 = outC->_L14 & outC->_L15 & outC->_L16;
  outC->all_gears_extended_true = outC->_L17;
  switch (outC->SM1_state_sel) {
    case SSM_st_Extend_gears_SM1 :
      tr_1_guard_Extend_gears_SM1 = outC->all_gears_extended_true == kcg_true;
      if (tr_1_guard_Extend_gears_SM1) {
        _136_SM1_state_act_partial = SSM_st_gears_extended_and_close_doors_smi_SM1;
      }
      else {
        _136_SM1_state_act_partial = SSM_st_Extend_gears_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L20 = gear_retracted_right;
  outC->_L19 = gear_retracted_left;
  outC->_L18 = gear_retracted_front;
  outC->_L21 = outC->_L18 & outC->_L19 & outC->_L20;
  outC->all_gears_retracted_true = outC->_L21;
  switch (outC->SM1_state_sel) {
    case SSM_st_Retract_gears_SM1 :
      tr_1_guard_Retract_gears_SM1 = outC->all_gears_retracted_true == kcg_true;
      if (tr_1_guard_Retract_gears_SM1) {
        _133_SM1_state_act_partial = SSM_st_gears_retract_and_close_doors_smi_SM1;
      }
      else {
        _133_SM1_state_act_partial = SSM_st_Retract_gears_SM1;
      }
      break;
    case SSM_st_extend_EV_smi_SM1 :
      tr_1_guard_extend_EV_smi_SM1 = outC->o_times_4_size;
      if (tr_1_guard_extend_EV_smi_SM1) {
        _130_SM1_state_act_partial = SSM_st_Extend_gears_SM1;
      }
      else {
        _130_SM1_state_act_partial = SSM_st_extend_EV_smi_SM1;
      }
      break;
    case SSM_st_retract_EV_smi_SM1 :
      tr_1_guard_retract_EV_smi_SM1 = outC->o_times_3_size;
      if (tr_1_guard_retract_EV_smi_SM1) {
        _127_SM1_state_act_partial = SSM_st_Retract_gears_SM1;
      }
      else {
        _127_SM1_state_act_partial = SSM_st_retract_EV_smi_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L7 = door_open_right;
  outC->_L6 = door_open_left;
  outC->_L5 = door_open_front;
  outC->_L8 = outC->_L5 & outC->_L6 & outC->_L7;
  outC->all_doors_open_true = outC->_L8;
  outC->_L27 = gear_shock_absorber_right;
  outC->_L26 = gear_shock_absorber_left;
  outC->_L25 = gear_shock_absorber_front;
  outC->_L28 = outC->_L25 & outC->_L26 & outC->_L27;
  outC->all_gears_absorber = outC->_L28;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_general_EV_stop_SM1 :
      outC->SM1_state_act = _154_SM1_state_act_partial;
      break;
    case SSM_st_general_EV_END_SM1 :
      outC->SM1_state_act = _151_SM1_state_act_partial;
      break;
    case SSM_st_all_door_closed_SM1 :
      outC->SM1_state_act = _148_SM1_state_act_partial;
      break;
    case SSM_st_Close_doors_SM1 :
      outC->SM1_state_act = _145_SM1_state_act_partial;
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      outC->SM1_state_act = _142_SM1_state_act_partial;
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      outC->SM1_state_act = _139_SM1_state_act_partial;
      break;
    case SSM_st_Extend_gears_SM1 :
      outC->SM1_state_act = _136_SM1_state_act_partial;
      break;
    case SSM_st_Retract_gears_SM1 :
      outC->SM1_state_act = _133_SM1_state_act_partial;
      break;
    case SSM_st_extend_EV_smi_SM1 :
      outC->SM1_state_act = _130_SM1_state_act_partial;
      break;
    case SSM_st_retract_EV_smi_SM1 :
      outC->SM1_state_act = _127_SM1_state_act_partial;
      break;
    case SSM_st_Open_door_SM1 :
      tr_2_guard_Open_door_SM1 = (handle == kcg_false) &
        (outC->all_gears_absorber == kcg_true) & (outC->all_doors_open_true ==
          kcg_true);
      tr_1_guard_Open_door_SM1 = (handle == kcg_true) &
        (outC->all_gears_absorber == kcg_true) & (outC->all_doors_open_true ==
          kcg_true);
      if (tr_1_guard_Open_door_SM1) {
        _124_SM1_state_act_partial = SSM_st_retract_EV_smi_SM1;
      }
      else if (tr_2_guard_Open_door_SM1) {
        _124_SM1_state_act_partial = SSM_st_extend_EV_smi_SM1;
      }
      else {
        _124_SM1_state_act_partial = SSM_st_Open_door_SM1;
      }
      outC->SM1_state_act = _124_SM1_state_act_partial;
      break;
    case SSM_st_open_EV_smi_SM1 :
      tr_1_guard_open_EV_smi_SM1 = outC->o_times_2_size;
      if (tr_1_guard_open_EV_smi_SM1) {
        _121_SM1_state_act_partial = SSM_st_Open_door_SM1;
      }
      else {
        _121_SM1_state_act_partial = SSM_st_open_EV_smi_SM1;
      }
      outC->SM1_state_act = _121_SM1_state_act_partial;
      break;
    case SSM_st_general_EV_sim_SM1 :
      tr_2_guard_general_EV_sim_SM1 = outC->o_times_1_size;
      tr_1_guard_general_EV_sim_SM1 = outC->analogical_switch == kcg_true;
      if (tr_1_guard_general_EV_sim_SM1) {
        _118_SM1_state_act_partial = SSM_st_initialization_SM1;
      }
      else if (tr_2_guard_general_EV_sim_SM1) {
        _118_SM1_state_act_partial = SSM_st_open_EV_smi_SM1;
      }
      else {
        _118_SM1_state_act_partial = SSM_st_general_EV_sim_SM1;
      }
      outC->SM1_state_act = _118_SM1_state_act_partial;
      break;
    case SSM_st_initialization_SM1 :
      tr_1_guard_initialization_SM1 = outC->analogical_switch == kcg_false;
      if (tr_1_guard_initialization_SM1) {
        SM1_state_act_partial = SSM_st_general_EV_sim_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_initialization_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_general_EV_stop_SM1 :
      _114_retract_EV_partial = kcg_false;
      _113_extend_EV_partial = kcg_false;
      _112_close_EV_partial = kcg_false;
      _111_open_EV_partial = kcg_false;
      _109_gears_maneuvering_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_general_EV_stop_SM1 :
      if (tr_1_guard_general_EV_stop_SM1) {
        _156_SM1_fired_strong_partial =
          SSM_TR_general_EV_stop_initialization_1_general_EV_stop_SM1;
      }
      else {
        _156_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _156_SM1_fired_strong_partial;
      break;
    case SSM_st_general_EV_END_SM1 :
      if (tr_1_guard_general_EV_END_SM1) {
        _153_SM1_fired_strong_partial =
          SSM_TR_general_EV_END_general_EV_stop_1_general_EV_END_SM1;
      }
      else {
        _153_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _153_SM1_fired_strong_partial;
      break;
    case SSM_st_all_door_closed_SM1 :
      if (tr_1_guard_all_door_closed_SM1) {
        _150_SM1_fired_strong_partial =
          SSM_TR_all_door_closed_general_EV_END_1_all_door_closed_SM1;
      }
      else {
        _150_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _150_SM1_fired_strong_partial;
      break;
    case SSM_st_Close_doors_SM1 :
      if (tr_1_guard_Close_doors_SM1) {
        _147_SM1_fired_strong_partial =
          SSM_TR_Close_doors_all_door_closed_1_Close_doors_SM1;
      }
      else {
        _147_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _147_SM1_fired_strong_partial;
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      if (tr_1_guard_gears_extended_and_close_doors_smi_SM1) {
        _144_SM1_fired_strong_partial =
          SSM_TR_gears_extended_and_close_doors_smi_Close_doors_1_gears_extended_and_close_doors_smi_SM1;
      }
      else {
        _144_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _144_SM1_fired_strong_partial;
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      if (tr_1_guard_gears_retract_and_close_doors_smi_SM1) {
        _141_SM1_fired_strong_partial =
          SSM_TR_gears_retract_and_close_doors_smi_Close_doors_1_gears_retract_and_close_doors_smi_SM1;
      }
      else {
        _141_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _141_SM1_fired_strong_partial;
      break;
    case SSM_st_Extend_gears_SM1 :
      if (tr_1_guard_Extend_gears_SM1) {
        _138_SM1_fired_strong_partial =
          SSM_TR_Extend_gears_gears_extended_and_close_doors_smi_1_Extend_gears_SM1;
      }
      else {
        _138_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _138_SM1_fired_strong_partial;
      break;
    case SSM_st_Retract_gears_SM1 :
      if (tr_1_guard_Retract_gears_SM1) {
        _135_SM1_fired_strong_partial =
          SSM_TR_Retract_gears_gears_retract_and_close_doors_smi_1_Retract_gears_SM1;
      }
      else {
        _135_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _135_SM1_fired_strong_partial;
      break;
    case SSM_st_extend_EV_smi_SM1 :
      if (tr_1_guard_extend_EV_smi_SM1) {
        _132_SM1_fired_strong_partial =
          SSM_TR_extend_EV_smi_Extend_gears_1_extend_EV_smi_SM1;
      }
      else {
        _132_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _132_SM1_fired_strong_partial;
      break;
    case SSM_st_retract_EV_smi_SM1 :
      if (tr_1_guard_retract_EV_smi_SM1) {
        _129_SM1_fired_strong_partial =
          SSM_TR_retract_EV_smi_Retract_gears_1_retract_EV_smi_SM1;
      }
      else {
        _129_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _129_SM1_fired_strong_partial;
      break;
    case SSM_st_Open_door_SM1 :
      if (tr_1_guard_Open_door_SM1) {
        _126_SM1_fired_strong_partial = SSM_TR_Open_door_retract_EV_smi_1_Open_door_SM1;
      }
      else if (tr_2_guard_Open_door_SM1) {
        _126_SM1_fired_strong_partial = SSM_TR_Open_door_extend_EV_smi_2_Open_door_SM1;
      }
      else {
        _126_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _126_SM1_fired_strong_partial;
      break;
    case SSM_st_open_EV_smi_SM1 :
      if (tr_1_guard_open_EV_smi_SM1) {
        _123_SM1_fired_strong_partial = SSM_TR_open_EV_smi_Open_door_1_open_EV_smi_SM1;
      }
      else {
        _123_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _123_SM1_fired_strong_partial;
      break;
    case SSM_st_general_EV_sim_SM1 :
      if (tr_1_guard_general_EV_sim_SM1) {
        _120_SM1_fired_strong_partial =
          SSM_TR_general_EV_sim_initialization_1_general_EV_sim_SM1;
      }
      else if (tr_2_guard_general_EV_sim_SM1) {
        _120_SM1_fired_strong_partial =
          SSM_TR_general_EV_sim_open_EV_smi_2_general_EV_sim_SM1;
      }
      else {
        _120_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _120_SM1_fired_strong_partial;
      break;
    case SSM_st_initialization_SM1 :
      if (tr_1_guard_initialization_SM1) {
        SM1_fired_strong_partial =
          SSM_TR_initialization_general_EV_sim_1_initialization_SM1;
      }
      else {
        SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_general_EV_stop_SM1 :
      _117_SM1_fired_partial = outC->SM1_fired_strong;
      _116_SM1_reset_nxt_partial = kcg_false;
      _115_SM1_state_nxt_partial = SSM_st_general_EV_stop_SM1;
      outC->_L1_general_EV_stop_SM1 = kcg_false;
      _110_general_EV_partial = outC->_L1_general_EV_stop_SM1;
      outC->gears_maneuvering = _109_gears_maneuvering_partial;
      outC->general_EV = _110_general_EV_partial;
      outC->open_EV = _111_open_EV_partial;
      outC->close_EV = _112_close_EV_partial;
      outC->extend_EV = _113_extend_EV_partial;
      outC->retract_EV = _114_retract_EV_partial;
      outC->SM1_state_nxt = _115_SM1_state_nxt_partial;
      break;
    case SSM_st_general_EV_END_SM1 :
      _105_retract_EV_partial = kcg_false;
      _104_extend_EV_partial = kcg_false;
      _103_close_EV_partial = kcg_false;
      _102_open_EV_partial = kcg_false;
      _101_general_EV_partial = kcg_false;
      _100_gears_maneuvering_partial = kcg_false;
      _108_SM1_fired_partial = outC->SM1_fired_strong;
      _107_SM1_reset_nxt_partial = kcg_false;
      _106_SM1_state_nxt_partial = SSM_st_general_EV_END_SM1;
      outC->gears_maneuvering = _100_gears_maneuvering_partial;
      outC->general_EV = _101_general_EV_partial;
      outC->open_EV = _102_open_EV_partial;
      outC->close_EV = _103_close_EV_partial;
      outC->extend_EV = _104_extend_EV_partial;
      outC->retract_EV = _105_retract_EV_partial;
      outC->SM1_state_nxt = _106_SM1_state_nxt_partial;
      break;
    case SSM_st_all_door_closed_SM1 :
      _96_retract_EV_partial = kcg_false;
      _95_extend_EV_partial = kcg_false;
      _93_open_EV_partial = kcg_false;
      _92_general_EV_partial = kcg_false;
      _99_SM1_fired_partial = outC->SM1_fired_strong;
      _98_SM1_reset_nxt_partial = kcg_false;
      _97_SM1_state_nxt_partial = SSM_st_all_door_closed_SM1;
      outC->_L2_all_door_closed_SM1 = kcg_false;
      _91_gears_maneuvering_partial = outC->_L2_all_door_closed_SM1;
      outC->_L1_all_door_closed_SM1 = kcg_false;
      _94_close_EV_partial = outC->_L1_all_door_closed_SM1;
      outC->gears_maneuvering = _91_gears_maneuvering_partial;
      outC->general_EV = _92_general_EV_partial;
      outC->open_EV = _93_open_EV_partial;
      outC->close_EV = _94_close_EV_partial;
      outC->extend_EV = _95_extend_EV_partial;
      outC->retract_EV = _96_retract_EV_partial;
      outC->SM1_state_nxt = _97_SM1_state_nxt_partial;
      break;
    case SSM_st_Close_doors_SM1 :
      _87_retract_EV_partial = kcg_false;
      _86_extend_EV_partial = kcg_false;
      _85_close_EV_partial = kcg_false;
      _84_open_EV_partial = kcg_false;
      _83_general_EV_partial = kcg_false;
      _82_gears_maneuvering_partial = kcg_false;
      _90_SM1_fired_partial = outC->SM1_fired_strong;
      _89_SM1_reset_nxt_partial = kcg_false;
      _88_SM1_state_nxt_partial = SSM_st_Close_doors_SM1;
      outC->gears_maneuvering = _82_gears_maneuvering_partial;
      outC->general_EV = _83_general_EV_partial;
      outC->open_EV = _84_open_EV_partial;
      outC->close_EV = _85_close_EV_partial;
      outC->extend_EV = _86_extend_EV_partial;
      outC->retract_EV = _87_retract_EV_partial;
      outC->SM1_state_nxt = _88_SM1_state_nxt_partial;
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      _78_retract_EV_partial = kcg_false;
      _74_general_EV_partial = kcg_false;
      _73_gears_maneuvering_partial = kcg_false;
      _81_SM1_fired_partial = outC->SM1_fired_strong;
      _80_SM1_reset_nxt_partial = kcg_false;
      _79_SM1_state_nxt_partial = SSM_st_gears_extended_and_close_doors_smi_SM1;
      outC->_L3_gears_extended_and_close_doors_smi_SM1 = kcg_true;
      outC->_L2_gears_extended_and_close_doors_smi_SM1 = kcg_false;
      outC->_L1_gears_extended_and_close_doors_smi_SM1 = kcg_false;
      _76_close_EV_partial = outC->_L3_gears_extended_and_close_doors_smi_SM1;
      _75_open_EV_partial = outC->_L2_gears_extended_and_close_doors_smi_SM1;
      _77_extend_EV_partial = outC->_L1_gears_extended_and_close_doors_smi_SM1;
      outC->gears_maneuvering = _73_gears_maneuvering_partial;
      outC->general_EV = _74_general_EV_partial;
      outC->open_EV = _75_open_EV_partial;
      outC->close_EV = _76_close_EV_partial;
      outC->extend_EV = _77_extend_EV_partial;
      outC->retract_EV = _78_retract_EV_partial;
      outC->SM1_state_nxt = _79_SM1_state_nxt_partial;
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      _68_extend_EV_partial = kcg_false;
      _65_general_EV_partial = kcg_false;
      _64_gears_maneuvering_partial = kcg_false;
      _72_SM1_fired_partial = outC->SM1_fired_strong;
      _71_SM1_reset_nxt_partial = kcg_false;
      _70_SM1_state_nxt_partial = SSM_st_gears_retract_and_close_doors_smi_SM1;
      outC->_L3_gears_retract_and_close_doors_smi_SM1 = kcg_true;
      _67_close_EV_partial = outC->_L3_gears_retract_and_close_doors_smi_SM1;
      outC->_L2_gears_retract_and_close_doors_smi_SM1 = kcg_false;
      _66_open_EV_partial = outC->_L2_gears_retract_and_close_doors_smi_SM1;
      outC->_L1_gears_retract_and_close_doors_smi_SM1 = kcg_false;
      _69_retract_EV_partial = outC->_L1_gears_retract_and_close_doors_smi_SM1;
      outC->gears_maneuvering = _64_gears_maneuvering_partial;
      outC->general_EV = _65_general_EV_partial;
      outC->open_EV = _66_open_EV_partial;
      outC->close_EV = _67_close_EV_partial;
      outC->extend_EV = _68_extend_EV_partial;
      outC->retract_EV = _69_retract_EV_partial;
      outC->SM1_state_nxt = _70_SM1_state_nxt_partial;
      break;
    case SSM_st_Extend_gears_SM1 :
      _60_retract_EV_partial = kcg_false;
      _59_extend_EV_partial = kcg_false;
      _58_close_EV_partial = kcg_false;
      _57_open_EV_partial = kcg_false;
      _56_general_EV_partial = kcg_false;
      _55_gears_maneuvering_partial = kcg_false;
      _63_SM1_fired_partial = outC->SM1_fired_strong;
      _62_SM1_reset_nxt_partial = kcg_false;
      _61_SM1_state_nxt_partial = SSM_st_Extend_gears_SM1;
      outC->gears_maneuvering = _55_gears_maneuvering_partial;
      outC->general_EV = _56_general_EV_partial;
      outC->open_EV = _57_open_EV_partial;
      outC->close_EV = _58_close_EV_partial;
      outC->extend_EV = _59_extend_EV_partial;
      outC->retract_EV = _60_retract_EV_partial;
      outC->SM1_state_nxt = _61_SM1_state_nxt_partial;
      break;
    case SSM_st_Retract_gears_SM1 :
      _51_retract_EV_partial = kcg_false;
      _50_extend_EV_partial = kcg_false;
      _49_close_EV_partial = kcg_false;
      _48_open_EV_partial = kcg_false;
      _47_general_EV_partial = kcg_false;
      _46_gears_maneuvering_partial = kcg_false;
      _54_SM1_fired_partial = outC->SM1_fired_strong;
      _53_SM1_reset_nxt_partial = kcg_false;
      _52_SM1_state_nxt_partial = SSM_st_Retract_gears_SM1;
      outC->gears_maneuvering = _46_gears_maneuvering_partial;
      outC->general_EV = _47_general_EV_partial;
      outC->open_EV = _48_open_EV_partial;
      outC->close_EV = _49_close_EV_partial;
      outC->extend_EV = _50_extend_EV_partial;
      outC->retract_EV = _51_retract_EV_partial;
      outC->SM1_state_nxt = _52_SM1_state_nxt_partial;
      break;
    case SSM_st_extend_EV_smi_SM1 :
      _42_retract_EV_partial = kcg_false;
      _40_close_EV_partial = kcg_false;
      _39_open_EV_partial = kcg_false;
      _38_general_EV_partial = kcg_false;
      _37_gears_maneuvering_partial = kcg_false;
      _45_SM1_fired_partial = outC->SM1_fired_strong;
      _44_SM1_reset_nxt_partial = kcg_false;
      _43_SM1_state_nxt_partial = SSM_st_extend_EV_smi_SM1;
      outC->_L1_extend_EV_smi_SM1 = kcg_true;
      _41_extend_EV_partial = outC->_L1_extend_EV_smi_SM1;
      outC->gears_maneuvering = _37_gears_maneuvering_partial;
      outC->general_EV = _38_general_EV_partial;
      outC->open_EV = _39_open_EV_partial;
      outC->close_EV = _40_close_EV_partial;
      outC->extend_EV = _41_extend_EV_partial;
      outC->retract_EV = _42_retract_EV_partial;
      outC->SM1_state_nxt = _43_SM1_state_nxt_partial;
      break;
    case SSM_st_retract_EV_smi_SM1 :
      _32_extend_EV_partial = kcg_false;
      _31_close_EV_partial = kcg_false;
      _30_open_EV_partial = kcg_false;
      _29_general_EV_partial = kcg_false;
      _28_gears_maneuvering_partial = kcg_false;
      _36_SM1_fired_partial = outC->SM1_fired_strong;
      _35_SM1_reset_nxt_partial = kcg_false;
      _34_SM1_state_nxt_partial = SSM_st_retract_EV_smi_SM1;
      outC->_L1_retract_EV_smi_SM1 = kcg_true;
      _33_retract_EV_partial = outC->_L1_retract_EV_smi_SM1;
      outC->gears_maneuvering = _28_gears_maneuvering_partial;
      outC->general_EV = _29_general_EV_partial;
      outC->open_EV = _30_open_EV_partial;
      outC->close_EV = _31_close_EV_partial;
      outC->extend_EV = _32_extend_EV_partial;
      outC->retract_EV = _33_retract_EV_partial;
      outC->SM1_state_nxt = _34_SM1_state_nxt_partial;
      break;
    case SSM_st_Open_door_SM1 :
      _24_retract_EV_partial = kcg_false;
      _23_extend_EV_partial = kcg_false;
      _22_close_EV_partial = kcg_false;
      _21_open_EV_partial = kcg_false;
      _20_general_EV_partial = kcg_false;
      _19_gears_maneuvering_partial = kcg_false;
      _27_SM1_fired_partial = outC->SM1_fired_strong;
      _26_SM1_reset_nxt_partial = kcg_false;
      _25_SM1_state_nxt_partial = SSM_st_Open_door_SM1;
      outC->gears_maneuvering = _19_gears_maneuvering_partial;
      outC->general_EV = _20_general_EV_partial;
      outC->open_EV = _21_open_EV_partial;
      outC->close_EV = _22_close_EV_partial;
      outC->extend_EV = _23_extend_EV_partial;
      outC->retract_EV = _24_retract_EV_partial;
      outC->SM1_state_nxt = _25_SM1_state_nxt_partial;
      break;
    case SSM_st_open_EV_smi_SM1 :
      _15_retract_EV_partial = kcg_false;
      _14_extend_EV_partial = kcg_false;
      _13_close_EV_partial = kcg_false;
      _11_general_EV_partial = kcg_false;
      _18_SM1_fired_partial = outC->SM1_fired_strong;
      _17_SM1_reset_nxt_partial = kcg_false;
      _16_SM1_state_nxt_partial = SSM_st_open_EV_smi_SM1;
      outC->_L2_open_EV_smi_SM1 = kcg_true;
      _10_gears_maneuvering_partial = outC->_L2_open_EV_smi_SM1;
      outC->_L1_open_EV_smi_SM1 = kcg_true;
      _12_open_EV_partial = outC->_L1_open_EV_smi_SM1;
      outC->gears_maneuvering = _10_gears_maneuvering_partial;
      outC->general_EV = _11_general_EV_partial;
      outC->open_EV = _12_open_EV_partial;
      outC->close_EV = _13_close_EV_partial;
      outC->extend_EV = _14_extend_EV_partial;
      outC->retract_EV = _15_retract_EV_partial;
      outC->SM1_state_nxt = _16_SM1_state_nxt_partial;
      break;
    case SSM_st_general_EV_sim_SM1 :
      _6_retract_EV_partial = kcg_false;
      _5_extend_EV_partial = kcg_false;
      _4_close_EV_partial = kcg_false;
      _3_open_EV_partial = kcg_false;
      _1_gears_maneuvering_partial = kcg_false;
      _9_SM1_fired_partial = outC->SM1_fired_strong;
      _8_SM1_reset_nxt_partial = kcg_false;
      _7_SM1_state_nxt_partial = SSM_st_general_EV_sim_SM1;
      outC->_L1_general_EV_sim_SM1 = kcg_true;
      _2_general_EV_partial = outC->_L1_general_EV_sim_SM1;
      outC->gears_maneuvering = _1_gears_maneuvering_partial;
      outC->general_EV = _2_general_EV_partial;
      outC->open_EV = _3_open_EV_partial;
      outC->close_EV = _4_close_EV_partial;
      outC->extend_EV = _5_extend_EV_partial;
      outC->retract_EV = _6_retract_EV_partial;
      outC->SM1_state_nxt = _7_SM1_state_nxt_partial;
      break;
    case SSM_st_initialization_SM1 :
      retract_EV_partial = kcg_false;
      extend_EV_partial = kcg_false;
      close_EV_partial = kcg_false;
      open_EV_partial = kcg_false;
      general_EV_partial = kcg_false;
      gears_maneuvering_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_initialization_SM1;
      outC->gears_maneuvering = gears_maneuvering_partial;
      outC->general_EV = general_EV_partial;
      outC->open_EV = open_EV_partial;
      outC->close_EV = close_EV_partial;
      outC->extend_EV = extend_EV_partial;
      outC->retract_EV = retract_EV_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_general_EV_stop_SM1 :
      outC->SM1_reset_nxt = _116_SM1_reset_nxt_partial;
      outC->SM1_fired = _117_SM1_fired_partial;
      break;
    case SSM_st_general_EV_END_SM1 :
      outC->SM1_reset_nxt = _107_SM1_reset_nxt_partial;
      outC->SM1_fired = _108_SM1_fired_partial;
      break;
    case SSM_st_all_door_closed_SM1 :
      outC->SM1_reset_nxt = _98_SM1_reset_nxt_partial;
      outC->SM1_fired = _99_SM1_fired_partial;
      break;
    case SSM_st_Close_doors_SM1 :
      outC->SM1_reset_nxt = _89_SM1_reset_nxt_partial;
      outC->SM1_fired = _90_SM1_fired_partial;
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      outC->SM1_reset_nxt = _80_SM1_reset_nxt_partial;
      outC->SM1_fired = _81_SM1_fired_partial;
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      outC->SM1_reset_nxt = _71_SM1_reset_nxt_partial;
      outC->SM1_fired = _72_SM1_fired_partial;
      break;
    case SSM_st_Extend_gears_SM1 :
      outC->SM1_reset_nxt = _62_SM1_reset_nxt_partial;
      outC->SM1_fired = _63_SM1_fired_partial;
      break;
    case SSM_st_Retract_gears_SM1 :
      outC->SM1_reset_nxt = _53_SM1_reset_nxt_partial;
      outC->SM1_fired = _54_SM1_fired_partial;
      break;
    case SSM_st_extend_EV_smi_SM1 :
      outC->SM1_reset_nxt = _44_SM1_reset_nxt_partial;
      outC->SM1_fired = _45_SM1_fired_partial;
      break;
    case SSM_st_retract_EV_smi_SM1 :
      outC->SM1_reset_nxt = _35_SM1_reset_nxt_partial;
      outC->SM1_fired = _36_SM1_fired_partial;
      break;
    case SSM_st_Open_door_SM1 :
      outC->SM1_reset_nxt = _26_SM1_reset_nxt_partial;
      outC->SM1_fired = _27_SM1_fired_partial;
      break;
    case SSM_st_open_EV_smi_SM1 :
      outC->SM1_reset_nxt = _17_SM1_reset_nxt_partial;
      outC->SM1_fired = _18_SM1_fired_partial;
      break;
    case SSM_st_general_EV_sim_SM1 :
      outC->SM1_reset_nxt = _8_SM1_reset_nxt_partial;
      outC->SM1_fired = _9_SM1_fired_partial;
      break;
    case SSM_st_initialization_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_general_EV_stop_SM1 :
      _155_SM1_reset_act_partial = tr_1_guard_general_EV_stop_SM1;
      outC->SM1_reset_act = _155_SM1_reset_act_partial;
      break;
    case SSM_st_general_EV_END_SM1 :
      _152_SM1_reset_act_partial = tr_1_guard_general_EV_END_SM1;
      outC->SM1_reset_act = _152_SM1_reset_act_partial;
      outC->init7 = kcg_false;
      break;
    case SSM_st_all_door_closed_SM1 :
      _149_SM1_reset_act_partial = tr_1_guard_all_door_closed_SM1;
      outC->SM1_reset_act = _149_SM1_reset_act_partial;
      outC->init6 = kcg_false;
      break;
    case SSM_st_Close_doors_SM1 :
      _146_SM1_reset_act_partial = tr_1_guard_Close_doors_SM1;
      outC->SM1_reset_act = _146_SM1_reset_act_partial;
      break;
    case SSM_st_gears_extended_and_close_doors_smi_SM1 :
      _143_SM1_reset_act_partial = tr_1_guard_gears_extended_and_close_doors_smi_SM1;
      outC->SM1_reset_act = _143_SM1_reset_act_partial;
      outC->init5 = kcg_false;
      break;
    case SSM_st_gears_retract_and_close_doors_smi_SM1 :
      _140_SM1_reset_act_partial = tr_1_guard_gears_retract_and_close_doors_smi_SM1;
      outC->SM1_reset_act = _140_SM1_reset_act_partial;
      outC->init4 = kcg_false;
      break;
    case SSM_st_Extend_gears_SM1 :
      _137_SM1_reset_act_partial = tr_1_guard_Extend_gears_SM1;
      outC->SM1_reset_act = _137_SM1_reset_act_partial;
      break;
    case SSM_st_Retract_gears_SM1 :
      _134_SM1_reset_act_partial = tr_1_guard_Retract_gears_SM1;
      outC->SM1_reset_act = _134_SM1_reset_act_partial;
      break;
    case SSM_st_extend_EV_smi_SM1 :
      _131_SM1_reset_act_partial = tr_1_guard_extend_EV_smi_SM1;
      outC->SM1_reset_act = _131_SM1_reset_act_partial;
      outC->init3 = kcg_false;
      break;
    case SSM_st_retract_EV_smi_SM1 :
      _128_SM1_reset_act_partial = tr_1_guard_retract_EV_smi_SM1;
      outC->SM1_reset_act = _128_SM1_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Open_door_SM1 :
      if (tr_1_guard_Open_door_SM1) {
        _125_SM1_reset_act_partial = kcg_true;
      }
      else {
        _125_SM1_reset_act_partial = tr_2_guard_Open_door_SM1;
      }
      outC->SM1_reset_act = _125_SM1_reset_act_partial;
      break;
    case SSM_st_open_EV_smi_SM1 :
      _122_SM1_reset_act_partial = tr_1_guard_open_EV_smi_SM1;
      outC->SM1_reset_act = _122_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_general_EV_sim_SM1 :
      if (tr_1_guard_general_EV_sim_SM1) {
        _119_SM1_reset_act_partial = kcg_true;
      }
      else {
        _119_SM1_reset_act_partial = tr_2_guard_general_EV_sim_SM1;
      }
      outC->SM1_reset_act = _119_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_initialization_SM1 :
      SM1_reset_act_partial = tr_1_guard_initialization_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Compute_logical_init(outC_Compute_logical *outC)
{
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->analogical_switch = kcg_true;
  outC->all_gears_absorber = kcg_true;
  outC->all_gears_retracted_true = kcg_true;
  outC->all_gears_extended_true = kcg_true;
  outC->all_doors_closed_true = kcg_true;
  outC->all_doors_open_true = kcg_true;
  outC->SM1_fired = _24_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _24_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_initialization_SM1;
  outC->SM1_state_sel = SSM_st_initialization_SM1;
  outC->_L1_general_EV_stop_SM1 = kcg_true;
  outC->_L1_all_door_closed_SM1 = kcg_true;
  outC->_L2_all_door_closed_SM1 = kcg_true;
  outC->_L1_gears_extended_and_close_doors_smi_SM1 = kcg_true;
  outC->_L2_gears_extended_and_close_doors_smi_SM1 = kcg_true;
  outC->_L3_gears_extended_and_close_doors_smi_SM1 = kcg_true;
  outC->_L1_gears_retract_and_close_doors_smi_SM1 = kcg_true;
  outC->_L2_gears_retract_and_close_doors_smi_SM1 = kcg_true;
  outC->_L3_gears_retract_and_close_doors_smi_SM1 = kcg_true;
  outC->_L1_extend_EV_smi_SM1 = kcg_true;
  outC->_L1_retract_EV_smi_SM1 = kcg_true;
  outC->_L1_open_EV_smi_SM1 = kcg_true;
  outC->_L2_open_EV_smi_SM1 = kcg_true;
  outC->_L1_general_EV_sim_SM1 = kcg_true;
  outC->v4_times_8_size = 0;
  outC->n_times_8_size = 0;
  outC->c_times_8_size = kcg_true;
  outC->o_times_8_size = kcg_true;
  outC->v4_times_7_size = 0;
  outC->n_times_7_size = 0;
  outC->c_times_7_size = kcg_true;
  outC->o_times_7_size = kcg_true;
  outC->v4_times_5_size = 0;
  outC->n_times_5_size = 0;
  outC->c_times_5_size = kcg_true;
  outC->o_times_5_size = kcg_true;
  outC->v4_times_6_size = 0;
  outC->n_times_6_size = 0;
  outC->c_times_6_size = kcg_true;
  outC->o_times_6_size = kcg_true;
  outC->v4_times_4_size = 0;
  outC->n_times_4_size = 0;
  outC->c_times_4_size = kcg_true;
  outC->o_times_4_size = kcg_true;
  outC->v4_times_3_size = 0;
  outC->n_times_3_size = 0;
  outC->c_times_3_size = kcg_true;
  outC->o_times_3_size = kcg_true;
  outC->v4_times_2_size = 0;
  outC->n_times_2_size = 0;
  outC->c_times_2_size = kcg_true;
  outC->o_times_2_size = kcg_true;
  outC->v4_times_1_size = 0;
  outC->n_times_1_size = 0;
  outC->c_times_1_size = kcg_true;
  outC->o_times_1_size = kcg_true;
  outC->v3_times_8_size = 0;
  outC->v3_times_7_size = 0;
  outC->v3_times_5_size = 0;
  outC->v3_times_6_size = 0;
  outC->v3_times_4_size = 0;
  outC->v3_times_3_size = 0;
  outC->v3_times_2_size = 0;
  outC->v3_times_1_size = 0;
  outC->init7 = kcg_true;
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->retract_EV = kcg_true;
  outC->extend_EV = kcg_true;
  outC->close_EV = kcg_true;
  outC->open_EV = kcg_true;
  outC->general_EV = kcg_true;
  outC->gears_maneuvering = kcg_true;
  outC->gear_locked_down = kcg_true;
  /* _L32=(Handle_control#2)/ */
  Handle_control_init(&outC->Context_Handle_control_2);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_initialization_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Compute_logical_reset(outC_Compute_logical *outC)
{
  outC->init7 = kcg_true;
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* _L32=(Handle_control#2)/ */
  Handle_control_reset(&outC->Context_Handle_control_2);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_initialization_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Compute_logical/
  @8: (times#8)
  @7: (times#7)
  @6: (times#5)
  @5: (times#6)
  @4: (times#4)
  @3: (times#3)
  @2: (times#2)
  @1: (times#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Compute_logical.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

