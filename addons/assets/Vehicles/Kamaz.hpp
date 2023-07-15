// Kamaz Transport
class I_Truck_02_transport_F: Truck_02_transport_base_F {
    class EventHandlers;
};

class TACU_Kamaz_Base: I_Truck_02_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
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
        class Blue: Orange {
            displayName = "Blue";
            textures[] = {
                "\a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
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
        class Brown: Black {
            displayName = "Brown";
            textures[] = {
                "lxws\vehicles_f_lxws\data\truck_02\truck_02_kab_brown_co.paa",
                "lxws\vehicles_f_lxws\data\truck_02\truck_02_kuz_africa_brown_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
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
        class South_African_Tan: South_African_Green {
            displayName = "Tan";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_sa_tan_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_sa_tan_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
        };
        class Seven_Rings_East: South_African_Green {
            displayName = "Seven Rings East";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_sre_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_sre_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
        class Seven_Rings_West: South_African_Green {
            displayName = "Seven Rings West";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_srw_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_srw_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {"TACU_Seven_Rings_Western"};
        };
    };

    textureList[] = {
        "Orange", 1,
        "Blue", 1,
        "Black", 1,
        "Brown", 1
    };

    MACRO_EVENTHANDLERS;
};
