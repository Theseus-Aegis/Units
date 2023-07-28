// Tigris
class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F {
    class EventHandlers;
};

class TACU_Tigris_Base: O_APC_Tracked_02_AA_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    class TextureSources {
        class Opfor {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_aa_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_opfor_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {"TACU_Proxy_China_O", "TACU_Proxy_China_I"};
        };
        class GreenHex {
            author = "Bohemia Interactive";
            displayName = "Green Hex";
            textures[] = {
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_01_aa_ghex_co.paa",
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_02_ghex_co.paa",
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_01_aa_tower_ghex_co.paa",
                "a3\armor_f\data\camonet_csat_hex_green_co.paa",
                "a3\armor_f\data\cage_csat_green_co.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\tigris\apc_tracked_02_ext_01_aa_ee_co.paa),
                QPATHTOF(data\bm2t\apc_tracked_02_ext_02_ee_co.paa),
                QPATHTOF(data\tigris\apc_tracked_02_aa_tower_ee_co.paa),
                "a3\armor_f\data\camonet_nato_green_co.paa",
                "a3\armor_f\data\cage_olive_co.paa"
            };
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {"GreenHex", 1};

    MACRO_EVENTHANDLERS;
};
