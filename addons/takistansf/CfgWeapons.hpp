class CfgWeapons {
    // NATO Weapons
    class CUP_arifle_SBR_black;
    class TACU_TakistanSF_W_M4SBR_Tan: CUP_arifle_SBR_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "cup_optic_compm2_low_coyote";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "cup_acc_anpeq_15_top_flashlight_black_l";
            };
        };
    };

    class CUP_arifle_M4A3_black;
    class TACU_TakistanSF_W_M4A1_Grip: CUP_arifle_M4A3_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "cup_optic_compm2_black";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "cup_acc_anpeq_15_top_flashlight_black_l";
            };
        };
    };

    class CUP_arifle_M4A1_BUIS_GL;
    class TACU_TakistanSF_W_M4A1_GL: CUP_arifle_M4A1_BUIS_GL {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "cup_optic_compm2_black";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "cup_acc_anpeq_15_flashlight_black_l";
            };
        };
    };

    class CUP_arifle_M16A4_Base;
    class TACU_TakistanSF_W_M16A4: CUP_arifle_M16A4_Base {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM16";
                item = "cup_optic_compm2_black";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM16";
                item = "cup_acc_anpeq_15_top_flashlight_black_l";
            };
        };
    };

    class CUP_srifle_M110;
    class TACU_TakistaniSF_W_M110: CUP_srifle_M110 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM110";
                item = "cup_optic_leupoldm3lr";
            };
            class LinkedItemBipod {
                slot = "CUP_PicatinnyUnderMountM110";
                item = "cup_bipod_vltor_modpod";
            };
        };
    };
};
