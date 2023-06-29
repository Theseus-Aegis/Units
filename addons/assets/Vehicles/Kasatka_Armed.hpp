// Ka-60 Kasatka Armed
class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F {
    class EventHandlers;
};

class TACU_Kasatka_Armed_Base: O_Heli_Light_02_dynamicLoadout_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            author = "Bohemia Interactive";
            displayName = "Black";
            factions[] = {};
            textures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
        };
        class BlackCustom {
            author = "Bohemia Interactive";
            displayName = "Black Custom";
            factions[] = {};
            textures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
        };
        class Blue {
            author = "Bohemia Interactive";
            displayName = "Blue";
            factions[] = {};
            textures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
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
