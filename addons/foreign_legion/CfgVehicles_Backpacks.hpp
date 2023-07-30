class B_AssaultPack_cbr;
class B_Carryall_cbr;

class TACU_Foreign_Legion_B_Demolitions_AssaultPack: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,5);
    };
};

class TACU_Foreign_Legion_B_Engineer_AssaultPack: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};

class TACU_Foreign_Legion_B_Autorifleman_AssaultPack: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_150Rnd_556_Drum,3);
        MACRO_ADDMAGAZINE(TACU_Magazine_75Rnd_556_Surefire,3);
    };
};

class TACU_Foreign_Legion_B_Medic_AssaultPack: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Foreign_Legion_B_Breacher: B_AssaultPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(20Rnd_12Gauge_AA40_Pellets_lxWS,2);
        MACRO_ADDMAGAZINE(8Rnd_12Gauge_AA40_Pellets_lxWS,4);
    };
};

class TACU_Foreign_Legion_B_Machinegunner_Carryall: B_Carryall_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Box,5);
    };
};

class TACU_Foreign_Legion_B_AT_Carryall: B_Carryall_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,4);
    };
};

class TACU_Foreign_Legion_B_AP_Carryall: B_Carryall_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,4);
    };
};
