// Ka-60 Kasatka Armoured
class B_ION_Heli_Light_02_dynamicLoadout_lxWS: O_Heli_Light_02_dynamicLoadout_F {
    class EventHandlers;
};

class TACU_Kasatka_Armed_Armoured_Base: B_ION_Heli_Light_02_dynamicLoadout_lxWS {
    displayName = "Ka-60 Kasatka Armed (UP)";
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            author = "Bohemia Interactive";
            displayName = "Black";
            factions[] = {};
            textures[] = {
                "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa",
                "\a3\air_f\data\rockets_co.paa",
                "\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
        class BlackCustom {
            author = "Bohemia Interactive";
            displayName = "Black Custom";
            factions[] = {};
            textures[] = {
                "\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa",
                "\a3\air_f\data\rockets_co.paa",
                "\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
            };
        };
        class Blue {
            author = "Bohemia Interactive";
            displayName = "Blue";
            factions[] = {};
            textures[] = {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa",
                "\a3\air_f\data\rockets_co.paa",
                "\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
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
            textures[] = {QPATHTOF(data\kasatka\heli_light_02_na_grn_ext_co.paa)};
        };
        class North_African_Yellow {
            author = "GilleeDoo";
            displayName = "Yellow";
            factions[] = {
                "TACU_African_North_B",
                "TACU_African_North_O",
                "TACU_African_North_I"
            };
            textures[] = {QPATHTOF(data\kasatka\heli_light_02_na_ylw_ext_co.paa)};
        };
    };

    textureList[] = {
        "Black", 1,
        "BlackCustom", 1,
        "Blue", 1
    };

    MACRO_EVENTHANDLERS;
};
