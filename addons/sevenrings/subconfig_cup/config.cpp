#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Seven_Rings_V_I_Metis",
            "TACU_Seven_Rings_V_I_MK19",
            "TACU_Seven_Rings_V_I_TOW",
            "TACU_Seven_Rings_V_O_AGS30",
            "TACU_Seven_Rings_V_O_D30",
            "TACU_Seven_Rings_V_O_DSHKM",
            "TACU_Seven_Rings_V_O_DSHKM_Mini",
            "TACU_Seven_Rings_V_O_Igla",
            "TACU_Seven_Rings_V_O_KORD",
            "TACU_Seven_Rings_V_O_KORD_Mini"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_seven_rings",
            "tacu_assets_cup",
            "CUP_Weapons_LoadOrder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
