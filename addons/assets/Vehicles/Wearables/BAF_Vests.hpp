// British Armed Forces Vests
class TACU_BAF_Item_Vest_LightPlateCarrier_Arid: Vest_Base_F {
    author = "GilleeDoo, Mike";
    displayName = "BAF Light Plate Carrier Rig Mk.1 (Arid)";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 0;
    vehicleClass = "ItemsVests";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Vest_LightPlateCarrier_Arid,1);
    };
};
class TACU_BAF_Item_Vest_LightPlateCarrier_Tropic: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
    displayName = "BAF Light Plate Carrier Rig Mk.1 (Tropic)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Vest_LightPlateCarrier_Tropic,1);
    };
};
class TACU_BAF_Item_Vest_LightPlateCarrier_Urban: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
    displayName = "BAF Light Plate Carrier Rig Mk.1 (Urban)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Vest_LightPlateCarrier_Urban,1);
    };
};

class TACU_BAF_Item_Vest_HeavyPlateCarrier_Arid: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
    displayName = "BAF Heavy Plate Carrier Rig Mk.2 (Arid)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Vest_HeavyPlateCarrier_Arid,1);
    };
};
class TACU_BAF_Item_Vest_HeavyPlateCarrier_Tropic: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
    displayName = "BAF Heavy Plate Carrier Rig Mk.2 (Tropic)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Vest_HeavyPlateCarrier_Tropic,1);
    };
};
class TACU_BAF_Item_Vest_HeavyPlateCarrier_Urban: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
    displayName = "BAF Heavy Plate Carrier Rig Mk.2 (Urban)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Vest_HeavyPlateCarrier_Urban,1);
    };
};
