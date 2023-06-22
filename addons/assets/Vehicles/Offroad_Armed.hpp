// Offroad M2
class B_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F {
    class EventHandlers;
};

class TACU_Offroad_Armed_M2_Base: B_G_Offroad_01_armed_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
            faction[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerrilla 02";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
            faction[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerrilla 03";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
            faction[] = {};
        };
        class Guerilla_04 {
            displayName = "Guerrilla 04";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
            faction[] = {};
        };
        class Guerilla_05 {
            displayName = "Guerrilla 05";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
            faction[] = {};
        };
        class Guerilla_06 {
            displayName = "Guerrilla 06";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
            faction[] = {};
        };
        class Guerilla_07 {
            displayName = "Guerrilla 07";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
            faction[] = {};
        };
        class Guerilla_08 {
            displayName = "Guerrilla 08";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
            faction[] = {};
        };
        class Guerilla_09 {
            displayName = "Guerrilla 09";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
            faction[] = {};
        };
        class Guerilla_10 {
            displayName = "Guerrilla 10";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
            faction[] = {};
        };
        class Guerilla_11 {
            displayName = "Guerrilla 11";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
            faction[] = {};
        };
        class Guerilla_12 {
            displayName = "Guerrilla 12";
            author = "Bohemia Interactive";
            textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa", "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
            faction[] = {};
        };
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa", "\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
            faction[] = {"IND_E_F"};
        };
        class Black {
            displayName = "Black";
            author = "BadHabitz, Jonpas";
            textures[] = {"\x\tacs\addons\vehicles\data\offroad_black_ext_co.paa", "\x\tacs\addons\vehicles\data\offroad_black_ext_co.paa"};
            factions[] = {};
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
