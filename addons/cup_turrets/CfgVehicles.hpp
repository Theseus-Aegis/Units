class CfgVehicles {
    // Base classes
    class CUP_AGS_base;
    class CUP_D30_AT_base;
    class CUP_D30_base;
    class CUP_DSHKM_base;
    class CUP_DSHKM_MiniTripod_base;
    class CUP_Igla_AA_pod_Base;
    class CUP_KORD_High_Base;
    class CUP_KORD_MiniTripod_Base;
    class CUP_Metis_Base;
    class CUP_SearchLight_static_base;
    class CUP_ZU23_base;

    // Turrets
    // AGS-30
    class TACU_CUP_Turrets_AGS_O: CUP_AGS_base {
        MACRO_EMPTYTURRETS
    };

    // D-30 & D-30 AT
    class TACU_CUP_Turrets_D30_O: CUP_D30_base {
        MACRO_EMPTYTURRETS
    };
    class TACU_CUP_Turrets_D30AT_O: CUP_D30_AT_base {
        MACRO_EMPTYTURRETS
    };

    // DSHKM & DSHKM MiniTripod
    class TACU_CUP_Turrets_DSHKM_O: CUP_DSHKM_base {
        MACRO_EMPTYTURRETS
    };
    class TACU_CUP_Turrets_DSHKM_Mini_O: CUP_DSHKM_MiniTripod_base {
        MACRO_EMPTYTURRETS
    };

    // Igla Pod
    class TACU_CUP_Turrets_IGLA_O: CUP_Igla_AA_pod_Base {
        MACRO_EMPTYTURRETS
    };

    // KORD & KORD MiniTripod
    class TACU_CUP_Turrets_KORD_O: CUP_KORD_High_Base {
        MACRO_EMPTYTURRETS
    };
    class TACU_CUP_Turrets_KORD_Mini_O: CUP_KORD_MiniTripod_Base {
        MACRO_EMPTYTURRETS
    };

    // Metis AT-13
    class TACU_CUP_Turrets_Metis_O: CUP_Metis_Base {
        MACRO_EMPTYTURRETS
    };

    // Search Light
    class TACU_CUP_Turrets_SearchLight_O: CUP_SearchLight_static_base {
        MACRO_EMPTYTURRETS
    };

    // ZU-23-2
    class TACU_CUP_Turrets_ZU23_O: CUP_ZU23_base {
        MACRO_EMPTYTURRETS
    };
};
