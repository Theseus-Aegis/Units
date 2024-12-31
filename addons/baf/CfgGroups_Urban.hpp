class TACU_BAF_G_Urban {
    name = "Group 15 (Urban)";

    class TACU_BAF_G_Patrol_Urban {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Urban_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Scout,1);
    };

    class TACU_BAF_G_Fireteam_Urban: TACU_BAF_G_Patrol_Urban {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Urban_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Grenadier,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Marksman,1);
    };

    class TACU_BAF_G_ATTeam_Urban: TACU_BAF_G_Patrol_Urban {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Urban_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Scout,1);
    };

    class TACU_BAF_G_Squad_Urban: TACU_BAF_G_Patrol_Urban {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Urban_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Grenadier,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_HeavyGunner,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Demolitions,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Marksman,1);
        GROUP_UNIT(TACU_BAF_U_B_Urban_Scout,1);
    };
};
