#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Foreign_Legion_B_Demolitions_AssaultPack",
            "TACU_Foreign_Legion_B_Engineer_AssaultPack",
            "TACU_Foreign_Legion_B_Medic_AssaultPack"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_foreign_legion",
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
