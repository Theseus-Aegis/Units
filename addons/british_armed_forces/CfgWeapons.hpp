class CfgWeapons {
    class arifle_SPAR_01_snd_F;
    class hgun_Pistol_heavy_01_F;
    class TACU_BAF_W_Arid_HK416: arifle_SPAR_01_snd_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_MUZZLE(suppressor_l_lxws);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_BAF_W_Sand_FNX45: hgun_Pistol_heavy_01_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrd);
            EQUIP_MUZZLE(muzzle_snds_acp);
        };
    };


};
