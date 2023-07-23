class CfgWeapons {
    class CUP_arifle_CZ805_A2;
    class TACU_Revolutionaries_W_CZ805A2: CUP_arifle_CZ805_A2 {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountCZ805";
                item = "acc_flashlight";
            };
        };
    };

    class LMG_03_F;
    class TACU_Revolutionaries_W_FNMinimiSPW: LMG_03_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class SMG_05_F;
    class TACU_Revolutionaries_W_MP5K: SMG_05_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class CUP_arifle_CZ805_GL;
    class TACU_Revolutionaries_W_CZ805_GL: CUP_arifle_CZ805_GL {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountCZ805";
                item = "acc_flashlight";
            };
        };
    };

    class CUP_srifle_M24_wdl;
    class TACU_Revolutionaries_W_M24: CUP_srifle_M24_wdl {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnyTopMountM24";
                item = "optic_lrps";
            };
        };
    };
};
