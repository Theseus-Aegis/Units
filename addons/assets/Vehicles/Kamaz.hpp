// Kamaz Transport
class TACU_Kamaz_Base: Truck_02_transport_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Truck_02_transport_F.jpg";

    class TextureSources {
        class Opfor {
            displayName = "OPFOR";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class Orange {
            displayName = "Orange";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class Blue {
            displayName = "Blue";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\soft_f_exp\Truck_02\Data\Truck_02_kab_GHEX_co.paa",
                "\A3\soft_f_exp\Truck_02\Data\Truck_02_kuz_GHEX_co.paa",
                "\A3\soft_f_beta\Truck_02\Data\Truck_02_int_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_chassis_OPFOR_CO.paa"
            };
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Rotators Collective";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_black_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Opfor", 1,
        "Orange", 1,
        "Blue", 1,
        "GreenHex", 1,
        "Black", 1
    };

    MACRO_EVENTHANDLERS;
};
