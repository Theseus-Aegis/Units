#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets_vehicles"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike, GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
