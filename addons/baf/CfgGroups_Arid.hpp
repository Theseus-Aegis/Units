class TACU_BAF_G_Arid {
    name = "Group 13 (Arid)";

    class TACU_BAF_G_Patrol_Arid {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Arid_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Scout,1);
    };

    class TACU_BAF_G_Sniper_Team_Arid: TACU_BAF_G_Patrol_Arid {
        name = "Sniper Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Arid_Sniper,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Spotter,1);
    };

    class TACU_BAF_G_Fireteam_Arid: TACU_BAF_G_Patrol_Arid {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Arid_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Grenadier,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Marksman,1);
    };

    class TACU_BAF_G_ATTeam_Arid: TACU_BAF_G_Patrol_Arid {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Arid_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Scout,1);
    };

    class TACU_BAF_G_Squad_Arid: TACU_BAF_G_Patrol_Arid {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Arid_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Grenadier,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_HeavyGunner,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Demolitions,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Marksman,1);
        GROUP_UNIT(TACU_BAF_U_B_Arid_Scout,1);
    };
};
