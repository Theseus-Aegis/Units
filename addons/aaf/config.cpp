#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_AAF_B_AT_Carryall",
            "TACU_AAF_B_AP_Carryall",
            "TACU_AAF_B_Medic_Kitbag",
            "TACU_AAF_B_Demo_AssaultPack",
            "TACU_AAF_B_Repair_AssaultPack",
            "TACU_AAF_B_MG_AssaultPack",
            // Units
            "TACU_AAF_U_I_Rifleman",
            "TACU_AAF_U_I_Rifleman_AT",
            "TACU_AAF_U_I_Rifleman_AP",
            "TACU_AAF_U_I_Grenadier",
            "TACU_AAF_U_I_Marksman",
            "TACU_AAF_U_I_TeamLeader",
            "TACU_AAF_U_I_MG",
            "TACU_AAF_U_I_Medic",
            "TACU_AAF_U_I_Demolitions",
            "TACU_AAF_U_I_Engineer"
        };
        weapons[] = {
            "TACU_AAF_W_F2000",
            "TACU_AAF_W_F2000_GL",
            "TACU_AAF_W_Vektor_77",
            "TACU_AAF_W_HK417",
            "TACU_AAF_W_P99"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacu_assets_vehicles",
            "RF_Weapons_Launchers_PSRL1"
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
