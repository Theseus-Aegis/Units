#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_PLR_B_AT",
            "TACU_PLR_B_MMG",
            // Units (Insurgents)
            "TACU_PLR_U_O_Insurgent_Autorifleman",
            "TACU_PLR_U_O_Insurgent_MMG",
            "TACU_PLR_U_O_Insurgent_Rifleman_01",
            "TACU_PLR_U_O_Insurgent_Rifleman_02",
            "TACU_PLR_U_O_Insurgent_Rifleman_03",
            "TACU_PLR_U_O_Insurgent_Rifleman_04",
            "TACU_PLR_U_O_Insurgent_Rifleman_05",
            "TACU_PLR_U_O_Insurgent_Rifleman_AT",
            "TACU_PLR_U_O_Insurgent_Sniper",
            "TACU_PLR_U_O_Insurgent_TeamLeader",
            // Units (Paramilitary)
            "TACU_PLR_U_O_Paramilitary_Autorifleman",
            "TACU_PLR_U_O_Paramilitary_Grenadier",
            "TACU_PLR_U_O_Paramilitary_MMG",
            "TACU_PLR_U_O_Paramilitary_Rifleman_01",
            "TACU_PLR_U_O_Paramilitary_Rifleman_02",
            "TACU_PLR_U_O_Paramilitary_Rifleman_AT",
            "TACU_PLR_U_O_Paramilitary_TeamLeader",
            // Vehicles (Anti-Ait)
            "TACU_PLR_V_O_Hilux_Igla",
            "TACU_PLR_V_O_Hilux_ZU23",
            "TACU_PLR_V_O_Ural_ZU23",
            // Vehicles (Artillery)
            "TACU_PLR_V_O_Hilux_MLRS",
            "TACU_PLR_V_O_Hilux_UB32",
            "TACU_PLR_V_O_Ural_BM21",
            // Vehicles (Cars)
            "TACU_PLR_V_O_Hilux_AGS30",
            "TACU_PLR_V_O_Hilux_DSHKM",
            "TACU_PLR_V_O_Hilux_SPG9",
            "TACU_PLR_V_O_Hilux_Unarmed",
            "TACU_PLR_V_O_UAZ_GL",
            "TACU_PLR_V_O_UAZ_MG",
            "TACU_PLR_V_O_UAZ_Open",
            "TACU_PLR_V_O_UAZ_Roof",
            "TACU_PLR_V_O_UAZ_SPG",
            "TACU_PLR_V_O_Ural_Ammo",
            "TACU_PLR_V_O_Ural_Fuel",
            "TACU_PLR_V_O_Ural_Open",
            "TACU_PLR_V_O_Ural_Repair",
            "TACU_PLR_V_O_Ural_Roof",
            // Vehicles (APCs)
            "TACU_PLR_V_O_BMP1",
            "TACU_PLR_V_O_BMP2",
            "TACU_PLR_V_O_BRDM2",
            "TACU_PLR_V_O_BRDM2_HQ",
            "TACU_PLR_V_O_BTR40_MG",
            "TACU_PLR_V_O_BTR40_Unarmed",
            "TACU_PLR_V_O_BTR60",
            "TACU_PLR_V_O_BTR80A",
            "TACU_PLR_V_O_BTR90",
            // Vehicles (Helicopters)
            "TACU_PLR_V_O_Mi171Sh",
            "TACU_PLR_V_O_Mi171Sh_Armed"
        };
        weapons[] = {
            "TACU_PLR_W_AK105_ZDDOT_FL",
            "TACU_PLR_W_AK47_Early_FL",
            "TACU_PLR_W_AK74_Early_FL",
            "TACU_PLR_W_AK74M_1P63_FL",
            "TACU_PLR_W_AK74M_GL_1P63_FL",
            "TACU_PLR_W_AKM_Early_FL",
            "TACU_PLR_W_AKS_FL",
            "TACU_PLR_W_AKS74U_railed_FL",
            "TACU_PLR_W_PKM_FL",
            "TACU_PLR_W_PKP_1P63_FL",
            "TACU_PLR_W_RPK74_FL",
            "TACU_PLR_W_RPK74M_1P63_FL",
            "TACU_PLR_W_SVD"
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
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
