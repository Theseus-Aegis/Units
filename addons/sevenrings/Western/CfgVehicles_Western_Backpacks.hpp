class B_Carryall_green_F;
class B_FieldPack_green_F;

class TACU_Seven_Rings_Western_B_AT: B_Carryall_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_F,4);
    };
};
class TACU_Seven_Rings_Western_B_AP: B_Carryall_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(RPG32_HE_F,4);
    };
};
class TACU_Seven_Rings_Western_B_AA: B_Carryall_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(Titan_AA,3);
    };
};
class TACU_Seven_Rings_Western_B_MG: B_FieldPack_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,4);
    };
};

class TACU_Seven_Rings_Western_B_HG: B_FieldPack_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
    };
};

class TACU_Seven_Rings_Western_B_Engineer: B_FieldPack_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};

class TACU_Seven_Rings_Western_B_Medic: B_FieldPack_green_F {
    dlc = QUOTE(PREFIX);
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

class TACU_Seven_Rings_Western_B_Demo: B_FieldPack_green_F {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ACE_M26_Clacker,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,3);
    };
};
