// Bardelas AA
class TACU_Bardelas_Base: APC_Tracked_01_base_F {
    class TextureSources {
        class Blufor {
            displayName = "NATO";
            author = "Bohemia Interactive";
            textures[] = {
                "a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_co.paa",
                "a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa",
                "a3\data_f\vehicles\turret_co.paa",
                "a3\armor_F\data\camonet_nato_desert_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {"Blufor", 1};

    MACRO_EVENTHANDLERS
};
