class TACU_Chernobog_Alicepack_Squadleader: CUP_B_AlicePack_OD {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_150Rnd_Negev,6);
    };
};
class TACU_Chernobog_Alicepack_Medic: CUP_B_AlicePack_OD {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};
class TACU_Chernobog_RPGPack_AT: CUP_B_RPGPack_Khaki {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(CUP_PG7VM_M,3);
    };
};
class TACU_Chernobog_SportPack_TL: B_CivilianBackpack_01_Sport_Blue_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(CUP_1Rnd_HE_GP25_M,10);
        MACRO_ADDMAGAZINE(CUP_1Rnd_SMOKE_GP25_M,10);
        MACRO_ADDMAGAZINE(SmokeShell,2);
    };
};
class TACU_Chernobog_Messenger_Demolitions: B_Messenger_Olive_F {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};
