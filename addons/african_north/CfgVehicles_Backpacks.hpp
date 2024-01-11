class B_Kitbag_rgr;
class TACU_African_North_B_Medic: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_African_North_B_Demolitions: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,5);
    };
};

class TACU_African_North_B_AT: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,3);
    };
};

class TACU_African_North_B_AP: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,3);
    };
};

class TACU_African_North_B_AA: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(Titan_AA,2);
    };
};

class TACU_African_North_B_Repair: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};
