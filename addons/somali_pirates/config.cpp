#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Somali_Pirates_B_AT_Assault_RPG",
            "TACU_Somali_Pirates_U_I_Rifleman_01",
            "TACU_Somali_Pirates_U_I_Rifleman_02",
            "TACU_Somali_Pirates_U_I_Rifleman_03",
            "TACU_Somali_Pirates_U_I_Rifleman_04",
            "TACU_Somali_Pirates_U_I_Rifleman_05",
            "TACU_Somali_Pirates_U_I_Rifleman_06",
            "TACU_Somali_Pirates_U_I_Autorifleman",
            "TACU_Somali_Pirates_U_I_AT",
            "TACU_Somali_Pirates_U_I_Driver",
            "TACU_Somali_Pirates_U_O_Rifleman_01",
            "TACU_Somali_Pirates_U_O_Rifleman_02",
            "TACU_Somali_Pirates_U_O_Rifleman_03",
            "TACU_Somali_Pirates_U_O_Rifleman_04",
            "TACU_Somali_Pirates_U_O_Rifleman_05",
            "TACU_Somali_Pirates_U_O_Rifleman_06",
            "TACU_Somali_Pirates_U_O_Autorifleman",
            "TACU_Somali_Pirates_U_O_AT",
            "TACU_Somali_Pirates_U_O_Driver",
            "TACU_Somali_Pirates_V_I_Assault_Boat",
            "TACU_Somali_Pirates_V_O_Assault_Boat",
            "TACU_Somali_Pirates_V_I_Water_Scooter",
            "TACU_Somali_Pirates_V_O_Water_Scooter",
            "TACU_Somali_Pirates_V_I_RHIB",
            "TACU_Somali_Pirates_V_O_RHIB",
            "TACU_Somali_Pirates_V_I_Motorboat",
            "TACU_Somali_Pirates_V_O_Motorboat"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacu_assets",
            "CUP_Weapons_LoadOrder"
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
