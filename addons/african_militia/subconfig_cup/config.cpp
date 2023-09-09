#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_African_Militia_B_AP",
            // Units
            "TACU_African_Militia_U_O_AP",
            "TACU_African_Militia_U_I_AP",
            // Turrets
            "TACU_African_Militia_V_O_DSHKM",
            "TACU_African_Militia_V_I_DSHKM"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_african_militia",
            "tacu_assets_cup",
            "CUP_Weapons_LoadOrder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
