#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "MU_divers",
            "MU_greendagers",
            "MU_MILITIA",
            "MU_islam",
            "MU_LIV",
            "MU_mercs",
            "MU_RU"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
