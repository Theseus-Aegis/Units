class B_FieldPack_cbr;
class TACU_Seven_Rings_Eastern_B_AT: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,3);
    };
};

class TACU_Seven_Rings_Eastern_B_AP: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,3);
    };
};

class TACU_Seven_Rings_Eastern_B_Demo: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_DeadManSwitch,1);
        MACRO_ADDITEM(ACE_Cellphone,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,3);
    };
};

class TACU_Seven_Rings_Eastern_B_Medic: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Seven_Rings_Eastern_B_Engineer: B_FieldPack_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};

class B_Carryall_cbr;
class TACU_Seven_Rings_Eastern_B_Heavygunner: B_Carryall_cbr {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(150Rnd_93x64_Mag,4);
    };
};
