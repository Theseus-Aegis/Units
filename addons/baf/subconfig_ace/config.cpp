#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_BAF_B_Demolitions_Fieldpack_Arid",
            "TACU_BAF_B_Demolitions_Fieldpack_Tropic",
            "TACU_BAF_B_Demolitions_Fieldpack_Urban",
            "TACU_BAF_B_Medic_Fieldpack_Arid",
            "TACU_BAF_B_Medic_Fieldpack_Tropic",
            "TACU_BAF_B_Medic_Fieldpack_Urban"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_baf",
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
