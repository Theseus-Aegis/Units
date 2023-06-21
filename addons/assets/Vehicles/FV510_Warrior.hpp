// FV510 Warrior
class TACU_FV510_Warrior_Base: APC_Tracked_03_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_APC_tracked_03_cannon_F.jpg";

    class TextureSources {
        class Indep_02 {
            displayName = "AAF (Jungle Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
                "A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
                "A3\armor_f\data\cage_G1_co.paa"
            };
            factions[] = {};
        };
        class Indep_03 {
            displayName = "AAF (Desert Camo Net)";
            author = "Bohemia Interactive";
            textures[] = {
                "A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
                "A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
                "A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
                "A3\armor_f\data\cage_G3_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {
        "Indep_02", 1,
        "Indep_03", 1
    };

    MACRO_EVENTHANDLERS;
};
