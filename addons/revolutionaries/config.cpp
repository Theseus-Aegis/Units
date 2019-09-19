#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Revolutionaries_B_MMG_UK59_Black",
            "TACU_Revolutionaries_B_LMG_Minimi_Black",
            "TACU_Revolutionaries_B_MMG_UK59_Green",
            "TACU_Revolutionaries_B_LMG_Minimi_Green",
            // Units - Indep - Russian
            "TACU_Revolutionaries_U_I_Russian_Rifleman01",
            "TACU_Revolutionaries_U_I_Russian_Rifleman02",
            "TACU_Revolutionaries_U_I_Russian_Rifleman03",
            "TACU_Revolutionaries_U_I_Russian_Shotgunner",
            "TACU_Revolutionaries_U_I_Russian_Marksman",
            // Units - Indep - Tanoan
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman01",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman02",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman03",
            "TACU_Revolutionaries_U_I_Tanoan_Shotgunner",
            "TACU_Revolutionaries_U_I_Tanoan_Marksman",
            // Units - Opfor - Russian
            "TACU_Revolutionaries_U_O_Russian_Rifleman01",
            "TACU_Revolutionaries_U_O_Russian_Rifleman02",
            "TACU_Revolutionaries_U_O_Russian_Rifleman03",
            "TACU_Revolutionaries_U_O_Russian_Rifleman04",
            "TACU_Revolutionaries_U_O_Russian_Shotgunner",
            "TACU_Revolutionaries_U_O_Russian_Marksman",
            "TACU_Revolutionaries_U_O_Russian_SMG01",
            "TACU_Revolutionaries_U_O_Russian_SMG02",
            "TACU_Revolutionaries_U_O_Russian_Grenadier",
            "TACU_Revolutionaries_U_O_Russian_Machinegunner",
            "TACU_Revolutionaries_U_O_Russian_Autorifleman",
            // Units - Opfor - Tanoan
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman01",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman02",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman03",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman04",
            "TACU_Revolutionaries_U_O_Tanoan_Shotgunner",
            "TACU_Revolutionaries_U_O_Tanoan_Marksman",
            "TACU_Revolutionaries_U_O_Tanoan_SMG01",
            "TACU_Revolutionaries_U_O_Tanoan_SMG02",
            "TACU_Revolutionaries_U_O_Tanoan_Grenadier",
            "TACU_Revolutionaries_U_O_Tanoan_Machinegunner",
            "TACU_Revolutionaries_U_O_Tanoan_Autorifleman",
            // Vehicles - Indep - Russian
            "TACU_Revolutionaries_V_I_Datsun_5Seat",
            "TACU_Revolutionaries_V_I_Golf_Black",
            "TACU_Revolutionaries_V_I_Skoda_Blue",
            // Vehicles - Indep - Tanoan
            "TACU_Revolutionaries_V_I_Offroad",
            "TACU_Revolutionaries_V_I_Hatchback",
            // Vehicles - Opfor - Russian
            "TACU_Revolutionaries_V_O_Datsun_5Seat",
            "TACU_Revolutionaries_V_O_Golf_Black",
            "TACU_Revolutionaries_V_O_Skoda_Blue",
            "TACU_Revolutionaries_V_O_Datsun_PK",
            "TACU_Revolutionaries_V_O_Ural",
            // Vehicles - Opfor - Tanoan
            "TACU_Revolutionaries_V_O_Hatchback",
            "TACU_Revolutionaries_V_O_KamAZ",
            "TACU_Revolutionaries_V_O_Offroad",
            "TACU_Revolutionaries_V_O_Jeep_LMG"
        };
        weapons[] = {
            "TACU_Revolutionaries_W_CZ805A2",
            "TACU_Revolutionaries_W_FNMinimiSPW",
            "TACU_Revolutionaries_W_MP5K"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jack"};
        VERSION_CONFIG;
    };
};
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
