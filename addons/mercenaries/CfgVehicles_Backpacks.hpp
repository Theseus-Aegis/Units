// Opfor
class B_FieldPack_cbr;

// AT
class TACU_Mercenaries_B_AT_FieldPack_Sand: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,3);
    };
};

// AP
class TACU_Mercenaries_B_AP_FieldPack_Sand: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,4);
    };
};

// MG
class TACU_Mercenaries_B_MG_FieldPack_Sand: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Box,4);
    };
};

// Medic
class TACU_Mercenaries_B_Medic_FieldPack_Sand: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

// Engineer
class TACU_Mercenaries_B_Engineer_FieldPack_Sand: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};

// Demolitions
class TACU_Mercenaries_B_Demolitions_FieldPack_Sand: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};


// Independent
class B_FieldPack_oli;

// AT
class TACU_Mercenaries_B_AT_FieldPack_Green: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,3);
    };
};

// AP
class TACU_Mercenaries_B_AP_FieldPack_Green: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,3);
    };
};

// MG
class TACU_Mercenaries_B_MG_FieldPack_Green: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,4);
    };
};

// Medic
class TACU_Mercenaries_B_Medic_FieldPack_Green: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

// Engineer
class TACU_Mercenaries_B_Engineer_FieldPack_Green: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};

// Demolitions
class TACU_Mercenaries_B_Demolitions_FieldPack_Green: B_FieldPack_oli {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};
