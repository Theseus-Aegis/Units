// MK6 Mortar
class TACU_Assets_MK6_Base: B_G_Mortar_01_F {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
};

// HMG .50
class TACU_Assets_HMG_50: B_G_HMG_02_high_F {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
};
class TACU_Assets_HMG_50_Low: I_HMG_02_F {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
};

// Mini-Spike Launcher
class TACU_Assets_Mini_Spike_Sand: B_static_AT_F {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
};
class TACU_Assets_Mini_Spike_Brown: O_static_AT_F {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
};
class TACU_Assets_Mini_Spike_Green: I_static_AT_F {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
};

// ZU-23-2 (Added textureSources since they exist)
class I_SFIA_ZU23_lxWS: zu23_base_lxWS {
    class EventHandlers;
};
class TACU_Assets_ZU23_Base: I_SFIA_ZU23_lxWS {
    MACRO_DEFAULT_VEHICLE;
    editorSubcategory = "TACU_Assets_EdSubCat_Turrets";
    class TextureSources {
        class SFIA {
            displayName = "SFIA";
            author = "Rotators Collective";
            textures[] = {
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa"
            };
            factions[] = {};
        };
        class Sand: SFIA {
            displayName = "Sand";
            textures[] = {
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa"
            };
        };
        class Green: SFIA {
            displayName = "Green";
            textures[] = {
                "lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
                "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa"
            };
        };
    };
    textureList[] = {
        "SFIA", 1,
        "Sand", 1,
        "Green", 1
    };

    animationList[] = {"shield_hide", 0};

    MACRO_EVENTHANDLERS;
};
