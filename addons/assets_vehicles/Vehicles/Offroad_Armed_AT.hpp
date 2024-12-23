// Offroad Armed (SPG9)
class B_G_Offroad_01_AT_F: I_G_Offroad_01_AT_F {
    class EventHandlers;
};

class TACU_Offroad_Armed_AT_Base: B_G_Offroad_01_AT_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            author = "Bohemia Interactive";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"};
            faction[] = {};
        };
        class Guerilla_02: Guerilla_01 {
            displayName = "Guerrilla 02";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa"};
        };
        class Guerilla_03: Guerilla_01 {
            displayName = "Guerrilla 03";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa"};
        };
        class Guerilla_04: Guerilla_01 {
            displayName = "Guerrilla 04";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa"};
        };
        class Guerilla_05: Guerilla_01 {
            displayName = "Guerrilla 05";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa"};
        };
        class Guerilla_06: Guerilla_01 {
            displayName = "Guerrilla 06";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa"};
        };
        class Guerilla_07: Guerilla_01 {
            displayName = "Guerrilla 07";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa"};
        };
        class Guerilla_08: Guerilla_01 {
            displayName = "Guerrilla 08";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa"};
        };
        class Guerilla_09: Guerilla_01 {
            displayName = "Guerrilla 09";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa"};
        };
        class Guerilla_10: Guerilla_01 {
            displayName = "Guerrilla 10";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa"};
        };
        class Guerilla_11: Guerilla_01 {
            displayName = "Guerrilla 11";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa"};
        };
        class Guerilla_12: Guerilla_01 {
            displayName = "Guerrilla 12";
            textures[] = {"\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa", "\a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa"};
        };
        class Green: Guerilla_01 {
            displayName = "Green";
            textures[] = {"\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa", "\a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa"};
        };
        class Black: Guerilla_01 {
            displayName = "Black";
            author = "BadHabitz, Jonpas";
            textures[] = {"\x\tacs\addons\vehicles\data\offroad_black_ext_co.paa", "\x\tacs\addons\vehicles\data\offroad_black_ext_co.paa"};
        };
        class Eastern_Europe: Guerilla_01 {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {QPATHTOF(data\offroad\offroad_01_ext_grn_ee_co.paa), QPATHTOF(data\offroad\offroad_01_ext_grn_ee_co.paa)};
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {
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

    MACRO_EVENTHANDLERS;
};
