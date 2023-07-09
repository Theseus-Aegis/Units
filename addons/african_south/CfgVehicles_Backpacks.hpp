class B_FieldPack_oli;
class TACU_African_South_B_Medic: B_FieldPack_oli {
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
class TACU_African_South_B_Demolitions: B_FieldPack_oli {
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
    };
};
class TACU_African_South_B_MG: B_FieldPack_oli {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_556x45_Box,5);
    };
};
class TACU_African_South_B_AT: B_FieldPack_oli {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,3);
    };
};
class TACU_African_South_B_AP: B_FieldPack_oli {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HE_F,3);
    };
};
class TACU_African_South_B_AA: B_FieldPack_oli {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(Titan_AA,2);
    };
};
