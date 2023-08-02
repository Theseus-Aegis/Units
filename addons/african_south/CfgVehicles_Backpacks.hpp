class B_FieldPack_oli;
class TACU_African_South_B_Medic: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_African_South_B_Demolitions: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
    };
};

class TACU_African_South_B_MG: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Box,5);
    };
};

class TACU_African_South_B_AT: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,3);
    };
};

class TACU_African_South_B_AP: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,3);
    };
};

class TACU_African_South_B_AA: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(Titan_AA,2);
    };
};
