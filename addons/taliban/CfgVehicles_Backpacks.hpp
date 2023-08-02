class B_FieldPack_khk;
class TACU_Taliban_Militia_B_Medic: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_MEDICAL_BACKPACK_ITEMS;
};

class TACU_Taliban_Militia_B_Demolitions: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
    MACRO_DEMOLITIONS_BACKPACK_ITEMS;
};

class TACU_Taliban_Militia_B_AT: B_FieldPack_khk {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG7_F,3);
    };
};
