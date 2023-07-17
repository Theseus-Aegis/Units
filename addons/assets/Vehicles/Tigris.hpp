// Tigris
class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F {
    class EventHandlers;
};

class TACU_Tigris_Base: O_APC_Tracked_02_AA_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_01_aa_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_02\data\apc_tracked_02_ext_02_hexarid_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_opfor_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class GreenHex: Hex {
            displayName = "Green Hex";
            textures[] = {
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_01_aa_ghex_co.paa",
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_02_ghex_co.paa",
                "a3\armor_f_exp\apc_tracked_02\data\apc_tracked_01_aa_tower_ghex_co.paa",
                "a3\armor_f\data\camonet_csat_hex_green_co.paa",
                "a3\armor_f\data\cage_csat_green_co.paa"
            };
        };
        class Eastern_Europe {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {};
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {"Hex", 1, "GreenHex", 1};

    MACRO_EVENTHANDLERS;
};
