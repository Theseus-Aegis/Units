class CfgVehicles {

    // Base Classes
    class Headgear_Base_F;
    class Item_Base_F;
    class Vest_Base_F;
    class Offroad_01_base_F;
    class Van_02_base_F;
    class CUP_O_BRDM2_RUS;
    class I_G_Soldier_LAT_F;
    class TACU_Main_U_BLUFOR_Soldier_Base;
    class TACU_Main_U_OPFOR_Soldier_Base;
    class TACU_Main_U_INDEP_Soldier_Base;

    // Ground Items
    class TACU_Police_Item_Helmet_PASGT_Neck_PoliceBlack: Headgear_Base_F {
        author = "Kresky";
        displayName = "Police Helmet (Neck Protection, Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Helmet_PASGT_Neck_PoliceBlack,1);
        };
    };

    class TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen: Headgear_Base_F {
        author = "Kresky";
        displayName = "Police Helmet (Neck Protection, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(ACU_Police_Helmet_PASGT_Neck_PoliceGreen,1);
        };
    };

    class TACU_Police_Item_Uniform_Combat_Black: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Black,1);
        };
    };

    class TACU_Police_Item_Uniform_Combat_Blue: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Blue)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Blue,1);
        };
    };

    class TACU_Police_Item_Uniform_Combat_Brown: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Brown)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Brown,1);
        };
    };

    class TACU_Police_Item_Uniform_Combat_Green: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Green,1);
        };
    };

    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlack: Vest_Base_F {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack,1);
        };
    };

    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlue: Vest_Base_F {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Blue)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue,1);
        };
    };

    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen: Vest_Base_F {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen,1);
        };
    };

    class TACU_Police_Item_Vest_PlateCarrier_PoliceBlack: Vest_Base_F {
        author = "Kresky";
        displayName = "Plate Carrier (Police, Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_PlateCarrier_PoliceBlack,1);
        };
    };

    class TACU_Police_Item_Vest_PlateCarrier_PoliceBlue: Vest_Base_F {
        author = "Kresky";
        displayName = "Plate Carrier (Police, Blue)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_PlateCarrier_PoliceBlue,1);
        };
    };

    class TACU_Police_Item_Vest_PlateCarrier_PoliceGreen: Vest_Base_F {
        author = "Kresky";
        displayName = "Plate Carrier (Police, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_PlateCarrier_PoliceGreen,1);
        };
    };

    // Uniforms
    class TACU_Police_Unit_Combat_Black: I_G_Soldier_LAT_F {
        author = "Kresky";
        scope = 1;
        uniformClass = "TACU_Police_Uniform_Combat_Black";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Uniform_Combat_Black_co.paa)};
    };

    class TACU_Police_Unit_Combat_Blue: TACU_Police_Unit_Combat_Black {
        author = "Kresky";
        scope = 1;
        uniformClass = "TACU_Police_Uniform_Combat_Blue";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Uniform_Combat_Blue_co.paa)};
    };

    class TACU_Police_Unit_Combat_Brown: TACU_Police_Unit_Combat_Black {
        author = "Kresky";
        scope = 1;
        uniformClass = "TACU_Police_Uniform_Combat_Brown";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Uniform_Combat_Brown_co.paa)};
    };

    class TACU_Police_Unit_Combat_Green: TACU_Police_Unit_Combat_Black {
        author = "Kresky";
        scope = 1;
        uniformClass = "TACU_Police_Uniform_Combat_Green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Uniform_Combat_Green_co.paa)};
    };

    // Vehicle Bases
    class Offroad_01_unarmed_base_F: Offroad_01_base_F {
        class EventHandlers;
    };

    class Van_02_vehicle_base_F: Van_02_base_F {
        class EventHandlers;
    };

    class Van_02_transport_base_F: Van_02_base_F {
        class EventHandlers;
    };

    // Units and Vehicles
    #include "CfgVehicles_B.hpp"
    #include "CfgVehicles_O.hpp"
    #include "CfgVehicles_I.hpp"
};
