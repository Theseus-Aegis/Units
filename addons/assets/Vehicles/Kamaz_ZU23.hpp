// Kamaz ZU-23-2
class I_A_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS {
    class EventHandlers;
};

class TACU_Kamaz_ZU23_Base: I_A_Truck_02_aa_lxWS {
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Opfor {
            displayName = "Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_opfor_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_hex_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
            factions[] = {};
        };
        class SFIA {
            displayName = "SFIA";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
                "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
            factions[] = {};
        };
        class Brown {
            displayName = "Brown";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_brown_CO.paa",
                "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Opfor", 1,
        "SFIA", 1,
        "Brown", 1
    };

    MACRO_EVENTHANDLERS;
};
