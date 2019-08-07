#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Ground Items
            "TACU_MSF_Item_Uniform_Combat_TigerBlack",
            "TACU_MSF_Item_Uniform_Combat_TigerDesert",
            "TACU_MSF_Item_Uniform_Combat_TigerWood",
            "TACU_MSF_Item_Vest_HeavyPlateCarrier_Black",
            "TACU_MSF_Item_Vest_HeavyPlateCarrier_Coyote",
            "TACU_MSF_Item_Vest_HeavyPlateCarrier_Green",
            "TACU_MSF_Item_Vest_PlateCarrier_Black",
            "TACU_MSF_Item_Vest_PlateCarrier_Coyote",
            "TACU_MSF_Item_Vest_PlateCarrier_Green",
            // Backpacks
            "TACU_MSF_B_AT_Black",
            "TACU_MSF_B_AT_Coyote",
            "TACU_MSF_B_AT_Green",
            "TACU_MSF_B_Engineer_Black",
            "TACU_MSF_B_Engineer_Coyote",
            "TACU_MSF_B_Engineer_Green",
            "TACU_MSF_B_Medic_Black",
            "TACU_MSF_B_Medic_Coyote",
            "TACU_MSF_B_Medic_Green",
            // Units (Indep - Black)
            "TACU_MSF_U_I_Black_Autorifleman",
            "TACU_MSF_U_I_Black_Crewman",
            "TACU_MSF_U_I_Black_Engineer",
            "TACU_MSF_U_I_Black_Grenadier",
            "TACU_MSF_U_I_Black_Marksman",
            "TACU_MSF_U_I_Black_Medic",
            "TACU_MSF_U_I_Black_Pilot",
            "TACU_MSF_U_I_Black_Rifleman_01",
            "TACU_MSF_U_I_Black_Rifleman_AT",
            "TACU_MSF_U_I_Black_SMG",
            "TACU_MSF_U_I_Black_TeamLeader",
            // Units (Indep - Black Heavy)
            "TACU_MSF_U_I_Black_Heavy_Autorifleman",
            "TACU_MSF_U_I_Black_Heavy_Engineer",
            "TACU_MSF_U_I_Black_Heavy_Grenadier",
            "TACU_MSF_U_I_Black_Heavy_Marksman",
            "TACU_MSF_U_I_Black_Heavy_Medic",
            "TACU_MSF_U_I_Black_Heavy_Rifleman_01",
            "TACU_MSF_U_I_Black_Heavy_Rifleman_AT",
            "TACU_MSF_U_I_Black_Heavy_Teamleader",
            // Units (Indep - Desert)
            "TACU_MSF_U_I_Desert_Autorifleman",
            "TACU_MSF_U_I_Desert_Engineer",
            "TACU_MSF_U_I_Desert_Grenadier",
            "TACU_MSF_U_I_Desert_Marksman",
            "TACU_MSF_U_I_Desert_Medic",
            "TACU_MSF_U_I_Desert_Rifleman_01",
            "TACU_MSF_U_I_Desert_Rifleman_AT",
            "TACU_MSF_U_I_Desert_SMG",
            "TACU_MSF_U_I_Desert_TeamLeader",
            // Units (Indep - Desert Heavy)
            "TACU_MSF_U_I_Desert_Heavy_Autorifleman",
            "TACU_MSF_U_I_Desert_Heavy_Engineer",
            "TACU_MSF_U_I_Desert_Heavy_Grenadier",
            "TACU_MSF_U_I_Desert_Heavy_Marksman",
            "TACU_MSF_U_I_Desert_Heavy_Medic",
            "TACU_MSF_U_I_Desert_Heavy_Rifleman_01",
            "TACU_MSF_U_I_Desert_Heavy_Rifleman_AT",
            "TACU_MSF_U_I_Desert_Heavy_Teamleader",
            // Units (Indep - Wood)
            "TACU_MSF_U_I_Wood_Autorifleman",
            "TACU_MSF_U_I_Wood_Engineer",
            "TACU_MSF_U_I_Wood_Grenadier",
            "TACU_MSF_U_I_Wood_Marksman",
            "TACU_MSF_U_I_Wood_Medic",
            "TACU_MSF_U_I_Wood_Rifleman_01",
            "TACU_MSF_U_I_Wood_Rifleman_AT",
            "TACU_MSF_U_I_Wood_SMG",
            "TACU_MSF_U_I_Wood_TeamLeader",
            // Units (Indep - Wood Heavy)
            "TACU_MSF_U_I_Wood_Heavy_Autorifleman",
            "TACU_MSF_U_I_Wood_Heavy_Engineer",
            "TACU_MSF_U_I_Wood_Heavy_Grenadier",
            "TACU_MSF_U_I_Wood_Heavy_Marksman",
            "TACU_MSF_U_I_Wood_Heavy_Medic",
            "TACU_MSF_U_I_Wood_Heavy_Rifleman_01",
            "TACU_MSF_U_I_Wood_Heavy_Rifleman_AT",
            "TACU_MSF_U_I_Wood_Heavy_Teamleader",
            // Units (Indep - Zero Spec-Ops)
            "TACU_MSF_U_I_Zero_Rifleman_01",
            "TACU_MSF_U_I_Zero_Autorifleman",
            "TACU_MSF_U_I_Zero_Marksman",
            "TACU_MSF_U_I_Zero_SMG_01",
            // Units (Opfor - Black)
            "TACU_MSF_U_O_Black_Autorifleman",
            "TACU_MSF_U_O_Black_Crewman",
            "TACU_MSF_U_O_Black_Engineer",
            "TACU_MSF_U_O_Black_Grenadier",
            "TACU_MSF_U_O_Black_Marksman",
            "TACU_MSF_U_O_Black_Medic",
            "TACU_MSF_U_O_Black_Pilot",
            "TACU_MSF_U_O_Black_Rifleman_01",
            "TACU_MSF_U_O_Black_Rifleman_AT",
            "TACU_MSF_U_O_Black_SMG",
            "TACU_MSF_U_O_Black_TeamLeader",
            // Units (Opfor - Black Heavy)
            "TACU_MSF_U_O_Black_Heavy_Autorifleman",
            "TACU_MSF_U_O_Black_Heavy_Engineer",
            "TACU_MSF_U_O_Black_Heavy_Grenadier",
            "TACU_MSF_U_O_Black_Heavy_Marksman",
            "TACU_MSF_U_O_Black_Heavy_Medic",
            "TACU_MSF_U_O_Black_Heavy_Rifleman_01",
            "TACU_MSF_U_O_Black_Heavy_Rifleman_AT",
            "TACU_MSF_U_O_Black_Heavy_Teamleader",
            // Units (Opfor - Desert)
            "TACU_MSF_U_O_Desert_Autorifleman",
            "TACU_MSF_U_O_Desert_Engineer",
            "TACU_MSF_U_O_Desert_Grenadier",
            "TACU_MSF_U_O_Desert_Marksman",
            "TACU_MSF_U_O_Desert_Medic",
            "TACU_MSF_U_O_Desert_Rifleman_01",
            "TACU_MSF_U_O_Desert_Rifleman_AT",
            "TACU_MSF_U_O_Desert_SMG",
            "TACU_MSF_U_O_Desert_TeamLeader",
            // Units (Opfor - Desert Heavy)
            "TACU_MSF_U_O_Desert_Heavy_Autorifleman",
            "TACU_MSF_U_O_Desert_Heavy_Engineer",
            "TACU_MSF_U_O_Desert_Heavy_Grenadier",
            "TACU_MSF_U_O_Desert_Heavy_Rifleman_01",
            "TACU_MSF_U_O_Desert_Heavy_Rifleman_AT",
            "TACU_MSF_U_O_Desert_Heavy_Marksman",
            "TACU_MSF_U_O_Desert_Heavy_Medic",
            "TACU_MSF_U_O_Desert_Heavy_Teamleader",
            // Units (Opfor - Wood)
            "TACU_MSF_U_O_Wood_Autorifleman",
            "TACU_MSF_U_O_Wood_Engineer",
            "TACU_MSF_U_O_Wood_Grenadier",
            "TACU_MSF_U_O_Wood_Marksman",
            "TACU_MSF_U_O_Wood_Medic",
            "TACU_MSF_U_O_Wood_Rifleman_01",
            "TACU_MSF_U_O_Wood_Rifleman_AT",
            "TACU_MSF_U_O_Wood_SMG",
            "TACU_MSF_U_O_Wood_TeamLeader",
            // Units (Opfor - Wood Heavy)
            "TACU_MSF_U_O_Wood_Heavy_Autorifleman",
            "TACU_MSF_U_O_Wood_Heavy_Engineer",
            "TACU_MSF_U_O_Wood_Heavy_Grenadier",
            "TACU_MSF_U_O_Wood_Heavy_Marksman",
            "TACU_MSF_U_O_Wood_Heavy_Medic",
            "TACU_MSF_U_O_Wood_Heavy_Rifleman_01",
            "TACU_MSF_U_O_Wood_Heavy_Rifleman_AT",
            "TACU_MSF_U_O_Wood_Heavy_Teamleader",
            // Units (Indep - Zero Spec-Ops)
            "TACU_MSF_U_O_Zero_Rifleman_01",
            "TACU_MSF_U_O_Zero_Autorifleman",
            "TACU_MSF_U_O_Zero_Marksman",
            "TACU_MSF_U_O_Zero_SMG_01",
            // Vehicles (Base classes)
            "TACU_MSF_V_Prowler_AT_Base",
            "TACU_MSF_V_Prowler_HMG_Base",
            "TACU_MSF_V_Prowler_Base",
            // Vehicles (Indep)
            "TACU_MSF_V_I_C130_Infantry",
            "TACU_MSF_V_I_C130_Vehicle",
            "TACU_MSF_V_I_Mi24",
            "TACU_MSF_V_I_MTVR_Transport_Black",
            "TACU_MSF_V_I_MTVR_Ammo_Black",
            "TACU_MSF_V_I_MTVR_Refuel_Black",
            "TACU_MSF_V_I_MTVR_Repair_Black",
            "TACU_MSF_V_I_Prowler_Black",
            "TACU_MSF_V_I_Prowler_HMG_Black",
            "TACU_MSF_V_I_Prowler_AT_Black",
            "TACU_MSF_V_I_UH60",
            "TACU_MSF_V_I_UH60_FFV",
            "TACU_MSF_V_I_UH60_Unarmed",
            "TACU_MSF_V_I_UH60_Unarmed_FFV",
            "TACU_MSF_V_I_UH60_Gunship",
            "TACU_MSF_V_I_V44_Infantry",
            "TACU_MSF_V_I_V44_Vehicle",
            // Vehicles (Opfor)
            "TACU_MSF_V_O_C130_Infantry",
            "TACU_MSF_V_O_C130_Vehicle",
            "TACU_MSF_V_O_Mi24",
            "TACU_MSF_V_O_MTVR_Transport_Black",
            "TACU_MSF_V_O_MTVR_Ammo_Black",
            "TACU_MSF_V_O_MTVR_Refuel_Black",
            "TACU_MSF_V_O_MTVR_Repair_Black",
            "TACU_MSF_V_O_Prowler_Black",
            "TACU_MSF_V_O_Prowler_HMG_Black",
            "TACU_MSF_V_O_Prowler_AT_Black",
            "TACU_MSF_V_O_UH60",
            "TACU_MSF_V_O_UH60_FFV",
            "TACU_MSF_V_O_UH60_Unarmed",
            "TACU_MSF_V_O_UH60_Unarmed_FFV",
            "TACU_MSF_V_O_UH60_Gunship",
            "TACU_MSF_V_O_V44_Infantry",
            "TACU_MSF_V_O_V44_Vehicle"
        };
        weapons[] = {
            // Uniforms
            "TACU_MSF_Uniform_Combat_TigerBlack",
            "TACU_MSF_Uniform_Combat_TigerDesert",
            "TACU_MSF_Uniform_Combat_TigerWood",
            // Vests
            "TACU_MSF_Vest_HeavyPlateCarrier_Black",
            "TACU_MSF_Vest_HeavyPlateCarrier_Coyote",
            "TACU_MSF_Vest_HeavyPlateCarrier_Green",
            "TACU_MSF_Vest_PlateCarrier_Black",
            "TACU_MSF_Vest_PlateCarrier_Coyote",
            "TACU_MSF_Vest_PlateCarrier_Green",
            // Weapons
            "TACU_MSF_W_FNX45_Green",
            "TACU_MSF_W_FNX45_Stealth_Green",
            "TACU_MSF_W_HK416_Black",
            "TACU_MSF_W_HK416GL_Black",
            "TACU_MSF_W_HK416_CQC_Black",
            "TACU_MSF_W_HK416GL_CQC_Black",
            "TACU_MSF_W_HK417DMR_Black",
            "TACU_MSF_W_HoneyBadger",
            "TACU_MSF_W_LAR15",
            "TACU_MSF_W_M27_Grip",
            "TACU_MSF_W_Promet_Black",
            "TACU_MSF_W_PrometGL_Black",
            "TACU_MSF_W_PrometDMR_Black",
            "TACU_MSF_W_PrometSG_Black",
            "TACU_MSF_W_Scorpion",
            "TACU_MSF_W_Stoner99LMG"

        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Kresky"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
