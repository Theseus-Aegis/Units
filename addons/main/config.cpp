#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Arma 3
            "A3_Data_F_Enoch_Loadorder",
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
            // BWA
            "bwa3_headgear",
            // CBA
            "cba_main",
            // CUP
            "CUP_AirVehicles_C130J",
            "CUP_AirVehicles_DC3",
            "CUP_AirVehicles_Mi24",
            "CUP_AirVehicles_Mi8",
            "CUP_AirVehicles_UH1H",
            "CUP_AirVehicles_UH60",
            "CUP_Creatures_Military_BAF",
            "CUP_Creatures_Military_CDF",
            "CUP_Creatures_Military_Chedaki",
            "CUP_Creatures_Military_NAPA",
            "CUP_Creatures_Military_PMC",
            "CUP_Creatures_Military_RACS",
            "CUP_Creatures_Military_Russia",
            "CUP_Creatures_Military_SLA",
            "CUP_Creatures_Military_Taki",
            "CUP_Creatures_Military_TakiInsurgents",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_USMC",
            "CUP_Creatures_StaticWeapons",
            "CUP_TrackedVehicles_BMP",
            "CUP_TrackedVehicles_M113",
            "CUP_TrackedVehicles_M60",
            "CUP_Weapons_AK",
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_Backpacks",
            "CUP_Weapons_Bizon",
            "CUP_Weapons_Colt1911",
            "CUP_Weapons_East_Attachments",
            "CUP_Weapons_G36",
            "CUP_Weapons_Glock17",
            "CUP_Weapons_GrenadeLaunchers",
            "CUP_Weapons_Grenades",
            "CUP_Weapons_HK416",
            "CUP_Weapons_Javelin",
            "CUP_Weapons_Makarov",
            "CUP_Weapons_M110",
            "CUP_Weapons_M136",
            "CUP_Weapons_M14",
            "CUP_Weapons_M16",
            "CUP_Weapons_M24",
            "CUP_Weapons_M9",
            "CUP_Weapons_MP5",
            "CUP_Weapons_PK",
            "CUP_Weapons_RPG7",
            "CUP_Weapons_SA58",
            "CUP_Weapons_SA61",
            "CUP_Weapons_SVD",
            "CUP_Weapons_VSS",
            "CUP_Weapons_West_Attachments",
            "CUP_WheeledVehicles_BRDM2",
            "CUP_WheeledVehicles_BTR40",
            "CUP_WheeledVehicles_BTR60",
            "CUP_WheeledVehicles_Datsun",
            "CUP_WheeledVehicles_HMMWV",
            "CUP_WheeledVehicles_Kamaz",
            "CUP_WheeledVehicles_Lada",
            "CUP_WheeledVehicles_LR",
            "CUP_WheeledVehicles_MTVR",
            "CUP_WheeledVehicles_S1203",
            "CUP_WheeledVehicles_Stryker",
            "CUP_WheeledVehicles_UAZ",
            "CUP_WheeledVehicles_UpHMMWV",
            "CUP_WheeledVehicles_Ural",
            "CUP_WheeledVehicles_V3S",
            "CUP_WheeledVehicles_Volha",
            // Military Gear Pack
            "milgp_headgear_cfg",
            "milgp_vests_cfg",
            // NIArms
            "hlcweapons_ar15",
            "hlcweapons_core",
            "hlcweapons_m60e4",
            "hlcweapons_mp5",
            "hlcweapons_SG550",
            "niarms_416",
            "niaweapons_226",
            // Project Infinite
            "bnae_core",
            "bnae_M97",
            // Theseus Services
            "tacs_backpacks",
            "tacs_headgear",
            "tacs_units",
            "tacs_vehicles",
            "tacs_vests"
        };
        author = CSTRING(Author);
        authors[] = {CSTRING(author)};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
#include "CfgVehicles.hpp"
