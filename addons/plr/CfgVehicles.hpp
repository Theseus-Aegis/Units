class CfgVehicles {
    // Backpacks
    class CUP_B_RUS_Backpack;
    class TACU_PLR_B_AT: CUP_B_RUS_Backpack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };

    class CUP_B_AlicePack_OD;
    class TACU_PLR_B_MMG: CUP_B_AlicePack_OD {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M,3);
        };
    };

    #include "CfgVehicles_Insurgents.hpp"
    #include "CfgVehicles_Paramilitary.hpp"
    #include "CfgVehicles_Vehicles.hpp"
};
