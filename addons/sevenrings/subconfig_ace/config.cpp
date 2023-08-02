#include "script_component.hpp"

class CfgPatches {
    class ADDON {
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
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
