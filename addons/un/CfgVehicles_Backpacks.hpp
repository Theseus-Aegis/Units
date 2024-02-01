// Medic Backpacks
class TACU_UN_B_Medic_Black: tacs_Backpack_Kitbag_Medic_Black {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};
class TACU_UN_B_Medic_Woodland: tacs_Backpack_Kitbag_Medic_Green {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};
class TACU_UN_B_Medic_Tan: tacs_Backpack_Kitbag_Medic_Coyote {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

// Grenadier Backpacks
class TACU_UN_B_Grenadier_Black: B_AssaultPack_blk {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,20);
        MACRO_ADDMAGAZINE(ACE_40mm_Flare_white,15);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
};
class TACU_UN_B_Grenadier_Woodland: B_AssaultPack_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,20);
        MACRO_ADDMAGAZINE(ACE_40mm_Flare_white,15);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
};
class TACU_UN_B_Grenadier_Tan: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,20);
        MACRO_ADDMAGAZINE(ACE_40mm_Flare_white,15);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
};

// SQL Backpacks
class TACU_UN_B_SQL_Black: B_AssaultPack_blk {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,10);
        MACRO_ADDMAGAZINE(ACE_40mm_Flare_white,5);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_microDAGR,1);
    };
};
class TACU_UN_B_SQL_Woodland: B_AssaultPack_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,10);
        MACRO_ADDMAGAZINE(ACE_40mm_Flare_white,5);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_microDAGR,1);
    };
};
class TACU_UN_B_SQL_Tan: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,10);
        MACRO_ADDMAGAZINE(ACE_40mm_Flare_white,5);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_microDAGR,1);
    };
};

// TL Backpacks
class TACU_UN_B_TL_Black: B_AssaultPack_blk {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_CableTie,10);
        MACRO_ADDITEM(ACE_microDAGR,1);
    };
};
class TACU_UN_B_TL_Woodland: B_AssaultPack_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_CableTie,10);
        MACRO_ADDITEM(ACE_microDAGR,1);
    };
};
class TACU_UN_B_TL_Tan: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_CableTie,10);
        MACRO_ADDITEM(ACE_microDAGR,1);
    };
};

// Engineer Backpacks
class TACU_UN_B_Engineer_Black: B_AssaultPack_blk {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};
class TACU_UN_B_Engineer_Woodland: B_AssaultPack_rgr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};
class TACU_UN_B_Engineer_Tan: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};

// Demolitions Backpacks
class TACU_UN_B_Demolitions_Black: B_AssaultPack_blk {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};
class TACU_UN_B_Demolitions_Woodland: B_AssaultPack_rgr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};
class TACU_UN_B_Demolitions_Tan: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};

// MG
class TACU_UN_B_MG_Black: tacs_Backpack_Kitbag_DarkBlack {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Pouch,6);
    };
};
class TACU_UN_B_MG_Woodland: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Pouch,6);
    };
};
class TACU_UN_B_MG_Tan: B_Kitbag_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Pouch,6);
    };
};

// AT
class TACU_UN_B_AT_Black: tacs_Backpack_Kitbag_DarkBlack {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT55_F,3);
    };
};
class TACU_UN_B_AT_Woodland: B_Kitbag_rgr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT55_F,3);
    };
};
class TACU_UN_B_AT_Tan: B_Kitbag_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT55_F,3);
    };
};
