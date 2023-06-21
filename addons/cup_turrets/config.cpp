#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_CUP_Turrets_AGS_O",
            "TACU_CUP_Turrets_D30_O",
            "TACU_CUP_Turrets_D30AT_O",
            "TACU_CUP_Turrets_DSHKM_O",
            "TACU_CUP_Turrets_DSHKM_Mini_O",
            "TACU_CUP_Turrets_FIM92_O",
            "TACU_CUP_Turrets_IGLA_O",
            "TACU_CUP_Turrets_KORD_O",
            "TACU_CUP_Turrets_KORD_Mini_O",
            "TACU_CUP_Turrets_KORNET_AT4_O",
            "TACU_CUP_Turrets_L11A1_O",
            "TACU_CUP_Turrets_L11A1_MiniTripod_O",
            "TACU_CUP_Turrets_L134A1_O",
            "TACU_CUP_Turrets_M119_O",
            "TACU_CUP_Turrets_M2_O",
            "TACU_CUP_Turrets_M220_TOW_O",
            "TACU_CUP_Turrets_Metis_O",
            "TACU_CUP_Turrets_MK19_O",
            "TACU_CUP_Turrets_RBS70_O",
            "TACU_CUP_Turrets_SearchLight_O",
            "TACU_CUP_Turrets_ZU23_O"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "CUP_Weapons_StaticWeapons"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
