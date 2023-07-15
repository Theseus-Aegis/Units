// Ka-60 Kasatka Armoured (Unarmed)
class B_ION_Heli_Light_02_unarmed_lxWS: O_Heli_Light_02_unarmed_F {
    class EventHandlers;
};

class TACU_Kasatka_Unarmed_Armoured_Base: B_ION_Heli_Light_02_unarmed_lxWS {
    displayName = "Ka-60 Kasatka (UP)";
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            author = "Bohemia Interactive";
            displayName = "Black";
            factions[] = {};
            textures[] = {
                "\a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa",
                "\a3\air_f\data\rockets_co.paa",
                "\lxws\air_f_lxws\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
        class BlackCustom: Black {
            displayName = "Black Custom";
            textures[] = {
                "\a3\air_f_heli\heli_light_02\data\heli_light_02_ext_opfor_v2_co.paa",
                "\a3\air_f\data\rockets_co.paa",
                "\lxws\air_f_lxws\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
        class Blue: Black {
            displayName = "Blue";
            textures[] = {
                "\a3\air_f\heli_light_02\data\heli_light_02_ext_civilian_co.paa",
                "\a3\air_f\data\rockets_co.paa",
                "\lxws\air_f_lxws\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
        class North_African_Green {
            author = "GilleeDoo";
            displayName = "Green";
            factions[] = {
                "TACU_African_North_B",
                "TACU_African_North_O",
                "TACU_African_North_I"
            };
            textures[] = {
                QPATHTOF(data\kasatka\heli_light_02_na_grn_ext_co.paa),
                "\a3\air_f\data\rockets_co.paa",
                "\lxws\air_f_lxws\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
        class North_African_Yellow: North_African_Green {
            displayName = "Yellow";
            textures[] = {
                QPATHTOF(data\kasatka\heli_light_02_na_ylw_ext_co.paa),
                "\a3\air_f\data\rockets_co.paa",
                "\lxws\air_f_lxws\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
    };

    textureList[] = {
        "Black", 1,
        "BlackCustom", 1,
        "Blue", 1
    };

    MACRO_EVENTHANDLERS;
};
