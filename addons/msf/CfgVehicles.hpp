class CfgVehicles {

    // Base Classes
    class Item_Base_F;
    class TACU_Main_U_INDEP_Soldier_Base;
    class tacs_Unit_Combat_LS_Base;
    class B_AssaultPack_cbr;
    class B_AssaultPack_rgr;
    class CUP_B_RPGPack_Khaki;
    class CUP_I_Mi24_D_Dynamic_ION;

    // Ground Items
    class TACU_MSF_Item_Uniform_Combat_TigerBlack: Item_Base_F {
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
        author = "Kresky";
        displayName = "Combat Uniform (Tiger Wood)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerWood,1);
        };
    };

    // Uniforms
    class TACU_MSF_Unit_Combat_TigerBlack: tacs_Unit_Combat_LS_Base {
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_Combat_TigerBlack_co.paa)};
    };

    class TACU_MSF_Unit_Combat_TigerDesert: TACU_MSF_Unit_Combat_TigerBlack {
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerDesert";
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_Combat_TigerDesert_co.paa)};
    };

    class TACU_MSF_Unit_Combat_TigerWood: TACU_MSF_Unit_Combat_TigerBlack {
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerWood";
        hiddenSelectionsTextures[] = {QPATHTOF(data\MSF_Uniform_Combat_TigerWood_co.paa)};
    };

    // Backpacks
    class TACU_MSF_B_AT_Coyote: B_AssaultPack_cbr {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,2);
        };
    };

    class TACU_MSF_B_AT_Green: B_AssaultPack_rgr {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_PG7V_M,2);
        };
    };

    class TACU_MSF_B_Engineer_Coyote: B_AssaultPack_cbr {
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
    #include "CfgVehicles_Desert.hpp"
    #include "CfgVehicles_Wood.hpp"
    #include "CfgVehicles_Black.hpp"
};

class Extended_Init_Eventhandlers {
    class TACU_MSF_U_I_Desert_Rifleman {
        class TACU_MSF_insignia_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
};
