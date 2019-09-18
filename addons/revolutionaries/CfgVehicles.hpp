class CfgVehicles {
    // Backpacks
    class B_FieldPack_khk;
    class TACU_Revolutionaries_B_MMG_UK59: B_FieldPack_khk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_50Rnd_UK59_762x54R_Tracer,4);
        };
    };
    class TACU_Revolutionaries_B_LMG_Minimi: B_FieldPack_khk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(200Rnd_556x45_Box_F,3);
        };
    };

    #include "CfgVehicles_I_Russian.hpp"
    #include "CfgVehicles_I_Tanoan.hpp"
    #include "CfgVehicles_O_Russian.hpp"
    #include "CfgVehicles_O_Tanoan.hpp"
};
