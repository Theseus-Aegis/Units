#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Taliban_Militia_B_AP",
            // Units - Militia
            "TACU_Taliban_Militia_U_I_AP",
            "TACU_Taliban_Militia_U_O_AP",
            // Units - Veterans
            "TACU_Taliban_Veterans_U_I_AP",
            "TACU_Taliban_Veterans_U_O_AP",
            // Turrets - Militia
            "TACU_Taliban_Militia_V_I_AGS30",
            "TACU_Taliban_Militia_V_I_D30",
            "TACU_Taliban_Militia_V_I_DSHKM",
            "TACU_Taliban_Militia_V_I_DSHKM_Mini",
            "TACU_Taliban_Militia_V_I_KORD",
            "TACU_Taliban_Militia_V_I_KORD_Mini",
            "TACU_Taliban_Militia_V_O_AGS30",
            "TACU_Taliban_Militia_V_O_D30",
            "TACU_Taliban_Militia_V_O_DSHKM",
            "TACU_Taliban_Militia_V_O_DSHKM_Mini",
            "TACU_Taliban_Militia_V_O_KORD",
            "TACU_Taliban_Militia_V_O_KORD_Mini",
            "TACU_Taliban_Militia_V_O_ZU23",
            // Turrets - Veterans
            "TACU_Taliban_Veterans_V_I_AGS30",
            "TACU_Taliban_Veterans_V_I_D30",
            "TACU_Taliban_Veterans_V_I_DSHKM",
            "TACU_Taliban_Veterans_V_I_DSHKM_Mini",
            "TACU_Taliban_Veterans_V_I_KORD",
            "TACU_Taliban_Veterans_V_I_KORD_Mini",
            "TACU_Taliban_Veterans_V_O_AGS30",
            "TACU_Taliban_Veterans_V_O_D30",
            "TACU_Taliban_Veterans_V_O_DSHKM",
            "TACU_Taliban_Veterans_V_O_DSHKM_Mini",
            "TACU_Taliban_Veterans_V_O_KORD",
            "TACU_Taliban_Veterans_V_O_KORD_Mini",
            "TACU_Taliban_Veterans_V_O_ZU23"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_assets_cup"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
