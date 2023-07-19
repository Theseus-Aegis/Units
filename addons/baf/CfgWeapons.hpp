class CfgWeapons {
    class arifle_SPAR_01_GL_blk_F;
    class arifle_SPAR_02_blk_F;
    class arifle_SPAR_03_blk_F;
    class LMG_Mk200_F;
    class LMG_Mk200_black_F;
    class sgun_aa40_lxWS;
    class sgun_aa40_tan_lxWS;
    class srifle_DMR_02_sniper_F;
    class srifle_DMR_02_F;
    class hgun_P07_blk_F;
    class hgun_P07_khk_F;
    class hgun_P07_F;
    class SMG_05_F;
    class TACU_Assets_W_HK416A5_Arid;
    class TACU_Assets_W_HK416A5_GL_Arid;
    class TACU_Assets_W_HK417A2_Arid;

    // Arid Weapons
    class TACU_BAF_W_Arid_HK416A5: TACU_Assets_W_HK416A5_Arid {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_MUZZLE(suppressor_l_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Arid_HK416A5_GL: TACU_Assets_W_HK416A5_GL_Arid {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_MUZZLE(suppressor_l_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Arid_HK417A2: TACU_Assets_W_HK417A2_Arid {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_MUZZLE(suppressor_h_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Arid_Stoner99: LMG_Mk200_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_MUZZLE(suppressor_m_sand_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Arid_AA40: sgun_aa40_tan_lxWS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_MUZZLE(muzzle_snds_12gauge_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Arid_Noreen: srifle_DMR_02_sniper_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_ams);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(muzzle_snds_338_black);
        };
    };

    class TACU_BAF_W_Arid_P99: hgun_P07_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_l);
        };
    };

    // Black Weapons (Tropic)
    class TACU_BAF_W_Tropic_HK416A5: arifle_SPAR_02_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_khk_f);
            EQUIP_MUZZLE(suppressor_l_khaki_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Tropic_HK416A5_GL: arifle_SPAR_01_GL_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_khk_f);
            EQUIP_MUZZLE(suppressor_l_khaki_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Tropic_HK417A2: arifle_SPAR_03_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos_khk_f);
            EQUIP_MUZZLE(suppressor_h_khaki_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Tropic_Stoner99: LMG_Mk200_black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr_khk_f);
            EQUIP_MUZZLE(suppressor_m_khaki_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Tropic_AA40: sgun_aa40_lxWS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_khk_f);
            EQUIP_MUZZLE(muzzle_snds_12gauge_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Tropic_Noreen: srifle_DMR_02_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_ams_khk);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(muzzle_snds_338_green);
        };
    };

    class TACU_BAF_W_Tropic_P99: hgun_P07_khk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_l);
        };
    };

    // Black Weapons (Urban)
    class TACU_BAF_W_Urban_HK416A5: arifle_SPAR_02_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_MUZZLE(suppressor_l_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Urban_HK416A5_GL: arifle_SPAR_01_GL_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_MUZZLE(suppressor_l_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Urban_HK417A2: arifle_SPAR_03_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_MUZZLE(suppressor_h_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Urban_Stoner99: LMG_Mk200_black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_MUZZLE(suppressor_m_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Urban_AA40: sgun_aa40_lxWS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_MUZZLE(muzzle_snds_12gauge_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Urban_P99: hgun_P07_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_l);
        };
    };

    class TACU_BAF_W_MP5SD: SMG_05_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn_smg);
            EQUIP_MUZZLE(muzzle_snds_l);
        };
    };
};
