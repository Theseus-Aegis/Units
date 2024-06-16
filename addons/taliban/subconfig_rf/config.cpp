#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Taliban_Veterans_V_I_Pickup_Unarmed",
            "TACU_Taliban_Veterans_V_I_Pickup_unarmed_UP",
            "TACU_Taliban_Veterans_V_I_Pickup_HMG",
            "TACU_Taliban_Veterans_V_I_Pickup_HMG_UP",
            "TACU_Taliban_Veterans_V_I_Pickup_MMG",
            "TACU_Taliban_Veterans_V_I_Pickup_MMG_UP",
            "TACU_Taliban_Veterans_V_O_Pickup_Unarmed",
            "TACU_Taliban_Veterans_V_O_Pickup_unarmed_UP",
            "TACU_Taliban_Veterans_V_O_Pickup_HMG",
            "TACU_Taliban_Veterans_V_O_Pickup_HMG_UP",
            "TACU_Taliban_Veterans_V_O_Pickup_MMG",
            "TACU_Taliban_Veterans_V_O_Pickup_MMG_UP",
            "TACU_Taliban_Militia_V_I_Pickup_Unarmed",
            "TACU_Taliban_Militia_V_I_Pickup_HMG",
            "TACU_Taliban_Militia_V_I_Pickup_MMG",
            "TACU_Taliban_Militia_V_O_Pickup_Unarmed",
            "TACU_Taliban_Militia_V_O_Pickup_HMG",
            "TACU_Taliban_Militia_V_O_Pickup_MMG"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_taliban",
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
