/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "System.h"

/* System/ */
void System(inC_System *inC, outC_System *outC)
{
  outC->_L19 = inC->handle_1;
  outC->_L20 = inC->handle_2;
  outC->_L21 = inC->handle_3;
  outC->_L22 = inC->gear_extended_f1;
  outC->_L23 = inC->gear_extended_f2;
  outC->_L24 = inC->gear_extended_f3;
  outC->_L25 = inC->gear_extended_l1;
  outC->_L26 = inC->gear_extended_l2;
  outC->_L27 = inC->gear_extended_l3;
  outC->_L28 = inC->gear_extended_r1;
  outC->_L29 = inC->gear_extended_r2;
  outC->_L30 = inC->gear_extended_r3;
  outC->_L31 = inC->gear_retracted_f1;
  outC->_L32 = inC->gear_retracted_f2;
  outC->_L33 = inC->gear_retracted_f3;
  outC->_L34 = inC->gear_retracted_l1;
  outC->_L35 = inC->gear_retracted_l2;
  outC->_L36 = inC->gear_retracted_l3;
  outC->_L37 = inC->gear_retracted_r1;
  outC->_L38 = inC->gear_retracted_r2;
  outC->_L39 = inC->gear_retracted_r3;
  outC->_L40 = inC->gear_shock_absorber_f1;
  outC->_L41 = inC->gear_shock_absorber_f2;
  outC->_L42 = inC->gear_shock_absorber_f3;
  outC->_L43 = inC->gear_shock_absorber_l1;
  outC->_L44 = inC->gear_shock_absorber_l2;
  outC->_L45 = inC->gear_shock_absorber_l3;
  outC->_L46 = inC->gear_shock_absorber_r1;
  outC->_L47 = inC->gear_shock_absorber_r2;
  outC->_L48 = inC->gear_shock_absorber_r3;
  outC->_L49 = inC->door_closed_f1;
  outC->_L50 = inC->door_closed_f2;
  outC->_L51 = inC->door_closed_f3;
  outC->_L52 = inC->door_closed_l2;
  outC->_L53 = inC->door_closed_l1;
  outC->_L54 = inC->door_closed_l3;
  outC->_L55 = inC->door_closed_r1;
  outC->_L56 = inC->door_closed_r2;
  outC->_L57 = inC->door_closed_r3;
  outC->_L58 = inC->door_open_f1;
  outC->_L59 = inC->door_open_f2;
  outC->_L60 = inC->door_open_f3;
  outC->_L61 = inC->door_open_l1;
  outC->_L62 = inC->door_open_l2;
  outC->_L63 = inC->door_open_l3;
  outC->_L64 = inC->door_open_r1;
  outC->_L65 = inC->door_open_r2;
  outC->_L66 = inC->door_open_r3;
  outC->_L67 = inC->circuit_pressurized_1;
  outC->_L68 = inC->circuit_pressurized_2;
  outC->_L69 = inC->circuit_pressurized_3;
  /* _L11=(Sensor_voter_system#1)/ */
  Sensor_voter_system(
    outC->_L19,
    outC->_L20,
    outC->_L21,
    outC->_L22,
    outC->_L23,
    outC->_L24,
    outC->_L25,
    outC->_L26,
    outC->_L27,
    outC->_L28,
    outC->_L29,
    outC->_L30,
    outC->_L31,
    outC->_L32,
    outC->_L33,
    outC->_L34,
    outC->_L35,
    outC->_L36,
    outC->_L37,
    outC->_L38,
    outC->_L39,
    outC->_L40,
    outC->_L41,
    outC->_L42,
    outC->_L43,
    outC->_L44,
    outC->_L45,
    outC->_L46,
    outC->_L47,
    outC->_L48,
    outC->_L49,
    outC->_L50,
    outC->_L51,
    outC->_L52,
    outC->_L53,
    outC->_L54,
    outC->_L55,
    outC->_L56,
    outC->_L57,
    outC->_L58,
    outC->_L59,
    outC->_L60,
    outC->_L61,
    outC->_L62,
    outC->_L63,
    outC->_L64,
    outC->_L65,
    outC->_L66,
    outC->_L67,
    outC->_L68,
    outC->_L69,
    &outC->Context_Sensor_voter_system_1);
  outC->_L11 = outC->Context_Sensor_voter_system_1.door_closed_front;
  outC->_L12 = outC->Context_Sensor_voter_system_1.door_closed_left;
  outC->_L13 = outC->Context_Sensor_voter_system_1.door_closed_right;
  outC->_L14 = outC->Context_Sensor_voter_system_1.door_opened_front;
  outC->_L15 = outC->Context_Sensor_voter_system_1.door_opened_left;
  outC->_L16 = outC->Context_Sensor_voter_system_1.door_opened_right;
  outC->_L2 = outC->Context_Sensor_voter_system_1.gear_extended_front;
  outC->_L3 = outC->Context_Sensor_voter_system_1.gear_extended_left;
  outC->_L4 = outC->Context_Sensor_voter_system_1.gear_extended_right;
  outC->_L5 = outC->Context_Sensor_voter_system_1.gear_retracted_front;
  outC->_L6 = outC->Context_Sensor_voter_system_1.gear_retracted_left;
  outC->_L7 = outC->Context_Sensor_voter_system_1.gear_retracted_right;
  outC->_L8 = outC->Context_Sensor_voter_system_1.gear_shock_absorber_front;
  outC->_L9 = outC->Context_Sensor_voter_system_1.gear_shock_absorber_left;
  outC->_L10 = outC->Context_Sensor_voter_system_1.gear_shock_absorber_right;
  outC->_L1 = outC->Context_Sensor_voter_system_1.handle;
  outC->_L17 = outC->Context_Sensor_voter_system_1.circuit_pressurized;
  outC->_L18 = outC->Context_Sensor_voter_system_1.anomaly;
  /* _L89=(Compute_logical#2)/ */
  Compute_logical(
    outC->_L16,
    outC->_L15,
    outC->_L14,
    outC->_L13,
    outC->_L12,
    outC->_L11,
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L7,
    outC->_L1,
    outC->_L8,
    outC->_L9,
    outC->_L10,
    &outC->Context_Compute_logical_2);
  outC->_L89 = outC->Context_Compute_logical_2.gear_locked_down;
  outC->_L76 = outC->Context_Compute_logical_2.gears_maneuvering;
  outC->_L77 = outC->Context_Compute_logical_2.general_EV;
  outC->_L78 = outC->Context_Compute_logical_2.open_EV;
  outC->_L79 = outC->Context_Compute_logical_2.close_EV;
  outC->_L80 = outC->Context_Compute_logical_2.extend_EV;
  outC->_L81 = outC->Context_Compute_logical_2.retract_EV;
  /* _L90=(Compute_logical#1)/ */
  Compute_logical(
    outC->_L16,
    outC->_L15,
    outC->_L14,
    outC->_L13,
    outC->_L12,
    outC->_L11,
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L7,
    outC->_L1,
    outC->_L8,
    outC->_L9,
    outC->_L10,
    &outC->Context_Compute_logical_1);
  outC->_L90 = outC->Context_Compute_logical_1.gear_locked_down;
  outC->_L70 = outC->Context_Compute_logical_1.gears_maneuvering;
  outC->_L71 = outC->Context_Compute_logical_1.general_EV;
  outC->_L72 = outC->Context_Compute_logical_1.open_EV;
  outC->_L73 = outC->Context_Compute_logical_1.close_EV;
  outC->_L74 = outC->Context_Compute_logical_1.extend_EV;
  outC->_L75 = outC->Context_Compute_logical_1.retract_EV;
  outC->_L92 = outC->_L71 | outC->_L77;
  outC->_L91 = outC->_L72 | outC->_L78;
  outC->_L84 = outC->_L73 | outC->_L79;
  outC->_L85 = outC->_L74 | outC->_L80;
  outC->_L95 = outC->_L75 | outC->_L81;
  /* _L82=(Monitor_system#1)/ */
  Monitor_system(
    outC->_L11,
    outC->_L12,
    outC->_L13,
    outC->_L14,
    outC->_L15,
    outC->_L16,
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L7,
    outC->_L17,
    outC->_L92,
    outC->_L91,
    outC->_L84,
    outC->_L85,
    outC->_L95,
    &outC->Context_Monitor_system_1);
  outC->_L82 = outC->Context_Monitor_system_1.anomaly;
  outC->_L96 = outC->_L82 | outC->_L18;
  outC->anomaly = outC->_L96;
  outC->_L93 = outC->_L70 | outC->_L76;
  outC->gears_maneuvering = outC->_L93;
  outC->_L94 = outC->_L90 | outC->_L89;
  outC->gear_locked_down = outC->_L94;
}

#ifndef KCG_USER_DEFINED_INIT
void System_init(outC_System *outC)
{
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
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
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->gears_maneuvering = kcg_true;
  outC->gear_locked_down = kcg_true;
  outC->anomaly = kcg_true;
  /* _L82=(Monitor_system#1)/ */
  Monitor_system_init(&outC->Context_Monitor_system_1);
  /* _L90=(Compute_logical#1)/ */
  Compute_logical_init(&outC->Context_Compute_logical_1);
  /* _L89=(Compute_logical#2)/ */
  Compute_logical_init(&outC->Context_Compute_logical_2);
  /* _L11=(Sensor_voter_system#1)/ */
  Sensor_voter_system_init(&outC->Context_Sensor_voter_system_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void System_reset(outC_System *outC)
{
  /* _L82=(Monitor_system#1)/ */
  Monitor_system_reset(&outC->Context_Monitor_system_1);
  /* _L90=(Compute_logical#1)/ */
  Compute_logical_reset(&outC->Context_Compute_logical_1);
  /* _L89=(Compute_logical#2)/ */
  Compute_logical_reset(&outC->Context_Compute_logical_2);
  /* _L11=(Sensor_voter_system#1)/ */
  Sensor_voter_system_reset(&outC->Context_Sensor_voter_system_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** System.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

