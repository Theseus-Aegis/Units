class CfgWeapons {
    class CUP_arifle_AKS74;
    class CUP_arifle_AKM;
    class CUP_arifle_RPK74_45;
    class CUP_arifle_AKS74_GL;
    class CUP_srifle_VSSVintorez;

    class TACU_Territorial_Militia_AKS_OKP7: CUP_arifle_AKS74 {
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

    class TACU_Territorial_Militia_AKMN_Kobra: CUP_arifle_AKM {
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

    class TACU_Territorial_Militia_RPK74_Kobra: CUP_arifle_RPK74_45 {
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

    class TACU_Territorial_Militia_AKS74_GL: CUP_arifle_AKS74_GL {
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
};
