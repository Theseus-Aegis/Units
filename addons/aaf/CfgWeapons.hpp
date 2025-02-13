class CfgWeapons {
    class arifle_Mk20_F;
    class arifle_Mk20_GL_F;
    class LMG_S77_AAF_lxWS;
    class arifle_SPAR_03_khk_F;
    class hgun_P07_khk_F;

    class TACU_AAF_W_F2000: arifle_Mk20_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_ACO_grn);
            EQUIP_MUZZLE(suppressor_l_lxWS);
            EQUIP_POINTER(acc_pointer_IR);
        };
    };

    class TACU_AAF_W_F2000_GL: arifle_Mk20_GL_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_ACO_grn);
            EQUIP_MUZZLE(suppressor_l_lxWS);
            EQUIP_POINTER(acc_pointer_IR);
        };
    };

    class TACU_AAF_W_Vektor_77: LMG_S77_AAF_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_MRCO);
            EQUIP_MUZZLE(suppressor_h_lxWS);
        };
    };

    class TACU_AAF_W_HK417: arifle_SPAR_03_khk_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_DMS);
            EQUIP_MUZZLE(suppressor_h_lxWS);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_BIPOD(bipod_03_F_blk);
        };
    };

    class TACU_AAF_W_P99: hgun_P07_khk_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_MUZZLE(muzzle_snds_L);
        };
    };
};
