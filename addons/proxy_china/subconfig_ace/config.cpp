#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Proxy_China_B_Demolitions",
            "TACU_Proxy_China_B_Engineer",
            "TACU_Proxy_China_B_Medic"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_proxy_china",
            "ace_explosives",
            "ace_medical_treatment"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"