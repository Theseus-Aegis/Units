// Kamaz MRL (Artillery)
class TACU_Kamaz_MRL_Base: Truck_02_MRL_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Truck_02_MRL_F.jpg";

    class TextureSources {
        class Opfor {
            displayName = "OPFOR";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_gamma\truck_02\data\truck_02_mrl_OPFOR_co.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\soft_f_exp\Truck_02\Data\Truck_02_kab_GHEX_co.paa",
                "\A3\soft_f_beta\Truck_02\Data\Truck_02_int_co.paa",
                "\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_OPFOR_CO.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_chassis_OPFOR_CO.paa"
            };
            factions[] = {};
        };
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_black_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\A3\soft_f_Enoch\Truck_02\Data\Truck_02_mrl_EAF_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Opfor", 1,
        "GreenHex", 1,
        "Black", 1
    };

    MACRO_EVENTHANDLERS;
};
