#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_African_South_V_B_D30",
            "TACU_African_South_V_I_D30",
            "TACU_African_South_V_O_D30",
            "TACU_African_South_V_B_FIM92",
            "TACU_African_South_V_I_FIM92",
            "TACU_African_South_V_O_FIM92"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_african_south",
            "tacu_assets_cup",
            "CUP_Weapons_LoadOrder"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
