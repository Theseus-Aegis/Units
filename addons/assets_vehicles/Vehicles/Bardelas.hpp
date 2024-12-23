// Bardelas AA
class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F {
    class EventHandlers;
};

class TACU_Bardelas_Base: B_APC_Tracked_01_AA_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Blufor {
            displayName = "NATO";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_body_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_aa_tower_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {"Blufor", 1};

    MACRO_EVENTHANDLERS;
};
