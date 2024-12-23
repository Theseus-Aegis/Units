class B_FieldPack_oli;
class TACU_African_Militia_B_Medic: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_African_Militia_B_Demolitions: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
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

class TACU_African_Militia_B_AP: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(CUP_OG7_M,2);
    };
};

class TACU_African_Militia_B_Engineer: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};
