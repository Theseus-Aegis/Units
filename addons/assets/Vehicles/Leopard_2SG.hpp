// Leopard 2SG
class I_MBT_03_cannon_F: I_MBT_03_base_F {
    class EventHandlers;
};

class TACU_Leopard_2SG_Base: I_MBT_03_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class South_African_Green {
            displayName = "South African Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_sa_grn_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_sa_grn_co.paa),
                QPATHTOF(data\leopard\mbt_03_rcws_sa_grn_co.paa),
                "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa"
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I",
                "TACU_Mercenaries_I"
            };
        };
        class South_African_Tan: South_African_Green {
            displayName = "South African Tan";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_sa_tan_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_sa_tan_co.paa),
                QPATHTOF(data\leopard\mbt_03_rcws_sa_tan_co.paa),
                QPATHTOF(data\leopard\camonet_desert_co.paa)
            };
        };
    };

    textureList[] = {};

    MACRO_EVENTHANDLERS;
};
