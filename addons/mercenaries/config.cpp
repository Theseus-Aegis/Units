#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks - Opfor
            "TACU_Mercenaries_B_AT_FieldPack_Sand",
            "TACU_Mercenaries_B_AP_FieldPack_Sand",
            "TACU_Mercenaries_B_MG_FieldPack_Sand",
            "TACU_Mercenaries_B_Medic_FieldPack_Sand",
            "TACU_Mercenaries_B_Engineer_FieldPack_Sand",
            "TACU_Mercenaries_B_Demolitions_FieldPack_Sand",
            // Units - Opfor, Low
            "TACU_Mercenaries_U_O_Low_Rifleman",
            "TACU_Mercenaries_U_O_Low_AT",
            "TACU_Mercenaries_U_O_Low_AP",
            "TACU_Mercenaries_U_O_Low_MG",
            "TACU_Mercenaries_U_O_Low_Medic",
            "TACU_Mercenaries_U_O_Low_Engineer",
            "TACU_Mercenaries_U_O_Low_Demolitions",
            "TACU_Mercenaries_U_O_Low_Grenadier",
            "TACU_Mercenaries_U_O_Low_Marksman",
            "TACU_Mercenaries_U_O_Low_TeamLeader",
            "TACU_Mercenaries_U_O_Low_SquadLeader",
            "TACU_Mercenaries_U_O_Low_Crewman",
            // Units - Opfor, Medium
            "TACU_Mercenaries_U_O_Medium_Rifleman",
            "TACU_Mercenaries_U_O_Medium_AT",
            "TACU_Mercenaries_U_O_Medium_AP",
            "TACU_Mercenaries_U_O_Medium_MG",
            "TACU_Mercenaries_U_O_Medium_Medic",
            "TACU_Mercenaries_U_O_Medium_Engineer",
            "TACU_Mercenaries_U_O_Medium_Demolitions",
            "TACU_Mercenaries_U_O_Medium_Grenadier",
            "TACU_Mercenaries_U_O_Medium_Marksman",
            "TACU_Mercenaries_U_O_Medium_TeamLeader",
            "TACU_Mercenaries_U_O_Medium_SquadLeader",
            "TACU_Mercenaries_U_O_Medium_Crewman",
            // Units - Opfor, High
            "TACU_Mercenaries_U_O_High_Rifleman",
            "TACU_Mercenaries_U_O_High_AT",
            "TACU_Mercenaries_U_O_High_AP",
            "TACU_Mercenaries_U_O_High_MG",
            "TACU_Mercenaries_U_O_High_Medic",
            "TACU_Mercenaries_U_O_High_Engineer",
            "TACU_Mercenaries_U_O_High_Demolitions",
            "TACU_Mercenaries_U_O_High_Grenadier",
            "TACU_Mercenaries_U_O_High_Marksman",
            "TACU_Mercenaries_U_O_High_TeamLeader",
            "TACU_Mercenaries_U_O_High_SquadLeader",
            "TACU_Mercenaries_U_O_High_Crewman",
            // Backpacks - Independent
            "TACU_Mercenaries_B_AT_FieldPack_Green",
            "TACU_Mercenaries_B_AP_FieldPack_Green",
            "TACU_Mercenaries_B_MG_FieldPack_Green",
            "TACU_Mercenaries_B_Medic_FieldPack_Green",
            "TACU_Mercenaries_B_Engineer_FieldPack_Green",
            "TACU_Mercenaries_B_Demolitions_FieldPack_Green",
            // Units - Independent, Low
            "TACU_Mercenaries_U_I_Low_Rifleman",
            "TACU_Mercenaries_U_I_Low_AT",
            "TACU_Mercenaries_U_I_Low_AP",
            "TACU_Mercenaries_U_I_Low_MG",
            "TACU_Mercenaries_U_I_Low_Medic",
            "TACU_Mercenaries_U_I_Low_Engineer",
            "TACU_Mercenaries_U_I_Low_Demolitions",
            "TACU_Mercenaries_U_I_Low_Grenadier",
            "TACU_Mercenaries_U_I_Low_Marksman",
            "TACU_Mercenaries_U_I_Low_TeamLeader",
            "TACU_Mercenaries_U_I_Low_SquadLeader",
            "TACU_Mercenaries_U_I_Low_Crewman",
            // Units - Independent, Medium
            "TACU_Mercenaries_U_I_Medium_Rifleman",
            "TACU_Mercenaries_U_I_Medium_AT",
            "TACU_Mercenaries_U_I_Medium_AP",
            "TACU_Mercenaries_U_I_Medium_MG",
            "TACU_Mercenaries_U_I_Medium_Medic",
            "TACU_Mercenaries_U_I_Medium_Engineer",
            "TACU_Mercenaries_U_I_Medium_Demolitions",
            "TACU_Mercenaries_U_I_Medium_Grenadier",
            "TACU_Mercenaries_U_I_Medium_Marksman",
            "TACU_Mercenaries_U_I_Medium_TeamLeader",
            "TACU_Mercenaries_U_I_Medium_SquadLeader",
            "TACU_Mercenaries_U_I_Medium_Crewman",
            "TACU_Mercenaries_U_I_High_Rifleman",
            // Units - Independent, High
            "TACU_Mercenaries_U_I_High_AT",
            "TACU_Mercenaries_U_I_High_AP",
            "TACU_Mercenaries_U_I_High_MG",
            "TACU_Mercenaries_U_I_High_Medic",
            "TACU_Mercenaries_U_I_High_Engineer",
            "TACU_Mercenaries_U_I_High_Demolitions",
            "TACU_Mercenaries_U_I_High_Grenadier",
            "TACU_Mercenaries_U_I_High_Marksman",
            "TACU_Mercenaries_U_I_High_TeamLeader",
            "TACU_Mercenaries_U_I_High_SquadLeader",
            "TACU_Mercenaries_U_I_High_Crewman"
        };
        weapons[] = {
            // Opfor Weapons
            "TACU_Mercenaries_W_HK416_Low",
            "TACU_Mercenaries_W_HK416A5_Low",
            "TACU_Mercenaries_W_HK416_GL_Low",
            "TACU_Mercenaries_W_M249_Low",
            "TACU_Mercenaries_W_HK417_Low",
            "TACU_Mercenaries_W_HK416_Medium",
            "TACU_Mercenaries_W_HK416A5_Medium",
            "TACU_Mercenaries_W_HK416_GL_Medium",
            "TACU_Mercenaries_W_M249_Medium",
            "TACU_Mercenaries_W_HK417_Medium",
            "TACU_Mercenaries_W_HK416_High",
            "TACU_Mercenaries_W_HK416A5_High",
            "TACU_Mercenaries_W_HK416_GL_High",
            "TACU_Mercenaries_W_M249_High",
            "TACU_Mercenaries_W_HK417_High",
            "TACU_Mercenaries_W_FNX_Sand_High",
            // Independent Weapons
            "TACU_Mercenaries_W_Tar21_Low",
            "TACU_Mercenaries_W_Ctar21_Low",
            "TACU_Mercenaries_W_Gtar21_Low",
            "TACU_Mercenaries_W_Stoner_Low",
            "TACU_Mercenaries_W_M14_Low",
            "TACU_Mercenaries_W_Tar21_Medium",
            "TACU_Mercenaries_W_Ctar21_Medium",
            "TACU_Mercenaries_W_Gtar21_Medium",
            "TACU_Mercenaries_W_Stoner_Medium",
            "TACU_Mercenaries_W_M14_Medium",
            "TACU_Mercenaries_W_Tar21_High",
            "TACU_Mercenaries_W_Ctar21_High",
            "TACU_Mercenaries_W_Gtar21_High",
            "TACU_Mercenaries_W_Stoner_High",
            "TACU_Mercenaries_W_M14_High",
            "TACU_Mercenaries_W_FNX_Green_High"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets",};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
