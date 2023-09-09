#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Western Units (Independent)
            "TACU_Seven_Rings_Western_U_I_Rifleman_01",
            "TACU_Seven_Rings_Western_U_I_Rifleman_02",
            "TACU_Seven_Rings_Western_U_I_CQB",
            "TACU_Seven_Rings_Western_U_I_Leader",
            "TACU_Seven_Rings_Western_U_I_Marksman",
            "TACU_Seven_Rings_Western_U_I_Sniper",
            "TACU_Seven_Rings_Western_U_I_AT",
            "TACU_Seven_Rings_Western_U_I_AP",
            "TACU_Seven_Rings_Western_U_I_AA",
            "TACU_Seven_Rings_Western_U_I_Grenadier",
            "TACU_Seven_Rings_Western_U_I_Autorifleman",
            "TACU_Seven_Rings_Western_U_I_Machinegunner",
            "TACU_Seven_Rings_Western_U_I_Heavygunner",
            "TACU_Seven_Rings_Western_U_I_Demolitions",
            "TACU_Seven_Rings_Western_U_I_Medic",
            "TACU_Seven_Rings_Western_U_I_Engineer",
            "TACU_Seven_Rings_Western_U_I_Driver",
            "TACU_Seven_Rings_Western_U_I_Pilot",
            // Western Backpacks
            "TACU_Seven_Rings_Western_B_AT",
            "TACU_Seven_Rings_Western_B_AP",
            "TACU_Seven_Rings_Western_B_AA",
            "TACU_Seven_Rings_Western_B_MG",
            "TACU_Seven_Rings_Western_B_HG",
            "TACU_Seven_Rings_Western_B_Engineer",
            "TACU_Seven_Rings_Western_B_Medic",
            "TACU_Seven_Rings_Western_B_Demo",
            // Western Vehicles
            "TACU_Seven_Rings_Western_V_I_Fennek",
            "TACU_Seven_Rings_Western_V_I_Fennek_HMG",
            "TACU_Seven_Rings_Western_V_I_Fennek_GMG",
            "TACU_Seven_Rings_Western_V_I_Pandur",
            "TACU_Seven_Rings_Western_V_I_Kamaz",
            "TACU_Seven_Rings_Western_V_I_Kamaz_Covered",
            "TACU_Seven_Rings_Western_V_I_Kamaz_ZU23",
            "TACU_Seven_Rings_Western_V_I_Truck",
            "TACU_Seven_Rings_Western_V_I_Jeep",
            "TACU_Seven_Rings_Western_V_I_Jeep_Armed",
            "TACU_Seven_Rings_Western_V_I_Jeep_AT",
            "TACU_Seven_Rings_Western_V_I_Little_Bird",
            "TACU_Seven_Rings_Western_V_I_Wildcat",
            "TACU_Seven_Rings_Western_V_I_Wildcat_Unarmed",
            // Western Turrets
            "TACU_Seven_Rings_V_I_HMG",
            "TACU_Seven_Rings_V_I_MK6",
            "TACU_Seven_Rings_V_I_ZU23",
            // Eastern Units (Opfor)
            "TACU_Seven_Rings_Eastern_U_O_Rifleman_01",
            "TACU_Seven_Rings_Eastern_U_O_Rifleman_02",
            "TACU_Seven_Rings_Eastern_U_O_Leader",
            "TACU_Seven_Rings_Eastern_U_O_Marksman",
            "TACU_Seven_Rings_Eastern_U_O_Sharpshooter",
            "TACU_Seven_Rings_Eastern_U_O_Sniper",
            "TACU_Seven_Rings_Eastern_U_O_AT",
            "TACU_Seven_Rings_Eastern_U_O_AP",
            "TACU_Seven_Rings_Eastern_U_O_Grenadier",
            "TACU_Seven_Rings_Eastern_U_O_Autorifleman",
            "TACU_Seven_Rings_Eastern_U_O_Heavygunner",
            "TACU_Seven_Rings_Eastern_U_O_Demolitions",
            "TACU_Seven_Rings_Eastern_U_O_Medic",
            "TACU_Seven_Rings_Eastern_U_O_Engineer",
            "TACU_Seven_Rings_Eastern_U_O_Ambusher",
            "TACU_Seven_Rings_Eastern_U_O_Driver",
            // Eastern Backpacks
            "TACU_Seven_Rings_Eastern_B_AT",
            "TACU_Seven_Rings_Eastern_B_AP",
            "TACU_Seven_Rings_Eastern_B_Demo",
            "TACU_Seven_Rings_Eastern_B_Medic",
            "TACU_Seven_Rings_Eastern_B_Engineer",
            "TACU_Seven_Rings_Eastern_B_Heavygunner",
            // Eastern Vehicles
            "TACU_Seven_Rings_Eastern_V_O_LSVMKII",
            "TACU_Seven_Rings_Eastern_V_O_LSVMKII_Armed",
            "TACU_Seven_Rings_Eastern_V_O_LSVMKII_AT",
            "TACU_Seven_Rings_Eastern_V_O_Karatel",
            "TACU_Seven_Rings_Eastern_V_O_Karatel_HMG",
            "TACU_Seven_Rings_Eastern_V_O_Karatel_GMG",
            "TACU_Seven_Rings_Eastern_V_O_Kamaz",
            "TACU_Seven_Rings_Eastern_V_O_Kamaz_Covered",
            "TACU_Seven_Rings_Eastern_V_O_Kamaz_ZU23",
            "TACU_Seven_Rings_Eastern_V_O_Offroad",
            "TACU_Seven_Rings_Eastern_V_O_Offroad_Armed",
            "TACU_Seven_Rings_Eastern_V_O_Offroad_AT",
            "TACU_Seven_Rings_Eastern_V_O_Offroad_UP",
            "TACU_Seven_Rings_Eastern_V_O_Offroad_UP_Armed",
            "TACU_Seven_Rings_Eastern_V_O_Offroad_UP_AT",
            "TACU_Seven_Rings_Eastern_V_O_Otokar",
            "TACU_Seven_Rings_Eastern_V_O_Otokar_HMG",
            "TACU_Seven_Rings_Eastern_V_O_Otokar_M2",
            // Eastern Turrets
            "TACU_Seven_Rings_V_O_MK6",
            "TACU_Seven_Rings_V_O_ZU23"
        };
        weapons[] = {
            // Eastern Weapons
            "TACU_Seven_Rings_Eastern_W_Katiba",
            "TACU_Seven_Rings_Eastern_W_Katiba_Carbine",
            "TACU_Seven_Rings_Eastern_W_Katiba_GL",
            "TACU_Seven_Rings_Eastern_W_VS121",
            "TACU_Seven_Rings_Eastern_W_QBU88",
            "TACU_Seven_Rings_Eastern_W_QBZ95",
            "TACU_Seven_Rings_Eastern_W_QBZ95_GL",
            "TACU_Seven_Rings_Eastern_W_QBZ95_LSW",
            "TACU_Seven_Rings_Eastern_W_Type115",
            "TACU_Seven_Rings_Eastern_W_Cyrus",
            "TACU_Seven_Rings_Eastern_W_HK121",
            // Western Weapons
            "TACU_Seven_Rings_Western_W_MSBS",
            "TACU_Seven_Rings_Western_W_MSBS_GL",
            "TACU_Seven_Rings_Western_W_MSBS_MR",
            "TACU_Seven_Rings_Western_W_MSBS_SG",
            "TACU_Seven_Rings_Western_W_Stoner99",
            "TACU_Seven_Rings_Western_W_AK15K",
            "TACU_Seven_Rings_Western_W_AK15",
            "TACU_Seven_Rings_Western_W_LWMMG",
            "TACU_Seven_Rings_Western_W_Noreen"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets"};
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
