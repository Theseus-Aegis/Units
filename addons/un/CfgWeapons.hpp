class CfgWeapons {
    class hgun_Pistol_heavy_01_F;
    class TACU_UN_W_FNX45: hgun_Pistol_heavy_01_F { // All
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight_pistol);
        };
    };

    class SMG_03C_TR_black;
    class TACU_UN_W_P90: SMG_03C_TR_black { // Pilot / Driver
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_ACO_grn_smg);
        };
    };

    class CUP_arifle_Mk16_STD_FG_black; // TL
    class TACU_UN_W_SCARL_ACOG_Black: CUP_arifle_Mk16_STD_FG_black {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "CUP_optic_ACOG2";
            };
        };
    };

    class CUP_arifle_Mk16_STD_FG_woodland;
    class TACU_UN_W_SCARL_ACOG_Woodland: CUP_arifle_Mk16_STD_FG_woodland {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "CUP_optic_ACOG2";
            };
        };
    };

    class CUP_arifle_Mk16_STD_FG;
    class TACU_UN_W_SCARL_ACOG_Tan: CUP_arifle_Mk16_STD_FG {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "CUP_optic_ACOG2";
            };
        };
    };

    class TACU_UN_W_SCARL_Flashlight_Black: CUP_arifle_Mk16_STD_FG_black { // Rifleman
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_UN_W_SCARL_Flashlight_Woodland: CUP_arifle_Mk16_STD_FG_woodland {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_UN_W_SCARL_Flashlight_Tan: CUP_arifle_Mk16_STD_FG {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class CUP_arifle_Mk16_STD_EGLM_black;
    class TACU_UN_W_SCARL_GL_Flashlight_Black: CUP_arifle_Mk16_STD_EGLM_black { // Grenadier / SQL
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_UN_W_SCARL_GL_Flashlight_ACOG_Black: CUP_arifle_Mk16_STD_EGLM_black {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "CUP_optic_ACOG2";
            };
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class CUP_arifle_Mk16_STD_EGLM_woodland;
    class TACU_UN_W_SCARL_GL_Flashlight_Woodland: CUP_arifle_Mk16_STD_EGLM_woodland {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_UN_W_SCARL_GL_Flashlight_ACOG_Woodland: CUP_arifle_Mk16_STD_EGLM_woodland {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "CUP_optic_ACOG2";
            };
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class CUP_arifle_Mk16_STD_EGLM;
    class TACU_UN_W_SCARL_GL_Flashlight_Tan: CUP_arifle_Mk16_STD_EGLM {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class TACU_UN_W_SCARL_GL_Flashlight_ACOG_Tan: CUP_arifle_Mk16_STD_EGLM {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "CUP_optic_ACOG2";
            };
            class LinkedItemsSide {
                slot = "CUP_PicatinnySideMountSCAR";
                item = "saber_light_lxWS";
            };
        };
    };

    class CUP_arifle_Mk20_black;
    class TACU_UN_W_SCARH_MR_Black: CUP_arifle_Mk20_black {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "optic_AMS";
            };
            class LinkedItemsUnder {
                slot = "CUP_PicatinnyUnderMountSCAR";
                item = "CUP_bipod_Harris_1A2_L_BLK";
            };
        };
    };

    class CUP_arifle_Mk20_woodland;
    class TACU_UN_W_SCARH_MR_Woodland: CUP_arifle_Mk20_woodland {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "optic_AMS";
            };
            class LinkedItemsUnder {
                slot = "CUP_PicatinnyUnderMountSCAR";
                item = "CUP_bipod_Harris_1A2_L_BLK";
            };
        };
    };

    class CUP_arifle_Mk20;
    class TACU_UN_W_SCARH_MR_Tan: CUP_arifle_Mk20 {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountSCAR";
                item = "optic_AMS";
            };
            class LinkedItemsUnder {
                slot = "CUP_PicatinnyUnderMountSCAR";
                item = "CUP_bipod_Harris_1A2_L_BLK";
            };
        };
    };
};
