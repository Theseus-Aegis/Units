#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Arma 3
            "A3_Data_F_AoW_Loadorder",
            // CBA
            "cba_main",
            // Theseus Services
            "tacs_backpacks",
            "tacs_glasses",
            "tacs_headgear",
            "tacs_units",
            "tacs_weapons",
            // Western Sahara
            "data_f_lxWS_Loadorder",
            "CUP_Weapons_LoadOrder"
        };
        author = CSTRING(Author);
        authors[] = {"Mike", "GilleeDoo"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
#include "CfgVehicles.hpp"
#include "CfgWorlds.hpp"
