class CfgWeapons {
    // TNA Weapons
    class CUP_arifle_M4A3_desert;
    class TACU_Takistan_W_M4A3_Desert: CUP_arifle_M4A3_desert {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "CUP_optic_CompM2_low_coyote";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "CUP_acc_ANPEQ_2_Flashlight_Coyote_L";
            };
        };
    };

    class CUP_arifle_M4A1_BUIS_GL;
    class TACU_Takistan_W_M4A1_GL: CUP_arifle_M4A1_BUIS_GL {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "CUP_optic_CompM2_low_coyote";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "CUP_acc_ANPEQ_2_Flashlight_Coyote_L";
            };
        };
    };

    class CUP_arifle_M4A3_black;
    class TACU_Takistan_W_M4A3: CUP_arifle_M4A3_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "CUP_optic_CompM2_Black";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "CUP_acc_ANPEQ_2_Flashlight_Black_L";
            };
        };
    };

    class CUP_arifle_M4A1_black;
    class TACU_Takistan_W_M4A1: CUP_arifle_M4A1_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "CUP_optic_CompM2_Black";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountM4";
                item = "CUP_acc_ANPEQ_2_Flashlight_Black_L";
            };
        };
    };

    // TakistanSF Weapons
    class CUP_arifle_SBR_black;
    class TACU_Takistan_W_M4SBR_Tan: CUP_arifle_SBR_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountMk18";
                item = "cup_optic_compm2_low_coyote";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountMk18";
                item = "cup_acc_anpeq_15_top_flashlight_black_l";
            };
        };
    };

    class TACU_Takistan_W_M4A1_Grip: CUP_arifle_M4A3_black {
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

    class CUP_arifle_M16A4_Base;
    class TACU_Takistan_W_M16A4: CUP_arifle_M16A4_Base {
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
    class TACU_Takistan_W_M110: CUP_srifle_M110 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_leupoldm3lr);
            EQUIP_BIPOD(cup_bipod_vltor_modpod);
        };
    };
};
