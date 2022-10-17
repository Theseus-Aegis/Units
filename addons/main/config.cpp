#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Arma 3
            "A3_Data_F_AoW_Loadorder",
            "A3_Data_F_Mod_Loadorder",
            // ACE
            "ace_explosives",
            "ace_flashsuppressors",
            "ace_grenades",
            "ace_laserpointer",
            "ace_main",
            "ace_medical",
            "ace_nightvision",
            "ace_realisticnames",
            "ace_scopes",
            // CBA
            "cba_main",
            // CUP
            "CUP_AirVehicles_LoadOrder",
            "CUP_Creatures_People_LoadOrder",
            "CUP_TrackedVehicles_LoadOrder",
            "CUP_Vehicles_LoadOrder",
            "CUP_WaterVehicles_LoadOrder",
            "CUP_Weapons_LoadOrder",
            "CUP_WheeledVehicles_LoadOrder",
            // GT Armory
            "tacgt_ammunition",
            "tacgt_flashlight",
            // NIArms
            "hlcweapons_core",
            "hlcweapons_ar15",
            "hlcweapons_AUG",
            "hlcweapons_SG550",
            // Military Gear Pack
            "milgp_headgear_cfg",
            "milgp_vests_cfg",
            // Project Infinite
            "bnae_core",
            "bnae_M97",
            // Theseus Services
            "tacs_backpacks",
            "tacs_headgear",
            "tacs_units",
            "tacs_vehicles",
            "tacs_vests",
            // Western Sahara
            "Characters_f_lxWS",
            "Characters_1_f_lxWS_headgear"
        };
        author = CSTRING(Author);
        authors[] = {CSTRING(author)};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
#include "CfgVehicles.hpp"
