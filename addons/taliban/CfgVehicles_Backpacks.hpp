class B_FieldPack_khk;
class TACU_Taliban_Militia_B_Medic: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
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
