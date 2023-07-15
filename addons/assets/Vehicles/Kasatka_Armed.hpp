// Ka-60 Kasatka Armed
class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F {
    class EventHandlers;
};

class TACU_Kasatka_Armed_Base: O_Heli_Light_02_dynamicLoadout_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    // This property has to be set otherwise textureSources fail.
    hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};

    class TextureSources {
        class Black {
            author = "Bohemia Interactive";
            displayName = "Black";
            factions[] = {};
            textures[] = {"\a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa"};
        };
        class BlackCustom: Black {
            displayName = "Black Custom";
            textures[] = {"\a3\air_f_heli\heli_light_02\data\heli_light_02_ext_opfor_v2_co.paa"};
        };
        class Blue: Black {
            displayName = "Blue";
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
        class North_African_Yellow: North_African_Green {
            displayName = "Yellow";
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
