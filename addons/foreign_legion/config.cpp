#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Foreign_Legion_B_Demolitions_AssaultPack",
            "TACU_Foreign_Legion_B_Engineer_AssaultPack",
            "TACU_Foreign_Legion_B_Autorifleman_AssaultPack",
            "TACU_Foreign_Legion_B_Medic_AssaultPack",
            "TACU_Foreign_Legion_B_Breacher",
            "TACU_Foreign_Legion_B_Machinegunner_Carryall",
            "TACU_Foreign_Legion_B_AT_Carryall",
            "TACU_Foreign_Legion_B_AP_Carryall",
            // Blufor - Units
            "TACU_Foreign_Legion_U_B_Rifleman",
            "TACU_Foreign_Legion_U_B_Demolitions",
            "TACU_Foreign_Legion_U_B_Engineer",
            "TACU_Foreign_Legion_U_B_Autorifleman",
            "TACU_Foreign_Legion_U_B_Machinegunner",
            "TACU_Foreign_Legion_U_B_Marksman",
            "TACU_Foreign_Legion_U_B_Medic",
            "TACU_Foreign_Legion_U_B_AT",
            "TACU_Foreign_Legion_U_B_AP",
            "TACU_Foreign_Legion_U_B_Breacher",
            "TACU_Foreign_Legion_U_B_TL",
            "TACU_Foreign_Legion_U_B_Grenadier",
            "TACU_Foreign_Legion_U_B_Driver",
            "TACU_Foreign_Legion_U_B_Pilot",
            // Blufor - Vehicles
            "TACU_Foreign_Legion_V_B_Assault_Boat",
            "TACU_Foreign_Legion_V_B_Speedboat_Minigun",
            "TACU_Foreign_Legion_V_B_MATV",
            "TACU_Foreign_Legion_V_B_MATV_HMG",
            "TACU_Foreign_Legion_V_B_MATV_GMG",
            "TACU_Foreign_Legion_V_B_Polaris",
            "TACU_Foreign_Legion_V_B_Polaris_Armed",
            "TACU_Foreign_Legion_V_B_Polaris_AT",
            "TACU_Foreign_Legion_V_B_HEMTT",
            "TACU_Foreign_Legion_V_B_HEMTT_Covered",
            "TACU_Foreign_Legion_V_B_Little_Bird",
            "TACU_Foreign_Legion_V_B_Ghosthawk",
            "TACU_Foreign_Legion_V_B_Pandur",
            // Blufor - Turrets
            "TACU_Foreign_Legion_V_B_MK6",
            "TACU_Foreign_Legion_V_B_HMG",
            "TACU_Foreign_Legion_V_B_Mini_Spike_AT",
            // Independent - Units
            "TACU_Foreign_Legion_U_I_Rifleman",
            "TACU_Foreign_Legion_U_I_Demolitions",
            "TACU_Foreign_Legion_U_I_Engineer",
            "TACU_Foreign_Legion_U_I_Autorifleman",
            "TACU_Foreign_Legion_U_I_Machinegunner",
            "TACU_Foreign_Legion_U_I_Marksman",
            "TACU_Foreign_Legion_U_I_Medic",
            "TACU_Foreign_Legion_U_I_AT",
            "TACU_Foreign_Legion_U_I_AP",
            "TACU_Foreign_Legion_U_I_Breacher",
            "TACU_Foreign_Legion_U_I_TL",
            "TACU_Foreign_Legion_U_I_Grenadier",
            "TACU_Foreign_Legion_U_I_Driver",
            "TACU_Foreign_Legion_U_I_Pilot",
            // Independent - Vehicles
            "TACU_Foreign_Legion_V_I_Assault_Boat",
            "TACU_Foreign_Legion_V_I_Speedboat_Minigun",
            "TACU_Foreign_Legion_V_I_MATV",
            "TACU_Foreign_Legion_V_I_MATV_HMG",
            "TACU_Foreign_Legion_V_I_MATV_GMG",
            "TACU_Foreign_Legion_V_I_Polaris",
            "TACU_Foreign_Legion_V_I_Polaris_Armed",
            "TACU_Foreign_Legion_V_I_Polaris_AT",
            "TACU_Foreign_Legion_V_I_HEMTT",
            "TACU_Foreign_Legion_V_I_HEMTT_Covered",
            "TACU_Foreign_Legion_V_I_Little_Bird",
            "TACU_Foreign_Legion_V_I_Ghosthawk",
            "TACU_Foreign_Legion_V_I_Pandur",
            // Independent - Turrets
            "TACU_Foreign_Legion_V_I_MK6",
            "TACU_Foreign_Legion_V_I_HMG",
            "TACU_Foreign_Legion_V_I_Mini_Spike_AT"
        };
        weapons[] = {
            "TACU_Foreign_Legion_W_HK416A5_SB_Holo",
            "TACU_Foreign_Legion_W_HK416A5_GL_Holo",
            "TACU_Foreign_Legion_W_HK416A5_LB_Holo",
            "TACU_Foreign_Legion_W_HK416A5_LB_Bravo",
            "TACU_Foreign_Legion_W_HK417A2",
            "TACU_Foreign_Legion_W_Minimi",
            "TACU_Foreign_Legion_W_AA40",
            "TACU_Foreign_Legion_W_MP5"
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
