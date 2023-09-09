#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Seven_Rings_Eastern_B_Demo",
            "TACU_Seven_Rings_Eastern_B_Medic",
            "TACU_Seven_Rings_Eastern_B_Engineer",
            "TACU_Seven_Rings_Western_B_Engineer",
            "TACU_Seven_Rings_Western_B_Medic",
            "TACU_Seven_Rings_Western_B_Demo"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_seven_rings",
            "ace_explosives",
            "ace_medical_treatment"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
