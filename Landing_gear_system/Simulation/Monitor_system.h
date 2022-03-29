/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _Monitor_system_H_
#define _Monitor_system_H_

#include "kcg_types.h"
#include "C10_general_EV_circuit_pr.h"
#include "C9_general_EV_circuit_pre.h"
#include "C8_retract_EV_sensors_gea.h"
#include "C7_retract_EV_sensors_gea.h"
#include "C6_extend_EV_sensors_gear.h"
#include "C5_extend_EV_sensors_gear.h"
#include "C4_close_EV_sensors_door_.h"
#include "C3_close_EV_sensors_door_.h"
#include "C2_open_EV_sensors_door_o.h"
#include "C1_open_EV_sensors_door_c.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* anomaly/ */ anomaly;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C1_open_EV_sensors_door_c /* _L7=(C1_open_EV_sensors_door_closed#1)/ */ Context_C1_open_EV_sensors_door_closed_1;
  outC_C2_open_EV_sensors_door_o /* _L8=(C2_open_EV_sensors_door_opened#1)/ */ Context_C2_open_EV_sensors_door_opened_1;
  outC_C3_close_EV_sensors_door_ /* _L9=(C3_close_EV_sensors_door_closed#1)/ */ Context_C3_close_EV_sensors_door_closed_1;
  outC_C4_close_EV_sensors_door_ /* _L10=(C4_close_EV_sensors_door_opened#1)/ */ Context_C4_close_EV_sensors_door_opened_1;
  outC_C5_extend_EV_sensors_gear /* _L16=(C5_extend_EV_sensors_gear_retracted#1)/ */ Context_C5_extend_EV_sensors_gear_retracted_1;
  outC_C6_extend_EV_sensors_gear /* _L17=(C6_extend_EV_sensors_gear_extended#1)/ */ Context_C6_extend_EV_sensors_gear_extended_1;
  outC_C7_retract_EV_sensors_gea /* _L18=(C7_retract_EV_sensors_gear_retracted#1)/ */ Context_C7_retract_EV_sensors_gear_retracted_1;
  outC_C8_retract_EV_sensors_gea /* _L19=(C8_retract_EV_sensors_gear_extended#1)/ */ Context_C8_retract_EV_sensors_gear_extended_1;
  outC_C9_general_EV_circuit_pre /* _L29=(C9_general_EV_circuit_pressurized_high2low#1)/ */ Context_C9_general_EV_circuit_pressurized_high2low_1;
  outC_C10_general_EV_circuit_pr /* _L30=(C10_general_EV_circuit_pressurized_low2high#1)/ */ Context_C10_general_EV_circuit_pressurized_low2high_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
} outC_Monitor_system;

/* ===========  node initialization and cycle functions  =========== */
/* Monitor_system/ */
extern void Monitor_system(
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
  outC_Monitor_system *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Monitor_system_reset(outC_Monitor_system *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Monitor_system_init(outC_Monitor_system *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Monitor_system_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Monitor_system.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

