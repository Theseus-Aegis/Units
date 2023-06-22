// Wiesel (ATGM)
class I_LT_01_AT_F: LT_01_AT_base_F {
    class EventHandlers;
};

class TACU_Wiesel_Armed_AT_Base: I_LT_01_AT_F {
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Olive_Jungle {
            displayName = "Olive (Jungle Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Olive_Desert {
            displayName = "Olive (Desert Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            factions[] = {};
        };
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
                "A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                "A3\armor_f\data\cage_olive_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Olive_Jungle", 1,
        "Olive_Desert", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};
