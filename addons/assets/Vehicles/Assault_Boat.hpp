class B_Boat_Transport_01_F: Rubber_duck_base_F {
    class EventHandlers;
};

class TACU_Assault_Boat_Base: B_Boat_Transport_01_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            author = "Bohemia Interactive";
            displayName = "Black";
            textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
            factions[] = {};
        };
        class Hex: Black {
            textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_opfor_co.paa"};
            displayName = "Hex";
        };
        class Rescue: Black {
            displayName = "Rescue";
            textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_rescue_co.paa"};
        };
        class Civilian: Black {
            displayName="Civilian";
            textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_civilian_co.paa"};
        };
        class Digital: Black {
            displayName = "Digital";
            textures[] = {"\a3\boat_f\boat_transport_01\data\boat_transport_01_indp_co.paa"};
        };
    };

    textureList[] = {
        "Black", 1,
        "Hex", 1,
        "Rescue", 1,
        "Civilian", 1,
        "Digital", 1
    };

    MACRO_EVENTHANDLERS;
};
