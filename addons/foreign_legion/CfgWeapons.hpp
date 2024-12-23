class CfgWeapons {
    class arifle_SPAR_01_blk_F;
    class arifle_SPAR_01_GL_blk_F;
    class arifle_SPAR_02_blk_F;
    class arifle_SPAR_03_blk_F;
    class LMG_03_F;
    class sgun_aa40_tan_lxWS;
    class SMG_05_F;
    class CUP_Famas_F1_Rail;

    class TACU_Foreign_Legion_W_FAMAS_Holo: CUP_Famas_F1_Rail {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
        };
    };

    class TACU_Foreign_Legion_W_FAMAS_Bravo: CUP_Famas_F1_Rail {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
        };
    };

    class TACU_Foreign_Legion_W_HK416A5_SB_Holo: arifle_SPAR_01_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Foreign_Legion_W_HK416A5_GL_Holo: arifle_SPAR_01_GL_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Foreign_Legion_W_HK416A5_LB_Holo: arifle_SPAR_02_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };
    class TACU_Foreign_Legion_W_HK416A5_LB_Bravo: arifle_SPAR_02_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Foreign_Legion_W_HK417A2: arifle_SPAR_03_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_ams);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Foreign_Legion_W_Minimi: LMG_03_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Foreign_Legion_W_AA40: sgun_aa40_tan_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
        };
    };

    class TACU_Foreign_Legion_W_MP5: SMG_05_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
        };
    };
};
