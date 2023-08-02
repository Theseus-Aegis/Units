#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_BAF_V_B_Arid_L11A1",
            "TACU_BAF_V_B_Arid_L134A1",
            "TACU_BAF_V_B_Arid_RBS70",
            "TACU_BAF_V_B_Tropic_L11A1",
            "TACU_BAF_V_B_Tropic_L134A1",
            "TACU_BAF_V_B_Tropic_RBS70",
            "TACU_BAF_V_B_Urban_L11A1",
            "TACU_BAF_V_B_Urban_L134A1",
            "TACU_BAF_V_B_Urban_RBS70",
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_baf",
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
