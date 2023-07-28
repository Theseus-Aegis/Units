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
            "TACU_Proxy_China_B_AP"
            // Units - Opfor
            // Vehicles - Opfor
            // Turrets - Opfor
            // Units - Independent
            // Vehicles - Independent
            // Turrets - Independent
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
