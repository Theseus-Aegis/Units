class O_Heli_Transport_04_covered_F: Heli_Transport_04_base_F {
    class EventHandlers;
};

class TACU_Taru_Transport_Base: O_Heli_Transport_04_covered_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    class TextureSources {
        class Opfor {
            author = "Bohemia Interactive";
            displayName = "Hex";
            textures[] = {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_co.paa"
            };
            factions[] = {};
        };
        class Black: Opfor {
            displayName = "Black";
            textures[] = {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_black_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_black_co.paa"
            };
        };
    };

    textureList[] = {"Opfor", 1, "Black", 1};

    MACRO_EVENTHANDLERS;
};
