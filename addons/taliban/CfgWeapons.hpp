class CfgWeapons {
    class arifle_Galat_lxWS;
    class arifle_Velko_lxWS;
    class arifle_SLR_lxWS;
    class arifle_VelkoR5_GL_lxWS;
    class arifle_SLR_GL_lxWS;
    class arifle_AK12U_arid_F;
    class LMG_S77_lxWS;

    class TACU_Taliban_Veterans_W_Galat: arifle_Galat_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_R4: arifle_Velko_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_SLR_Wood: arifle_SLR_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_SLR_Wood_Scout: arifle_SLR_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_SLR_GL_Wood: arifle_SLR_GL_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_R5_GL: arifle_VelkoR5_GL_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_AK15K: arifle_AK12U_arid_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Taliban_Veterans_W_SA77: LMG_S77_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr);
            EQUIP_POINTER(acc_flashlight);
        };
    };
};
