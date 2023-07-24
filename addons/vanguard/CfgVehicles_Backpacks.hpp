class B_AssaultPack_blk;
class B_Kitbag_rgr;
class B_Kitbag_tan;
class tacs_Backpack_Kitbag_Medic_Sage;
class tacs_Backpack_Kitbag_Medic_Tan;
class tacs_Backpack_Kitbag_Medic_White;
class tacs_Backpack_Kitbag_White;

// AP Bags
class TACU_Vanguard_B_AP_Kitbag_Green: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,3);
    };
};

class TACU_Vanguard_B_AP_Kitbag_Tan: B_Kitbag_tan {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,3);
    };
};

class TACU_Vanguard_B_AP_Kitbag_White: tacs_Backpack_Kitbag_White {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,3);
    };
};

// AT Bags
class TACU_Vanguard_B_AT_Kitbag_Green: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,3);
    };
};

class TACU_Vanguard_B_AT_Kitbag_Tan: B_Kitbag_tan {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,3);
    };
};

class TACU_Vanguard_B_AT_Kitbag_White: tacs_Backpack_Kitbag_White {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,3);
    };
};

// Medic Bags
class TACU_Vanguard_B_Medic_AssaultPack_Black: B_AssaultPack_blk {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Vanguard_B_Medic_Kitbag_Green: tacs_Backpack_Kitbag_Medic_Sage {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Vanguard_B_Medic_Kitbag_Tan: tacs_Backpack_Kitbag_Medic_Tan {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Vanguard_B_Medic_Kitbag_White: tacs_Backpack_Kitbag_Medic_White {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

// MG Bags
class TACU_Vanguard_B_MG_Kitbag_Green: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,4);
    };
};

class TACU_Vanguard_B_MG_Kitbag_Tan: B_Kitbag_tan {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,4);
    };
};

class TACU_Vanguard_B_MG_Kitbag_Winter: tacs_Backpack_Kitbag_White {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,4);
    };
};
