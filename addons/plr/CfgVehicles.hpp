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

    #include "CfgVehicles_Insurgents.hpp"
    #include "CfgVehicles_Paramilitary.hpp"
    #include "CfgVehicles_Vehicles.hpp"
};
