#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Foreign_Legion_U_B_Rifleman",
            "TACU_Foreign_Legion_U_B_Demolitions",
            "TACU_Foreign_Legion_U_B_Engineer",
            "TACU_Foreign_Legion_U_B_Medic",
            "TACU_Foreign_Legion_U_B_AT",
            "TACU_Foreign_Legion_U_B_AP",
            "TACU_Foreign_Legion_U_B_TL"
        };
        weapons[] = {
            "TACU_Foreign_Legion_W_FAMAS_Holo",
            "TACU_Foreign_Legion_W_FAMAS_Bravo"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_foreign_legion",
            "tacu_assets_cup",
            "CUP_Weapons_LoadOrder"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
