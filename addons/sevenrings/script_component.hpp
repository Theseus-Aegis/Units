#define COMPONENT seven_rings
#define COMPONENT_BEAUTIFIED Seven Rings
#include "\x\tacu\addons\main\script_mod.hpp"
#include "\x\tacu\addons\main\script_macros.hpp"

#define SR_SCOPE_MACRO \
    scope = 1; \
    scopeCurator = 1;

#define SR_WEST_WEAPON_MACRO \
    "CUP_hgun_M9", \
    "Throw", \
    "Put"

#define SR_EAST_WEAPON_MACRO \
    "hgun_Pistol_01_F", \
    "Throw", \
    "Put"

#define SR_WEST_MAGAZINE_MACRO \
    mag_2("CUP_15Rnd_9x19_M9"), \
    mag_2("HandGrenade"), \
    mag_2("MiniGrenade")

#define SR_EAST_MAGAZINE_MACRO \
    mag_2("10Rnd_9x21_Mag"), \
    mag_2("CUP_HandGrenade_RGO"), \
    mag_2("CUP_HandGrenade_RGD5")

#define SR_OPFOR_EAST_MACRO \
    side = 0; \
    faction = "TACU_Seven_Rings_O_Eastern";

#define SR_OPFOR_WEST_MACRO \
    side = 0; \
    faction = "TACU_Seven_Rings_O_Western";

#define SR_EASTERN_I_V_MACRO \
    MACRO_CLEAR_VEHICLE_CARGO \
    faction = "TACU_Seven_Rings_I_Eastern"; \
    side = 2; \
    scope = 2; \
    scopeCurator = 2;

#define SR_WESTERN_I_V_MACRO \
    MACRO_CLEAR_VEHICLE_CARGO \
    faction = "TACU_Seven_Rings_I_Western"; \
    side = 2; \
    scope = 2; \
    scopeCurator = 2;
