// BM-2T Stalker
class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F {
    class EventHandlers;
};

class TACU_BM2T_Stalker_Base: O_APC_Tracked_02_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_02\data\rcws30_opfor_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\bm2t\apc_tracked_02_ext_01_ee_co.paa),
                QPATHTOF(data\bm2t\apc_tracked_02_ext_02_ee_co.paa),
                QPATHTOF(data\turrets\rcws30_ee_co.paa),
                "a3\armor_f\data\camonet_nato_green_co.paa",
                "a3\armor_f\data\cage_olive_co.paa"
            };
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {"Hex", 1};

    MACRO_EVENTHANDLERS;
};

// BM-2T Iskatel (WS)
class O_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_cannon_F {
    class EventHandlers;
};

class TACU_BM2T_Iskatel_Base: O_APC_Tracked_02_30mm_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    displayName = "BM-2T Iskatel";
    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Rotators Collective";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_ext_03_hex_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_30mm_hex_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class GreenHex: Hex {
            displayName = "Green Hex";
            textures[] = {
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_01_ghex_co.paa",
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_02_ghex_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_ext_03_ghex_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_30mm_ghex_co.paa",
                "a3\armor_f\data\camonet_csat_hex_green_co.paa",
                "a3\armor_f\data\cage_csat_green_co.paa"
            };
        };
        class SFIA: Hex {
            displayName = "SFIA";
            textures[] = {
                "lxws\vehicles_f_lxws\data\apc_tracked_02\kamysh_africa1_co.paa",
                "lxws\vehicles_f_lxws\data\apc_tracked_02\kamysh_africa2_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_ext_03_sfia_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_30mm_sfia_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
        };
        class Grey: Hex {
            displayName = "Grey";
            textures[] = {
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_ext_01_black_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_ext_02_black_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_ext_03_black_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\apc_tracked_02_30mm_black_co.paa",
                "a3\armor_f\data\camonet_csat_stripe_desert_co.paa",
                "lxws\vehicles_1_f_lxws\apc_tracked_02\data\cage_black_co.paa"
            };
        };
        class Eastern_Europe {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\bm2t\apc_tracked_02_ext_01_ee_co.paa),
                QPATHTOF(data\bm2t\apc_tracked_02_ext_02_ee_co.paa),
                QPATHTOF(data\bm2t\apc_tracked_02_ext_03_ee_co.paa),
                QPATHTOF(data\bm2t\apc_tracked_02_30mm_iskatel_ee_co.paa),
                "a3\armor_f\data\camonet_nato_green_co.paa",
                "a3\armor_f\data\cage_olive_co.paa"
            };
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {
        "Hex", 1,
        "GreenHex", 1,
        "SFIA", 1,
        "Grey", 1
    };

    MACRO_EVENTHANDLERS;
};
