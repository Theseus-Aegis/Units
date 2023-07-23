class B_Carryall_green_F;
class TACU_Seven_Rings_Western_B_AT: B_Carryall_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,4);
    };
};
class TACU_Seven_Rings_Western_B_AP: B_Carryall_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,4);
    };
};
class TACU_Seven_Rings_Western_B_AA: B_Carryall_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(Titan_AA,3);
    };
};

class B_FieldPack_green_F;
class TACU_Seven_Rings_Western_B_MG: B_FieldPack_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,4);
    };
};

class TACU_Seven_Rings_Western_B_HG: B_FieldPack_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
    };
};

class TACU_Seven_Rings_Western_B_Engineer: B_FieldPack_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};

class TACU_Seven_Rings_Western_B_Medic: B_FieldPack_green_F {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Seven_Rings_Western_B_Demo: B_FieldPack_green_F {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ACE_M26_Clacker,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,3);
    };
};
