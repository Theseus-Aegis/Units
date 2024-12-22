#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Territorial_Defence_RPGPack",
            "TACU_Territorial_Defence_MG_AlicePack",
            "TACU_Territorial_Defence_Demolitions_AlicePack",
            "TACU_Territorial_Defence_Engineer_AlicePack",
            "TACU_Territorial_Defence_Medic_AlicePack",
            // Units - Arid
            "TACU_Territorial_Defence_U_O_Rifleman_Arid",
            "TACU_Territorial_Defence_U_O_Rifleman02_Arid",
            "TACU_Territorial_Defence_U_O_AT_Arid",
            "TACU_Territorial_Defence_U_O_Autorifleman_Arid",
            "TACU_Territorial_Defence_U_O_Grenadier_Arid",
            "TACU_Territorial_Defence_U_O_Engineer_Arid",
            "TACU_Territorial_Defence_U_O_Medic_Arid",
            "TACU_Territorial_Defence_U_O_Demolitions_Arid",
            "TACU_Territorial_Defence_U_O_Marksman_Arid",
            "TACU_Territorial_Defence_U_O_Marksman02_Arid",
            "TACU_Territorial_Defence_U_O_SquadLeader_Arid",
            "TACU_Territorial_Defence_U_O_TeamLeader_Arid",
            "TACU_Territorial_Defence_U_O_Crewman_Arid",
            // Units - Woodland
            "TACU_Territorial_Defence_U_O_Rifleman_Woodland",
            "TACU_Territorial_Defence_U_O_Rifleman02_Woodland",
            "TACU_Territorial_Defence_U_O_AT_Woodland",
            "TACU_Territorial_Defence_U_O_Autorifleman_Woodland",
            "TACU_Territorial_Defence_U_O_Grenadier_Woodland",
            "TACU_Territorial_Defence_U_O_Engineer_Woodland",
            "TACU_Territorial_Defence_U_O_Medic_Woodland",
            "TACU_Territorial_Defence_U_O_Demolitions_Woodland",
            "TACU_Territorial_Defence_U_O_Marksman_Woodland",
            "TACU_Territorial_Defence_U_O_Marksman02_Woodland",
            "TACU_Territorial_Defence_U_O_SquadLeader_Woodland",
            "TACU_Territorial_Defence_U_O_TeamLeader_Woodland",
            "TACU_Territorial_Defence_U_O_Crewman_Woodland",
        };
        weapons[] = {
            "TACU_Territorial_Defence_AK103_OKP7",
            "TACU_Territorial_Defence_AK103GL_OKP7",
            "TACU_Territorial_Defence_AK105_Kobra",
            "TACU_Territorial_Defence_RPK_1P63"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacu_assets",
            "tacu_territorial_militia"
        };
        skipWhenMissingDependencies = 1;
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
