// Pandur
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
    class EventHandlers;
};

class TACU_Pandur_Base: I_APC_Wheeled_03_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\data_f_tacops\data\apc_wheeled_03_ext_ig_01_co.paa",
                "a3\data_f_tacops\data\apc_wheeled_03_ext2_ig_01_co.paa",
                "a3\data_f_tacops\data\rcws30_ig_01_co.paa",
                "a3\data_f_tacops\data\apc_wheeled_03_ext_alpha_ig_01_co.paa",
                "a3\armor_f\data\camonet_aaf_fia_green_co.paa",
                "a3\armor_f\data\cage_g1_co.paa"
            };
            factions[] = {};
        };
        class Guerilla_02: Guerilla_01 {
            displayName = "Guerrilla 02";
            textures[] = {
                "a3\data_f_tacops\data\apc_wheeled_03_ext_ig_02_co.paa",
                "a3\data_f_tacops\data\apc_wheeled_03_ext2_ig_02_co.paa",
                "a3\data_f_tacops\data\rcws30_ig_02_co.paa",
                "a3\data_f_tacops\data\apc_wheeled_03_ext_alpha_ig_02_co.paa",
                "a3\armor_f\data\camonet_aaf_fia_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa"
            };
        };
        class Guerilla_03: Guerilla_01 {
            displayName = "Guerrilla 03";
            textures[] = {
                "a3\data_f_tacops\data\apc_wheeled_03_ext_ig_03_co.paa",
                "a3\data_f_tacops\data\apc_wheeled_03_ext2_ig_03_co.paa",
                "a3\data_f_tacops\data\rcws30_ig_03_co.paa",
                "a3\data_f_tacops\data\apc_wheeled_03_ext_alpha_ig_03_co.paa",
                "a3\armor_f\data\camonet_aaf_fia_green_co.paa",
                "a3\armor_f\data\cage_g3_co.paa"
            };
        };
        class Blufor: Guerilla_01 {
            displayName = "BLUFOR";
            textures[] = {
                "a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_co.paa",
                "a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext2_co.paa",
                "a3\armor_f_gamma\apc_wheeled_03\data\rcws30_co.paa",
                "a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa"
            };
        };
        class Eastern_Europe: Guerilla_01 {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\pandur\pandur_03_ext_01_ee_co.paa),
                QPATHTOF(data\pandur\pandur_03_ext_02_ee_co.paa),
                QPATHTOF(data\turrets\rcws30_pandur_ee_co.paa),
                QPATHTOF(data\pandur\pandur_03_ext_adds_ee_co.paa),
                "a3\armor_f\data\camonet_aaf_fia_green_co.paa",
                "a3\armor_f\data\cage_g1_co.paa"
            };
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {
        "Guerilla_01", 1,
        "Guerilla_02", 1,
        "Guerilla_03", 1,
        "Blufor", 1
    };

    MACRO_EVENTHANDLERS;
};
