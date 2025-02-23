class B_Carryall_oli;
class TACU_AAF_B_AT_Carryall: B_Carryall_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(PSRL1_AT_RF,4);
    };
};

class TACU_AAF_B_AP_Carryall: B_Carryall_oli {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(PSRL1_HE_RF,4);
    };
};

class tacs_Backpack_Kitbag_Medic_Digital;
class TACU_AAF_B_Medic_Kitbag: tacs_Backpack_Kitbag_Medic_Digital {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class B_AssaultPack_dgtl;
class TACU_AAF_B_Demo_AssaultPack: B_AssaultPack_dgtl {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,5);
    };
};

class TACU_AAF_B_Repair_AssaultPack: B_AssaultPack_dgtl {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};

class TACU_AAF_B_MG_AssaultPack: B_AssaultPack_dgtl {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_100Rnd_762_SA77,4);
    };
};
