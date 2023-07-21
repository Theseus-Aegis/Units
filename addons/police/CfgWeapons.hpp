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

    class TACU_Police_W_HK416_CQB: arifle_SPAR_02_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_HK417_DMR: arifle_SPAR_03_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Police_W_Tar21: arifle_TRG21_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_AA40: sgun_aa40_lxWS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_smg);
        };
    };

    class TACU_Police_W_EBR: srifle_EBR_blk_lxWS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_AK15: arifle_AK12_F {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_Scorpion: SMG_02_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn_smg);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Police_W_CPW: hgun_PDW2000_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn_smg);
        };
    };

    class TACU_Police_W_QBU: srifle_DMR_07_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
        };
    };
};
