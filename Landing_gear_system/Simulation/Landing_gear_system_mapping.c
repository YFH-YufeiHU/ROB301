/* Landing_gear_system_mapping.c */

#include "Landing_gear_system_type.h"
#include "Landing_gear_system_interface.h"
#include "Landing_gear_system_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 2);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 10);
DECL_SCOPE(scope_1, 15);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Detection_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Detection_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Failure_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Failure_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Normal_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Normal_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Detection_Failure_2_Detection_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Detection_Failure_2_Detection_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Detection_Normal_1_Detection_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Detection_Normal_1_Detection_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Normal_Detection_1_Normal_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Normal_Detection_1_Normal_SM1; }

/* mapping definition */


const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Failure_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Failure_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:Failure:",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Detection_Failure_2_Detection_SM1, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:Detection:<2",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Detection_Normal_1_Detection_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:Detection:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Detection_Normal_1_Detection_SM1, &scope_6, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Detection_Failure_2_Detection_SM1, &scope_7, 1, 1 }
};
const MappingScope scope_5 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:Detection:",
    scope_5_entries, 2
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Normal_Detection_1_Normal_SM1, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:Normal:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Normal_Detection_1_Normal_SM1, &scope_4, 1, 0 }
};
const MappingScope scope_3 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:Normal:",
    scope_3_entries, 1
};

const MappingEntry scope_2_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Normal:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Normal_SM1, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "Detection:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Detection_SM1, &scope_5, 1, 8 },
    /* 9 */ { MAP_STATE, "Failure:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Failure_SM1, &scope_8, 1, 9 }
};
const MappingScope scope_2 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_oSM1:",
    scope_2_entries, 10
};

const MappingEntry scope_1_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "anomaly", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.anomaly, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "door_opened_front", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_opened_front, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "door_opened_left", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_opened_left, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "door_opened_right", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.door_opened_right, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "open_EV", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.open_EV, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "all_doors_opened_true", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.all_doors_opened_true, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "open_EV_changed", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.open_EV_changed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 14 }
};
const MappingScope scope_1 = {
    "C2_open_EV_sensors_door_opened/ C2_open_EV_sensors_door_o",
    scope_1_entries, 15
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "C2_open_EV_sensors_door_opened", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
