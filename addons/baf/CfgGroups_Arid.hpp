class TACU_BAF_G_Arid {
    name = "Group 13 (Arid)";

    class TACU_BAF_G_Patrol_Arid {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_BAF_U_B_Arid_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Arid_Scout,1);
    };

    class TACU_BAF_G_Sniper_Team_Arid: TACU_BAF_G_Patrol_Arid {
        name = "Sniper Team";
        MACRO_UNIT0(TACU_BAF_U_B_Arid_Sniper,1);
        MACRO_UNIT1(TACU_BAF_U_B_Arid_Spotter,1);
    };

    class TACU_BAF_G_Fireteam_Arid: TACU_BAF_G_Patrol_Arid {
        name = "Fireteam";
        MACRO_UNIT0(TACU_BAF_U_B_Arid_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Arid_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Arid_Grenadier,1);
        MACRO_UNIT3(TACU_BAF_U_B_Arid_Marksman,1);
    };

    class TACU_BAF_G_ATTeam_Arid: TACU_BAF_G_Patrol_Arid {
        name = "AT Team";
        MACRO_UNIT0(TACU_BAF_U_B_Arid_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Arid_LAT,1);
        MACRO_UNIT2(TACU_BAF_U_B_Arid_LAT,1);
        MACRO_UNIT3(TACU_BAF_U_B_Arid_Scout,1);
    };

    class TACU_BAF_G_Squad_Arid: TACU_BAF_G_Patrol_Arid {
        name = "Squad";
        MACRO_UNIT0(TACU_BAF_U_B_Arid_TL,1);
        MACRO_UNIT1(TACU_BAF_U_B_Arid_Medic,1);
        MACRO_UNIT2(TACU_BAF_U_B_Arid_Grenadier,1);
        MACRO_UNIT3(TACU_BAF_U_B_Arid_HeavyGunner,1);
        MACRO_UNIT4(TACU_BAF_U_B_Arid_Demolitions,1);
        MACRO_UNIT5(TACU_BAF_U_B_Arid_LAT,1);
        MACRO_UNIT6(TACU_BAF_U_B_Arid_Marksman,1);
        MACRO_UNIT7(TACU_BAF_U_B_Arid_Scout,1);
    };
};
