#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacgt_ammunition_ai"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
