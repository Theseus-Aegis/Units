class CfgVehicles {
    // Base Classes
    class TACU_Main_U_BLUFOR_Soldier_Base;
    class TACU_Main_U_OPFOR_Soldier_Base;
    class TACU_Main_U_INDEP_Soldier_Base;
    
    // Backpacks
    class CUP_B_RPGPack_Khaki;
    class TACU_Takistan_B_Tehrik_AT: CUP_B_RPGPack_Khaki {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(RPG7_F,4);
        };
    };
    class CUP_B_AlicePack_Khaki;
    class TACU_Takistan_B_TNA_LMG: CUP_B_AlicePack_Khaki {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,4);
        };
    };
    class TACU_Takistan_B_Tehrik_LMG: CUP_B_AlicePack_Khaki {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,3);
        };
    };

    #include "CfgVehicles_TNA.hpp"
    #include "CfgVehicles_TNP.hpp"
    #include "CfgVehicles_TSF.hpp"
    #include "CfgVehicles_Tehrik.hpp"
};
