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
            // Units - Independent
            "TACU_Chernobog_U_I_Rifleman",
            "TACU_Chernobog_U_I_Medic",
            "TACU_Chernobog_U_I_LAT",
            "TACU_Chernobog_U_I_AT",
            "TACU_Chernobog_U_I_Teamleader",
            "TACU_Chernobog_U_I_Squadleader",
            "TACU_Chernobog_U_I_Marksman",
            "TACU_Chernobog_U_I_Demolitions",
            // Vehicles - Independent
            "TACU_Chernobog_V_I_Offroad",
            "TACU_Chernobog_V_I_Offroad_UP",
            "TACU_Chernobog_V_I_Offroad_HMG",
            "TACU_Chernobog_V_I_Offroad_HMG_UP"
        };
        weapons[] = {
            "TACU_Chernobog_W_AK74M",
            "TACU_Chernobog_W_AK74M_GL",
            "TACU_Chernobog_W_SVD"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacu_assets",
            "CUP_Weapons_LoadOrder"
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
