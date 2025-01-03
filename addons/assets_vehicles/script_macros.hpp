//#define DEBUG_MODE_FULL

#ifdef DEBUG_MODE_FULL
    #define MACRO_DEBUG_VEHICLE_TESTING \
        forceInGarage = 1; \
        scope = 2; \
        scopeCurator = 2; \
        side = 1
#else
    #define MACRO_DEBUG_VEHICLE_TESTING \
        forceInGarage = 1; \
        scope = 1; \
        scopeCurator = 1; \
        side = 1
#endif

#define MACRO_DEFAULT_VEHICLE \
    author = "Mike"; \
    crew = "TACU_Assets_TestUnit"; \
    faction = "TACU_Assets_Testing"; \
    MACRO_DEBUG_VEHICLE_TESTING; \
    typicalCargo[] = {"TACU_Assets_TestUnit"}

#define MACRO_DEFAULT_CUP_VEHICLE \
    author = "Mike"; \
    crew = "TACU_Assets_TestUnit"; \
    faction = "TACU_Assets_Testing_CUP"; \
    MACRO_DEBUG_VEHICLE_TESTING; \
    typicalCargo[] = {"TACU_Assets_TestUnit"}

// Vehicle Macros
#define MACRO_EVENTHANDLERS \
    class EventHandlers: EventHandlers { \
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };"; \
    }
