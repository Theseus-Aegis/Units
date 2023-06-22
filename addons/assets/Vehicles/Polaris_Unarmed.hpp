// Polaris Unarmed
class B_LSV_01_unarmed_F: LSV_01_unarmed_base_F {
    class EventHandlers;
};

class TACU_Polaris_Unarmed_Base: B_LSV_01_unarmed_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Arid {
            displayName = "Arid";
            author = "GilleeDoo, Mike";
            textures[] = {
                QPATHTOF(data\polaris\baf_lsv_01_arid_co.paa),
                QPATHTOF(data\polaris\baf_lsv_02_arid_co.paa),
                QPATHTOF(data\polaris\baf_lsv_03_arid_co.paa),
                QPATHTOF(data\polaris\baf_lsv_adds_arid_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
            factions[] = {
                // BAF
            };
        };
        class Tropic {
            displayName = "Tropic";
            author = "GilleeDoo, Mike";
            textures[] = {
                QPATHTOF(data\polaris\baf_lsv_01_tropic_co.paa),
                QPATHTOF(data\polaris\baf_lsv_02_tropic_co.paa),
                QPATHTOF(data\polaris\baf_lsv_03_tropic_co.paa),
                QPATHTOF(data\polaris\baf_lsv_adds_tropic_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
            factions[] = {
                // BAF
            };
        };
        class Urban {
            displayName = "Urban";
            author = "GilleeDoo, Mike";
            textures[] = {
                QPATHTOF(data\polaris\baf_lsv_01_urban_co.paa),
                QPATHTOF(data\polaris\baf_lsv_02_urban_co.paa),
                QPATHTOF(data\polaris\baf_lsv_03_urban_co.paa),
                QPATHTOF(data\polaris\baf_lsv_adds_urban_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
            factions[] = {
                // BAF
            };
        };
        class Black {
            displayName = "Black";
            author = "Kresky";
            textures[] = {
                "\x\tacs\addons\vehicles\data\polaris_black_ext01_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_black_ext02_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_black_ext03_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_black_adds_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa"
            };
            factions[] = {};
        };
        class Tan {
            displayName = "Tan";
            author = "GilleeDoo";
            textures[] = {
                "\x\tacs\addons\vehicles\data\polaris_tan_ext01_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_tan_ext02_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_tan_ext03_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_tan_adds_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
            factions[] = {};
        };
        class Green {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {
                "\x\tacs\addons\vehicles\data\polaris_green_ext01_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_green_ext02_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_green_ext03_co.paa",
                "\x\tacs\addons\vehicles\data\polaris_green_adds_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Arid", 0,
        "Tropic", 0,
        "Urban", 0,
        "Black", 1,
        "Tan", 1,
        "Green", 1
    };

    MACRO_EVENTHANDLERS;
};
