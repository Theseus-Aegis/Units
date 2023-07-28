class CfgWeapons {
    class arifle_CTAR_blk_F;
    class arifle_CTAR_GL_blk_F;
    class arifle_CTARS_blk_F;
    class srifle_DMR_07_blk_F;
    class LMG_Zafir_F;

    class TACU_Proxy_China_W_QBZ_ACO: arifle_CTAR_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Proxy_China_W_QBZ_MRCO: arifle_CTAR_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Proxy_China_W_QBZ_GL_ACO: arifle_CTAR_GL_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Proxy_China_W_QBZ_LSW_MRCO: arifle_CTARS_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Proxy_China_W_QBU_DMS: srifle_DMR_07_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Proxy_China_W_Negev_MRCO: LMG_Zafir_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };
};
