// LSV Mk. II (M134)
class O_LSV_02_armed_F: LSV_02_armed_base_F {
    class EventHandlers;
};

class TACU_LSV_MKII_Armed_Base: O_LSV_02_armed_F {
    MACRO_DEFAULT_VEHICLE
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
            };
            factions[] = {};
        };
        class GreenHex {
            displayName = "Green Hex";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
            };
            factions[] = {};
        };
        class Arid {
            displayName = "Arid";
            author = "Bohemia Interactive";
            textures[] = {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Black", 1,
        "GreenHex", 1,
        "Arid", 1
    };

    MACRO_EVENTHANDLERS;
};
