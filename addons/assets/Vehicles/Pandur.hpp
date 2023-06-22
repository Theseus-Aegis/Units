// Pandur
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
    class EventHandlers;
};

class TACU_Pandur_Base: I_APC_Wheeled_03_cannon_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Indep {
            displayName = "AAF";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                "A3\armor_f\data\cage_aaf_co.paa"
            };
            factions[] = {};
        };
        class Indep_02 {
            displayName = "AAF (Jungle Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "AAF (Desert Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\Armor_F\Data\cage_G3_CO.paa"
            };
            factions[] = {};
        };
        class Guerilla_01 {
            displayName = "Guerrilla 01";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_01_CO.paa",
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_01_CO.paa",
                "A3\Data_F_Tacops\data\RCWS30_IG_01_CO.paa",
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_01_CO.paa",
                "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            faction[] = {};
        };
        class Guerilla_02 {
            displayName = "Guerrilla 02";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa",
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa",
                "A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa",
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa",
                "A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
                "A3\armor_f\data\cage_sand_co.paa"
            };
            faction[] = {};
        };
        class Guerilla_03 {
            displayName = "Guerrilla 03";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_03_CO.paa",
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_03_CO.paa",
                "A3\Data_F_Tacops\data\RCWS30_IG_03_CO.paa",
                "A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_03_CO.paa",
                "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            faction[] = {};
        };
        class Blufor {
            displayName = "BLUFOR";
            author = "GilleeDoo, Mike";
            textures[] = {
                "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
                "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
            };
        };
    };
    textureList[] = {
        "Indep", 1,
        "Indep_02", 1,
        "Indep_03", 1,
        "Guerilla_01", 1,
        "Guerilla_02", 1,
        "Guerilla_03", 1,
        "Vanguard", 0
    };

    MACRO_EVENTHANDLERS;
};
