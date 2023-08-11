//#define DEBUG_MODE_FULL

#ifdef DEBUG_MODE_FULL
    #define MACRO_DEFAULT_VEHICLE \
        author = "Mike"; \
        scope = 2; \
        scopeCurator = 2; \
        forceInGarage = 1; \
        side = 1; \
        faction = "TACU_Assets_Testing"; \
        crew = "TACU_Assets_TestUnit"; \
        typicalCargo[] = {"TACU_Assets_TestUnit"}
#else
    #define MACRO_DEFAULT_VEHICLE \
        author = "Mike"; \
        scope = 1; \
        scopeCurator = 1; \
        forceInGarage = 1; \
        side = 1; \
        faction = "TACU_Assets_Testing"; \
        crew = "TACU_Assets_TestUnit"; \
        typicalCargo[] = {"TACU_Assets_TestUnit"}
#endif

// Vehicle Macros
#define MACRO_EVENTHANDLERS \
    class EventHandlers: EventHandlers { \
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };"; \
    }

// Identity Macros
#define MACRO_FACES_GREEK_CARTEL \
    identityTypes[] = {"Head_Greek_Cartel"}; \
    disabled = 1
