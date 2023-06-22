// HEMTT Transport
class B_Truck_01_transport_F: Truck_01_base_F {
    class EventHandlers;
};

class B_Truck_01_covered_F: B_Truck_01_transport_F {
    class EventHandlers;
};

class TACU_HEMTT_Base: B_Truck_01_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Blufor", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};

// HEMTT Transport (Covered)
class TACU_HEMTT_Covered_Base: B_Truck_01_covered_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Blufor {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
                "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa",
                "\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Blufor", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};
