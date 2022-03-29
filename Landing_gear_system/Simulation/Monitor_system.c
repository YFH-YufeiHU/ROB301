/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Monitor_system.h"

/* Monitor_system/ */
void Monitor_system(
  /* door_closed_front/ */
  kcg_bool door_closed_front,
  /* door_closed_left/ */
  kcg_bool door_closed_left,
  /* door_closed_right/ */
  kcg_bool door_closed_right,
  /* door_opened_front/ */
  kcg_bool door_opened_front,
  /* door_opened_left/ */
  kcg_bool door_opened_left,
  /* door_opened_right/ */
  kcg_bool door_opened_right,
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
  /* circuit_pressurized/ */
  kcg_bool circuit_pressurized,
  /* general_EV/ */
  kcg_bool general_EV,
  /* open_EV/ */
  kcg_bool open_EV,
  /* close_EV/ */
  kcg_bool close_EV,
  /* extend_EV/ */
  kcg_bool extend_EV,
  /* retract_EV/ */
  kcg_bool retract_EV,
  outC_Monitor_system *outC)
{
  outC->_L31 = general_EV;
  outC->_L32 = circuit_pressurized;
  /* _L30=(C10_general_EV_circuit_pressurized_low2high#1)/ */
  C10_general_EV_circuit_pr(
    outC->_L31,
    outC->_L32,
    &outC->Context_C10_general_EV_circuit_pressurized_low2high_1);
  outC->_L30 =
    outC->Context_C10_general_EV_circuit_pressurized_low2high_1.anomaly;
  /* _L29=(C9_general_EV_circuit_pressurized_high2low#1)/ */
  C9_general_EV_circuit_pre(
    outC->_L31,
    outC->_L32,
    &outC->Context_C9_general_EV_circuit_pressurized_high2low_1);
  outC->_L29 = outC->Context_C9_general_EV_circuit_pressurized_high2low_1.anomaly;
  outC->_L33 = outC->_L29 | outC->_L30;
  outC->_L25 = gear_extended_front;
  outC->_L26 = gear_extended_left;
  outC->_L27 = gear_extended_right;
  outC->_L24 = retract_EV;
  /* _L19=(C8_retract_EV_sensors_gear_extended#1)/ */
  C8_retract_EV_sensors_gea(
    outC->_L25,
    outC->_L26,
    outC->_L27,
    outC->_L24,
    &outC->Context_C8_retract_EV_sensors_gear_extended_1);
  outC->_L19 = outC->Context_C8_retract_EV_sensors_gear_extended_1.anomaly;
  outC->_L20 = gear_retracted_front;
  outC->_L21 = gear_retracted_left;
  outC->_L22 = gear_retracted_right;
  /* _L18=(C7_retract_EV_sensors_gear_retracted#1)/ */
  C7_retract_EV_sensors_gea(
    outC->_L20,
    outC->_L21,
    outC->_L22,
    outC->_L24,
    &outC->Context_C7_retract_EV_sensors_gear_retracted_1);
  outC->_L18 = outC->Context_C7_retract_EV_sensors_gear_retracted_1.anomaly;
  outC->_L23 = extend_EV;
  /* _L17=(C6_extend_EV_sensors_gear_extended#1)/ */
  C6_extend_EV_sensors_gear(
    outC->_L25,
    outC->_L26,
    outC->_L27,
    outC->_L23,
    &outC->Context_C6_extend_EV_sensors_gear_extended_1);
  outC->_L17 = outC->Context_C6_extend_EV_sensors_gear_extended_1.anomaly;
  /* _L16=(C5_extend_EV_sensors_gear_retracted#1)/ */
  C5_extend_EV_sensors_gear(
    outC->_L20,
    outC->_L21,
    outC->_L22,
    outC->_L23,
    &outC->Context_C5_extend_EV_sensors_gear_retracted_1);
  outC->_L16 = outC->Context_C5_extend_EV_sensors_gear_retracted_1.anomaly;
  outC->_L28 = outC->_L16 | outC->_L17 | outC->_L18 | outC->_L19;
  outC->_L4 = door_opened_front;
  outC->_L5 = door_opened_left;
  outC->_L6 = door_opened_right;
  outC->_L12 = close_EV;
  /* _L10=(C4_close_EV_sensors_door_opened#1)/ */
  C4_close_EV_sensors_door_(
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L12,
    &outC->Context_C4_close_EV_sensors_door_opened_1);
  outC->_L10 = outC->Context_C4_close_EV_sensors_door_opened_1.anomaly;
  outC->_L1 = door_closed_front;
  outC->_L2 = door_closed_left;
  outC->_L3 = door_closed_right;
  /* _L9=(C3_close_EV_sensors_door_closed#1)/ */
  C3_close_EV_sensors_door_(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L12,
    &outC->Context_C3_close_EV_sensors_door_closed_1);
  outC->_L9 = outC->Context_C3_close_EV_sensors_door_closed_1.anomaly;
  outC->_L11 = open_EV;
  /* _L8=(C2_open_EV_sensors_door_opened#1)/ */
  C2_open_EV_sensors_door_o(
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L11,
    &outC->Context_C2_open_EV_sensors_door_opened_1);
  outC->_L8 = outC->Context_C2_open_EV_sensors_door_opened_1.anomaly;
  /* _L7=(C1_open_EV_sensors_door_closed#1)/ */
  C1_open_EV_sensors_door_c(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L11,
    &outC->Context_C1_open_EV_sensors_door_closed_1);
  outC->_L7 = outC->Context_C1_open_EV_sensors_door_closed_1.anomaly;
  outC->_L15 = outC->_L7 | outC->_L8 | outC->_L9 | outC->_L10;
  outC->_L34 = outC->_L15 | outC->_L28 | outC->_L33;
  outC->anomaly = outC->_L34;
}

#ifndef KCG_USER_DEFINED_INIT
void Monitor_system_init(outC_Monitor_system *outC)
{
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->anomaly = kcg_true;
  /* _L7=(C1_open_EV_sensors_door_closed#1)/ */
  C1_open_EV_sensors_door_c_init(
    &outC->Context_C1_open_EV_sensors_door_closed_1);
  /* _L8=(C2_open_EV_sensors_door_opened#1)/ */
  C2_open_EV_sensors_door_o_init(
    &outC->Context_C2_open_EV_sensors_door_opened_1);
  /* _L9=(C3_close_EV_sensors_door_closed#1)/ */
  C3_close_EV_sensors_door__init(
    &outC->Context_C3_close_EV_sensors_door_closed_1);
  /* _L10=(C4_close_EV_sensors_door_opened#1)/ */
  C4_close_EV_sensors_door__init(
    &outC->Context_C4_close_EV_sensors_door_opened_1);
  /* _L16=(C5_extend_EV_sensors_gear_retracted#1)/ */
  C5_extend_EV_sensors_gear_init(
    &outC->Context_C5_extend_EV_sensors_gear_retracted_1);
  /* _L17=(C6_extend_EV_sensors_gear_extended#1)/ */
  C6_extend_EV_sensors_gear_init(
    &outC->Context_C6_extend_EV_sensors_gear_extended_1);
  /* _L18=(C7_retract_EV_sensors_gear_retracted#1)/ */
  C7_retract_EV_sensors_gea_init(
    &outC->Context_C7_retract_EV_sensors_gear_retracted_1);
  /* _L19=(C8_retract_EV_sensors_gear_extended#1)/ */
  C8_retract_EV_sensors_gea_init(
    &outC->Context_C8_retract_EV_sensors_gear_extended_1);
  /* _L29=(C9_general_EV_circuit_pressurized_high2low#1)/ */
  C9_general_EV_circuit_pre_init(
    &outC->Context_C9_general_EV_circuit_pressurized_high2low_1);
  /* _L30=(C10_general_EV_circuit_pressurized_low2high#1)/ */
  C10_general_EV_circuit_pr_init(
    &outC->Context_C10_general_EV_circuit_pressurized_low2high_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Monitor_system_reset(outC_Monitor_system *outC)
{
  /* _L7=(C1_open_EV_sensors_door_closed#1)/ */
  C1_open_EV_sensors_door_c_reset(
    &outC->Context_C1_open_EV_sensors_door_closed_1);
  /* _L8=(C2_open_EV_sensors_door_opened#1)/ */
  C2_open_EV_sensors_door_o_reset(
    &outC->Context_C2_open_EV_sensors_door_opened_1);
  /* _L9=(C3_close_EV_sensors_door_closed#1)/ */
  C3_close_EV_sensors_door__reset(
    &outC->Context_C3_close_EV_sensors_door_closed_1);
  /* _L10=(C4_close_EV_sensors_door_opened#1)/ */
  C4_close_EV_sensors_door__reset(
    &outC->Context_C4_close_EV_sensors_door_opened_1);
  /* _L16=(C5_extend_EV_sensors_gear_retracted#1)/ */
  C5_extend_EV_sensors_gear_reset(
    &outC->Context_C5_extend_EV_sensors_gear_retracted_1);
  /* _L17=(C6_extend_EV_sensors_gear_extended#1)/ */
  C6_extend_EV_sensors_gear_reset(
    &outC->Context_C6_extend_EV_sensors_gear_extended_1);
  /* _L18=(C7_retract_EV_sensors_gear_retracted#1)/ */
  C7_retract_EV_sensors_gea_reset(
    &outC->Context_C7_retract_EV_sensors_gear_retracted_1);
  /* _L19=(C8_retract_EV_sensors_gear_extended#1)/ */
  C8_retract_EV_sensors_gea_reset(
    &outC->Context_C8_retract_EV_sensors_gear_extended_1);
  /* _L29=(C9_general_EV_circuit_pressurized_high2low#1)/ */
  C9_general_EV_circuit_pre_reset(
    &outC->Context_C9_general_EV_circuit_pressurized_high2low_1);
  /* _L30=(C10_general_EV_circuit_pressurized_low2high#1)/ */
  C10_general_EV_circuit_pr_reset(
    &outC->Context_C10_general_EV_circuit_pressurized_low2high_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Monitor_system.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

