#ifndef LANDING_GEAR_SYSTEM_INTERFACE_H_
#define LANDING_GEAR_SYSTEM_INTERFACE_H_

#include "kcg_sensors.h"
#include "SmuProxy.h"
#include "C2_open_EV_sensors_door_o.h"

/* context */

extern inC_C2_open_EV_sensors_door_o inputs_ctx;
extern outC_C2_open_EV_sensors_door_o outputs_ctx;

#ifdef __cplusplus
extern "C" {
#endif

extern SimSimulator * pSimulator;

/* simulation */

#ifdef EXTENDED_SIM
    void BeforeSimInit();
    void AfterSimInit();
    void BeforeSimStep();
    void AfterSimStep();
    void ExtendedSimStop();
    void ExtendedGatherDumpData(char * pData);
    void ExtendedRestoreDumpData(const char * pData);
    int ExtendedGetDumpSize();
    void UpdateValues();
    extern void UpdateSimulatorValues();
    extern int GraphicalInputsConnected;
#endif

/* logging */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* LANDING_GEAR_SYSTEM_INTERFACE_H_ */
