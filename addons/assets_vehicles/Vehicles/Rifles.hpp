class TACU_Assets_W_Item_HK416A5_Arid: Weapon_Base_F {
    scope = 2;
    scopeCurator = 2;
    vehicleClass = "WeaponsPrimary";
    author = "Mike";
    displayName = "HK416A5 14.5 "" (Arid)";

    class TransportItems {
        MACRO_ADDITEM(TACU_Assets_W_HK416A5_Arid,1);
    };
};

class TACU_Assets_W_Item_HK416A5_GL_Arid: TACU_Assets_W_Item_HK416A5_Arid {
    displayName = "HK416A5 11 "" GL (Arid)";

    class TransportItems {
        MACRO_ADDITEM(TACU_Assets_W_HK416A5_GL_Arid,1);
    };
};

class TACU_Assets_W_Item_HK417A2_Arid: TACU_Assets_W_Item_HK416A5_Arid {
    displayName = "HK417A2 20 "" (Arid)";

    class TransportItems {
        MACRO_ADDITEM(TACU_Assets_W_HK417A2_Arid,1);
    };
};
