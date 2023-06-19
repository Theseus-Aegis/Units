#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Muddy"
        };
        weapons[] = {
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
