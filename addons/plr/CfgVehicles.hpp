class CfgVehicles {
    // Backpacks
    class CUP_B_RPGPack_Khaki;
    class TACU_PLR_B_AT: CUP_B_RPGPack_Khaki {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };

    #include "CfgVehicles_Insurgents.hpp"
};
