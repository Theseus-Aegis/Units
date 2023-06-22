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
                "A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
                "A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa",
                "a3\data_f\vehicles\turret_co.paa",
                "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {"Blufor", 1};

    MACRO_EVENTHANDLERS;
};
