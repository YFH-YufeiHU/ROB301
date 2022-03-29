/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/yufei/Desktop/ensta2022/Cours_ROB2021_2022_HU/ROB301/Landing_gear_system/Simulation/config.txt
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sensor_voter_system.h"

/* Sensor_voter_system/ */
void Sensor_voter_system(
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
  outC_Sensor_voter_system *outC)
{
  outC->_L87 = circuit_pressurized_1;
  outC->_L88 = circuit_pressurized_2;
  outC->_L89 = circuit_pressurized_3;
  /* _L90=(Voter#18)/ */
  Voter(outC->_L87, outC->_L88, outC->_L89, &outC->Context_Voter_18);
  outC->_L90 = outC->Context_Voter_18.output;
  outC->_L91 = outC->Context_Voter_18.error;
  outC->_L61 = door_open_f1;
  outC->_L62 = door_open_f2;
  outC->_L63 = door_open_f3;
  /* _L53=(Voter#17)/ */
  Voter(outC->_L61, outC->_L62, outC->_L63, &outC->Context_Voter_17);
  outC->_L53 = outC->Context_Voter_17.output;
  outC->_L64 = outC->Context_Voter_17.error;
  outC->_L47 = door_closed_f1;
  outC->_L48 = door_closed_f2;
  outC->_L49 = door_closed_f3;
  /* _L21=(Voter#12)/ */
  Voter(outC->_L47, outC->_L48, outC->_L49, &outC->Context_Voter_12);
  outC->_L21 = outC->Context_Voter_12.output;
  outC->_L69 = outC->Context_Voter_12.error;
  outC->_L38 = gear_shock_absorber_f1;
  outC->_L39 = gear_shock_absorber_f2;
  outC->_L40 = gear_shock_absorber_f3;
  /* _L13=(Voter#4)/ */
  Voter(outC->_L38, outC->_L39, outC->_L40, &outC->Context_Voter_4);
  outC->_L13 = outC->Context_Voter_4.output;
  outC->_L77 = outC->Context_Voter_4.error;
  outC->_L29 = gear_retracted_f1;
  outC->_L30 = gear_retracted_f2;
  outC->_L31 = gear_retracted_f3;
  /* _L16=(Voter#7)/ */
  Voter(outC->_L29, outC->_L30, outC->_L31, &outC->Context_Voter_7);
  outC->_L16 = outC->Context_Voter_7.output;
  outC->_L74 = outC->Context_Voter_7.error;
  outC->_L26 = gear_extended_r1;
  outC->_L27 = gear_extended_r2;
  outC->_L28 = gear_extended_r3;
  /* _L20=(Voter#11)/ */
  Voter(outC->_L26, outC->_L27, outC->_L28, &outC->Context_Voter_11);
  outC->_L20 = outC->Context_Voter_11.output;
  outC->_L70 = outC->Context_Voter_11.error;
  outC->_L94 = outC->_L70 | outC->_L74 | outC->_L77 | outC->_L69 | outC->_L64 |
    outC->_L91;
  outC->_L84 = door_open_r1;
  outC->_L85 = door_open_r2;
  outC->_L86 = door_open_r3;
  /* _L52=(Voter#16)/ */
  Voter(outC->_L84, outC->_L85, outC->_L86, &outC->Context_Voter_16);
  outC->_L52 = outC->Context_Voter_16.output;
  outC->_L65 = outC->Context_Voter_16.error;
  outC->_L58 = door_closed_r1;
  outC->_L59 = door_closed_r2;
  outC->_L60 = door_closed_r3;
  /* _L50=(Voter#14)/ */
  Voter(outC->_L58, outC->_L59, outC->_L60, &outC->Context_Voter_14);
  outC->_L50 = outC->Context_Voter_14.output;
  outC->_L67 = outC->Context_Voter_14.error;
  outC->_L44 = gear_shock_absorber_r1;
  outC->_L45 = gear_shock_absorber_r2;
  outC->_L46 = gear_shock_absorber_r3;
  /* _L15=(Voter#6)/ */
  Voter(outC->_L44, outC->_L45, outC->_L46, &outC->Context_Voter_6);
  outC->_L15 = outC->Context_Voter_6.output;
  outC->_L75 = outC->Context_Voter_6.error;
  outC->_L35 = gear_retracted_r1;
  outC->_L36 = gear_retracted_r2;
  outC->_L37 = gear_retracted_r3;
  /* _L14=(Voter#5)/ */
  Voter(outC->_L35, outC->_L36, outC->_L37, &outC->Context_Voter_5);
  outC->_L14 = outC->Context_Voter_5.output;
  outC->_L76 = outC->Context_Voter_5.error;
  outC->_L23 = gear_extended_l1;
  outC->_L24 = gear_extended_l2;
  outC->_L25 = gear_extended_l3;
  /* _L19=(Voter#10)/ */
  Voter(outC->_L23, outC->_L24, outC->_L25, &outC->Context_Voter_10);
  outC->_L19 = outC->Context_Voter_10.output;
  outC->_L71 = outC->Context_Voter_10.error;
  outC->_L9 = gear_extended_f1;
  outC->_L10 = gear_extended_f2;
  outC->_L11 = gear_extended_f3;
  /* _L12=(Voter#3)/ */
  Voter(outC->_L9, outC->_L10, outC->_L11, &outC->Context_Voter_3);
  outC->_L12 = outC->Context_Voter_3.output;
  outC->_L78 = outC->Context_Voter_3.error;
  outC->_L93 = outC->_L78 | outC->_L71 | outC->_L76 | outC->_L75 | outC->_L67 |
    outC->_L65;
  outC->_L81 = door_open_l1;
  outC->_L82 = door_open_l2;
  outC->_L83 = door_open_l3;
  /* _L51=(Voter#15)/ */
  Voter(outC->_L81, outC->_L82, outC->_L83, &outC->Context_Voter_15);
  outC->_L51 = outC->Context_Voter_15.output;
  outC->_L66 = outC->Context_Voter_15.error;
  outC->_L55 = door_closed_l1;
  outC->_L56 = door_closed_l2;
  outC->_L57 = door_closed_l3;
  /* _L22=(Voter#13)/ */
  Voter(outC->_L55, outC->_L56, outC->_L57, &outC->Context_Voter_13);
  outC->_L22 = outC->Context_Voter_13.output;
  outC->_L68 = outC->Context_Voter_13.error;
  outC->_L41 = gear_shock_absorber_l1;
  outC->_L42 = gear_shock_absorber_l2;
  outC->_L43 = gear_shock_absorber_l3;
  /* _L17=(Voter#8)/ */
  Voter(outC->_L41, outC->_L42, outC->_L43, &outC->Context_Voter_8);
  outC->_L17 = outC->Context_Voter_8.output;
  outC->_L73 = outC->Context_Voter_8.error;
  outC->_L32 = gear_retracted_l1;
  outC->_L33 = gear_retracted_l2;
  outC->_L34 = gear_retracted_l3;
  /* _L18=(Voter#9)/ */
  Voter(outC->_L32, outC->_L33, outC->_L34, &outC->Context_Voter_9);
  outC->_L18 = outC->Context_Voter_9.output;
  outC->_L72 = outC->Context_Voter_9.error;
  outC->_L1 = handle_1;
  outC->_L2 = handle_2;
  outC->_L3 = handle_3;
  /* _L4=(Voter#1)/ */
  Voter(outC->_L1, outC->_L2, outC->_L3, &outC->Context_Voter_1);
  outC->_L4 = outC->Context_Voter_1.output;
  outC->_L80 = outC->Context_Voter_1.error;
  outC->_L92 = outC->_L80 | outC->_L72 | outC->_L73 | outC->_L68 | outC->_L66;
  outC->_L95 = outC->_L92 | outC->_L93 | outC->_L94;
  outC->anomaly = outC->_L95;
  outC->circuit_pressurized = outC->_L90;
  outC->door_opened_right = outC->_L52;
  outC->door_opened_left = outC->_L51;
  outC->door_opened_front = outC->_L53;
  outC->door_closed_right = outC->_L50;
  outC->door_closed_left = outC->_L22;
  outC->door_closed_front = outC->_L21;
  outC->gear_shock_absorber_right = outC->_L15;
  outC->gear_shock_absorber_left = outC->_L17;
  outC->gear_shock_absorber_front = outC->_L13;
  outC->gear_retracted_right = outC->_L14;
  outC->gear_retracted_left = outC->_L18;
  outC->gear_retracted_front = outC->_L16;
  outC->gear_extended_right = outC->_L20;
  outC->gear_extended_left = outC->_L19;
  outC->gear_extended_front = outC->_L12;
  outC->handle = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Sensor_voter_system_init(outC_Sensor_voter_system *outC)
{
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L70 = kcg_true;
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
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->anomaly = kcg_true;
  outC->circuit_pressurized = kcg_true;
  outC->handle = kcg_true;
  outC->gear_shock_absorber_right = kcg_true;
  outC->gear_shock_absorber_left = kcg_true;
  outC->gear_shock_absorber_front = kcg_true;
  outC->gear_retracted_right = kcg_true;
  outC->gear_retracted_left = kcg_true;
  outC->gear_retracted_front = kcg_true;
  outC->gear_extended_right = kcg_true;
  outC->gear_extended_left = kcg_true;
  outC->gear_extended_front = kcg_true;
  outC->door_opened_right = kcg_true;
  outC->door_opened_left = kcg_true;
  outC->door_opened_front = kcg_true;
  outC->door_closed_right = kcg_true;
  outC->door_closed_left = kcg_true;
  outC->door_closed_front = kcg_true;
  /* _L4=(Voter#1)/ */ Voter_init(&outC->Context_Voter_1);
  /* _L18=(Voter#9)/ */ Voter_init(&outC->Context_Voter_9);
  /* _L17=(Voter#8)/ */ Voter_init(&outC->Context_Voter_8);
  /* _L22=(Voter#13)/ */ Voter_init(&outC->Context_Voter_13);
  /* _L51=(Voter#15)/ */ Voter_init(&outC->Context_Voter_15);
  /* _L12=(Voter#3)/ */ Voter_init(&outC->Context_Voter_3);
  /* _L19=(Voter#10)/ */ Voter_init(&outC->Context_Voter_10);
  /* _L14=(Voter#5)/ */ Voter_init(&outC->Context_Voter_5);
  /* _L15=(Voter#6)/ */ Voter_init(&outC->Context_Voter_6);
  /* _L50=(Voter#14)/ */ Voter_init(&outC->Context_Voter_14);
  /* _L52=(Voter#16)/ */ Voter_init(&outC->Context_Voter_16);
  /* _L20=(Voter#11)/ */ Voter_init(&outC->Context_Voter_11);
  /* _L16=(Voter#7)/ */ Voter_init(&outC->Context_Voter_7);
  /* _L13=(Voter#4)/ */ Voter_init(&outC->Context_Voter_4);
  /* _L21=(Voter#12)/ */ Voter_init(&outC->Context_Voter_12);
  /* _L53=(Voter#17)/ */ Voter_init(&outC->Context_Voter_17);
  /* _L90=(Voter#18)/ */ Voter_init(&outC->Context_Voter_18);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sensor_voter_system_reset(outC_Sensor_voter_system *outC)
{
  /* _L4=(Voter#1)/ */ Voter_reset(&outC->Context_Voter_1);
  /* _L18=(Voter#9)/ */ Voter_reset(&outC->Context_Voter_9);
  /* _L17=(Voter#8)/ */ Voter_reset(&outC->Context_Voter_8);
  /* _L22=(Voter#13)/ */ Voter_reset(&outC->Context_Voter_13);
  /* _L51=(Voter#15)/ */ Voter_reset(&outC->Context_Voter_15);
  /* _L12=(Voter#3)/ */ Voter_reset(&outC->Context_Voter_3);
  /* _L19=(Voter#10)/ */ Voter_reset(&outC->Context_Voter_10);
  /* _L14=(Voter#5)/ */ Voter_reset(&outC->Context_Voter_5);
  /* _L15=(Voter#6)/ */ Voter_reset(&outC->Context_Voter_6);
  /* _L50=(Voter#14)/ */ Voter_reset(&outC->Context_Voter_14);
  /* _L52=(Voter#16)/ */ Voter_reset(&outC->Context_Voter_16);
  /* _L20=(Voter#11)/ */ Voter_reset(&outC->Context_Voter_11);
  /* _L16=(Voter#7)/ */ Voter_reset(&outC->Context_Voter_7);
  /* _L13=(Voter#4)/ */ Voter_reset(&outC->Context_Voter_4);
  /* _L21=(Voter#12)/ */ Voter_reset(&outC->Context_Voter_12);
  /* _L53=(Voter#17)/ */ Voter_reset(&outC->Context_Voter_17);
  /* _L90=(Voter#18)/ */ Voter_reset(&outC->Context_Voter_18);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sensor_voter_system.c
** Generation date: 2022-03-29T22:02:47
*************************************************************$ */

