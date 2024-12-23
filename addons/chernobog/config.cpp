#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Chernobog_Alicepack_Squadleader",
            "TACU_Chernobog_Alicepack_Medic",
            "TACU_Chernobog_RPGPack_AT",
            "TACU_Chernobog_SportPack_TL",
            "TACU_Chernobog_Messenger_Demolitions",
            "TACU_Chernobog_EverydayPack_Squadleader",
            "TACU_Chernobog_Kitbag_Medic",
            "TACU_Chernobog_Viperharness_MG",
            "TACU_Chernobog_HikingPack_Squadleader",
            // Units - Children
            "TACU_Chernobog_Children_U_I_Rifleman_01",
            "TACU_Chernobog_Children_U_I_Rifleman_02",
            "TACU_Chernobog_Children_U_I_Rifleman_03",
            "TACU_Chernobog_Children_U_I_LAT",
            "TACU_Chernobog_Children_U_I_Medic",
            "TACU_Chernobog_Children_U_I_Squadleader",
            "TACU_Chernobog_Children_U_I_Teamleader",
            "TACU_Chernobog_Children_U_I_Marksman",
            // Units - Chosen
            "TACU_Chernobog_Chosen_U_I_Rifleman",
            "TACU_Chernobog_Chosen_U_I_Medic",
            "TACU_Chernobog_Chosen_U_I_LAT",
            "TACU_Chernobog_Chosen_U_I_AT",
            "TACU_Chernobog_Chosen_U_I_Teamleader",
            "TACU_Chernobog_Chosen_U_I_Squadleader",
            "TACU_Chernobog_Chosen_U_I_Marksman",
            "TACU_Chernobog_Chosen_U_I_Demolitions",
            // Units - Sons
            "TACU_Chernobog_Sons_U_I_Rifleman",
            "TACU_Chernobog_Sons_U_I_Medic",
            "TACU_Chernobog_Sons_U_I_Machinegunner",
            "TACU_Chernobog_Sons_U_I_Sniper",
            "TACU_Chernobog_Sons_U_I_Squadleader",
            // Vehicles
            "TACU_Chernobog_Children_V_I_Offroad",
            "TACU_Chernobog_Chosen_V_I_Offroad",
            "TACU_Chernobog_Sons_V_I_Offroad",
            "TACU_Chernobog_Children_V_I_Offroad_HMG",
            "TACU_Chernobog_Chosen_V_I_Offroad_HMG",
            "TACU_Chernobog_Sons_V_I_Offroad_HMG",
            "TACU_Chernobog_Chosen_V_I_Offroad_UP",
            "TACU_Chernobog_Sons_V_I_Offroad_UP",
            "TACU_Chernobog_Chosen_V_I_Offroad_HMG_UP",
            "TACU_Chernobog_Sons_V_I_Offroad_HMG_UP",
            "TACU_Chernobog_Sons_V_I_Marid_HMG"
        };
        weapons[] = {
            "TACU_Chernobog_W_AK74M",
            "TACU_Chernobog_W_AK74M_GL",
            "TACU_Chernobog_W_SVD",
            "TACU_Chernobog_W_ASVAL",
            "TACU_Chernobog_W_Stoner",
            "TACU_Chernobog_W_KSVK"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacu_assets_vehicles",
            "CUP_Creatures_People_LoadOrder"
        };
        skipWhenMissingDependencies = 1;
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
