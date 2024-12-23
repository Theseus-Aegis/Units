class CUP_B_RPGPack_Khaki;
class CUP_B_AlicePack_Khaki;

// AT
class TACU_Territorial_Defence_RPGPack: CUP_B_RPGPack_Khaki {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG7_F,3);
    };
};

// MG
class TACU_Territorial_Defence_MG_AlicePack: CUP_B_AlicePack_Khaki {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_75Rnd_762_AK,4);
    };
};

// Demolitions
class TACU_Territorial_Defence_Demolitions_AlicePack: CUP_B_AlicePack_Khaki {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};

// Engineer
class TACU_Territorial_Defence_Engineer_AlicePack: CUP_B_AlicePack_Khaki {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};

// Medic
class TACU_Territorial_Defence_Medic_AlicePack: CUP_B_AlicePack_Khaki {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};
