class B_AssaultPack_eaf_F;
class B_Carryall_eaf_F;

class TACU_Proxy_Russia_B_Demolitions: B_AssaultPack_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
    };
};

class TACU_Proxy_Russia_B_Engineer: B_AssaultPack_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
    };
};

class TACU_Proxy_Russia_B_Autorifleman: B_AssaultPack_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_75Rnd_762_AK,6);
    };
};

class TACU_Proxy_Russia_B_Machinegunner: B_Carryall_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_150Rnd_Negev,4);
    };
};

class TACU_Proxy_Russia_B_Medic: B_Carryall_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Proxy_Russia_B_AT: B_Carryall_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,4);
    };
};

class TACU_Proxy_Russia_B_AP: B_Carryall_eaf_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,4);
    };
};
