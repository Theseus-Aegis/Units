class CfgWeapons {
    class arifle_Galat_worn_lxWS;
    class arifle_SLR_D_lxWS;
    class arifle_SLR_GL_lxWS;
    class LMG_S77_Desert_lxWS;
    class arifle_AK12U_lush_F;
    class arifle_AK12_F;
    class srifle_DMR_01_F;

    class TACU_African_Militia_W_Galat: arifle_Galat_worn_lxWS {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class TACU_African_Militia_W_SLR: arifle_SLR_D_lxWS {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class TACU_African_Militia_W_SLR_GL: arifle_SLR_GL_lxWS {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class TACU_African_Militia_W_SA77: LMG_S77_Desert_lxWS {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class TACU_African_Militia_W_AK12U_Lush: arifle_AK12U_lush_F {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class TACU_African_Militia_W_AK12: arifle_AK12_F {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class TACU_African_Militia_W_VS121: srifle_DMR_01_F {
        scope = 1;
        scopeCurator = 1;
        class linkedItems {
            EQUIP_OPTIC(optic_dms_weathered_f);
            EQUIP_POINTER(acc_flashlight);
        };
    };
};
