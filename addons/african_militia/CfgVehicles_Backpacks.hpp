class B_FieldPack_oli;
class TACU_African_Militia_B_Medic: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_African_Militia_B_Demolitions: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
    };
};

class TACU_African_Militia_B_MG: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(100Rnd_762x51_S77_Red_lxWS,3);
    };
};

class TACU_African_Militia_B_AT: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG7_F,2);
    };
};

class TACU_African_Militia_B_Engineer: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
    };
};
