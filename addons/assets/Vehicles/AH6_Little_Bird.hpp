// AH-6 Little Bird
class TACU_AH6_LittleBird_Base: Heli_Light_01_armed_base_F {
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Light_01_dynamicLoadout_F.jpg";

    class TextureSources {
        class Vanguard {
            author = "GilleeDoo, Mike";
            displayName = "Vanguard PMC";
            textures[] = {QPATHTOF(data\ah6\Vanguard_V_AH9_Pawnee_co.paa)};
            factions[] = {"TACU_Vanguard", "TACU_Vanguard_O"};
        };
    };
    textureList[] = {"Vanguard", 1};

    MACRO_EVENTHANDLERS;
};
