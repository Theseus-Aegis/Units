#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Assets_AGS_base",
            "TACU_Assets_D30_base",
            "TACU_Assets_D30AT_base",
            "TACU_Assets_DSHKM_base",
            "TACU_Assets_DSHKM_Mini_base",
            "TACU_Assets_FIM92_base",
            "TACU_Assets_IGLA_base",
            "TACU_Assets_KORD_base",
            "TACU_Assets_KORD_Mini_base",
            "TACU_Assets_KORNET_AT4_base",
            "TACU_Assets_L11A1_base",
            "TACU_Assets_L11A1_MiniTripod_base",
            "TACU_Assets_L134A1_base",
            "TACU_Assets_M119_base",
            "TACU_Assets_M220_TOW_base",
            "TACU_Assets_Metis_base",
            "TACU_Assets_MK19_base",
            "TACU_Assets_RBS70_base",
            "TACU_Assets_SearchLight_base"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_assets", "CUP_Weapons_LoadOrder"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
