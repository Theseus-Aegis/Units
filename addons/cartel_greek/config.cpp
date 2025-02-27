#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Units - Grunts
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_01",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_02",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_03",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_04",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_05",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_06",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_07",
            "TACU_Cartel_Greek_U_O_Grunt_Rifleman_08",
            // Units - Thugs
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_01",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_02",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_03",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_04",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_05",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_06",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_07",
            "TACU_Cartel_Greek_U_O_Thug_Rifleman_08",
            // Units - Enforcers
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_02",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_03",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_04",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_05",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_06",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_07",
            "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_08",
            // Vehicles - Grunts
            "TACU_Cartel_Greek_V_O_Grunt_Offroad",
            "TACU_Cartel_Greek_V_O_Grunt_Van_Transport",
            // Vehicles - Thugs
            "TACU_Cartel_Greek_V_O_Thug_Offroad",
            "TACU_Cartel_Greek_V_O_Thug_Offroad_Armed",
            "TACU_Cartel_Greek_V_O_Thug_Van_Transport",
            // Vehicles - Enforcers
            "TACU_Cartel_Greek_V_O_Enforcer_Offroad",
            "TACU_Cartel_Greek_V_O_Enforcer_Offroad_Armed"
        };
        weapons[] = {
            "TACU_Cartel_Greek_W_M9_Laser",
            "TACU_Cartel_Greek_W_G36A_RIS",
            "TACU_Cartel_Greek_W_G36A_AG36",
            "TACU_Cartel_Greek_W_G36C",
            "TACU_Cartel_Greek_W_G36K_KSK",
            "TACU_Cartel_Greek_W_G3A3",
            "TACU_Cartel_Greek_W_MG36",
            "TACU_Cartel_Greek_W_Saiga12k",
            "TACU_Cartel_Greek_W_hgun_MP7"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets_vehicles"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
