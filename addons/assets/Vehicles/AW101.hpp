// AW101 - Merlin
class I_Heli_Transport_02_F: Heli_Transport_02_base_F {
    class EventHandlers;
};

class TACU_Merlin_Base: I_Heli_Transport_02_F {
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
            factions[] = {};
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
            factions[] = {};
        };
    };

    textureList[] = {
        "Arid", 1,
        "Tropic", 1
    };

    MACRO_EVENTHANDLERS;
};
