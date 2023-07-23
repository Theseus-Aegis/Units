class CfgWeapons {
    class arifle_XMS_Base_khk_lxWS;
    class arifle_XMS_GL_khk_lxWS;
    class arifle_XMS_Shot_khk_lxWS;
    class arifle_XMS_M_khk_lxWS;
    class arifle_SLR_V_lxWS;
    class LMG_03_F;
    class srifle_LRR_tna_F;
    class hgun_Pistol_heavy_01_green_F;

    class TACU_African_South_W_Green_XMS: arifle_XMS_Base_khk_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_African_South_W_Green_XMS_GL: arifle_XMS_GL_khk_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_African_South_W_Green_XMS_SG: arifle_XMS_Shot_khk_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_African_South_W_Green_SW: arifle_XMS_M_khk_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_African_South_W_SLR: arifle_SLR_V_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
        };
    };

    class TACU_African_South_W_SPW: LMG_03_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_African_South_W_Green_M200: srifle_LRR_tna_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_lrps);
        };
    };

    class TACU_African_South_W_Green_FNX: hgun_Pistol_heavy_01_green_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrd_black);
            EQUIP_POINTER(acc_flashlight_pistol);
        };
    };
};
