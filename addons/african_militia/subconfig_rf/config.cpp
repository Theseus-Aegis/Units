#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_African_Militia_V_O_Pickup_Unarmed",
            "TACU_African_Militia_V_O_Pickup_HMG",
            "TACU_African_Militia_V_O_Pickup_MMG",
            "TACU_African_Militia_V_I_Pickup_Unarmed",
            "TACU_African_Militia_V_I_Pickup_HMG",
            "TACU_African_Militia_V_I_Pickup_MMG"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_african_militia",
            "RF_Data_Loadorder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
