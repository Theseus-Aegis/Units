class CfgWeapons {
    // Weapons (Insurgents)
    class CUP_arifle_AK47_Early;
    class TACU_PLR_W_AK47_Early_FL: CUP_arifle_AK47_Early {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_AK74_Early;
    class TACU_PLR_W_AK74_Early_FL: CUP_arifle_AK74_Early {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_AKM_Early;
    class TACU_PLR_W_AKM_Early_FL: CUP_arifle_AKM_Early {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_AKS;
    class TACU_PLR_W_AKS_FL: CUP_arifle_AKS {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_FNFAL;
    class TACU_PLR_W_FNFAL_FL: CUP_arifle_FNFAL {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(tacgt_surefire_flashlight_black);
        };
    };

    class CUP_arifle_RPK74;
    class TACU_PLR_W_RPK74_FL: CUP_arifle_RPK74 {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_lmg_PKM_B50_vfg;
    class TACU_PLR_W_PKM_FL: CUP_lmg_PKM_B50_vfg {
        DLC = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(tacgt_surefire_flashlight_black);
        };
    };

    class CUP_srifle_SVD;
    class TACU_PLR_W_SVD: CUP_srifle_SVD {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_pso_1_1_open);
		};
    };

    // Weapons (Paramilitary)
    class CUP_arifle_AK105_railed;
    class TACU_PLR_W_AK105_ZDDOT_FL: CUP_arifle_AK105_railed {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemOptic {
                slot = "CUP_PicatinnyTopMountAK";
                item = "cup_optic_zddot";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_AK74M;
    class TACU_PLR_W_AK74M_1P63_FL: CUP_arifle_AK74M {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemOptic {
                slot = "CUP_DovetailMount_AK";
                item = "cup_optic_1p63";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_AK74M_GL;
    class TACU_PLR_W_AK74M_GL_1P63_FL: CUP_arifle_AK74M_GL {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemOptic {
                slot = "CUP_DovetailMount_AK";
                item = "cup_optic_1p63";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_AKS74U_railed;
    class TACU_PLR_W_AKS74U_railed_FL: CUP_arifle_AKS74U_railed {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_arifle_RPK74M;
    class TACU_PLR_W_RPK74M_1P63_FL: CUP_arifle_RPK74M {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            class LinkedItemOptic {
                slot = "CUP_DovetailMount_AK";
                item = "cup_optic_1p63";
            };
            class LinkedItemSide {
                slot = "CUP_PicatinnySideMountAK";
                item = "tacgt_surefire_flashlight_black";
            };
		};
    };

    class CUP_lmg_Pecheneg_B50_vfg;
    class TACU_PLR_W_PKP_1P63_FL: CUP_lmg_Pecheneg_B50_vfg {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_1p63);
            EQUIP_POINTER(tacgt_surefire_flashlight_black);
		};
    };
};
