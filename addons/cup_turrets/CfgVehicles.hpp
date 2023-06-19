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
    class CUP_Kornet_Base;
    class CUP_L111A1_base;
    class CUP_L111A1_MiniTripod_base;
    class CUP_L134A1_TriPod_base;
    class CUP_M119_base;
    class CUP_MK19_TriPod_base;
    class CUP_M2StaticMG_base;
    class CUP_Metis_Base;
    class CUP_RBS70_Base;
    class CUP_SearchLight_static_base;
    class CUP_Stinger_AA_pod_Base;
    class CUP_TOW_TriPod_base;
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

    // FIM92 (DMS)
    class TACU_CUP_Turrets_FIM92_O: CUP_Stinger_AA_pod_Base {
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

    // Kornet AT-4
    class TACU_CUP_Turrets_KORNET_AT4_O: CUP_Kornet_Base {
        MACRO_EMPTYTURRETS
    };

    // L11A1 & L11A1 MiniTripod
    class TACU_CUP_Turrets_L11A1_O: CUP_L111A1_base {
        MACRO_EMPTYTURRETS
    };
    class TACU_CUP_Turrets_L11A1_MiniTripod_O: CUP_L111A1_MiniTripod_base {
        MACRO_EMPTYTURRETS
    };

    // L134A1
    class TACU_CUP_Turrets_L134A1_O: CUP_L134A1_TriPod_base {
        MACRO_EMPTYTURRETS
    };

    // M119
    class TACU_CUP_Turrets_M119_O: CUP_M119_base {
        MACRO_EMPTYTURRETS
    };

    // M2
    class TACU_CUP_Turrets_M2_O: CUP_M2StaticMG_base {
        MACRO_EMPTYTURRETS
    };

    // M220 TOW
    class TACU_CUP_Turrets_M220_TOW_O: CUP_TOW_TriPod_base {
        MACRO_EMPTYTURRETS
    };

    // Metis AT-13
    class TACU_CUP_Turrets_Metis_O: CUP_Metis_Base {
        MACRO_EMPTYTURRETS
    };

    // MK19 MiniTripod
    class TACU_CUP_Turrets_MK19_O: CUP_MK19_TriPod_base {
        MACRO_EMPTYTURRETS
    };

    // RBS 70
    class TACU_CUP_Turrets_RBS70_O: CUP_RBS70_Base {
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
