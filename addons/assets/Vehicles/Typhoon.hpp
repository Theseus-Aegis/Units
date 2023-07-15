// Typhoon Transport
class O_Truck_03_transport_F: Truck_03_base_F {
    class EventHandlers;
};

class TACU_Typhoon_Base: O_Truck_03_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Hex {
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "\a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "\a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "\a3\soft_f_epc\truck_03\data\truck_03_cover_co.paa"
            };
            factions[] = {};
            displayName = "Hex";
        };
    };

    textureList[] = {"Hex", 1};

    MACRO_EVENTHANDLERS;
};
