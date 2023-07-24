class CfgWeapons {
    class arifle_AK12_arid_F;
    class arifle_AK12_F;
    class arifle_AK12_lush_F;
    class arifle_ARX_blk_F;
    class arifle_CTAR_blk_F;
    class arifle_CTAR_ghex_F;
    class arifle_CTAR_hex_F;
    class arifle_Mk20_F;
    class arifle_Mk20_plain_F;
    class arifle_MX_Black_F;
    class arifle_MX_GL_Black_F;
    class arifle_MX_khk_F;
    class arifle_MX_SW_Black_F;
    class arifle_MXC_Black_F;
    class arifle_MXM_Black_F;
    class arifle_SPAR_01_GL_blk_F;
    class arifle_SPAR_01_GL_khk_F;
    class arifle_SPAR_01_GL_snd_F;
    class arifle_SPAR_02_blk_F;
    class hgun_Pistol_heavy_01_F;
    class hgun_Pistol_heavy_01_green_F;
    class hgun_Rook40_F;
    class LMG_Mk200_black_F;
    class LMG_Mk200_F;
    class srifle_DMR_03_F;
    class srifle_DMR_03_khaki_F;
    class srifle_DMR_03_tan_F;

    // Sand Weapons
    class TACU_Vanguard_W_Sand_F2000: arifle_Mk20_plain_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Sand_AK12: arifle_AK12_arid_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Sand_QBZ: arifle_CTAR_hex_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Sand_HK416A5GL: arifle_SPAR_01_GL_snd_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Sand_SIG556: srifle_DMR_03_tan_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Vanguard_W_Sand_MK200: LMG_Mk200_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Vanguard_W_Sand_FNX: hgun_Pistol_heavy_01_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrd);
        };
    };

    // Green
    class TACU_Vanguard_W_Green_F2000: arifle_Mk20_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Green_AK12: arifle_AK12_lush_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Green_QBZ: arifle_CTAR_ghex_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Green_HK416A5GL: arifle_SPAR_01_GL_khk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Green_SIG556: srifle_DMR_03_khaki_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Vanguard_W_Green_MX: arifle_MX_khk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Green_MK200: LMG_Mk200_black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Vanguard_W_Green_FNX: hgun_Pistol_heavy_01_green_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrd_black);
        };
    };

    // Winter
    class TACU_Vanguard_W_Winter_HK416A5: arifle_SPAR_02_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Winter_AK12: arifle_AK12_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Winter_QBZ: arifle_CTAR_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Winter_HK416A5GL: arifle_SPAR_01_GL_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Winter_SIG556: srifle_DMR_03_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Vanguard_W_Winter_MX: arifle_MX_Black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    // Specialists
    class TACU_Vanguard_W_Specialists_MXM: arifle_MXM_Black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Specialists_ARX: arifle_ARX_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Specialists_MX: arifle_MX_Black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Specialists_MXGL: arifle_MX_GL_Black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Specialists_MXSW: arifle_MX_SW_Black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Specialists_MXC: arifle_MXC_Black_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Vanguard_W_Specialists_Rook: hgun_Rook40_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_L);
        };
    };
};
