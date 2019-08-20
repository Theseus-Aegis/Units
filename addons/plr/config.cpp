#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_PLR_B_AT",
            // Units (Insurgents)
            "TACU_PLR_U_O_Insurgent_Autorifleman",
            "TACU_PLR_U_O_Insurgent_Rifleman_01",
            "TACU_PLR_U_O_Insurgent_Rifleman_02",
            "TACU_PLR_U_O_Insurgent_Rifleman_03",
            "TACU_PLR_U_O_Insurgent_Rifleman_04",
            "TACU_PLR_U_O_Insurgent_Rifleman_05",
            "TACU_PLR_U_O_Insurgent_Rifleman_AT",
            "TACU_PLR_U_O_Insurgent_Sniper",
            "TACU_PLR_U_O_Insurgent_TeamLeader"
        };
        weapons[] = {
            "TACU_PLR_W_AK47_Early_FL",
            "TACU_PLR_W_AK74_Early_FL",
            "TACU_PLR_W_AKM_Early_FL",
            "TACU_PLR_W_AKS_FL",
            "TACU_PLR_W_RPK74_FL",
            "TACU_PLR_W_SVD"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Kresky"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
//#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
