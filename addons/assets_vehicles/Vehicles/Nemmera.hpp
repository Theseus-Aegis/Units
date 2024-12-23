// Nemmera
class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F {
    class EventHandlers;
};

class TACU_Nemmera_Base: B_APC_Tracked_01_CRV_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Blufor {
            displayName = "NATO";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_crv_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa",
                "a3\data_f\vehicles\turret_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_crv_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa"
            };
            factions[] = {};
        };
        class Olive: Blufor {
            displayName = "Olive";
            textures[] = {
                "a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_body_crv_olive_co.paa",
                "a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa",
                "a3\data_f_exp\vehicles\turret_olive_co.paa",
                "a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_crv_olive_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa"
            };
        };
    };

    textureList[] = {"Blufor", 1};

    MACRO_EVENTHANDLERS;
};
