#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // US Vietnam Forces
            // Units
            "TACU_Vietnam_U_US_Soldier_Base",
            "TACU_Vietnam_U_US_Rifleman_M16_Light",
            "TACU_Vietnam_U_US_Rifleman_M14_Light",
            "TACU_Vietnam_U_US_Rifleman_M16",
            "TACU_Vietnam_U_US_Rifleman_M14",
            "TACU_Vietnam_U_US_Rifleman_AT",
            "TACU_Vietnam_U_US_Rifleman_Wounded",
            "TACU_Vietnam_U_US_Machinegunner",
            "TACU_Vietnam_U_US_Grenadier",
            "TACU_Vietnam_U_US_Grenadier_M79",
            "TACU_Vietnam_U_US_Sniper",
            "TACU_Vietnam_U_US_Sniper_Ghillie",
            "TACU_Vietnam_U_US_Medic",
            "TACU_Vietnam_U_US_TeamLeader",
            "TACU_Vietnam_U_US_Officer",
            "TACU_Vietnam_U_US_Crewman",
            "TACU_Vietnam_U_US_Pilot_Helo",
            // Vehicles
            "TACU_Vietnam_V_US_LandRover",
            "TACU_Vietnam_V_US_LandRover_M2",
            "TACU_Vietnam_V_US_M113A3",
            "TACU_Vietnam_V_US_M113A3_Medic",
            "TACU_Vietnam_V_US_M163A1VADS",
            "TACU_Vietnam_V_US_M60A3",
            "TACU_Vietnam_V_US_UH1H",
            "TACU_Vietnam_V_US_UH1H_Armed",
            "TACU_Vietnam_V_US_UH1H_Gunship",
            "TACU_Vietnam_V_US_AC47D_Spooky",
            "TACU_Vietnam_V_US_C47_Skytrain",
        };
        weapons[] = {
            "TACU_Vietnam_W_M40A3",
            "TACU_Vietnam_W_M40A3_Ghillie"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(Vietnam,Author);
        authors[] = {ECSTRING(Vietnam,Author)};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
