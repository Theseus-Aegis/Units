// Namer
class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F {
    class EventHandlers;
};

class TACU_Namer_Base: B_APC_Tracked_01_rcws_F {
    MACRO_DEFAULT_VEHICLE
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
        class Olive {
            displayName = "Olive";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_body_olive_co.paa",
                "a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa",
                "A3\data_f_exp\Vehicles\turret_olive_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Sand", 1,
        "Olive", 1
    };

    MACRO_EVENTHANDLERS;
};
