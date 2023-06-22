// Otokar ARMA (HMG)
class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
    class EventHandlers;
};

class TACU_Otokar_ARMA_HMG_Base: O_APC_Wheeled_02_rcws_v2_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Hex {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
                "a3\data_f\vehicles\turret_opfor_co.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                "A3\armor_f\data\cage_csat_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
                "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
                "a3\data_f\vehicles\turret_opfor_co.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
                "A3\armor_f\data\cage_csat_green_CO.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Hex", 1,
        "GreenHex", 1
    };

    MACRO_EVENTHANDLERS;
};
