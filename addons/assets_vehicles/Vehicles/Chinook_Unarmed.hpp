// CH-47L Chinook Unarmed
class B_Heli_Transport_03_unarmed_F: Heli_Transport_03_unarmed_base_F {
    class EventHandlers;
};

class TACU_Chinook_Unarmed_Base: B_Heli_Transport_03_unarmed_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Green {
            displayName = "Green";
            author = "Bohemia Interactive";
            textures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa", "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};
            factions[] = {};
        };
        class Black: Green {
            displayName = "Black";
            textures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_black_co.paa", "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
        };
    };

    textureList[] = {"Green", 1, "Black", 1};

    MACRO_EVENTHANDLERS;
};
