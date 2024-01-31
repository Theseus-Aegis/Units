class CfgWeapons {
    class CUP_arifle_AK74M;
    class TACU_Chernobog_W_AK74M: CUP_arifle_AK74M {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_1p63";
            };
        };
    };

    class CUP_srifle_SVD;
    class TACU_Chernobog_W_SVD: CUP_srifle_SVD {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_SVD";
                item = "CUP_optic_PSO_1";
            };
        };
    };

    class CUP_arifle_AK74M_GL;
    class TACU_Chernobog_W_AK74M_GL: CUP_arifle_AK74M_GL {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_1p63";
            };
        };
    };
};
