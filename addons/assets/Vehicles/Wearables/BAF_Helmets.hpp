class TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid: Headgear_Base_F {
    author = "GilleeDoo, Mike";
    displayName = "Enhanced Combat Helmet (Arid)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsHeadgear";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Helmet_EnhancedCombatHelmet_Arid,1);
    };
};
class TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Tropic: TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid {
    displayName = "Enhanced Combat Helmet (Tropic)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic,1);
    };
};
class TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Urban: TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid {
    displayName = "Enhanced Combat Helmet (Urban)";
    class TransportItems {
        MACRO_ADDITEM(TACU_BAF_Helmet_EnhancedCombatHelmet_Urban,1);
    };
};
