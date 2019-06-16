class CfgVehicles {

    // Base Classes
    class I_G_Soldier_LAT_F;
    class Headgear_Base_F;
    class Item_Base_F;
    class Vest_Base_F;
    class TACU_Main_U_BLUFOR_Soldier_Base;
    class TACU_Main_U_OPFOR_Soldier_Base;

    // Ground Items
    class TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen: Headgear_Base_F {
        author = "Kresky";
        displayName = "Police Helmet (Neck Protection, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            class _xx_TACU_Police_Helmet_PASGT_Neck_PoliceGreen {
                name = "Police Helmet (Neck Protection, Green)";
                count = 1;
            };
        };
    };

    class TACU_Police_Item_Uniform_Combat_Black: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            class _xx_TACU_Police_Uniform_Combat_Black {
                name = "Police Combat Uniform (Black)";
                count = 1;
            };
        };
    };

    class TACU_Police_Item_Uniform_Combat_Blue: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Blue)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            class _xx_TACU_Police_Uniform_Combat_Blue {
                name = "Police Combat Uniform (Blue)";
                count = 1;
            };
        };
    };

    class TACU_Police_Item_Uniform_Combat_Brown: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Brown)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            class _xx_TACU_Police_Uniform_Combat_Brown {
                name = "Police Combat Uniform (Brown)";
                count = 1;
            };
        };
    };

    class TACU_Police_Item_Uniform_Combat_Green: Item_Base_F {
        author = "Kresky";
        displayName = "Police Combat Uniform (Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            class _xx_TACU_Police_Uniform_Combat_Green {
                name = "Police Combat Uniform (Green)";
                count = 1;
            };
        };
    };

    class TACU_Police_Item_Vest_PlateCarrier_PoliceBlue: Vest_Base_F {
        author = "Kresky";
        displayName = "Carrier Lite (Police, Blue)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            class _xx_TACU_Police_Vest_PlateCarrier_PoliceBlue {
                name = "Carrier Lite (Police, Blue)";
                count = 1;
            };
        };
    };

    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen: Vest_Base_F {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Green)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            class _xx_TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen {
                name = "Heavy Plate (Police, Green)";
                count = 1;
            };
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

    // Units and Vehicles
    #include "CfgVehicles_B.hpp"
    #include "CfgVehicles_O.hpp"
};
