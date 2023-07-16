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
            "TACU_African_Militia_U_O_Repair",
            "TACU_African_Militia_U_O_Marksman",
            "TACU_African_Militia_U_O_Teamleader",
            // Opfor Vehicles
            // Opfor Turrets
            // Independent Units
            "TACU_African_Militia_U_I_Rifleman",
            "TACU_African_Militia_U_I_Rifleman_02",
            "TACU_African_Militia_U_I_Shotgunner",
            "TACU_African_Militia_U_I_Medic",
            "TACU_African_Militia_U_I_Demolitions",
            "TACU_African_Militia_U_I_Grenadier",
            "TACU_African_Militia_U_I_Machinegunner",
            "TACU_African_Militia_U_I_AT",
            "TACU_African_Militia_U_I_Repair",
            "TACU_African_Militia_U_I_Marksman",
            "TACU_African_Militia_U_I_Teamleader"
            // Independent Vehicles
            // Independent Turrets
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
        requiredAddons[] = {"tacu_main", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
