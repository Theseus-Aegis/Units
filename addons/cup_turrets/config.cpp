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
            "TACU_CUP_Turrets_IGLA_O",
            "TACU_CUP_Turrets_KORD_O",
            "TACU_CUP_Turrets_KORD_Mini_O",
            "TACU_CUP_Turrets_Metis_O",
            "TACU_CUP_Turrets_Podnos_O",
            "TACU_CUP_Turrets_SearchLight_O",
            "TACU_CUP_Turrets_ZU23_O"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "CUP_Weapons_StaticWeapons"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
