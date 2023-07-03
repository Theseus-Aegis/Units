#define MACRO_BACKPACK_DEFAULTS \
    dlc = QUOTE(PREFIX); \
    scope = 1; \
    scopeCurator = 1

// Militia Bags
class B_FieldPack_khk;
class TACU_Taliban_Militia_B_Medic: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
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

class TACU_Taliban_Militia_B_Demolitions: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_DeadManSwitch,1);
        MACRO_ADDITEM(ACE_Cellphone,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
    };
};

class TACU_Taliban_Militia_B_AT: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG7_F,3);
    };
};
class TACU_Taliban_Veterans_B_AP: B_FieldPack_khk {
    class TransportMagazines {
        MACRO_ADDMAGAZINE(CUP_OG7_M,3);
    };
};
