#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_African_Militia_V_O_DSHKM",
            "TACU_African_Militia_V_I_DSHKM"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_assets_cup"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
