// Typhoon Transport (Device)
class O_Truck_03_device_F: Truck_03_base_F {
    class EventHandlers;
};

class TACU_Typhoon_Device_Base: O_Truck_03_device_F {
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
                "\a3\structures_f_epc\items\electronics\data\the_device_02_co.paa",
                "\a3\structures_f_epc\items\electronics\data\the_device_03_co.paa"
            };
            factions[] = {};
        };
        class Eastern_Europe {
            author = "GilleeDoo";
            displayName = "Green";
            textures[] = {
                QPATHTOF(data\typhoon\typhoon_ext01_ee_co.paa),
                QPATHTOF(data\typhoon\typhoon_ext02_ee_co.paa),
                QPATHTOF(data\typhoon\typhoon_cargo_ee_co.paa),
                "\a3\structures_f_epc\items\electronics\data\the_device_02_co.paa",
                "\a3\structures_f_epc\items\electronics\data\the_device_03_co.paa"
            };
            factions[] = {"TACU_Proxy_Russia_O", "TACU_Proxy_Russia_I"};
        };
    };

    textureList[] = {"Opfor", 1};

    MACRO_EVENTHANDLERS;
};
