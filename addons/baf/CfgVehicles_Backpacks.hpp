// Backpacks
#define MACRO_BACKPACK_DEFAULTS \
    dlc = QUOTE(PREFIX); \
    scope = 1; \
    scopeCurator = 1

class TACU_BAF_B_Demolitions_Fieldpack_Arid: TACU_Assets_Fieldpack_Arid {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
    class TransportMagazines{
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,5);
    };
};

class TACU_BAF_B_LAT_Fieldpack_Arid: TACU_Assets_Fieldpack_Arid {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,2);
    };
};

class TACU_BAF_B_Medic_Fieldpack_Arid: TACU_Assets_Fieldpack_Arid {
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

class TACU_BAF_B_Heavygunner_Fieldpack_Arid: TACU_Assets_Fieldpack_Arid {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,3);
    };
};

class TACU_BAF_B_Demolitions_Fieldpack_Tropic: TACU_Assets_Fieldpack_Tropic {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
    class TransportMagazines{
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,5);
    };
};

class TACU_BAF_B_LAT_Fieldpack_Tropic: TACU_Assets_Fieldpack_Tropic {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,2);
    };
};

class TACU_BAF_B_Medic_Fieldpack_Tropic: TACU_Assets_Fieldpack_Tropic {
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

class TACU_BAF_B_Heavygunner_Fieldpack_Tropic: TACU_Assets_Fieldpack_Tropic {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,3);
    };
};

class TACU_BAF_B_Demolitions_Fieldpack_Urban: TACU_Assets_Fieldpack_Urban {
    MACRO_BACKPACK_DEFAULTS;
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
    };
    class TransportMagazines{
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,5);
    };
};

class TACU_BAF_B_LAT_Fieldpack_Urban: TACU_Assets_Fieldpack_Urban {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(MRAWS_HEAT_F,2);
    };
};

class TACU_BAF_B_Medic_Fieldpack_Urban: TACU_Assets_Fieldpack_Urban {
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

class TACU_BAF_B_Heavygunner_Fieldpack_Urban: TACU_Assets_Fieldpack_Urban {
    MACRO_BACKPACK_DEFAULTS;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,3);
    };
};
