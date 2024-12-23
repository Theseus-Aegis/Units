#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Proxy_China_B_Demolitions",
            "TACU_Proxy_China_B_Engineer",
            "TACU_Proxy_China_B_Autorifleman",
            "TACU_Proxy_China_B_Machinegunner",
            "TACU_Proxy_China_B_Medic",
            "TACU_Proxy_China_B_AT",
            "TACU_Proxy_China_B_AP",
            // Units - Opfor
            "TACU_Proxy_China_U_O_Rifleman",
            "TACU_Proxy_China_U_O_Demolitions",
            "TACU_Proxy_China_U_O_Engineer",
            "TACU_Proxy_China_U_O_Grenadier",
            "TACU_Proxy_China_U_O_Marksman",
            "TACU_Proxy_China_U_O_Teamleader",
            "TACU_Proxy_China_U_O_Autorifleman",
            "TACU_Proxy_China_U_O_Machinegunner",
            "TACU_Proxy_China_U_O_Medic",
            "TACU_Proxy_China_U_O_AT",
            "TACU_Proxy_China_U_O_AP",
            "TACU_Proxy_China_U_O_Driver",
            "TACU_Proxy_China_U_O_Pilot",
            "TACU_Proxy_China_U_O_Sniper",
            "TACU_Proxy_China_U_O_Spotter",
            // Vehicles - Opfor
            "TACU_Proxy_China_V_O_Assault_Boat",
            "TACU_Proxy_China_V_O_Speedboat_Minigun",
            "TACU_Proxy_China_V_O_Tigris",
            "TACU_Proxy_China_V_O_BM2T_Stalker",
            "TACU_Proxy_China_V_O_BM2T_Iskatel",
            "TACU_Proxy_China_V_O_Otokar_Unarmed",
            "TACU_Proxy_China_V_O_Otokar_Armed",
            "TACU_Proxy_China_V_O_Otokar_HMG",
            "TACU_Proxy_China_V_O_Karatel",
            "TACU_Proxy_China_V_O_Karatel_HMG",
            "TACU_Proxy_China_V_O_Karatel_GMG",
            "TACU_Proxy_China_V_O_LSV_Unarmed",
            "TACU_Proxy_China_V_O_LSV_Armed",
            "TACU_Proxy_China_V_O_LSV_AT",
            "TACU_Proxy_China_V_O_Typhoon",
            "TACU_Proxy_China_V_O_Typhoon_Covered",
            "TACU_Proxy_China_V_O_Kasatka_Unarmed",
            "TACU_Proxy_China_V_O_Kasatka",
            // Turrets - Opfor
            "TACU_Proxy_China_V_O_MK6",
            "TACU_Proxy_China_V_O_HMG",
            "TACU_Proxy_China_V_O_Mini_Spike_AT",
            "TACU_Proxy_China_V_O_ZU23",
            // Units - Independent
            "TACU_Proxy_China_U_I_Rifleman",
            "TACU_Proxy_China_U_I_Demolitions",
            "TACU_Proxy_China_U_I_Engineer",
            "TACU_Proxy_China_U_I_Grenadier",
            "TACU_Proxy_China_U_I_Marksman",
            "TACU_Proxy_China_U_I_Teamleader",
            "TACU_Proxy_China_U_I_Autorifleman",
            "TACU_Proxy_China_U_I_Machinegunner",
            "TACU_Proxy_China_U_I_Medic",
            "TACU_Proxy_China_U_I_AT",
            "TACU_Proxy_China_U_I_AP",
            "TACU_Proxy_China_U_I_Driver",
            "TACU_Proxy_China_U_I_Pilot",
            "TACU_Proxy_China_U_I_Sniper",
            "TACU_Proxy_China_U_I_Spotter",
            // Vehicles - Independent
            "TACU_Proxy_China_V_I_Assault_Boat",
            "TACU_Proxy_China_V_I_Speedboat_Minigun",
            "TACU_Proxy_China_V_I_Tigris",
            "TACU_Proxy_China_V_I_BM2T_Stalker",
            "TACU_Proxy_China_V_I_BM2T_Iskatel",
            "TACU_Proxy_China_V_I_Otokar_Unarmed",
            "TACU_Proxy_China_V_I_Otokar_Armed",
            "TACU_Proxy_China_V_I_Otokar_HMG",
            "TACU_Proxy_China_V_I_Karatel",
            "TACU_Proxy_China_V_I_Karatel_HMG",
            "TACU_Proxy_China_V_I_Karatel_GMG",
            "TACU_Proxy_China_V_I_LSV_Unarmed",
            "TACU_Proxy_China_V_I_LSV_Armed",
            "TACU_Proxy_China_V_I_LSV_AT",
            "TACU_Proxy_China_V_I_Typhoon",
            "TACU_Proxy_China_V_I_Typhoon_Covered",
            "TACU_Proxy_China_V_I_Kasatka_Unarmed",
            "TACU_Proxy_China_V_I_Kasatka",
            // Turrets - Independent
            "TACU_Proxy_China_V_I_MK6",
            "TACU_Proxy_China_V_I_HMG",
            "TACU_Proxy_China_V_I_Mini_Spike_AT",
            "TACU_Proxy_China_V_I_ZU23"
        };
        weapons[] = {
            "TACU_Proxy_China_W_QBZ_ACO",
            "TACU_Proxy_China_W_QBZ_MRCO",
            "TACU_Proxy_China_W_QBZ_GL_ACO",
            "TACU_Proxy_China_W_QBZ_LSW_MRCO",
            "TACU_Proxy_China_W_QBU_DMS",
            "TACU_Proxy_China_W_Negev_MRCO",
            "TACU_Proxy_China_W_GM6_LRPS",
            "TACU_Proxy_China_W_Rook_Suppressed"
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
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
