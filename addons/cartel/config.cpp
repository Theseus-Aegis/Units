#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Main_U_OPFOR_Soldier_Base",
            "TACU_Cartel_U_O_Soldado_Rifleman",
            "TACU_Cartel_U_O_Soldado_Rifleman_01",
            "TACU_Cartel_U_O_Soldado_Rifleman_02",
            "TACU_Cartel_U_O_Soldado_Rifleman_03",
            "TACU_Cartel_U_O_Soldado_Rifleman_04",
            "TACU_Cartel_U_O_Soldado_Driver",
            "TACU_Cartel_U_O_Soldado_Rifleman_AT",
            "TACU_Cartel_U_O_Soldado_Rifleman_MG",
            "TACU_Cartel_U_O_Soldado_Grenadier",
            "TACU_Cartel_U_O_Sicario_Rifleman_01",
            "TACU_Cartel_U_O_Sicario_Rifleman_02",
            "TACU_Cartel_U_O_Sicario_Rifleman_03",
            "TACU_Cartel_U_O_Sicario_Rifleman_04",
            "TACU_Cartel_U_O_Sicario_Rifleman_AT",
            "TACU_Cartel_U_O_Sicario_Rifleman_MG",
            "TACU_Cartel_U_O_Sicario_Grenadier",
            "TACU_Cartel_V_O_Offroad_Jeep",
            "TACU_Cartel_V_O_Offroad_Jeep_Armed",
            "TACU_Cartel_V_O_Van_Transport", // End of Deprecated Units.
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
