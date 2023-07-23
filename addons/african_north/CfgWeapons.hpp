class CfgWeapons {
    class arifle_Velko_lxWS;
    class arifle_VelkoR5_lxWS;
    class arifle_VelkoR5_GL_lxWS;
    class arifle_SLR_D_lxWS;
    class LMG_S77_Desert_lxWS;

    class TACU_African_North_W_VelkoR4: arifle_Velko_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_r1_high_lxws);
        };
    };
    class TACU_African_North_W_VelkoR5: arifle_VelkoR5_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_r1_high_lxws);
        };
    };

    class TACU_African_North_W_VelkoR5_GL: arifle_VelkoR5_GL_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_r1_high_lxws);
        };
    };

    class TACU_African_North_W_SLR_Marksman: arifle_SLR_D_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_khs_blk);
        };
    };

    class TACU_African_North_W_SA77_MG: LMG_S77_Desert_lxWS {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_hamr);
        };
    };
};
