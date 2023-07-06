class B_AssaultPack_blk;
class TACU_SevenRings_B_AT_Assault_Maaws: B_AssaultPack_blk {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,2);
        MACRO_ADDMAGAZINE(MRAWS_HE_F,1);
    };
};

class TACU_SevenRings_B_AT_Assault_RPG32: B_AssaultPack_blk {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,2);
        MACRO_ADDMAGAZINE(RPG32_HE_F,1);
    };
};

class B_FieldPack_cbr;
class TACU_SevenRings_B_AT_Fieldpack_RPG7: B_FieldPack_cbr {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG7_F,2);
        MACRO_ADDMAGAZINE(CUP_OG7_M,2);
    };
};

class tacs_Backpack_Kitbag_DarkBlack;
class TACU_SevenRings_B_Engineer_Kitbag_Black: tacs_Backpack_Kitbag_DarkBlack {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,1);
        MACRO_ADDMAGAZINE(APERSMineDispenser_Mag,1);
        MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag,1);
    };
};

class TACU_SevenRings_B_AA_Kitbag_Black: tacs_Backpack_Kitbag_DarkBlack {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(Titan_AA,2);
    };
};

class B_Kitbag_tan;
class TACU_SevenRings_B_Engineer_Kitbag_Tan: B_Kitbag_tan {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(IEDLandSmall_Remote_Mag,2);
        MACRO_ADDMAGAZINE(APERSTripMine_Wire_Mag,2);
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        MACRO_ADDMAGAZINE(APERSMine_Range_Mag,2);
        MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,1);
    };
};

class TACU_SevenRings_B_AA_Kitbag_Tan: B_Kitbag_tan {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(CUP_Stinger_M,1);
    };
};
