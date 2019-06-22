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
            "TACU_MSF_U_I_Black_Rifleman",
            "TACU_MSF_U_I_Black_Rifleman_AT",
            "TACU_MSF_U_I_Black_SMG",
            "TACU_MSF_U_I_Black_TeamLeader",
            // Units (Indep - Desert)
            "TACU_MSF_U_I_Desert_Autorifleman",
            "TACU_MSF_U_I_Desert_Engineer",
            "TACU_MSF_U_I_Desert_Grenadier",
            "TACU_MSF_U_I_Desert_Marksman",
            "TACU_MSF_U_I_Desert_Medic",
            "TACU_MSF_U_I_Desert_Rifleman",
            "TACU_MSF_U_I_Desert_Rifleman_AT",
            "TACU_MSF_U_I_Desert_SMG",
            "TACU_MSF_U_I_Desert_TeamLeader",
            // Units (Indep - Wood)
            "TACU_MSF_U_I_Wood_Autorifleman",
            "TACU_MSF_U_I_Wood_Engineer",
            "TACU_MSF_U_I_Wood_Grenadier",
            "TACU_MSF_U_I_Wood_Marksman",
            "TACU_MSF_U_I_Wood_Medic",
            "TACU_MSF_U_I_Wood_Rifleman",
            "TACU_MSF_U_I_Wood_Rifleman_AT",
            "TACU_MSF_U_I_Wood_SMG",
            "TACU_MSF_U_I_Wood_TeamLeader",
            // Units (Opfor - Black)
            "TACU_MSF_U_O_Black_Autorifleman",
            "TACU_MSF_U_O_Black_Crewman",
            "TACU_MSF_U_O_Black_Engineer",
            "TACU_MSF_U_O_Black_Grenadier",
            "TACU_MSF_U_O_Black_Marksman",
            "TACU_MSF_U_O_Black_Medic",
            "TACU_MSF_U_O_Black_Pilot",
            "TACU_MSF_U_O_Black_Rifleman",
            "TACU_MSF_U_O_Black_Rifleman_AT",
            "TACU_MSF_U_O_Black_SMG",
            "TACU_MSF_U_O_Black_TeamLeader",
            // Units (Opfor - Desert)
            "TACU_MSF_U_O_Desert_Autorifleman",
            "TACU_MSF_U_O_Desert_Engineer",
            "TACU_MSF_U_O_Desert_Grenadier",
            "TACU_MSF_U_O_Desert_Marksman",
            "TACU_MSF_U_O_Desert_Medic",
            "TACU_MSF_U_O_Desert_Rifleman",
            "TACU_MSF_U_O_Desert_Rifleman_AT",
            "TACU_MSF_U_O_Desert_SMG",
            "TACU_MSF_U_O_Desert_TeamLeader",
            // Units (Opfor - Wood)
            "TACU_MSF_U_O_Wood_Autorifleman",
            "TACU_MSF_U_O_Wood_Engineer",
            "TACU_MSF_U_O_Wood_Grenadier",
            "TACU_MSF_U_O_Wood_Marksman",
            "TACU_MSF_U_O_Wood_Medic",
            "TACU_MSF_U_O_Wood_Rifleman",
            "TACU_MSF_U_O_Wood_Rifleman_AT",
            "TACU_MSF_U_O_Wood_SMG",
            "TACU_MSF_U_O_Wood_TeamLeader",
            // Vehicles (Indep)
            "TACU_MSF_V_I_Mi24",
            // Vehicles (Opfor)
            "TACU_MSF_V_O_Mi24"
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
            "TACU_MSF_W_ACR_Carb_Black",
            "TACU_MSF_W_ACR_GL_Carb_Black",
            "TACU_MSF_W_SIG556_DMR"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(Black,Author);
        authors[] = {"Kresky"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
