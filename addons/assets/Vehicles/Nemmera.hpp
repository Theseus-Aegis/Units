// Nemmera
class TACU_Nemmera_Base: APC_Tracked_01_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Tracked_01_CRV_F.jpg";

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
