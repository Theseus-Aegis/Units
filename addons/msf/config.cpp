#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_MSF_Item_Uniform_Combat_TigerBlack",
            "TACU_MSF_Item_Uniform_Combat_TigerDesert",
            "TACU_MSF_Item_Uniform_Combat_TigerWood",
            "TACU_MSF_Item_Vest_HeavyPlateCarrier_Black",
            "TACU_MSF_Item_Vest_HeavyPlateCarrier_Coyote",
            "TACU_MSF_Item_Vest_HeavyPlateCarrier_Green",
            "TACU_MSF_Item_Vest_PlateCarrier_Black",
            "TACU_MSF_Item_Vest_PlateCarrier_Coyote",
            "TACU_MSF_Item_Vest_PlateCarrier_Green",
            "TACU_MSF_B_AT_Black",
            "TACU_MSF_B_AT_Coyote",
            "TACU_MSF_B_AT_Green",
            "TACU_MSF_B_Engineer_Black",
            "TACU_MSF_B_Engineer_Coyote",
            "TACU_MSF_B_Engineer_Green",
            "TACU_MSF_B_Medic_Black",
            "TACU_MSF_B_Medic_Coyote",
            "TACU_MSF_B_Medic_Green",
            "TACU_MSF_U_I_Desert_Autorifleman",
            "TACU_MSF_U_I_Desert_Engineer",
            "TACU_MSF_U_I_Desert_Grenadier",
            "TACU_MSF_U_I_Desert_Marksman",
            "TACU_MSF_U_I_Desert_Medic",
            "TACU_MSF_U_I_Desert_Rifleman",
            "TACU_MSF_U_I_Desert_Rifleman_AT",
            "TACU_MSF_U_I_Desert_SMG",
            "TACU_MSF_U_I_Desert_TeamLeader",
            "TACU_MSF_U_I_Main_Autorifleman",
            "TACU_MSF_U_I_Main_Crewman",
            "TACU_MSF_U_I_Main_Engineer",
            "TACU_MSF_U_I_Main_Grenadier",
            "TACU_MSF_U_I_Main_Marksman",
            "TACU_MSF_U_I_Main_Medic",
            "TACU_MSF_U_I_Main_Pilot",
            "TACU_MSF_U_I_Main_Rifleman",
            "TACU_MSF_U_I_Main_Rifleman_AT",
            "TACU_MSF_U_I_Main_SMG",
            "TACU_MSF_U_I_Main_TeamLeader",
            "TACU_MSF_U_I_Wood_Autorifleman",
            "TACU_MSF_U_I_Wood_Engineer",
            "TACU_MSF_U_I_Wood_Grenadier",
            "TACU_MSF_U_I_Wood_Marksman",
            "TACU_MSF_U_I_Wood_Medic",
            "TACU_MSF_U_I_Wood_Rifleman",
            "TACU_MSF_U_I_Wood_Rifleman_AT",
            "TACU_MSF_U_I_Wood_SMG",
            "TACU_MSF_U_I_Wood_TeamLeader",
            "TACU_MSF_U_O_Desert_Autorifleman",
            "TACU_MSF_U_O_Desert_Engineer",
            "TACU_MSF_U_O_Desert_Grenadier",
            "TACU_MSF_U_O_Desert_Marksman",
            "TACU_MSF_U_O_Desert_Medic",
            "TACU_MSF_U_O_Desert_Rifleman",
            "TACU_MSF_U_O_Desert_Rifleman_AT",
            "TACU_MSF_U_O_Desert_SMG",
            "TACU_MSF_U_O_Desert_TeamLeader",
            "TACU_MSF_U_O_Main_Autorifleman",
            "TACU_MSF_U_O_Main_Crewman",
            "TACU_MSF_U_O_Main_Engineer",
            "TACU_MSF_U_O_Main_Grenadier",
            "TACU_MSF_U_O_Main_Marksman",
            "TACU_MSF_U_O_Main_Medic",
            "TACU_MSF_U_O_Main_Pilot",
            "TACU_MSF_U_O_Main_Rifleman",
            "TACU_MSF_U_O_Main_Rifleman_AT",
            "TACU_MSF_U_O_Main_SMG",
            "TACU_MSF_U_O_Main_TeamLeader",
            "TACU_MSF_U_O_Wood_Autorifleman",
            "TACU_MSF_U_O_Wood_Engineer",
            "TACU_MSF_U_O_Wood_Grenadier",
            "TACU_MSF_U_O_Wood_Marksman",
            "TACU_MSF_U_O_Wood_Medic",
            "TACU_MSF_U_O_Wood_Rifleman",
            "TACU_MSF_U_O_Wood_Rifleman_AT",
            "TACU_MSF_U_O_Wood_SMG",
            "TACU_MSF_U_O_Wood_TeamLeader",
            "TACU_MSF_V_I_Mi24",
            "TACU_MSF_V_O_Mi24"
        };
        weapons[] = {
            "TACU_MSF_Uniform_Combat_TigerBlack",
            "TACU_MSF_Uniform_Combat_TigerDesert",
            "TACU_MSF_Uniform_Combat_TigerWood",
            "TACU_MSF_Vest_HeavyPlateCarrier_Black",
            "TACU_MSF_Vest_HeavyPlateCarrier_Coyote",
            "TACU_MSF_Vest_HeavyPlateCarrier_Green",
            "TACU_MSF_Vest_PlateCarrier_Black",
            "TACU_MSF_Vest_PlateCarrier_Coyote",
            "TACU_MSF_Vest_PlateCarrier_Green",
            "TACU_MSF_W_ACR_Carb_Black",
            "TACU_MSF_W_ACR_GL_Carb_Black",
            "TACU_MSF_W_SIG556_DMR"
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
