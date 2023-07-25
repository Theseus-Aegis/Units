#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_main",
            "tacu_ammunition",
            "CUP_Weapons_LoadOrder"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

class Mode_SemiAuto;

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
