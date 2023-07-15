// LSV Mk. II (M134)
class O_LSV_02_armed_F: LSV_02_armed_base_F {
    class EventHandlers;
};

class TACU_LSV_MKII_Armed_Base: O_LSV_02_armed_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
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
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\lsvmkii\lsv_01_sre_co.paa),
                QPATHTOF(data\lsvmkii\lsv_02_sre_co.paa),
                QPATHTOF(data\lsvmkii\lsv_03_sre_co.paa),
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
                "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
    };

    textureList[] = {"Black", 1};

    MACRO_EVENTHANDLERS;
};
