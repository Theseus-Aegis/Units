class CfgVehicles {

    // Base Classes
    class B_AssaultPack_blk;
    class B_AssaultPack_cbr;
    class B_AssaultPack_rgr;
    class B_FieldPack_blk;
    class B_FieldPack_cbr;
    class B_FieldPack_oli;
    class B_LSV_01_unarmed_F;
    class B_LSV_01_armed_F;
    class B_LSV_01_AT_F;
    class B_T_VTOL_01_infantry_F;
    class B_T_VTOL_01_vehicle_F;
    class CUP_B_C130J_USMC;
    class CUP_B_C130J_Cargo_USMC;
    class CUP_B_MTVR_USA;
    class CUP_B_MTVR_Ammo_USA;
    class CUP_B_MTVR_Refuel_USA;
    class CUP_B_MTVR_Repair_USA;
    class CUP_B_UH60M_US;
    class CUP_B_UH60M_FFV_US;
    class CUP_B_UH60M_Unarmed_US;
    class CUP_B_UH60M_Unarmed_FFV_US;
    class CUP_B_MH60L_DAP_2x_US;
    class CUP_I_Mi24_D_Dynamic_ION;
    class Item_Base_F;
    class tacs_Unit_Combat_LS_Base;
    class TACU_Main_U_INDEP_Soldier_Base;
    class Vest_Base_F;

    // Ground Items
    class TACU_MSF_Item_Uniform_Combat_TigerBlack: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Combat Uniform (Tiger Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerBlack,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_TigerDesert: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Combat Uniform (Tiger Desert)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerDesert,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_TigerWood: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Combat Uniform (Tiger Wood)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerWood,1);
        };
    };

    class TACU_MSF_Item_Vest_HeavyPlateCarrier_Black: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_HeavyPlateCarrier_Black,1);
        };
    };

    class TACU_MSF_Item_Vest_HeavyPlateCarrier_Coyote: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Coyote)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_HeavyPlateCarrier_Coyote,1);
        };
    };

    class TACU_MSF_Item_Vest_HeavyPlateCarrier_Green: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_HeavyPlateCarrier_Green,1);
        };
    };

    class TACU_MSF_Item_Vest_PlateCarrier_Black: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_PlateCarrier_Black,1);
        };
    };

    class TACU_MSF_Item_Vest_PlateCarrier_Coyote: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Coyote)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_PlateCarrier_Coyote,1);
        };
    };

    class TACU_MSF_Item_Vest_PlateCarrier_Green: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_PlateCarrier_Green,1);
        };
    };

    // Uniforms
    class TACU_MSF_Unit_Combat_TigerBlack: tacs_Unit_Combat_LS_Base {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_Combat_TigerBlack_co.paa)};
    };

    class TACU_MSF_Unit_Combat_TigerDesert: TACU_MSF_Unit_Combat_TigerBlack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerDesert";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_Combat_TigerDesert_co.paa)};
    };

    class TACU_MSF_Unit_Combat_TigerWood: TACU_MSF_Unit_Combat_TigerBlack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerWood";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_Combat_TigerWood_co.paa)};
    };

    // Backpacks
    class TACU_MSF_B_AT_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };

    class TACU_MSF_B_AT_Coyote: B_FieldPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };

    class TACU_MSF_B_AT_Green: B_FieldPack_oli {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };

    class TACU_MSF_B_Engineer_Black: B_AssaultPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_M26_Clacker,1);
            MACRO_ADDITEM(ACE_wirecutter,1);
            MACRO_ADDITEM(ToolKit,1);
        };
    };

    class TACU_MSF_B_Engineer_Coyote: B_AssaultPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_M26_Clacker,1);
            MACRO_ADDITEM(ACE_wirecutter,1);
            MACRO_ADDITEM(ToolKit,1);
        };
    };

    class TACU_MSF_B_Engineer_Green: B_AssaultPack_rgr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_M26_Clacker,1);
            MACRO_ADDITEM(ACE_wirecutter,1);
            MACRO_ADDITEM(ToolKit,1);
        };
    };

    class TACU_MSF_B_Medic_Black: B_AssaultPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_tourniquet,8);
            MACRO_ADDITEM(ACE_morphine,10);
            MACRO_ADDITEM(ACE_epinephrine,10);
            MACRO_ADDITEM(ACE_salineIV_500,4);
            MACRO_ADDITEM(ACE_fieldDressing,40);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_quikclot,10);
            MACRO_ADDITEM(ACE_packingBandage,10);
        };
    };

    class TACU_MSF_B_Medic_Coyote: B_AssaultPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_tourniquet,8);
            MACRO_ADDITEM(ACE_morphine,10);
            MACRO_ADDITEM(ACE_epinephrine,10);
            MACRO_ADDITEM(ACE_salineIV_500,4);
            MACRO_ADDITEM(ACE_fieldDressing,40);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_quikclot,10);
            MACRO_ADDITEM(ACE_packingBandage,10);
        };
    };

    class TACU_MSF_B_Medic_Green: B_AssaultPack_rgr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_tourniquet,8);
            MACRO_ADDITEM(ACE_morphine,10);
            MACRO_ADDITEM(ACE_epinephrine,10);
            MACRO_ADDITEM(ACE_salineIV_500,4);
            MACRO_ADDITEM(ACE_fieldDressing,40);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_quikclot,10);
            MACRO_ADDITEM(ACE_packingBandage,10);
        };
    };

    // Units and Vehicles
    #include "CfgVehicles_Black.hpp"
    #include "CfgVehicles_Desert.hpp"
    #include "CfgVehicles_Wood.hpp"
};

class Extended_Init_Eventhandlers {
    class TACU_MSF_U_I_Black_Rifleman {
        class TACU_MSF_insignia_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
};
