// Leopard 2SG
class I_MBT_03_cannon_F: I_MBT_03_base_F {
    class EventHandlers;
};

class TACU_Leopard_2SG_Base: I_MBT_03_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Desert {
            displayName = "Desert";
            author = "Mike";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_desert_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_desert_co.paa),
                QPATHTOF(data\leopard\mbt_03_rcws_desert_co.paa),
                QPATHTOF(data\leopard\camonet_desert_co.paa)
            };
            factions[] = {};
        };
        class Sand {
            displayName = "Sand";
            author = "Mike";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_sand_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_sand_co.paa),
                QPATHTOF(data\leopard\mbt_03_rcws_sand_co.paa),
                QPATHTOF(data\leopard\camonet_desert_co.paa)
            };
        };
        class Woodland {
            displayName = "Woodland";
            author = "Mike";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_woodland_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_woodland_co.paa),
                QPATHTOF(data\leopard\mbt_03_rcws_woodland_co.paa),
                "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa"
            };
            factions[] = {};
        };
        /*
        class South_African_Green {
            displayName = "South African Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_sa_grn_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_sa_grn_co.paa),
                QPATHTOF(data\leopard\),
                QPATHTOF(data\leopard\)
            };
            factions[] = {};
        };
        class South_African_Tan {
            displayName = "South African Tan";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\leopard\mbt_03_ext01_sa_tan_co.paa),
                QPATHTOF(data\leopard\mbt_03_ext02_sa_tan_co.paa),
                QPATHTOF(data\leopard\),
                "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa"
            };
            factions[] = {};
        };
        */
    };

    textureList[] = {
        "Desert", 1,
        "Sand", 1,
        "Woodland", 1
    };

    MACRO_EVENTHANDLERS;
};
