#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
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
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
