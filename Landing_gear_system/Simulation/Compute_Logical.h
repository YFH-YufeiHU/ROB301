/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _Compute_logical_H_
#define _Compute_logical_H_

#include "kcg_types.h"
#include "Handle_control.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* gear_locked_down/ */ gear_locked_down;
  kcg_bool /* gears_maneuvering/ */ gears_maneuvering;
  kcg_bool /* general_EV/ */ general_EV;
  kcg_bool /* open_EV/ */ open_EV;
  kcg_bool /* close_EV/ */ close_EV;
  kcg_bool /* extend_EV/ */ extend_EV;
  kcg_bool /* retract_EV/ */ retract_EV;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_bool init5;
  kcg_bool init6;
  kcg_bool init7;
  kcg_size /* @1/_/v3/ */ v3_times_1_size;
  kcg_size /* @2/_/v3/ */ v3_times_2_size;
  kcg_size /* @3/_/v3/ */ v3_times_3_size;
  kcg_size /* @4/_/v3/ */ v3_times_4_size;
  kcg_size /* @5/_/v3/ */ v3_times_6_size;
  kcg_size /* @6/_/v3/ */ v3_times_5_size;
  kcg_size /* @7/_/v3/ */ v3_times_7_size;
  kcg_size /* @8/_/v3/ */ v3_times_8_size;
  _20_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Handle_control /* _L32=(Handle_control#2)/ */ Context_Handle_control_2;
  /* ------------------ clocks of observable data -------------------- */
  _20_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _20_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_size;
  kcg_bool /* @1/_/c/ */ c_times_1_size;
  kcg_size /* @1/_/n/ */ n_times_1_size;
  kcg_size /* @1/_/v4/ */ v4_times_1_size;
  kcg_bool /* @2/_/o/ */ o_times_2_size;
  kcg_bool /* @2/_/c/ */ c_times_2_size;
  kcg_size /* @2/_/n/ */ n_times_2_size;
  kcg_size /* @2/_/v4/ */ v4_times_2_size;
  kcg_bool /* @3/_/o/ */ o_times_3_size;
  kcg_bool /* @3/_/c/ */ c_times_3_size;
  kcg_size /* @3/_/n/ */ n_times_3_size;
  kcg_size /* @3/_/v4/ */ v4_times_3_size;
  kcg_bool /* @4/_/o/ */ o_times_4_size;
  kcg_bool /* @4/_/c/ */ c_times_4_size;
  kcg_size /* @4/_/n/ */ n_times_4_size;
  kcg_size /* @4/_/v4/ */ v4_times_4_size;
  kcg_bool /* @5/_/o/ */ o_times_6_size;
  kcg_bool /* @5/_/c/ */ c_times_6_size;
  kcg_size /* @5/_/n/ */ n_times_6_size;
  kcg_size /* @5/_/v4/ */ v4_times_6_size;
  kcg_bool /* @6/_/o/ */ o_times_5_size;
  kcg_bool /* @6/_/c/ */ c_times_5_size;
  kcg_size /* @6/_/n/ */ n_times_5_size;
  kcg_size /* @6/_/v4/ */ v4_times_5_size;
  kcg_bool /* @7/_/o/ */ o_times_7_size;
  kcg_bool /* @7/_/c/ */ c_times_7_size;
  kcg_size /* @7/_/n/ */ n_times_7_size;
  kcg_size /* @7/_/v4/ */ v4_times_7_size;
  kcg_bool /* @8/_/o/ */ o_times_8_size;
  kcg_bool /* @8/_/c/ */ c_times_8_size;
  kcg_size /* @8/_/n/ */ n_times_8_size;
  kcg_size /* @8/_/v4/ */ v4_times_8_size;
  kcg_bool /* SM1:general_EV_sim:_L1/ */ _L1_general_EV_sim_SM1;
  kcg_bool /* SM1:open_EV_smi:_L2/ */ _L2_open_EV_smi_SM1;
  kcg_bool /* SM1:open_EV_smi:_L1/ */ _L1_open_EV_smi_SM1;
  kcg_bool /* SM1:retract_EV_smi:_L1/ */ _L1_retract_EV_smi_SM1;
  kcg_bool /* SM1:extend_EV_smi:_L1/ */ _L1_extend_EV_smi_SM1;
  kcg_bool /* SM1:gears_retract_and_close_doors_smi:_L3/ */ _L3_gears_retract_and_close_doors_smi_SM1;
  kcg_bool /* SM1:gears_retract_and_close_doors_smi:_L2/ */ _L2_gears_retract_and_close_doors_smi_SM1;
  kcg_bool /* SM1:gears_retract_and_close_doors_smi:_L1/ */ _L1_gears_retract_and_close_doors_smi_SM1;
  kcg_bool /* SM1:gears_extended_and_close_doors_smi:_L3/ */ _L3_gears_extended_and_close_doors_smi_SM1;
  kcg_bool /* SM1:gears_extended_and_close_doors_smi:_L2/ */ _L2_gears_extended_and_close_doors_smi_SM1;
  kcg_bool /* SM1:gears_extended_and_close_doors_smi:_L1/ */ _L1_gears_extended_and_close_doors_smi_SM1;
  kcg_bool /* SM1:all_door_closed:_L2/ */ _L2_all_door_closed_SM1;
  kcg_bool /* SM1:all_door_closed:_L1/ */ _L1_all_door_closed_SM1;
  kcg_bool /* SM1:general_EV_stop:_L1/ */ _L1_general_EV_stop_SM1;
  _21_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _21_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* all_doors_open_true/ */ all_doors_open_true;
  kcg_bool /* all_doors_closed_true/ */ all_doors_closed_true;
  kcg_bool /* all_gears_extended_true/ */ all_gears_extended_true;
  kcg_bool /* all_gears_retracted_true/ */ all_gears_retracted_true;
  kcg_bool /* all_gears_absorber/ */ all_gears_absorber;
  kcg_bool /* analogical_switch/ */ analogical_switch;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
} outC_Compute_logical;

/* ===========  node initialization and cycle functions  =========== */
/* Compute_logical/ */
extern void Compute_logical(
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
  outC_Compute_logical *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Compute_logical_reset(outC_Compute_logical *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Compute_logical_init(outC_Compute_logical *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Compute_logical/
  @1: (times#1)
  @2: (times#2)
  @3: (times#3)
  @4: (times#4)
  @5: (times#6)
  @6: (times#5)
  @7: (times#7)
  @8: (times#8)
*/

#endif /* _Compute_logical_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Compute_logical.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

