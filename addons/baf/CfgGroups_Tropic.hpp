class TACU_BAF_G_Tropic {
    name = "Group 14 (Tropic)";

    class TACU_BAF_G_Tropic_Patrol {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_BAF_U_B_Tropic_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Tropic_Scout,1);
    };
    class TACU_BAF_G_Tropic_Sniper_Team: TACU_BAF_G_Tropic_Patrol {
        name = "Sniper Team";
        MACRO_UNIT0(TACU_BAF_U_B_Tropic_Sniper,1);
        MACRO_UNIT1(TACU_BAF_U_B_Tropic_Spotter,1);
    };
    class TACU_BAF_G_Tropic_Fireteam: TACU_BAF_G_Tropic_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_BAF_U_B_Tropic_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Tropic_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Tropic_Grenadier,1);
        MACRO_UNIT3(TACU_BAF_U_B_Tropic_Marksman,1);
    };
    class TACU_BAF_G_Tropic_Squad: TACU_BAF_G_Tropic_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_BAF_U_B_Tropic_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Tropic_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Tropic_Grenadier,1);
        MACRO_UNIT3(TACU_BAF_U_B_Tropic_HeavyGunner,1);
        MACRO_UNIT4(TACU_BAF_U_B_Tropic_Demolitions,1);
        MACRO_UNIT5(TACU_BAF_U_B_Tropic_LAT,1);
        MACRO_UNIT6(TACU_BAF_U_B_Tropic_Marksman,1);
        MACRO_UNIT7(TACU_BAF_U_B_Tropic_Scout,1);
    };
};
