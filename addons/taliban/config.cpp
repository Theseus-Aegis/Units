#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Taliban_Militia_B_Medic",
            "TACU_Taliban_Militia_B_Demolitions",
            "TACU_Taliban_Militia_B_AT",
            "TACU_Taliban_Militia_B_AP",
            // Taliban Militia
            "TACU_Taliban_Militia_U_I_Rifleman_01",
            "TACU_Taliban_Militia_U_I_Rifleman_02",
            "TACU_Taliban_Militia_U_I_Rifleman_03",
            "TACU_Taliban_Militia_U_I_Leader",
            "TACU_Taliban_Militia_U_I_Grenadier",
            "TACU_Taliban_Militia_U_I_Medic",
            "TACU_Taliban_Militia_U_I_Demolitions",
            "TACU_Taliban_Militia_U_I_Scout",
            "TACU_Taliban_Militia_U_I_Machinegunner",
            "TACU_Taliban_Militia_U_I_AT",
            "TACU_Taliban_Militia_U_I_AP",
            "TACU_Taliban_Militia_U_I_Driver",
            // Vehicles - Independent
            "TACU_Taliban_Militia_V_I_Kamaz_ZU23",
            "TACU_Taliban_Militia_V_I_Kamaz_Transport",
            "TACU_Taliban_Militia_V_I_Kamaz_Covered_Transport",
            "TACU_Taliban_Militia_V_I_Truck",
            "TACU_Taliban_Militia_V_I_Offroad_Unarmed",
            "TACU_Taliban_Militia_V_I_Offroad_HMG",
            "TACU_Taliban_Militia_V_I_Offroad_AT",
            "TACU_Taliban_Militia_V_I_Pickup_Unarmed",
            "TACU_Taliban_Militia_V_I_Pickup_HMG",
            "TACU_Taliban_Militia_V_I_Pickup_MMG",
            // Turrets - Independent
            "TACU_Taliban_Militia_V_I_ZU23",
            "TACU_Taliban_Militia_V_I_AGS30",
            "TACU_Taliban_Militia_V_I_D30",
            "TACU_Taliban_Militia_V_I_DSHKM",
            "TACU_Taliban_Militia_V_I_DSHKM_Mini",
            "TACU_Taliban_Militia_V_I_KORD",
            "TACU_Taliban_Militia_V_I_KORD_Mini",
            // Units - Opfor
            "TACU_Taliban_Militia_U_O_Rifleman_01",
            "TACU_Taliban_Militia_U_O_Rifleman_02",
            "TACU_Taliban_Militia_U_O_Rifleman_03",
            "TACU_Taliban_Militia_U_O_Leader",
            "TACU_Taliban_Militia_U_O_Grenadier",
            "TACU_Taliban_Militia_U_O_Medic",
            "TACU_Taliban_Militia_U_O_Demolitions",
            "TACU_Taliban_Militia_U_O_Scout",
            "TACU_Taliban_Militia_U_O_Machinegunner",
            "TACU_Taliban_Militia_U_O_AT",
            "TACU_Taliban_Militia_U_O_AP",
            "TACU_Taliban_Militia_U_O_Driver",
            // Vehicles - Opfor
            "TACU_Taliban_Militia_V_O_Kamaz_ZU23",
            "TACU_Taliban_Militia_V_O_Kamaz_Transport",
            "TACU_Taliban_Militia_V_O_Kamaz_Covered_Transport",
            "TACU_Taliban_Militia_V_O_Truck",
            "TACU_Taliban_Militia_V_O_Offroad_Unarmed",
            "TACU_Taliban_Militia_V_O_Offroad_HMG",
            "TACU_Taliban_Militia_V_O_Offroad_AT",
            "TACU_Taliban_Militia_V_O_Pickup_Unarmed",
            "TACU_Taliban_Militia_V_O_Pickup_HMG",
            "TACU_Taliban_Militia_V_O_Pickup_MMG",
            // Turrets - Opfor
            "TACU_Taliban_Militia_V_O_ZU23",
            "TACU_Taliban_Militia_V_O_AGS30",
            "TACU_Taliban_Militia_V_O_D30",
            "TACU_Taliban_Militia_V_O_DSHKM",
            "TACU_Taliban_Militia_V_O_DSHKM_Mini",
            "TACU_Taliban_Militia_V_O_KORD",
            "TACU_Taliban_Militia_V_O_KORD_Mini",
            // Taliban Veterans
            "TACU_Taliban_Veterans_U_I_Rifleman_01",
            "TACU_Taliban_Veterans_U_I_Rifleman_02",
            "TACU_Taliban_Veterans_U_I_Rifleman_03",
            "TACU_Taliban_Veterans_U_I_Leader",
            "TACU_Taliban_Veterans_U_I_Grenadier",
            "TACU_Taliban_Veterans_U_I_Medic",
            "TACU_Taliban_Veterans_U_I_Demolitions",
            "TACU_Taliban_Veterans_U_I_Scout",
            "TACU_Taliban_Veterans_U_I_Machinegunner",
            "TACU_Taliban_Veterans_U_I_AT",
            "TACU_Taliban_Veterans_U_I_Driver",
            // Vehicles - Independent
            "TACU_Taliban_Veterans_V_I_Kamaz_ZU23",
            "TACU_Taliban_Veterans_V_I_Kamaz_Transport",
            "TACU_Taliban_Veterans_V_I_Kamaz_Covered_Transport",
            "TACU_Taliban_Veterans_V_I_Truck",
            "TACU_Taliban_Veterans_V_I_Offroad_Unarmed",
            "TACU_Taliban_Veterans_V_I_Offroad_HMG",
            "TACU_Taliban_Veterans_V_I_Offroad_AT",
            "TACU_Taliban_Veterans_V_I_Offroad_Unarmed_UP",
            "TACU_Taliban_Veterans_V_I_Offroad_HMG_UP",
            "TACU_Taliban_Veterans_V_I_Offroad_AT_UP",
            "TACU_Taliban_Veterans_V_I_Pickup_Unarmed",
            "TACU_Taliban_Veterans_V_I_Pickup_unarmed_UP",
            "TACU_Taliban_Veterans_V_I_Pickup_HMG",
            "TACU_Taliban_Veterans_V_I_Pickup_HMG_UP",
            "TACU_Taliban_Veterans_V_I_Pickup_MMG",
            "TACU_Taliban_Veterans_V_I_Pickup_MMG_UP",
            // Turrets - Independent
            "TACU_Taliban_Veterans_V_I_ZU23",
            "TACU_Taliban_Veterans_V_I_AGS30",
            "TACU_Taliban_Veterans_V_I_D30",
            "TACU_Taliban_Veterans_V_I_DSHKM",
            "TACU_Taliban_Veterans_V_I_DSHKM_Mini",
            "TACU_Taliban_Veterans_V_I_KORD",
            "TACU_Taliban_Veterans_V_I_KORD_Mini",
            // Units - Opfor
            "TACU_Taliban_Veterans_U_O_Rifleman_01",
            "TACU_Taliban_Veterans_U_O_Rifleman_02",
            "TACU_Taliban_Veterans_U_O_Rifleman_03",
            "TACU_Taliban_Veterans_U_O_Leader",
            "TACU_Taliban_Veterans_U_O_Grenadier",
            "TACU_Taliban_Veterans_U_O_Medic",
            "TACU_Taliban_Veterans_U_O_Demolitions",
            "TACU_Taliban_Veterans_U_O_Scout",
            "TACU_Taliban_Veterans_U_O_Machinegunner",
            "TACU_Taliban_Veterans_U_O_AT",
            "TACU_Taliban_Veterans_U_O_Driver",
            // Vehicles - Opfor
            "TACU_Taliban_Veterans_V_O_Kamaz_ZU23",
            "TACU_Taliban_Veterans_V_O_Kamaz_Transport",
            "TACU_Taliban_Veterans_V_O_Kamaz_Covered_Transport",
            "TACU_Taliban_Veterans_V_O_Truck",
            "TACU_Taliban_Veterans_V_O_Offroad_Unarmed",
            "TACU_Taliban_Veterans_V_O_Offroad_HMG",
            "TACU_Taliban_Veterans_V_O_Offroad_AT",
            "TACU_Taliban_Veterans_V_O_Offroad_Unarmed_UP",
            "TACU_Taliban_Veterans_V_O_Offroad_HMG_UP",
            "TACU_Taliban_Veterans_V_O_Offroad_AT_UP",
            "TACU_Taliban_Veterans_V_O_Pickup_Unarmed",
            "TACU_Taliban_Veterans_V_O_Pickup_unarmed_UP",
            "TACU_Taliban_Veterans_V_O_Pickup_HMG",
            "TACU_Taliban_Veterans_V_O_Pickup_HMG_UP",
            "TACU_Taliban_Veterans_V_O_Pickup_MMG",
            "TACU_Taliban_Veterans_V_O_Pickup_MMG_UP",
            // Turrets - Opfor
            "TACU_Taliban_Veterans_V_O_ZU23",
            "TACU_Taliban_Veterans_V_O_AGS30",
            "TACU_Taliban_Veterans_V_O_D30",
            "TACU_Taliban_Veterans_V_O_DSHKM",
            "TACU_Taliban_Veterans_V_O_DSHKM_Mini",
            "TACU_Taliban_Veterans_V_O_KORD",
            "TACU_Taliban_Veterans_V_O_KORD_Mini"
        };
        weapons[] = {
            "TACU_Taliban_Veterans_W_Galat",
            "TACU_Taliban_Veterans_W_R4",
            "TACU_Taliban_Veterans_W_SLR_Wood",
            "TACU_Taliban_Veterans_W_SLR_Wood_Scout",
            "TACU_Taliban_Veterans_W_SLR_GL_Wood",
            "TACU_Taliban_Veterans_W_R5_GL",
            "TACU_Taliban_Veterans_W_AK15K",
            "TACU_Taliban_Veterans_W_SA77"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets_vehicles"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "Groups\CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
