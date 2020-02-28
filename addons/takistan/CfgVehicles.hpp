class CfgVehicles {
    // Base Classes
    class TACU_Main_U_OPFOR_Soldier_Base;
    class TACU_Main_U_INDEP_Soldier_Base;
    
    // Backpacks
    class CUP_B_RPGPack_Khaki;
    class TACU_Tehrik_B_RPG_Khaki: CUP_B_RPGPack_Khaki {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(RPG7_F,4);
        };
    };

    #include "CfgVehicles_I.hpp"
    #include "CfgVehicles_O.hpp"
};
