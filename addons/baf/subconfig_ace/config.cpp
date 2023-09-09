#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
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
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
