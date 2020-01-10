class CfgVehicles {
    // Backpacks
    class B_FieldPack_blk;
    class TACU_Revolutionaries_B_MMG_UK59_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_50Rnd_UK59_762x54R_Tracer,4);
        };
    };
    class TACU_Revolutionaries_B_LMG_Minimi_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(200Rnd_556x45_Box_F,3);
        };
    };
    class TACU_Revolutionaries_B_Rocketeer_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(RPG32_F,3);
        };
    };
    class TACU_Revolutionaries_B_Saboteur_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(APERSMineDispenser_MAG,1);
            MACRO_ADDMAGAZINE(APERSMine_Range_MAG,2);
            MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_MAG,1);
            MACRO_ADDMAGAZINE(DemoCharge_Remote_MAG,1);
        };
    };

    class TACU_Revolutionaries_B_Paramedic_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,10);
            MACRO_ADDITEM(ACE_bloodIV_500,1);
            MACRO_ADDITEM(ACE_quikclot,5);
            MACRO_ADDITEM(ACE_elasticBandage,5);
            MACRO_ADDITEM(ACE_epinephrine,4);
            MACRO_ADDITEM(ACE_morphine,4);
            MACRO_ADDITEM(ACE_tourniquet,4);
            MACRO_ADDITEM(ACE_splint,4);
        };
    };

        class B_FieldPack_green_F;    
        class TACU_Revolutionaries_B_Paramedic_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,10);
            MACRO_ADDITEM(ACE_bloodIV_500,1);
            MACRO_ADDITEM(ACE_quikclot,5);
            MACRO_ADDITEM(ACE_elasticBandage,5);
            MACRO_ADDITEM(ACE_epinephrine,4);
            MACRO_ADDITEM(ACE_morphine,4);
            MACRO_ADDITEM(ACE_tourniquet,4);
            MACRO_ADDITEM(ACE_splint,4);
        };
    };

    class TACU_Revolutionaries_B_MMG_UK59_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_50Rnd_UK59_762x54R_Tracer,4);
        };
    };
    class TACU_Revolutionaries_B_LMG_Minimi_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(200Rnd_556x45_Box_F,3);
        };
    };
    class TACU_Revolutionaries_B_Rocketeer_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(RPG32_F,3);
        };
    };
    class TACU_Revolutionaries_B_Saboteur_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(APERSMineDispenser_MAG,1);
            MACRO_ADDMAGAZINE(APERSMine_Range_MAG,2);
            MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_MAG,1);
            MACRO_ADDMAGAZINE(DemoCharge_Remote_MAG,1);
        };
    };
    #include "CfgVehicles_I_Russian.hpp"
    #include "CfgVehicles_I_Tanoan.hpp"
    #include "CfgVehicles_O_Russian.hpp"
    #include "CfgVehicles_O_Tanoan.hpp"
};
