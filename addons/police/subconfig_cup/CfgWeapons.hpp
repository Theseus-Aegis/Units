class CfgWeapons {
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
};
