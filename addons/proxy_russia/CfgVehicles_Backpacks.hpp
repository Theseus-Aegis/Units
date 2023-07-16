class B_AssaultPack_eaf_F;
class B_Carryall_eaf_F;

class TACU_Proxy_Russia_B_Demolitions: B_AssaultPack_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
    };
};

class TACU_Proxy_Russia_B_Engineer: B_AssaultPack_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
    };
};

class TACU_Proxy_Russia_B_Autorifleman: B_AssaultPack_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,6);
    };
};

class TACU_Proxy_Russia_B_Machinegunner: B_Carryall_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(150Rnd_762x54_Box,4);
    };
};

class TACU_Proxy_Russia_B_Medic: B_Carryall_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,20);
        MACRO_ADDITEM(ACE_epinephrine,5);
        MACRO_ADDITEM(ACE_morphine,5);
        MACRO_ADDITEM(ACE_bloodIV,4);
        MACRO_ADDITEM(ACE_bloodIV_500,4);
        MACRO_ADDITEM(ACE_splint,4);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_bloodIV_250,2);
    };
};

class TACU_Proxy_Russia_B_AT: B_Carryall_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,4);
    };
};

class TACU_Proxy_Russia_B_AP: B_Carryall_eaf_F {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,4);
    };
};
