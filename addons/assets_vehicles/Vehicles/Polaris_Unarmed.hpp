// Polaris Unarmed
class B_LSV_01_unarmed_F: LSV_01_unarmed_base_F {
    class EventHandlers;
};

class TACU_Polaris_Unarmed_Base: B_LSV_01_unarmed_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Arid {
            displayName = "Arid";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\polaris\baf_lsv_01_arid_co.paa),
                QPATHTOF(data\polaris\baf_lsv_02_arid_co.paa),
                QPATHTOF(data\polaris\baf_lsv_03_arid_co.paa),
                QPATHTOF(data\polaris\baf_lsv_adds_arid_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
            factions[] = {"TACU_BAF_B"};
        };
        class Tropic: Arid {
            displayName = "Tropic";
            textures[] = {
                QPATHTOF(data\polaris\baf_lsv_01_tropic_co.paa),
                QPATHTOF(data\polaris\baf_lsv_02_tropic_co.paa),
                QPATHTOF(data\polaris\baf_lsv_03_tropic_co.paa),
                QPATHTOF(data\polaris\baf_lsv_adds_tropic_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
        };
        class Urban: Arid {
            displayName = "Urban";
            textures[] = {
                QPATHTOF(data\polaris\baf_lsv_01_urban_co.paa),
                QPATHTOF(data\polaris\baf_lsv_02_urban_co.paa),
                QPATHTOF(data\polaris\baf_lsv_03_urban_co.paa),
                QPATHTOF(data\polaris\baf_lsv_adds_urban_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
        };
        class South_African_Green {
            displayName = "South African Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\polaris\sa_lsv_01_grn_co.paa),
                QPATHTOF(data\polaris\sa_lsv_02_grn_co.paa),
                QPATHTOF(data\polaris\sa_lsv_03_grn_co.paa),
                QPATHTOF(data\polaris\sa_lsv_adds_grn_co.paa),
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa"
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I"
            };
        };
        class South_African_Tan: South_African_Green {
            displayName = "South African Tan";
            textures[] = {
                QPATHTOF(data\polaris\sa_lsv_01_tan_co.paa),
                QPATHTOF(data\polaris\sa_lsv_02_tan_co.paa),
                QPATHTOF(data\polaris\sa_lsv_03_tan_co.paa),
                QPATHTOF(data\polaris\sa_lsv_adds_tan_co.paa),
                "\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
        };
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[]= {
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_01_black_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_02_black_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_03_black_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_adds_black_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa"
            };
            factions[]= {};
        };
        class Olive: Black {
            displayName = "Olive";
            textures[] = {
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_01_olive_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_02_olive_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_03_olive_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_adds_olive_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa"
            };
        };
        class Sand: Black {
            displayName = "Sand";
            textures[]= {
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_01_sand_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_02_sand_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_03_sand_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_adds_sand_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
            };
        };
        class Dazzle: Black {
            displayName = "Dazzle";
            textures[]= {
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_01_dazzle_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_02_olive_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_03_olive_co.paa",
                "\a3\soft_f_exp\lsv_01\data\nato_lsv_adds_olive_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\a3\weapons_f_beta\launchers\titan\data\tubem_indp_co.paa"
            };
        };
    };

    textureList[] = {
        "Black", 1,
        "Olive", 1,
        "Sand", 1,
        "Dazzle", 1
    };

    MACRO_EVENTHANDLERS;
};
