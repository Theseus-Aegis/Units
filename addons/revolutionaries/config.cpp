// Needs CUP Removals.
#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            /*
            // Backpacks
            "TACU_Revolutionaries_B_MMG_UK59_Black",
            "TACU_Revolutionaries_B_LMG_Minimi_Black",
            "TACU_Revolutionaries_B_MMG_UK59_Green",
            "TACU_Revolutionaries_B_LMG_Minimi_Green",
            "TACU_Revolutionaries_B_Rocketeer_Black",
            "TACU_Revolutionaries_B_Saboteur_Black",
            "TACU_Revolutionaries_B_Saboteur_Green",
            "TACU_Revolutionaries_B_Rocketeer_Green",
            "TACU_Revolutionaries_B_Paramedic_Green",
            "TACU_Revolutionaries_B_Paramedic_Black",
            //Backpacks - Veterans
            "TACU_Revolutionaries_B_Vet_Rocketeer_Green",
            "TACU_Revolutionaries_B_Vet_M60_Green",
            "TACU_Revolutionaries_B_Vet_MXLSW_Green",
            "TACU_Revolutionaries_B_Vet_Zafir_Black",
            "TACU_Revolutionaries_B_Vet_Galil_Black",
            "TACU_Revolutionaries_B_Vet_SMAW_Black",
            // Units - Indep - Russian
            "TACU_Revolutionaries_U_I_Russian_Rifleman01",
            "TACU_Revolutionaries_U_I_Russian_Rifleman02",
            "TACU_Revolutionaries_U_I_Russian_Rifleman03",
            "TACU_Revolutionaries_U_I_Russian_Shotgunner",
            "TACU_Revolutionaries_U_I_Russian_Marksman",
            "TACU_Revolutionaries_U_I_Russian_Leader",
            "TACU_Revolutionaries_U_I_Russian_FigureHeadUA",
            "TACU_Revolutionaries_U_I_Russian_FigureHead",
            "TACU_Revolutionaries_U_I_Russian_Head",
            "TACU_Revolutionaries_U_I_Russian_Pistoleer02",
            "TACU_Revolutionaries_U_I_Russian_Pistoleer01",
            "TACU_Revolutionaries_U_I_Russian_Paramedic",
            // Units - Indep - Tanoan
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman01",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman02",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman03",
            "TACU_Revolutionaries_U_I_Tanoan_Shotgunner",
            "TACU_Revolutionaries_U_I_Tanoan_Marksman",
            "TACU_Revolutionaries_U_I_Tanoan_Leader",
            "TACU_Revolutionaries_U_I_Tanoan_FigureHeadUA",
            "TACU_Revolutionaries_U_I_Tanoan_FigureHead",
            "TACU_Revolutionaries_U_I_Tanoan_Head",
            "TACU_Revolutionaries_U_I_Tanoan_Pistoleer02",
            "TACU_Revolutionaries_U_I_Tanoan_Pistoleer01",
            "TACU_Revolutionaries_U_I_Tanoan_Paramedic",
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
            "TACU_Revolutionaries_U_O_Russian_FigureHeadUA",
            "TACU_Revolutionaries_U_O_Russian_FigureHead",
            "TACU_Revolutionaries_U_O_Russian_Leader",
            "TACU_Revolutionaries_U_O_Russian_Rocketeer",
            "TACU_Revolutionaries_U_O_Russian_Saboteur",
            "TACU_Revolutionaries_U_O_Russian_Pistoleer01",
            "TACU_Revolutionaries_U_O_Russian_Pistoleer02",
            "TACU_Revolutionaries_U_O_Russian_Head",
            "TACU_Revolutionaries_U_O_Russian_Paramedic",
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
            "TACU_Revolutionaries_U_O_Tanoan_FigureHeadUA",
            "TACU_Revolutionaries_U_O_Tanoan_FigureHead",
            "TACU_Revolutionaries_U_O_Tanoan_Leader",
            "TACU_Revolutionaries_U_O_Tanoan_Rocketeer",
            "TACU_Revolutionaries_U_O_Tanoan_Saboteur",
            "TACU_Revolutionaries_U_O_Tanoan_Pistoleer01",
            "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02",
            "TACU_Revolutionaries_U_O_Tanoan_Head",
            "TACU_Revolutionaries_U_O_Tanoan_Paramedic",
            // Units - Opfor - Tanoan Veterans
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Medic",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Grenadier",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Figure_Head",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Leader",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer01",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Pistoleer02",
            "TACU_Revolutionaries_U_O_Tanoan_Vet_Head",
            // Units - Opfor - Russian Veterans
            "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01",
            "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman02",
            "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman03",
            "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman04",
            "TACU_Revolutionaries_U_O_Russian_Vet_Medic",
            "TACU_Revolutionaries_U_O_Russian_Vet_Shotgunner",
            "TACU_Revolutionaries_U_O_Russian_Vet_Marksman",
            "TACU_Revolutionaries_U_O_Russian_Vet_SMG01",
            "TACU_Revolutionaries_U_O_Russian_Vet_SMG02",
            "TACU_Revolutionaries_U_O_Russian_Vet_Grenadier",
            "TACU_Revolutionaries_U_O_Russian_Vet_Machinegunner",
            "TACU_Revolutionaries_U_O_Russian_Vet_Autorifleman",
            "TACU_Revolutionaries_U_O_Russian_Vet_Figure_Head",
            "TACU_Revolutionaries_U_O_Russian_Vet_Leader",
            "TACU_Revolutionaries_U_O_Russian_Vet_Rocketeer",
            "TACU_Revolutionaries_U_O_Russian_Vet_Pistoleer01",
            "TACU_Revolutionaries_U_O_Russian_Vet_Pistoleer02",
            "TACU_Revolutionaries_U_O_Russian_Vet_Head",
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
            "TACU_Revolutionaries_V_O_Van",
            "TACU_Revolutionaries_V_O_Jeep_LMG"
            */
        };
        weapons[] = {
            /*
            "TACU_Revolutionaries_W_CZ805A2",
            "TACU_Revolutionaries_W_FNMinimiSPW",
            "TACU_Revolutionaries_W_MP5K",
            "TACU_Revolutionaries_W_CZ805_GL",
            "TACU_Revolutionaries_W_M24",
            "TACU_Revolutionaries_W_CZ750"
            */
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jack"};
        VERSION_CONFIG;
    };
};
//#include "CfgFactionClasses.hpp"
//#include "CfgGroups.hpp"
//#include "CfgVehicles.hpp"
//#include "CfgWeapons.hpp"
