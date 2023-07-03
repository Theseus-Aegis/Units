class TACU_BAF_G_Desert {
    name = "Group 12 (Sahara Desert)";

    class TACU_BAF_G_Desert_Patrol {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_BAF_U_B_Desert_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Desert_Scout,1);
    };
    class TACU_BAF_G_Desert_Fireteam: TACU_BAF_G_Desert_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_BAF_U_B_Desert_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Desert_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Desert_Scout,1);
        MACRO_UNIT3(TACU_BAF_U_B_Desert_Marksman,1);
    };
    class TACU_BAF_G_Desert_Squad: TACU_BAF_G_Desert_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_BAF_U_B_Desert_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Desert_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Desert_Scout,1);
        MACRO_UNIT3(TACU_BAF_U_B_Desert_HeavyGunner,1);
        MACRO_UNIT4(TACU_BAF_U_B_Desert_Demolitions,1);
        MACRO_UNIT5(TACU_BAF_U_B_Desert_LAT,1);
        MACRO_UNIT6(TACU_BAF_U_B_Desert_Marksman,1);
        MACRO_UNIT7(TACU_BAF_U_B_Desert_Scout,1);
    };
};
