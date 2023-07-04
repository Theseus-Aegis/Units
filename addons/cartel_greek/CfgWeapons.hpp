class CfgWeapons {
    class CUP_hgun_M9A1;
    class TACU_Cartel_Greek_W_M9_Laser: CUP_hgun_M9A1 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_mlpls_laser);
        };
    };

    class CUP_arifle_G36A_RIS;
    class TACU_Cartel_Greek_W_G36A_RIS: CUP_arifle_G36A_RIS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
            EQUIP_BIPOD(cup_bipod_g36);
        };
    };

    class CUP_arifle_G36A_AG36_RIS;
    class TACU_Cartel_Greek_W_G36A_AG36: CUP_arifle_G36A_AG36_RIS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_arifle_G36C;
    class TACU_Cartel_Greek_W_G36C: CUP_arifle_G36C {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_arifle_G36K_KSK_VFG;
    class TACU_Cartel_Greek_W_G36K_KSK: CUP_arifle_G36K_KSK_VFG {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_arifle_G3A3_modern_ris_black;
    class TACU_Cartel_Greek_W_G3A3: CUP_arifle_G3A3_modern_ris_black {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_b);
            EQUIP_BIPOD(cup_bipod_g3sg1);
        };
    };

    class CUP_arifle_MG36;
    class TACU_Cartel_Greek_W_MG36: CUP_arifle_MG36 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            class LinkedItemsAcc {
                slot = "CUP_PicatinnySideMountG36";
                item = "acc_pointer_ir";
            };
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_sgun_Saiga12K_top_rail;
    class TACU_Cartel_Greek_W_Saiga12k: CUP_sgun_Saiga12K_top_rail {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMount_Saiga12k";
                item = "optic_aco";
            };
        };
    };

    class CUP_hgun_MP7;
    class TACU_Cartel_Greek_W_hgun_MP7: CUP_hgun_MP7 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };
};
