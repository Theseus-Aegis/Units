#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_BAF_B_Demolitions_Fieldpack_Arid",
            "TACU_BAF_B_LAT_Fieldpack_Arid",
            "TACU_BAF_B_Medic_Fieldpack_Arid",
            "TACU_BAF_B_Heavygunner_Fieldpack_Arid",
            "TACU_BAF_B_Demolitions_Fieldpack_Tropic",
            "TACU_BAF_B_LAT_Fieldpack_Tropic",
            "TACU_BAF_B_Medic_Fieldpack_Tropic",
            "TACU_BAF_B_Heavygunner_Fieldpack_Tropic",
            "TACU_BAF_B_Demolitions_Fieldpack_Urban",
            "TACU_BAF_B_LAT_Fieldpack_Urban",
            "TACU_BAF_B_Medic_Fieldpack_Urban",
            "TACU_BAF_B_Heavygunner_Fieldpack_Urban",
            // Desert Units
            "TACU_BAF_U_B_Desert_Scout",
            "TACU_BAF_U_B_Desert_Demolitions",
            "TACU_BAF_U_B_Desert_HeavyGunner",
            "TACU_BAF_U_B_Desert_JTAC",
            "TACU_BAF_U_B_Desert_Marksman",
            "TACU_BAF_U_B_Desert_Medic",
            "TACU_BAF_U_B_Desert_LAT",
            "TACU_BAF_U_B_Desert_Shotgun",
            "TACU_BAF_U_B_Desert_TL",
            // Arid Units
            "TACU_BAF_U_B_Arid_Scout",
            "TACU_BAF_U_B_Arid_Demolitions",
            "TACU_BAF_U_B_Arid_HeavyGunner",
            "TACU_BAF_U_B_Arid_JTAC",
            "TACU_BAF_U_B_Arid_Marksman",
            "TACU_BAF_U_B_Arid_Medic",
            "TACU_BAF_U_B_Arid_LAT",
            "TACU_BAF_U_B_Arid_Shotgun",
            "TACU_BAF_U_B_Arid_TL",
            "TACU_BAF_U_B_Arid_Grenadier",
            "TACU_BAF_U_B_Arid_Sniper",
            "TACU_BAF_U_B_Arid_Spotter",
            // Arid Turrets
            "TACU_BAF_V_B_Arid_L11A1",
            "TACU_BAF_V_B_Arid_L134A1",
            "TACU_BAF_V_B_Arid_RBS70",
            // Arid Vehicles
            "TACU_BAF_V_B_Arid_Assault_Boat",
            "TACU_BAF_V_B_Arid_Speedboat_Minigun",
            "TACU_BAF_V_B_Arid_Polaris_Unarmed",
            "TACU_BAF_V_B_Arid_Polaris_Armed",
            "TACU_BAF_V_B_Arid_Polaris_AT",
            "TACU_BAF_V_B_Arid_AW101",
            "TACU_BAF_V_B_Arid_FV510_Warrior",
            "TACU_BAF_V_Arid_FV510_Warrior_SLAT",
            // Tropic Units
            "TACU_BAF_U_B_Tropic_Scout",
            "TACU_BAF_U_B_Tropic_Demolitions",
            "TACU_BAF_U_B_Tropic_HeavyGunner",
            "TACU_BAF_U_B_Tropic_JTAC",
            "TACU_BAF_U_B_Tropic_Marksman",
            "TACU_BAF_U_B_Tropic_Medic",
            "TACU_BAF_U_B_Tropic_LAT",
            "TACU_BAF_U_B_Tropic_Shotgun",
            "TACU_BAF_U_B_Tropic_TL",
            "TACU_BAF_U_B_Tropic_Grenadier",
            "TACU_BAF_U_B_Tropic_Sniper",
            "TACU_BAF_U_B_Tropic_Spotter",
            // Tropic Turrets
            "TACU_BAF_V_B_Tropic_L11A1",
            "TACU_BAF_V_B_Tropic_L134A1",
            "TACU_BAF_V_B_Tropic_RBS70",
            // Tropic Vehicles
            "TACU_BAF_V_B_Tropic_Assault_Boat",
            "TACU_BAF_V_B_Tropic_Speedboat_Minigun",
            "TACU_BAF_V_B_Tropic_Polaris_Unarmed",
            "TACU_BAF_V_B_Tropic_Polaris_Armed",
            "TACU_BAF_V_B_Tropic_Polaris_AT",
            "TACU_BAF_V_B_Tropic_AW101",
            "TACU_BAF_V_B_Tropic_FV510_Warrior",
            "TACU_BAF_V_B_Tropic_FV510_Warrior_SLAT",
            // Urban Units
            "TACU_BAF_U_B_Urban_Scout",
            "TACU_BAF_U_B_Urban_Demolitions",
            "TACU_BAF_U_B_Urban_HeavyGunner",
            "TACU_BAF_U_B_Urban_JTAC",
            "TACU_BAF_U_B_Urban_Marksman",
            "TACU_BAF_U_B_Urban_Medic",
            "TACU_BAF_U_B_Urban_LAT",
            "TACU_BAF_U_B_Urban_Shotgun",
            "TACU_BAF_U_B_Urban_TL",
            "TACU_BAF_U_B_Urban_Grenadier",
            // Urban Turrets
            "TACU_BAF_V_B_Urban_L11A1",
            "TACU_BAF_V_B_Urban_L134A1",
            "TACU_BAF_V_B_Urban_RBS70",
            // Urban Vehicles
            "TACU_BAF_V_B_Urban_Assault_Boat",
            "TACU_BAF_V_B_Urban_Speedboat_Minigun",
            "TACU_BAF_V_B_Urban_Polaris_Unarmed",
            "TACU_BAF_V_B_Urban_Polaris_Armed",
            "TACU_BAF_V_B_Urban_Polaris_AT",
            // Pilot Unit
            "TACU_BAF_U_B_Pilot"
        };
        weapons[] = {
            "TACU_BAF_W_Arid_HK416A5",
            "TACU_BAF_W_Arid_HK416A5_GL",
            "TACU_BAF_W_Arid_HK417A2",
            "TACU_BAF_W_Arid_Glock",
            "TACU_BAF_W_Arid_Stoner99",
            "TACU_BAF_W_Arid_AA40",
            "TACU_BAF_W_Arid_Noreen",
            "TACU_BAF_W_Tropic_HK416A5",
            "TACU_BAF_W_Tropic_HK416A5_GL",
            "TACU_BAF_W_Tropic_HK417A2",
            "TACU_BAF_W_Tropic_Glock",
            "TACU_BAF_W_Tropic_Stoner99",
            "TACU_BAF_W_Tropic_AA40",
            "TACU_BAF_W_Tropic_Noreen",
            "TACU_BAF_W_Urban_HK416A5",
            "TACU_BAF_W_Urban_HK416A5_GL",
            "TACU_BAF_W_Urban_HK417A2",
            "TACU_BAF_W_Urban_Glock",
            "TACU_BAF_W_Urban_Stoner99",
            "TACU_BAF_W_Urban_AA40",
            "TACU_BAF_W_MP5SD"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo, Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
