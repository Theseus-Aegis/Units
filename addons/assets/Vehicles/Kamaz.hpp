// Kamaz Transport
class I_Truck_02_transport_F: Truck_02_transport_base_F {
    class EventHandlers;
};

class TACU_Kamaz_Base: I_Truck_02_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Opfor {
            displayName = "OPFOR";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\truck_02\Data\truck_02_kab_opfor_co.paa",
                "\a3\soft_f_beta\truck_02\Data\truck_02_kuz_opfor_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class Orange {
            displayName = "Orange";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_exp\truck_02\Data\truck_02_kab_GHEX_co.paa",
                "\a3\soft_f_exp\truck_02\Data\truck_02_kuz_GHEX_co.paa",
                "\a3\soft_f_beta\truck_02\Data\truck_02_int_co.paa",
                "\a3\Soft_F_Beta\truck_02\data\truck_02_chassis_opfor_co.paa"
            };
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Rotators Collective";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\truck_02\truck_02_kab_black_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_kuz_olive_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_f_lxws\data\truck_02\truck_02_kab_brown_co.paa",
                "lxws\vehicles_f_lxws\data\truck_02\truck_02_kuz_africa_brown_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class South_African_Green {
            displayName = "Green";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_sa_grn_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_sa_grn_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I"
            };
        };
        class South_African_Tan {
            displayName = "Tan";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_sa_tan_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_sa_tan_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {
                "TACU_African_South_B",
                "TACU_African_South_O",
                "TACU_African_South_I"
            };
        };
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {};
            factions[] = {};
        };
    };

    textureList[] = {
        "Opfor", 1,
        "Orange", 1,
        "Blue", 1,
        "GreenHex", 1,
        "Black", 1,
        "Brown", 1
    };

    MACRO_EVENTHANDLERS;
};
