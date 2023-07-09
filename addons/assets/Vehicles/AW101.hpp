// AW101 - Merlin
class I_Heli_Transport_02_F: Heli_Transport_02_base_F {
    class EventHandlers;
};

class TACU_Merlin_Base: I_Heli_Transport_02_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Arid {
            author = "GilleeDoo, Mike";
            displayName = "British Armed Forces (Arid)";
            textures[] = {
                QPATHTOF(data\aw101\heli_transport_02_1_baf_arid_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_2_baf_arid_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_3_baf_arid_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_int_02_co.paa)
            };
            factions[] = {"TACU_BAF_B"};
        };
        class Tropic {
            author = "GilleeDoo, Mike";
            displayName = "British Armed Forces (Tropic)";
            textures[] = {
                QPATHTOF(data\aw101\heli_transport_02_1_baf_wld_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_2_baf_wld_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_3_baf_wld_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_int_02_co.paa)
            };
            factions[] = {"TACU_BAF_B"};
        };
        class South_African_Green {
            author = "GilleeDoo";
            displayName = "South African Green";
            textures[] = {
                QPATHTOF(data\aw101\heli_transport_02_1_sa_grn_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_2_sa_grn_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_3_sa_grn_co.paa),
                QPATHTOF(data\aw101\heli_transport_02_int_02_co.paa)
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I"
            };
        };
    };

    textureList[] = {};

    MACRO_EVENTHANDLERS;
};
