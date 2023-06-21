class CfgWeapons {
    class CUP_arifle_HK416_CQB_Black;
    class CUP_arifle_HK417_20;
    class CUP_arifle_SR3M_Vikhr_VFG;
    class CUP_smg_vityaz_vfg;
    class CUP_srifle_SVD;
    class hlc_rifle_SG550Sniper_RIS;
    class hlc_rifle_SG551LB_TAC;

    class TACU_Police_W_Dragunov: CUP_srifle_SVD {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_pso_1_1_open);
        };
    };

    class TACU_Police_W_HK416_CQB: CUP_arifle_HK416_CQB_Black {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_anpeq_15_top_flashlight_black_l);
        };
    };

    class TACU_Police_W_HK417_DMR: CUP_arifle_HK417_20 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_leupoldmk4_cq_t);
            EQUIP_POINTER(cup_acc_anpeq_15_black);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Police_W_SG5501_DMR_Rail: hlc_rifle_SG550Sniper_RIS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(hlc_optic_zf95base);
        };
    };

    class TACU_Police_W_SG551LB_TAC: hlc_rifle_SG551LB_TAC {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(cup_acc_anpeq_15_top_flashlight_black_l);
        };
    };

    class TACU_Police_W_Vikhr_Grip: CUP_arifle_SR3M_Vikhr_VFG {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_kobra);
            EQUIP_POINTER(cup_acc_anpeq_15_flashlight_black_l);
            EQUIP_MUZZLE(cup_muzzle_snds_sr3m);
        };
    };

    class TACU_Police_W_Vityaz_Grip: CUP_smg_vityaz_vfg {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_kobra);
            EQUIP_POINTER(cup_acc_anpeq_15_flashlight_black_l);
            EQUIP_MUZZLE(cup_muzzle_bizon);
        };
    };
};
