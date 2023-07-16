#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // Backpacks
            "TACU_Proxy_Russia_B_Demolitions",
            "TACU_Proxy_Russia_B_Engineer",
            "TACU_Proxy_Russia_B_Autorifleman",
            "TACU_Proxy_Russia_B_Machinegunner",
            "TACU_Proxy_Russia_B_Medic",
            "TACU_Proxy_Russia_B_AT",
            "TACU_Proxy_Russia_B_AP",
            // Opfor Units
            "TACU_Proxy_Russia_U_O_Rifleman",
            "TACU_Proxy_Russia_U_O_Demolitions",
            "TACU_Proxy_Russia_U_O_Engineer",
            "TACU_Proxy_Russia_U_O_Grenadier",
            "TACU_Proxy_Russia_U_O_Marksman",
            "TACU_Proxy_Russia_U_O_Teamleader",
            "TACU_Proxy_Russia_U_O_Autorifleman",
            "TACU_Proxy_Russia_U_O_Machinegunner",
            "TACU_Proxy_Russia_U_O_Medic",
            "TACU_Proxy_Russia_U_O_AT",
            "TACU_Proxy_Russia_U_O_AP",
            "TACU_Proxy_Russia_U_O_Driver",
            "TACU_Proxy_Russia_U_O_Pilot",
            // Opfor Vehicles
            // Opfor Turrets
            // Independent Units
            "TACU_Proxy_Russia_U_I_Rifleman",
            "TACU_Proxy_Russia_U_I_Demolitions",
            "TACU_Proxy_Russia_U_I_Engineer",
            "TACU_Proxy_Russia_U_I_Grenadier",
            "TACU_Proxy_Russia_U_I_Marksman",
            "TACU_Proxy_Russia_U_I_Teamleader",
            "TACU_Proxy_Russia_U_I_Autorifleman",
            "TACU_Proxy_Russia_U_I_Machinegunner",
            "TACU_Proxy_Russia_U_I_Medic",
            "TACU_Proxy_Russia_U_I_AT",
            "TACU_Proxy_Russia_U_I_AP",
            "TACU_Proxy_Russia_U_I_Driver",
            "TACU_Proxy_Russia_U_I_Pilot"
            // Independent Vehicles
            // Independent Turrets
        };
        weapons[] = {
            "TACU_Proxy_Russia_W_AK12U",
            "TACU_Proxy_Russia_W_AK15",
            "TACU_Proxy_Russia_W_AK15_GL",
            "TACU_Proxy_Russia_W_RPK",
            "TACU_Proxy_Russia_W_Negev",
            "TACU_Proxy_Russia_W_Cyrus",
            "TACU_Proxy_Russia_W_FNX"
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
