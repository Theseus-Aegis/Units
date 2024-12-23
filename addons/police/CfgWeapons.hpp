class CfgWeapons {
    class arifle_SPAR_02_blk_F;
    class arifle_SPAR_03_blk_F;
    class arifle_TRG21_F;
    class sgun_aa40_lxWS;
    class srifle_EBR_blk_lxWS;
    class arifle_AK12_F;
    class SMG_02_F;
    class hgun_PDW2000_F;
    class srifle_DMR_07_blk_F;
    class CUP_srifle_SVD;
    class CUP_arifle_SR3M_Vikhr_VFG;
    class CUP_smg_vityaz_vfg;
    class CUP_arifle_AS_VAL_VFG;

    class TACU_Police_W_Dragunov: CUP_srifle_SVD {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_pso_1_1_open);
        };
    };

    class TACU_Police_W_ASVAL: CUP_arifle_AS_VAL_VFG {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_DovetailMountVSS";
                item = "cup_optic_ekp_8_02";
            };
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

    class TACU_Police_W_HK416_CQB: arifle_SPAR_02_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_HK417_DMR: arifle_SPAR_03_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Police_W_Tar21: arifle_TRG21_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_AA40: sgun_aa40_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_smg);
        };
    };

    class TACU_Police_W_EBR: srifle_EBR_blk_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_AK15: arifle_AK12_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_Scorpion: SMG_02_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn_smg);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_CPW: hgun_PDW2000_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn_smg);
        };
    };

    class TACU_Police_W_QBU: srifle_DMR_07_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
        };
    };
};
