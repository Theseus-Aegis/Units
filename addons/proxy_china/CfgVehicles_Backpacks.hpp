class B_ViperHarness_hex_F;
class TACU_Proxy_China_B_Demolitions: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};

class TACU_Proxy_China_B_Engineer: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_ENGINEER_BACKPACK_ITEMS;
};

class TACU_Proxy_China_B_Autorifleman: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_100Rnd_QBZ,10);
    };
};

class TACU_Proxy_China_B_Machinegunner: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_150Rnd_Negev,5);
    };
};

class TACU_Proxy_China_B_Medic: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Proxy_China_B_AT: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,4);
    };
};

class TACU_Proxy_China_B_AP: B_ViperHarness_hex_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,4);
    };
};
