// Wiesel (ATGM)
class I_LT_01_AT_F: LT_01_AT_base_F {
    class EventHandlers;
};

class TACU_Wiesel_Armed_AT_Base: I_LT_01_AT_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Olive_Jungle {
            displayName = "Olive (Jungle Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
                "a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
                "a3\armor_f\data\camonet_aaf_digi_jungle_co.paa",
                "a3\armor_f\data\cage_g1_co.paa"
            };
            factions[] = {};
        };
        class Olive_Desert: Olive_Jungle {
            displayName = "Olive (Desert Camo Net)";
            textures[] = {
                "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
                "a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
                "a3\armor_f\data\camonet_aaf_digi_desert_co.paa",
                "a3\armor_f\data\cage_g3_co.paa"
            };
        };
        class Olive: Olive_Jungle {
            displayName = "Olive";
            textures[] = {
                "a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
                "a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
                "a3\armor_f\data\camonet_aaf_digi_green_co.paa",
                "a3\armor_f\data\cage_olive_co.paa"
            };
        };
    };

    textureList[] = {
        "Olive_Jungle", 1,
        "Olive_Desert", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};
