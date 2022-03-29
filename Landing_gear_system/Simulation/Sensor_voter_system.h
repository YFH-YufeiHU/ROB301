/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _Sensor_voter_system_H_
#define _Sensor_voter_system_H_

#include "kcg_types.h"
#include "Voter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* door_closed_front/ */ door_closed_front;
  kcg_bool /* door_closed_left/ */ door_closed_left;
  kcg_bool /* door_closed_right/ */ door_closed_right;
  kcg_bool /* door_opened_front/ */ door_opened_front;
  kcg_bool /* door_opened_left/ */ door_opened_left;
  kcg_bool /* door_opened_right/ */ door_opened_right;
  kcg_bool /* gear_extended_front/ */ gear_extended_front;
  kcg_bool /* gear_extended_left/ */ gear_extended_left;
  kcg_bool /* gear_extended_right/ */ gear_extended_right;
  kcg_bool /* gear_retracted_front/ */ gear_retracted_front;
  kcg_bool /* gear_retracted_left/ */ gear_retracted_left;
  kcg_bool /* gear_retracted_right/ */ gear_retracted_right;
  kcg_bool /* gear_shock_absorber_front/ */ gear_shock_absorber_front;
  kcg_bool /* gear_shock_absorber_left/ */ gear_shock_absorber_left;
  kcg_bool /* gear_shock_absorber_right/ */ gear_shock_absorber_right;
  kcg_bool /* handle/ */ handle;
  kcg_bool /* circuit_pressurized/ */ circuit_pressurized;
  kcg_bool /* anomaly/ */ anomaly;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Voter /* _L4=(Voter#1)/ */ Context_Voter_1;
  outC_Voter /* _L18=(Voter#9)/ */ Context_Voter_9;
  outC_Voter /* _L17=(Voter#8)/ */ Context_Voter_8;
  outC_Voter /* _L22=(Voter#13)/ */ Context_Voter_13;
  outC_Voter /* _L51=(Voter#15)/ */ Context_Voter_15;
  outC_Voter /* _L12=(Voter#3)/ */ Context_Voter_3;
  outC_Voter /* _L19=(Voter#10)/ */ Context_Voter_10;
  outC_Voter /* _L14=(Voter#5)/ */ Context_Voter_5;
  outC_Voter /* _L15=(Voter#6)/ */ Context_Voter_6;
  outC_Voter /* _L50=(Voter#14)/ */ Context_Voter_14;
  outC_Voter /* _L52=(Voter#16)/ */ Context_Voter_16;
  outC_Voter /* _L20=(Voter#11)/ */ Context_Voter_11;
  outC_Voter /* _L16=(Voter#7)/ */ Context_Voter_7;
  outC_Voter /* _L13=(Voter#4)/ */ Context_Voter_4;
  outC_Voter /* _L21=(Voter#12)/ */ Context_Voter_12;
  outC_Voter /* _L53=(Voter#17)/ */ Context_Voter_17;
  outC_Voter /* _L90=(Voter#18)/ */ Context_Voter_18;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L9/ */ _L9;
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
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
} outC_Sensor_voter_system;

/* ===========  node initialization and cycle functions  =========== */
/* Sensor_voter_system/ */
extern void Sensor_voter_system(
  /* handle_1/ */
  kcg_bool handle_1,
  /* handle_2/ */
  kcg_bool handle_2,
  /* handle_3/ */
  kcg_bool handle_3,
  /* gear_extended_f1/ */
  kcg_bool gear_extended_f1,
  /* gear_extended_f2/ */
  kcg_bool gear_extended_f2,
  /* gear_extended_f3/ */
  kcg_bool gear_extended_f3,
  /* gear_extended_l1/ */
  kcg_bool gear_extended_l1,
  /* gear_extended_l2/ */
  kcg_bool gear_extended_l2,
  /* gear_extended_l3/ */
  kcg_bool gear_extended_l3,
  /* gear_extended_r1/ */
  kcg_bool gear_extended_r1,
  /* gear_extended_r2/ */
  kcg_bool gear_extended_r2,
  /* gear_extended_r3/ */
  kcg_bool gear_extended_r3,
  /* gear_retracted_f1/ */
  kcg_bool gear_retracted_f1,
  /* gear_retracted_f2/ */
  kcg_bool gear_retracted_f2,
  /* gear_retracted_f3/ */
  kcg_bool gear_retracted_f3,
  /* gear_retracted_l1/ */
  kcg_bool gear_retracted_l1,
  /* gear_retracted_l2/ */
  kcg_bool gear_retracted_l2,
  /* gear_retracted_l3/ */
  kcg_bool gear_retracted_l3,
  /* gear_retracted_r1/ */
  kcg_bool gear_retracted_r1,
  /* gear_retracted_r2/ */
  kcg_bool gear_retracted_r2,
  /* gear_retracted_r3/ */
  kcg_bool gear_retracted_r3,
  /* gear_shock_absorber_f1/ */
  kcg_bool gear_shock_absorber_f1,
  /* gear_shock_absorber_f2/ */
  kcg_bool gear_shock_absorber_f2,
  /* gear_shock_absorber_f3/ */
  kcg_bool gear_shock_absorber_f3,
  /* gear_shock_absorber_l1/ */
  kcg_bool gear_shock_absorber_l1,
  /* gear_shock_absorber_l2/ */
  kcg_bool gear_shock_absorber_l2,
  /* gear_shock_absorber_l3/ */
  kcg_bool gear_shock_absorber_l3,
  /* gear_shock_absorber_r1/ */
  kcg_bool gear_shock_absorber_r1,
  /* gear_shock_absorber_r2/ */
  kcg_bool gear_shock_absorber_r2,
  /* gear_shock_absorber_r3/ */
  kcg_bool gear_shock_absorber_r3,
  /* door_closed_f1/ */
  kcg_bool door_closed_f1,
  /* door_closed_f2/ */
  kcg_bool door_closed_f2,
  /* door_closed_f3/ */
  kcg_bool door_closed_f3,
  /* door_closed_l2/ */
  kcg_bool door_closed_l2,
  /* door_closed_l1/ */
  kcg_bool door_closed_l1,
  /* door_closed_l3/ */
  kcg_bool door_closed_l3,
  /* door_closed_r1/ */
  kcg_bool door_closed_r1,
  /* door_closed_r2/ */
  kcg_bool door_closed_r2,
  /* door_closed_r3/ */
  kcg_bool door_closed_r3,
  /* door_open_f1/ */
  kcg_bool door_open_f1,
  /* door_open_f2/ */
  kcg_bool door_open_f2,
  /* door_open_f3/ */
  kcg_bool door_open_f3,
  /* door_open_l1/ */
  kcg_bool door_open_l1,
  /* door_open_l2/ */
  kcg_bool door_open_l2,
  /* door_open_l3/ */
  kcg_bool door_open_l3,
  /* door_open_r1/ */
  kcg_bool door_open_r1,
  /* door_open_r2/ */
  kcg_bool door_open_r2,
  /* door_open_r3/ */
  kcg_bool door_open_r3,
  /* circuit_pressurized_1/ */
  kcg_bool circuit_pressurized_1,
  /* circuit_pressurized_2/ */
  kcg_bool circuit_pressurized_2,
  /* circuit_pressurized_3/ */
  kcg_bool circuit_pressurized_3,
  outC_Sensor_voter_system *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sensor_voter_system_reset(outC_Sensor_voter_system *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sensor_voter_system_init(outC_Sensor_voter_system *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sensor_voter_system_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sensor_voter_system.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

