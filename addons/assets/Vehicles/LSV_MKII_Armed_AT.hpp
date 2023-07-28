// LSV Mk. II (Metis-M)
class O_LSV_02_AT_F: LSV_02_AT_base_F {
    class EventHandlers;
};

class TACU_LSV_MKII_Armed_AT_Base: O_LSV_02_AT_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\a3\soft_f_exp\lsv_02\data\csat_lsv_01_black_co.paa",
                "\a3\soft_f_exp\lsv_02\data\csat_lsv_02_black_co.paa",
                "\a3\soft_f_exp\lsv_02\data\csat_lsv_03_black_co.paa",
                "\a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa",
                "\a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa"
            };
            factions[] = {};
        };
        class Opfor: Black {
            displayName = "Hex";
            textures[] = {
                "\a3\soft_f_exp\lsv_02\data\csat_lsv_01_arid_co.paa",
                "\a3\soft_f_exp\lsv_02\data\csat_lsv_02_arid_co.paa",
                "\a3\soft_f_exp\lsv_02\data\csat_lsv_03_arid_co.paa",
                "\a3\weapons_f_tank\launchers\vorona\data\vorona_f_co.paa",
                "\a3\weapons_f_tank\launchers\vorona\data\vorona_f_co.paa"
            };
            factions[] = {"TACU_Proxy_China_O", "TACU_Proxy_China_I"};
        };
        class Seven_Rings_East {
            displayName = "Seven Rings East";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\lsvmkii\lsv_01_sre_co.paa),
                QPATHTOF(data\lsvmkii\lsv_02_sre_co.paa),
                QPATHTOF(data\lsvmkii\lsv_03_sre_co.paa),
                "\a3\weapons_f_tank\launchers\vorona\data\vorona_f_co.paa",
                "\a3\weapons_f_tank\launchers\vorona\data\vorona_f_co.paa"
            };
            factions[] = {"TACU_Seven_Rings_Eastern"};
        };
    };

    textureList[] = {"Black", 1};

    MACRO_EVENTHANDLERS;
};
