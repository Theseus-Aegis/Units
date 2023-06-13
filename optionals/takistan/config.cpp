// Needs CUP Removals.
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            /*
            // Takistan National Army
            "TACU_Takistan_U_TNA_Major",
            "TACU_Takistan_U_TNA_Lieutenant",
            "TACU_Takistan_U_TNA_NCO",
            "TACU_Takistan_U_TNA_Rifleman",
            "TACU_Takistan_U_TNA_Rifleman_02",
            "TACU_Takistan_U_TNA_Rifleman_03",
            "TACU_Takistan_U_TNA_Autorifleman",
            "TACU_Takistan_U_TNA_Pilot",
            "TACU_Takistan_U_TNA_Commandos_NCO",
            "TACU_Takistan_U_TNA_Commandos_Breacher",
            "TACU_Takistan_U_TNA_Commandos_Grenadier",
            "TACU_Takistan_U_TNA_Commandos_Autorifleman",
            "TACU_Takistan_U_TNA_Commandos_Medic",
            "TACU_Takistan_U_TNA_Commandos_Rifleman_AT",
            // Takistan National Police
            "TACU_Takistan_U_TNP_Officer",
            "TACU_Takistan_U_TNP_Rifleman",
            "TACU_Takistan_U_TNP_Rifleman_02",
            "TACU_Takistan_U_TNP_Autorifleman",
            // Takistan Special Forces
            "TACU_Takistan_U_TSF_Grenadier",
            "TACU_Takistan_U_TSF_Rifleman_01",
            "TACU_Takistan_U_TSF_Rifleman_02",
            "TACU_Takistan_U_TSF_Rifleman_03",
            "TACU_Takistan_U_TSF_Sniper",
            // Tehrik-I-Taliban Takistan
            "TACU_Takistan_U_Tehrik_Leader",
            "TACU_Takistan_U_Tehrik_Rifleman",
            "TACU_Takistan_U_Tehrik_Rifleman_02",
            "TACU_Takistan_U_Tehrik_Grenadier",
            "TACU_Takistan_U_Tehrik_Autorifleman",
            "TACU_Takistan_U_Tehrik_Rifleman_AT",
            "TACU_Takistan_U_Tehrik_Enlisted_Squadleader",
            "TACU_Takistan_U_Tehrik_Enlisted_Rifleman",
            "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_02",
            "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_03",
            "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_04",
            "TACU_Takistan_U_Tehrik_Enlisted_Autorifleman",
            "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_AT",
            // Vehicles - Takistan National Army
            "TACU_Takistan_V_TNA_HMMWV_M2",
            "TACU_Takistan_V_TNA_M1151_M2",
            "TACU_Takistan_V_TNA_M1151_M2_Deploy",
            "TACU_Takistan_V_TNA_HMMWV_Unarmed",
            "TACU_Takistan_V_TNA_HMMWV_Transport",
            "TACU_Takistan_V_TNA_Kamaz",
            "TACU_Takistan_V_TNA_Kamaz_Open",
            "TACU_Takistan_V_TNA_Kamaz_Ammo",
            "TACU_Takistan_V_TNA_Kamaz_Fuel",
            "TACU_Takistan_V_TNA_M113_Med",
            "TACU_Takistan_V_TNA_Mi17",
            "TACU_Takistan_V_TNA_M2_Static",
            "TACU_Takistan_V_TNA_M2_Mini_Static",
            // Vehicles - Takistan National Police
            "TACU_Takistan_V_TNP_Offroad_Police",
            "TACU_Takistan_V_TNP_Datsun",
            "TACU_Takistan_V_TNP_Datsun_PK",
            // Vehicles - Tehrik-I-Taliban Takistan
            "TACU_Takistan_V_Tehrik_Lada",
            "TACU_Takistan_V_Tehrik_Lada_Green",
            "TACU_Takistan_V_Tehrik_V3S_Open",
            "TACU_Takistan_V_Tehrik_S1203",
            "TACU_Takistan_V_Tehrik_Volha_Blue",
            "TACU_Takistan_V_Tehrik_DSHKM",
            "TACU_Takistan_V_Tehrik_DSHKM_Mini",
            "TACU_Takistan_V_Tehrik_ZU23",
            "TACU_Takistan_V_Tehrik_Metis",
            "TACU_Takistan_V_Tehrik_SPG9"
            */
        };
        weapons[] = {
            /*
            "TACU_Takistan_W_M4A1",
            "TACU_Takistan_W_M4A1_GL",
            "TACU_Takistan_W_M4A3",
            "TACU_Takistan_W_M4A3_Desert",
            "TACU_Takistan_W_M4SBR_Tan",
            "TACU_Takistan_W_M16A4",
            "TACU_Takistan_W_M110"
            */
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Kresky", "Mike"};
        VERSION_CONFIG;
    };
};

//#include "CfgFactionClasses.hpp"
//#include "CfgGroups.hpp"
//#include "CfgVehicles.hpp"
//#include "CfgWeapons.hpp"
