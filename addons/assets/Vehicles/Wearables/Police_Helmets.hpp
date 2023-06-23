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

class TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen: TACU_Police_Item_Helmet_PASGT_Neck_PoliceBlack {
    displayName = "Police Helmet (Neck Protection, Green)";
    class TransportItems {
        MACRO_ADDITEM(ACU_Police_Helmet_PASGT_Neck_PoliceGreen,1);
    };
};
