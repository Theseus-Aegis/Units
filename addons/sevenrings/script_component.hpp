#define COMPONENT seven_rings
#define COMPONENT_BEAUTIFIED Seven Rings
#include "\x\tacu\addons\main\script_mod.hpp"
#include "\x\tacu\addons\main\script_macros.hpp"

#define MACRO_SCOPE_HIDE \
    scope = 1; \
    scopeCurator = 1;

#define MACRO_WEST_DEFAULT_WEAPON \
    "CUP_hgun_M9", \
    "Throw", \
    "Put"

#define MACRO_EAST_DEFAULT_WEAPON \
    "hgun_Pistol_01_F", \
    "Throw", \
    "Put"

#define MACRO_WEST_DEFAULT_MAGAZINE \
    mag_2("CUP_15Rnd_9x19_M9"), \
    mag_2("HandGrenade"), \
    mag_2("MiniGrenade")

#define MACRO_EAST_DEFAULT_MAGAZINE \
    mag_2("10Rnd_9x21_Mag"), \
    mag_2("CUP_HandGrenade_RGO"), \
    mag_2("CUP_HandGrenade_RGD5")

#define MACRO_OPFOR_EAST_SIDE \
    side = 0; \
    faction = "TACU_SevenRings_O_Eastern";

#define MACRO_OPFOR_WEST_SIDE \
    side = 0; \
    faction = "TACU_SevenRings_O_Western";

#define MACRO_EASTERN_VEHICLE \
    MACRO_CLEAR_VEHICLE_CARGO \
    faction = "TACU_SevenRings_I_Eastern"; \
    side = 2; \
    scope = 2; \
    scopeCurator = 2;

#define MACRO_WESTERN_VEHICLE \
    MACRO_CLEAR_VEHICLE_CARGO \
    faction = "TACU_SevenRings_I_Western"; \
    side = 2; \
    scope = 2; \
    scopeCurator = 2;
