#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "TACU_Assets_W_HK416A5_Arid",
            "TACU_Assets_W_HK416A5_GL_Arid",
            "TACU_Assets_W_HK417A2_Arid"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets_vehicles"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike, GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
