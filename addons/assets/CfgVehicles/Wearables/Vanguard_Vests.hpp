class TACU_Vanguard_Item_Vest_PlateCarrier_Earth: Vest_Base_F {
    scope = 2;
    scopeCurator = 2;
    vehicleClass = "ItemsVests";
    author = "Mike";
    displayName = "Vanguard Plate Carrier (Earth)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Vanguard_V_PlateCarrier_Earth,1);
    };
};
class TACU_Vanguard_Item_Vest_PlateCarrier_Foliage: TACU_Vanguard_Item_Vest_PlateCarrier_Earth {
    author = "Mike";
    displayName = "Vanguard Plate Carrier (Foliage)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Vanguard_V_PlateCarrier_Foliage,1);
    };
};
class TACU_Vanguard_Item_Vest_PlateCarrier_Snow: TACU_Vanguard_Item_Vest_PlateCarrier_Earth {
    author = "Mike";
    displayName = "Vanguard Plate Carrier (Snow)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Vanguard_V_PlateCarrier_Snow,1);
    };
};
