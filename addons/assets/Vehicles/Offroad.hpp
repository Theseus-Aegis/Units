// Offroad
class B_G_Offroad_01_F: I_G_Offroad_01_F {
    class EventHandlers;
};

class TACU_Offroad_Unarmed_Base: B_G_Offroad_01_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Red {
            displayName = "Red";
            author = "Bohemia Interactive";
            textures[] = {"\a3\Soft_F\offroad_01\data\Offroad_01_ext_co.paa", "\a3\Soft_F\offroad_01\data\Offroad_01_ext_co.paa"};
            factions[] = {};
        };
        class Beige: Red {
            displayName = "Beige";
            textures[] = {"\a3\Soft_F\offroad_01\data\Offroad_01_ext_base01_co.paa", "\a3\Soft_F\offroad_01\data\Offroad_01_ext_base01_co.paa"};
        };
        class White: Red {
            displayName = "White";
            textures[] = {"\a3\Soft_F\offroad_01\data\Offroad_01_ext_base02_co.paa", "\a3\Soft_F\offroad_01\data\Offroad_01_ext_base02_co.paa"};
        };
        class Blue: Red {
            displayName = "Blue";
            textures[] = {"\a3\Soft_F\offroad_01\data\Offroad_01_ext_base03_co.paa", "\a3\Soft_F\offroad_01\data\Offroad_01_ext_base03_co.paa"};
        };
        class Darkred: Red {
            displayName = "Dark Red";
            textures[] = {"\a3\Soft_F\offroad_01\data\Offroad_01_ext_base04_co.paa", "\a3\Soft_F\offroad_01\data\Offroad_01_ext_base04_co.paa"};
        };
        class Bluecustom: Red {
            displayName = "Blue Custom";
            textures[] = {"\a3\Soft_F\offroad_01\data\Offroad_01_ext_base05_co.paa", "\a3\Soft_F\offroad_01\data\Offroad_01_ext_base05_co.paa"};
        };
        class Guerilla_01: Red {
            displayName = "Guerrilla 01";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"};
        };
        class Guerilla_02: Red {
            displayName = "Guerrilla 02";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa"};
        };
        class Guerilla_03: Red {
            displayName = "Guerrilla 03";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa"};
        };
        class Guerilla_04: Red {
            displayName = "Guerrilla 04";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa"};
        };
        class Guerilla_05: Red {
            displayName = "Guerrilla 05";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa"};
        };
        class Guerilla_06: Red {
            displayName = "Guerrilla 06";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa"};
        };
        class Guerilla_07: Red {
            displayName = "Guerrilla 07";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa"};
        };
        class Guerilla_08: Red {
            displayName = "Guerrilla 08";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa"};
        };
        class Guerilla_09: Red {
            displayName = "Guerrilla 09";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa"};
        };
        class Guerilla_10: Red {
            displayName = "Guerrilla 10";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa"};
        };
        class Guerilla_11: Red {
            displayName = "Guerrilla 11";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa"};
        };
        class Guerilla_12: Red {
            displayName = "Guerrilla 12";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa"};
        };
        class Green: Red {
            displayName = "Green";
            textures[] = {"\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa", "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa"};
        };
        class Black: Red {
            displayName = "Black";
            author = "BadHabitz, Jonpas";
            textures[] = {"\x\tacs\addons\vehicles\data\offroad_black_ext_co.paa", "\x\tacs\addons\vehicles\data\offroad_black_ext_co.paa"};
        };
        class Police_Blue {
            displayName = "Police (Blue)";
            author = "Kresky";
            textures[] = {QPATHTOF(data\offroad\police_v_offroad_blue_co.paa), QPATHTOF(data\offroad\police_v_offroad_blue_co.paa)};
            factions[] = {"TACU_Police_B"};
        };
        class Police_Russian: Police_Blue {
            displayName = "Police (Russian)";
            textures[] = {QPATHTOF(data\offroad\police_v_offroad_blackrus_co.paa), QPATHTOF(data\offroad\police_v_offroad_blackrus_co.paa)};
            factions[] = {"TACU_Police_O"};
        };
        class Police_Black: Police_Blue {
            displayName = "Police (Black)";
            textures[] = {QPATHTOF(data\offroad\police_v_offroad_black_co.paa), QPATHTOF(data\offroad\police_v_offroad_black_co.paa)};
            factions[] = {"TACU_Police_I"};
        };
        class Eastern_Europe: Police_Blue {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {QPATHTOF(data\offroad\offroad_01_ext_grn_ee_co.paa), QPATHTOF(data\offroad\offroad_01_ext_grn_ee_co.paa)};
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {
        "Red", 1,
        "Beige", 1,
        "White", 1,
        "Blue", 1,
        "Darkred", 1,
        "Bluecustom", 1,
        "Guerilla_01", 1,
        "Guerilla_02", 1,
        "Guerilla_03", 1,
        "Guerilla_04", 1,
        "Guerilla_05", 1,
        "Guerilla_06", 1,
        "Guerilla_07", 1,
        "Guerilla_08", 1,
        "Guerilla_09", 1,
        "Guerilla_10", 1,
        "Guerilla_11", 1,
        "Guerilla_12", 1,
        "Green", 1,
        "Black", 1
    };

    animationList[] = {
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "hidePolice", 1,
        "HideServices", 1
    };

    MACRO_EVENTHANDLERS;
};
