class TACU_BAF_G_Urban {
    name = "Group 15 (Urban)";

    class TACU_BAF_G_Patrol_Urban {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_BAF_U_B_Urban_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Urban_Scout,1);
    };

    class TACU_BAF_G_Fireteam_Urban: TACU_BAF_G_Patrol_Urban {
        name = "Fireteam";
        MACRO_UNIT0(TACU_BAF_U_B_Urban_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Urban_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Urban_Grenadier,1);
        MACRO_UNIT3(TACU_BAF_U_B_Urban_Marksman,1);
    };

    class TACU_BAF_G_ATTeam_Urban: TACU_BAF_G_Patrol_Urban {
        name = "AT Team";
        MACRO_UNIT0(TACU_BAF_U_B_Urban_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Urban_LAT,1);
        MACRO_UNIT2(TACU_BAF_U_B_Urban_LAT,1);
        MACRO_UNIT3(TACU_BAF_U_B_Urban_Scout,1);
    };

    class TACU_BAF_G_Squad_Urban: TACU_BAF_G_Patrol_Urban {
        name = "Squad";
        MACRO_UNIT0(TACU_BAF_U_B_Urban_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Urban_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Urban_Grenadier,1);
        MACRO_UNIT3(TACU_BAF_U_B_Urban_HeavyGunner,1);
        MACRO_UNIT4(TACU_BAF_U_B_Urban_Demolitions,1);
        MACRO_UNIT5(TACU_BAF_U_B_Urban_LAT,1);
        MACRO_UNIT6(TACU_BAF_U_B_Urban_Marksman,1);
        MACRO_UNIT7(TACU_BAF_U_B_Urban_Scout,1);
    };
};
