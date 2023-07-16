// Namer
class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F {
    class EventHandlers;
};

class TACU_Namer_Base: B_APC_Tracked_01_rcws_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Sand {
            displayName = "Sand";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa",
                "a3\data_f\vehicles\turret_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa"
            };
            factions[] = {};
        };
        class Olive: Sand {
            displayName = "Olive";
            textures[] = {
                "a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_body_olive_co.paa",
                "a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa",
                "a3\data_f_exp\vehicles\turret_olive_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa"
            };
        };
        class North_African_Yellow {
            displayName = "Yellow";
            author = "GilleeDoo";
            textures[] = {
                QPATHTOF(data\namer\nemmera_01_body_na_ylw_co.paa),
                QPATHTOF(data\namer\nemmera_02_body_na_ylw_co.paa),
                QPATHTOF(data\turrets\turret_na_ylw_co.paa),
                "a3\armor_f\data\camonet_nato_desert_co.paa"
            };
            factions[] = {
                "TACU_African_North_B",
                "TACU_African_North_O",
                "TACU_African_North_I"
            };
        };
    };

    textureList[] = {"Sand", 1, "Olive", 1};

    MACRO_EVENTHANDLERS;
};
