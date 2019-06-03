#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Arma 3
            "A3_Data_F",
            "A3_Characters_F",
            "A3_Weapons_F",
            "A3_Data_F_Tank_Loadorder",
            // ACE
            "ace_main",
            "ace_medical",
            "ace_flashsuppressors",
            "ace_laserpointer",
            "ace_nightvision",
            // CBA
            "cba_main",
            // Theseus
            "tacs_vehicles",
            "tacs_headgear",
            "tacs_units",
            "tacs_vests",
        };
        author = CSTRING(Author);
        authors[] = {CSTRING(author)};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        dir = "@tac_units";
        name = "Theseus Inc. Units";
        picture = QPATHTOF(UI\logo_tacu_ca.paa);
        logo = QPATHTOF(UI\logo_tacu_small_ca.paa);
        logoOver = QPATHTOF(UI\logo_tacu_small_ca.paa);
        logoSmall = QPATHTOF(UI\logo_tacu_small_ca.paa);
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
    };
};
