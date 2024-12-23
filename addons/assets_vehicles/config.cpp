#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Units
            "TACU_Assets_TestUnit",
            // Vehicles
            "TACU_AH6_LittleBird_Base",
            "TACU_Assault_Boat_Base",
            "TACU_Badger_IFV_Base",
            "TACU_Bardelas_Base",
            "TACU_BM2T_Iskatel_Base",
            "TACU_BM2T_Stalker_Base",
            "TACU_Cargo_Van_Base",
            "TACU_Chinook_Armed_Base",
            "TACU_Chinook_Unarmed_Base",
            "TACU_Fennek_GMG_Base",
            "TACU_Fennek_HMG_Base",
            "TACU_Fennek_Unarmed_Base",
            "TACU_FV510_Warrior_Base",
            "TACU_GhostHawk_Base",
            "TACU_HEMTT_Base",
            "TACU_HEMTT_Covered_Base",
            "TACU_Jeep_Wrangler_AT_Base",
            "TACU_Jeep_Wrangler_LMG_Base",
            "TACU_Jeep_Wrangler_Unarmed_Base",
            "TACU_Kamaz_Base",
            "TACU_Kamaz_Covered_Base",
            "TACU_Kamaz_MRL_Base",
            "TACU_Kamaz_ZU23_Base",
            "TACU_Karatel_GMG_Base",
            "TACU_Karatel_HMG_Base",
            "TACU_Karatel_Unarmed_Base",
            "TACU_Kasatka_Armed_Armoured_Base",
            "TACU_Kasatka_Armed_Base",
            "TACU_Kasatka_Unarmed_Armoured_Base",
            "TACU_Kasatka_Unarmed_Base",
            "TACU_Leopard_2SG_Base",
            "TACU_LSV_MKII_Armed_AT_Base",
            "TACU_LSV_MKII_Armed_Base",
            "TACU_LSV_MKII_Base",
            "TACU_MATV_GMG_Base",
            "TACU_MATV_HMG_Base",
            "TACU_MATV_Unarmed_Base",
            "TACU_Merlin_Base",
            "TACU_Namer_Base",
            "TACU_Nemmera_Base",
            "TACU_Offroad_Armed_AT_Base",
            "TACU_Offroad_Armed_AT_UP_Base",
            "TACU_Offroad_Armed_M2_Base",
            "TACU_Offroad_Armed_M2_UP_Base",
            "TACU_Offroad_Covered_Base",
            "TACU_Offroad_Unarmed_Base",
            "TACU_Offroad_Unarmed_UP_Base",
            "TACU_Otokar_ARMA_Armed_Base",
            "TACU_Otokar_ARMA_HMG_Base",
            "TACU_Otokar_ARMA_Unarmed_Base",
            "TACU_Pandur_Base",
            "TACU_Polaris_Armed_AT_Base",
            "TACU_Polaris_Armed_Base",
            "TACU_Polaris_Unarmed_Base",
            "TACU_RAH66_Comanche_Base",
            "TACU_Rooikat_Base",
            "TACU_Rooikat_UP_Base",
            "TACU_Speedboat_Minigun_Base",
            "TACU_Taru_Transport_Base",
            "TACU_Tigris_Base",
            "TACU_Transport_Van_Base",
            "TACU_Transport_Van_Base",
            "TACU_Truck_Base",
            "TACU_Typhoon_Base",
            "TACU_Typhoon_Covered_Base",
            "TACU_Typhoon_Device_Base",
            "TACU_Wiesel_Armed_AT_Base",
            "TACU_Wiesel_Armed_Base",
            "TACU_Wildcat_Armed_Base",
            "TACU_Wildcat_Base",
            // Turrets
            "TACU_Assets_MK6_Base",
            "TACU_Assets_HMG_50",
            "TACU_Assets_HMG_50_Low",
            "TACU_Assets_Mini_Spike_AT",
            "TACU_Assets_ZU23_base",
            "TACU_Assets_AGS_base",
            "TACU_Assets_D30_base",
            "TACU_Assets_D30AT_base",
            "TACU_Assets_DSHKM_base",
            "TACU_Assets_DSHKM_Mini_base",
            "TACU_Assets_FIM92_base",
            "TACU_Assets_IGLA_base",
            "TACU_Assets_KORD_base",
            "TACU_Assets_KORD_Mini_base",
            "TACU_Assets_KORNET_AT4_base",
            "TACU_Assets_L11A1_base",
            "TACU_Assets_L11A1_MiniTripod_base",
            "TACU_Assets_L134A1_base",
            "TACU_Assets_M119_base",
            "TACU_Assets_M220_TOW_base",
            "TACU_Assets_Metis_base",
            "TACU_Assets_MK19_base",
            "TACU_Assets_RBS70_base",
            "TACU_Assets_SearchLight_base"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "CUP_Weapons_LoadOrder"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike, GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
