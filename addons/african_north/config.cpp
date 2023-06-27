#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Blufor
            "TACU_African_North_U_B_Rifleman",
            "TACU_African_North_U_B_Medic",
            "TACU_African_North_U_B_Crewman",
            "TACU_African_North_U_B_Demolitions",
            "TACU_African_North_U_B_Grenadier",
            "TACU_African_North_U_B_Machinegunner",
            "TACU_African_North_U_B_AT",
            "TACU_African_North_U_B_AA",
            "TACU_African_North_U_B_Officer",
            "TACU_African_North_U_B_Pilot",
            "TACU_African_North_U_B_Repair",
            "TACU_African_North_U_B_Marksman",
            "TACU_African_North_U_B_Teamleader",
            // Blufor Vehicles
            "TACU_African_North_V_B_Offroad",
            "TACU_African_North_V_B_Offroad_AT",
            "TACU_African_North_V_B_Offroad_HMG",
            "TACU_African_North_V_B_Otokar_Armed",
            "TACU_African_North_V_B_Otokar_Unarmed",
            "TACU_African_North_V_B_Zamak_AA",
            "TACU_African_North_V_B_Zamak_Ammo",
            "TACU_African_North_V_B_Zamak_Cargo",
            "TACU_African_North_V_B_Zamak_Flatbed",
            "TACU_African_North_V_B_Zamak_Fuel",
            "TACU_African_North_V_B_Zamak_MRL",
            "TACU_African_North_V_B_Zamak_Repair",
            "TACU_African_North_V_B_Zamak_Transport",
            "TACU_African_North_V_B_Zamak_Transport_Covered",
            // Blufor Turrets
            "TACU_African_North_V_B_M2HMG",
            "TACU_African_North_V_B_M2HMG_Low",
            "TACU_African_North_V_B_MK6",
            "TACU_African_North_V_B_ZU23",
            // Opfor
            "TACU_African_North_U_O_Rifleman",
            "TACU_African_North_U_O_Medic",
            "TACU_African_North_U_O_Crewman",
            "TACU_African_North_U_O_Demolitions",
            "TACU_African_North_U_O_Grenadier",
            "TACU_African_North_U_O_Machinegunner",
            "TACU_African_North_U_O_AT",
            "TACU_African_North_U_O_AA",
            "TACU_African_North_U_O_Officer",
            "TACU_African_North_U_O_Pilot",
            "TACU_African_North_U_O_Repair",
            "TACU_African_North_U_O_Marksman",
            "TACU_African_North_U_O_Teamleader",
            // Opfor Vehicles
            "TACU_African_North_V_O_Offroad",
            "TACU_African_North_V_O_Offroad_AT",
            "TACU_African_North_V_O_Offroad_HMG",
            "TACU_African_North_V_O_Otokar_Armed",
            "TACU_African_North_V_O_Otokar_Unarmed",
            "TACU_African_North_V_O_Zamak_AA",
            "TACU_African_North_V_O_Zamak_Ammo",
            "TACU_African_North_V_O_Zamak_Cargo",
            "TACU_African_North_V_O_Zamak_Flatbed",
            "TACU_African_North_V_O_Zamak_Fuel",
            "TACU_African_North_V_O_Zamak_MRL",
            "TACU_African_North_V_O_Zamak_Repair",
            "TACU_African_North_V_O_Zamak_Transport",
            "TACU_African_North_V_O_Zamak_Transport_Covered",
            // Opfor Turrets
            "TACU_African_North_V_O_M2HMG",
            "TACU_African_North_V_O_M2HMG_Low",
            "TACU_African_North_V_O_MK6",
            "TACU_African_North_V_O_ZU23",
            // Indpendent
            "TACU_African_North_U_I_Rifleman",
            "TACU_African_North_U_I_Medic",
            "TACU_African_North_U_I_Crewman",
            "TACU_African_North_U_I_Demolitions",
            "TACU_African_North_U_I_Grenadier",
            "TACU_African_North_U_I_Machinegunner",
            "TACU_African_North_U_I_AT",
            "TACU_African_North_U_I_AA",
            "TACU_African_North_U_I_Officer",
            "TACU_African_North_U_I_Pilot",
            "TACU_African_North_U_I_Repair",
            "TACU_African_North_U_I_Marksman",
            "TACU_African_North_U_I_Teamleader",
            // Independent Vehicles
            "TACU_African_North_V_I_Offroad",
            "TACU_African_North_V_I_Offroad_AT",
            "TACU_African_North_V_I_Offroad_HMG",
            "TACU_African_North_V_I_Otokar_Armed",
            "TACU_African_North_V_I_Otokar_Unarmed",
            "TACU_African_North_V_I_Zamak_AA",
            "TACU_African_North_V_I_Zamak_Ammo",
            "TACU_African_North_V_I_Zamak_Cargo",
            "TACU_African_North_V_I_Zamak_Flatbed",
            "TACU_African_North_V_I_Zamak_Fuel",
            "TACU_African_North_V_I_Zamak_MRL",
            "TACU_African_North_V_I_Zamak_Repair",
            "TACU_African_North_V_I_Zamak_Transport",
            "TACU_African_North_V_I_Zamak_Transport_Covered",
            // Independent Turrets
            "TACU_African_North_V_I_M2HMG",
            "TACU_African_North_V_I_M2HMG_Low",
            "TACU_African_North_V_I_MK6",
            "TACU_African_North_V_I_ZU23"
        };
        weapons[] = {
            "TACU_African_North_W_VelkoR4",
            "TACU_African_North_W_VelkoR5",
            "TACU_African_North_W_VelkoR5_GL",
            "TACU_African_North_W_SLR_Marksman",
            "TACU_African_North_W_SA77_MG"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
