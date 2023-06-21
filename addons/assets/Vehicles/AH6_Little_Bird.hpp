// AH-6 Little Bird
class TACU_AH6_LittleBird_Base: Heli_Light_01_armed_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Light_01_dynamicLoadout_F.jpg";

    class TextureSources {
        class Vanguard {
            author = "GilleeDoo, Mike";
            displayName = "Vanguard PMC";
            textures[] = {QPATHTOF(data\ah6\Vanguard_V_AH9_Pawnee_co.paa), "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
        class Blufor {
            author = "Bohemia Interactive";
            displayName = "NATO";
            textures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa", "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
            factions[] = {};
        };
    };
    textureList[] = {
        "Vanguard", 1,
        "Blufor", 1
    };

    MACRO_EVENTHANDLERS;
};
