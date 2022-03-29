/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */
#ifndef _System_H_
#define _System_H_

#include "kcg_types.h"
#include "Monitor_system.h"
#include "Compute_logical.h"
#include "Sensor_voter_system.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* handle_1/ */ handle_1;
  kcg_bool /* handle_2/ */ handle_2;
  kcg_bool /* handle_3/ */ handle_3;
  kcg_bool /* gear_extended_f1/ */ gear_extended_f1;
  kcg_bool /* gear_extended_f2/ */ gear_extended_f2;
  kcg_bool /* gear_extended_f3/ */ gear_extended_f3;
  kcg_bool /* gear_extended_l1/ */ gear_extended_l1;
  kcg_bool /* gear_extended_l2/ */ gear_extended_l2;
  kcg_bool /* gear_extended_l3/ */ gear_extended_l3;
  kcg_bool /* gear_extended_r1/ */ gear_extended_r1;
  kcg_bool /* gear_extended_r2/ */ gear_extended_r2;
  kcg_bool /* gear_extended_r3/ */ gear_extended_r3;
  kcg_bool /* gear_retracted_f1/ */ gear_retracted_f1;
  kcg_bool /* gear_retracted_f2/ */ gear_retracted_f2;
  kcg_bool /* gear_retracted_f3/ */ gear_retracted_f3;
  kcg_bool /* gear_retracted_l1/ */ gear_retracted_l1;
  kcg_bool /* gear_retracted_l2/ */ gear_retracted_l2;
  kcg_bool /* gear_retracted_l3/ */ gear_retracted_l3;
  kcg_bool /* gear_retracted_r1/ */ gear_retracted_r1;
  kcg_bool /* gear_retracted_r2/ */ gear_retracted_r2;
  kcg_bool /* gear_retracted_r3/ */ gear_retracted_r3;
  kcg_bool /* gear_shock_absorber_f1/ */ gear_shock_absorber_f1;
  kcg_bool /* gear_shock_absorber_f2/ */ gear_shock_absorber_f2;
  kcg_bool /* gear_shock_absorber_f3/ */ gear_shock_absorber_f3;
  kcg_bool /* gear_shock_absorber_l1/ */ gear_shock_absorber_l1;
  kcg_bool /* gear_shock_absorber_l2/ */ gear_shock_absorber_l2;
  kcg_bool /* gear_shock_absorber_l3/ */ gear_shock_absorber_l3;
  kcg_bool /* gear_shock_absorber_r1/ */ gear_shock_absorber_r1;
  kcg_bool /* gear_shock_absorber_r2/ */ gear_shock_absorber_r2;
  kcg_bool /* gear_shock_absorber_r3/ */ gear_shock_absorber_r3;
  kcg_bool /* door_closed_f1/ */ door_closed_f1;
  kcg_bool /* door_closed_f2/ */ door_closed_f2;
  kcg_bool /* door_closed_f3/ */ door_closed_f3;
  kcg_bool /* door_closed_l2/ */ door_closed_l2;
  kcg_bool /* door_closed_l1/ */ door_closed_l1;
  kcg_bool /* door_closed_l3/ */ door_closed_l3;
  kcg_bool /* door_closed_r1/ */ door_closed_r1;
  kcg_bool /* door_closed_r2/ */ door_closed_r2;
  kcg_bool /* door_closed_r3/ */ door_closed_r3;
  kcg_bool /* door_open_f1/ */ door_open_f1;
  kcg_bool /* door_open_f2/ */ door_open_f2;
  kcg_bool /* door_open_f3/ */ door_open_f3;
  kcg_bool /* door_open_l1/ */ door_open_l1;
  kcg_bool /* door_open_l2/ */ door_open_l2;
  kcg_bool /* door_open_l3/ */ door_open_l3;
  kcg_bool /* door_open_r1/ */ door_open_r1;
  kcg_bool /* door_open_r2/ */ door_open_r2;
  kcg_bool /* door_open_r3/ */ door_open_r3;
  kcg_bool /* circuit_pressurized_1/ */ circuit_pressurized_1;
  kcg_bool /* circuit_pressurized_2/ */ circuit_pressurized_2;
  kcg_bool /* circuit_pressurized_3/ */ circuit_pressurized_3;
} inC_System;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* anomaly/ */ anomaly;
  kcg_bool /* gear_locked_down/ */ gear_locked_down;
  kcg_bool /* gears_maneuvering/ */ gears_maneuvering;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Monitor_system /* _L82=(Monitor_system#1)/ */ Context_Monitor_system_1;
  outC_Compute_logical /* _L90=(Compute_logical#1)/ */ Context_Compute_logical_1;
  outC_Compute_logical /* _L89=(Compute_logical#2)/ */ Context_Compute_logical_2;
  outC_Sensor_voter_system /* _L11=(Sensor_voter_system#1)/ */ Context_Sensor_voter_system_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
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
  kcg_bool /* _L54/ */ _L54;
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
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
} outC_System;

/* ===========  node initialization and cycle functions  =========== */
/* System/ */
extern void System(inC_System *inC, outC_System *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void System_reset(outC_System *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void System_init(outC_System *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _System_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** System.h
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

