// Otokar ARMA (M2)
class O_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxws {
    class EventHandlers;
};

class TACU_Otokar_ARMA_Armed_Base: O_APC_Wheeled_02_hmg_lxWS {
    displayName = "Otokar ARMA (M2)";
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class SFIA {
            displayName = "SFIA";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_01_sfia_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_02_sfia_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_01_sfia_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_02_sfia_co.paa"
            };
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_01_black_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_02_black_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_01_black_co.paa",
                "a3\armor_f\data\camonet_aaf_stripe_desert_co.paa",
                "lxws\vehicles_f_lxws\data\apc_wheeled_01\cage_black_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_02_black_co.paa"
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_01_nato_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_02_nato_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_01_nato_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_02_nato_co.paa"
            };
            factions[] = {};
        };
        class Sand_Desert {
            displayName = "Sand (Desert Camo Net)";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_01_nato_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_ext_02_nato_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_01_nato_co.paa",
                "lxws\vehicles_f_lxws\data\camonet_nato_flat_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa",
                "lxws\vehicles_1_f_lxws\apc_wheeled_02\data\apc_wheeled_02_adds_02_nato_co.paa"
            };
            factions[] = {};
        };
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\otokar\otokar_ext_01_sre_co.paa),
                QPATHTOF(data\otokar\otokar_ext_02_sre_co.paa),
                QPATHTOF(data\otokar\otokar_adds_01_sre_co.paa),
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_sand_co.paa",
                QPATHTOF(data\otokar\otokar_adds_02_sre_co.paa)
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
    };

    textureList[] = {
        "SFIA", 1,
        "Black", 1,
        "Sand", 1,
        "Sand_Desert", 1
    };

    MACRO_EVENTHANDLERS;
};
