#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_African_South_U_B_Rifleman",
            "TACU_African_South_U_B_CQB",
            "TACU_African_South_U_B_Medic",
            "TACU_African_South_U_B_Demolitions",
            "TACU_African_South_U_B_Grenadier",
            "TACU_African_South_U_B_Autorifleman",
            "TACU_African_South_U_B_Machinegunner",
            "TACU_African_South_U_B_Marksman",
            "TACU_African_South_U_B_TL",
            "TACU_African_South_U_B_AT",
            "TACU_African_South_U_B_AP",
            "TACU_African_South_U_B_Sniper",
            "TACU_African_South_U_B_Spotter"
        };
        weapons[] = {
            "TACU_African_South_W_Green_XMS",
            "TACU_African_South_W_Green_XMS_GL",
            "TACU_African_South_W_Green_XMS_SG",
            "TACU_African_South_W_Green_SW",
            "TACU_African_South_W_SLR",
            "TACU_African_South_W_SPW",
            "TACU_African_South_W_Green_M200",
            "TACU_African_South_W_Green_FNX"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
