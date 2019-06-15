class CfgVehicles {

    // Base Classes
    class Vest_Base_F;
    class TACU_Main_U_BLUFOR_Soldier_Base;

    // Ground Items
    class TACU_Police_Item_Vest_PlateCarrier_PoliceBlue: Vest_Base_F {
        author = ECSTRING(Police,Author);
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

    // Units and Vehicles
    #include "CfgVehicles_B.hpp"
};
