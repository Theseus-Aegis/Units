// Otokar ARMA (Unarmed)
class TACU_Otokar_ARMA_Unarmed_Base: APC_Wheeled_02_unarmed_base_lxws {
    editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\O_APC_Wheeled_02_unarmed_lxWS.jpg";

    class TextureSources {
        class SFIA {
            displayName = "SFIA";
            author = "Rotators Collective";
            textures[] = {
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_01_sfia_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_02_sfia_CO.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                "A3\armor_f\data\cage_csat_co.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_sfia_CO.paa"
            };
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Rotators Collective";
            textures[] = {
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_01_black_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_02_black_CO.paa",
                "a3\armor_f\Data\camonet_AAF_stripe_desert_CO.paa",
                "lxws\vehicles_f_lxws\data\APC_Wheeled_01\cage_black_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_black_CO.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_01_nato_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_02_nato_CO.paa",
                "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "a3\Armor_F\Data\cage_sand_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_nato_CO.paa"
            };
            factions[] = {};
        };
        class Sand_Desert {
            displayName = "Sand (Desert Camo Net)";
            author = "Rotators Collective";
            textures[] = {
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_01_nato_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_ext_02_nato_CO.paa",
                "lxws\vehicles_f_lxws\data\camonet_NATO_flat_desert_CO.paa",
                "A3\armor_f\data\cage_sand_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_nato_CO.paa"
            };
            factions[] = {};
        };
        class Hex {
            displayName = "Hex";
            author = "Rotators Collective";
            textures[] = {
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                "A3\armor_f\data\cage_csat_co.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_hex_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Rotators Collective";
            textures[] = {
                "a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa",
                "a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
                "A3\armor_f\data\cage_csat_green_CO.paa",
                "lxWS\vehicles_1_f_lxws\APC_Wheeled_02\data\APC_Wheeled_02_adds_02_ghex_CO.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "SFIA", 1,
        "Black", 1,
        "Sand", 1,
        "Sand_Desert", 1,
        "Hex", 1,
        "GreenHex", 1
    };

    MACRO_EVENTHANDLERS;
};
