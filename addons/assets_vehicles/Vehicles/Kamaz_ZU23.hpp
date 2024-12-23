// Kamaz ZU-23-2
class I_A_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS {
    class EventHandlers;
};

class TACU_Kamaz_ZU23_Base: I_A_Truck_02_aa_lxWS {
    displayName = "KamAZ (ZU-23-2)";
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class SFIA {
            displayName = "SFIA";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
                "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
            factions[] = {};
        };
        class Brown: SFIA {
            displayName = "Brown";
            textures[] = {
                "lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_brown_CO.paa",
                "\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
        };
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_sre_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_sre_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
            factions[] = {};
        };
        class Seven_Rings_West: Seven_Rings_East {
            displayName = "Seven Rings West";
            textures[] = {
                QPATHTOF(data\kamaz\truck_02_kab_srw_co.paa),
                QPATHTOF(data\kamaz\truck_02_kuz_srw_co.paa),
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
                "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {"SFIA", 1, "Brown", 1};

    MACRO_EVENTHANDLERS;
};
