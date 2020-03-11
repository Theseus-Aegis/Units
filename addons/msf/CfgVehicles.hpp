class CfgVehicles {
    // Ground Items (Uniforms)
    class Item_Base_F;
    class TACU_MSF_Item_Uniform_CBRN_Black: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky, POLPOX";
        displayName = "CBRN Suit (Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_CBRN_Black,1);
        };
    };

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

    // Ground Items (Vests)
    class Vest_Base_F;
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
    class B_CBRN_Man_Oversuit_01_MTP_F;
    class TACU_MSF_Unit_CBRN_Black: B_CBRN_Man_Oversuit_01_MTP_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Kresky, POLPOX";
        uniformClass = "TACU_MSF_Uniform_CBRN_Black";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_CBRN_Black_co.paa)};
    };

    class tacs_Unit_Combat_LS_Base;
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
    class B_FieldPack_blk;
    class TACU_MSF_B_AT_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };
    class TACU_MSF_B_MMG_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
        };
    };

    class B_FieldPack_cbr;
    class TACU_MSF_B_AT_Coyote: B_FieldPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };
    class TACU_MSF_B_MMG_Coyote: B_FieldPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
        };
    };

    class B_FieldPack_green_F;
    class TACU_MSF_B_AT_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,3);
        };
    };
    class TACU_MSF_B_MMG_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
        };
    };

    class tacs_Backpack_Carryall_DarkBlack;
    class TACU_MSF_B_HAT_Black: tacs_Backpack_Carryall_DarkBlack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_Javelin_M,2);
        };
    };

    class B_Carryall_cbr;
    class TACU_MSF_B_HAT_Coyote: B_Carryall_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_Javelin_M,2);
        };
    };

    class B_Carryall_green_F;
    class TACU_MSF_B_HAT_Green: B_Carryall_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_Javelin_M,2);
        };
    };

    class B_AssaultPack_blk;
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

    class B_AssaultPack_cbr;
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

    class B_AssaultPack_rgr;
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
    #include "CfgVehicles_DDogs_Black.hpp"
    #include "CfgVehicles_DDogs_Desert.hpp"
    #include "CfgVehicles_DDogs_Wood.hpp"
    #include "CfgVehicles_Foxhound.hpp"
    #include "CfgVehicles_Regular_Black.hpp"
    #include "CfgVehicles_Regular_Desert.hpp"
    #include "CfgVehicles_Regular_Wood.hpp"
    #include "CfgVehicles_Vehicles_Black.hpp"
    #include "CfgVehicles_Vehicles_Desert.hpp"
    #include "CfgVehicles_Vehicles_Wood.hpp"
    #include "CfgVehicles_XOF.hpp"
};

class Extended_Init_Eventhandlers {
    class TACU_MSF_U_I_Regular_Black_Rifleman_01 {
        class TACU_MSF_insignia_MSF_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_MSF_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
    class TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
        class TACU_MSF_insignia_DDogs_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_DDogs_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
    class TACU_MSF_U_I_Foxhound_Rifleman_01 {
        class TACU_MSF_insignia_Foxhound_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_Foxhound_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
};
