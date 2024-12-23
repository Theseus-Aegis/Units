class CfgWeapons {
    class CUP_arifle_AK103;
    class CUP_arifle_AK103_GL;
    class CUP_arifle_AK105;
    class CUP_arifle_RPK74;

    class TACU_Territorial_Defence_AK103_OKP7: CUP_arifle_AK103 {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_OKP_7";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_Territorial_Defence_AK103GL_OKP7: CUP_arifle_AK103_GL {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_OKP_7";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_Territorial_Defence_AK105_Kobra: CUP_arifle_AK105 {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_Kobra";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_Territorial_Defence_RPK_1P63: CUP_arifle_RPK74 {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_1p63";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "saber_light_lxWS";
            };
        };
    };
};
