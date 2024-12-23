#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_African_Militia_B_Medic",
            "TACU_African_Militia_B_Demolitions",
            "TACU_African_Militia_B_MG",
            "TACU_African_Militia_B_AT",
            "TACU_African_Militia_B_AP",
            "TACU_African_Militia_B_Engineer",
            // Opfor Units
            "TACU_African_Militia_U_O_Rifleman",
            "TACU_African_Militia_U_O_Rifleman_02",
            "TACU_African_Militia_U_O_Shotgunner",
            "TACU_African_Militia_U_O_Medic",
            "TACU_African_Militia_U_O_Demolitions",
            "TACU_African_Militia_U_O_Grenadier",
            "TACU_African_Militia_U_O_Machinegunner",
            "TACU_African_Militia_U_O_AT",
            "TACU_African_Militia_U_O_AP",
            "TACU_African_Militia_U_O_Repair",
            "TACU_African_Militia_U_O_Marksman",
            "TACU_African_Militia_U_O_Teamleader",
            // Opfor Vehicles
            "TACU_African_Militia_V_O_Offroad",
            "TACU_African_Militia_V_O_Offroad_Armed",
            "TACU_African_Militia_V_O_Offroad_AT",
            "TACU_African_Militia_V_O_Offroad_UP",
            "TACU_African_Militia_V_O_Offroad_UP_Armed",
            "TACU_African_Militia_V_O_Offroad_UP_AT",
            "TACU_African_Militia_V_O_Truck",
            "TACU_African_Militia_V_O_Kamaz",
            "TACU_African_Militia_V_O_Kamaz_ZU23",
            // Opfor Turrets
            "TACU_African_Militia_V_O_MK6",
            "TACU_African_Militia_V_O_HMG",
            "TACU_African_Militia_V_O_ZU23",
            "TACU_African_Militia_V_O_DSHKM",
            // Independent Units
            "TACU_African_Militia_U_I_Rifleman",
            "TACU_African_Militia_U_I_Rifleman_02",
            "TACU_African_Militia_U_I_Shotgunner",
            "TACU_African_Militia_U_I_Medic",
            "TACU_African_Militia_U_I_Demolitions",
            "TACU_African_Militia_U_I_Grenadier",
            "TACU_African_Militia_U_I_Machinegunner",
            "TACU_African_Militia_U_I_AT",
            "TACU_African_Militia_U_I_AP",
            "TACU_African_Militia_U_I_Repair",
            "TACU_African_Militia_U_I_Marksman",
            "TACU_African_Militia_U_I_Teamleader",
            // Independent Vehicles
            "TACU_African_Militia_V_I_Offroad",
            "TACU_African_Militia_V_I_Offroad_Armed",
            "TACU_African_Militia_V_I_Offroad_AT",
            "TACU_African_Militia_V_I_Offroad_UP",
            "TACU_African_Militia_V_I_Offroad_UP_Armed",
            "TACU_African_Militia_V_I_Offroad_UP_AT",
            "TACU_African_Militia_V_I_Truck",
            "TACU_African_Militia_V_I_Kamaz",
            "TACU_African_Militia_V_I_Kamaz_ZU23",
            // Independent Turrets
            "TACU_African_Militia_V_I_MK6",
            "TACU_African_Militia_V_I_HMG",
            "TACU_African_Militia_V_I_ZU23",
            "TACU_African_Militia_V_I_DSHKM"
        };
        weapons[] = {
            "TACU_African_Militia_W_Galat",
            "TACU_African_Militia_W_SLR",
            "TACU_African_Militia_W_SLR_GL",
            "TACU_African_Militia_W_SA77",
            "TACU_African_Militia_W_AK12U_Lush",
            "TACU_African_Militia_W_AK12",
            "TACU_African_Militia_W_VS121"
        };
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
#include "CfgWeapons.hpp"
