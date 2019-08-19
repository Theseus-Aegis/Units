#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_TakistanSF_U_B_Grenadier",
            "TACU_TakistanSF_U_B_Rifleman_01",
            "TACU_TakistanSF_U_B_Rifleman_02",
            "TACU_TakistanSF_U_B_Rifleman_03",
            "TACU_TakistanSF_U_B_Sniper"
        };
        weapons[] = {
            "TACU_TakistaniSF_W_M110",
            "TACU_TakistanSF_W_M16A4",
            "TACU_TakistanSF_W_M4A1_GL",
            "TACU_TakistanSF_W_M4A1_Grip",
            "TACU_TakistanSF_W_M4SBR_Tan"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Kresky"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
