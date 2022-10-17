class CfgWeapons {
    // Grunt Uniforms
    class Uniform_Base;
    class U_C_ArtTShirt_01_v1_F: Uniform_Base {
        class ItemInfo;
    };

    class TACU_Uniform_O_W_Cartel_Grunt_01: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 01";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Grunt_01";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Grunt_02: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 02";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Grunt_02";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Grunt_03: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 03";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Grunt_03";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Grunt_04: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 04";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Grunt_04";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Grunt_05: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 05";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Grunt_05";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Grunt_06: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 06";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Grunt_06";
            containerClass = "Supply100";
        };
    };

    // Thug Uniforms
    class U_I_C_Soldier_Bandit_2_F: Uniform_Base {
        class ItemInfo;
    };
    class TACU_Uniform_O_W_Cartel_Thug_01: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 01";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Thug_01";
        };
    };
    class TACU_Uniform_O_W_Cartel_Thug_02: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 02";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Thug_02";
        };
    };
    class TACU_Uniform_O_W_Cartel_Thug_03: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 03";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Thug_03";
        };
    };
    class TACU_Uniform_O_W_Cartel_Thug_04: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 04";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Thug_04";
        };
    };
    class TACU_Uniform_O_W_Cartel_Thug_05: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 05";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Thug_05";
        };
    };
    class TACU_Uniform_O_W_Cartel_Thug_06: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 06";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Thug_06";
        };
    };

    // Weapons
    class CUP_hgun_M9A1;
    class TACU_Cartel_W_M9_Laser: CUP_hgun_M9A1 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_mlpls_laser);
        };
    };

    class CUP_arifle_G36A_RIS;
    class TACU_Cartel_W_G36A_RIS: CUP_arifle_G36A_RIS {
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
    class TACU_Cartel_W_G36A_AG36: CUP_arifle_G36A_AG36_RIS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_arifle_G36C;
    class TACU_Cartel_W_G36C: CUP_arifle_G36C {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_arifle_G36K_KSK_VFG;
    class TACU_Cartel_W_G36K_KSK: CUP_arifle_G36K_KSK_VFG {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_l);
        };
    };

    class CUP_arifle_G3A3_modern_ris_black;
    class TACU_Cartel_W_G3A3: CUP_arifle_G3A3_modern_ris_black {
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
    class TACU_Cartel_W_MG36: CUP_arifle_MG36 {
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
    class TACU_Cartel_W_Saiga12k: CUP_sgun_Saiga12K_top_rail {
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
    class TACU_Cartel_W_hgun_MP7: CUP_hgun_MP7 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };
};
