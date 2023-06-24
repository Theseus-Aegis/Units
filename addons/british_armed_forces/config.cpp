// Needs CUP Removals.
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_BAF_U_B_Desert_Scout",
            "TACU_BAF_U_B_Desert_Demolitions",
            "TACU_BAF_U_B_Desert_HeavyGunner",
            "TACU_BAF_U_B_Desert_JTAC",
            "TACU_BAF_U_B_Desert_Marksman",
            "TACU_BAF_U_B_Desert_Medic",
            "TACU_BAF_U_B_Desert_LAT",
            "TACU_BAF_U_B_Desert_Shotgun",
            "TACU_BAF_U_B_Desert_TL"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo, Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
