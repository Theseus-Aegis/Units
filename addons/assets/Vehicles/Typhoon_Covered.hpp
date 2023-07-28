// Typhoon Transport (Covered)
class O_Truck_03_covered_F: Truck_03_base_F {
    class EventHandlers;
};

class TACU_Typhoon_Covered_Base: O_Truck_03_covered_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Opfor {
            author = "Bohemia Interactive";
            displayName = "Hex";
            textures[] = {
                "\a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "\a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "\a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "\a3\soft_f_epc\truck_03\data\truck_03_cover_co.paa"
            };
            factions[] = {"TACU_Proxy_China_O", "TACU_Proxy_China_I"};
        };
    };

    textureList[] = {};

    MACRO_EVENTHANDLERS;
};
