// Otokar ARMA (HMG)
class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
    class EventHandlers;
};

class TACU_Otokar_ARMA_HMG_Base: O_APC_Wheeled_02_rcws_v2_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
                "a3\data_f\vehicles\turret_opfor_co.paa",
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_exp\apc_wheeled_02\data\apc_wheeled_02_ext_01_ghex_co.paa",
                "a3\armor_f_exp\apc_wheeled_02\data\apc_wheeled_02_ext_02_ghex_co.paa",
                "a3\data_f_exp\vehicles\turret_ghex_co.paa",
                "a3\armor_f\data\camonet_csat_hex_green_co.paa",
                "a3\armor_f\data\cage_csat_green_co.paa"
            };
            factions[] = {};
        };
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\otokar\otokar_ext_01_sre_co.paa),
                QPATHTOF(data\otokar\otokar_ext_02_sre_co.paa),
                QPATHTOF(data\turrets\turret_otokar_sre_co.paa),
                "a3\armor_f\data\camonet_csat_hex_desert_co.paa",
                "a3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
    };

    textureList[] = {
        "Hex", 1,
        "GreenHex", 1
    };

    MACRO_EVENTHANDLERS;
};
