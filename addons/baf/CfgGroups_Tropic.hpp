class TACU_BAF_G_Tropic {
    name = "Group 14 (Tropic)";

    class TACU_BAF_G_Patrol_Tropic {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Tropic_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Scout,1);
    };

    class TACU_BAF_G_Sniper_Team_Tropic: TACU_BAF_G_Patrol_Tropic {
        name = "Sniper Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Sniper,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Spotter,1);
    };

    class TACU_BAF_G_Fireteam_Tropic: TACU_BAF_G_Patrol_Tropic {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Tropic_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Grenadier,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Marksman,1);
    };

    class TACU_BAF_G_ATTeam_Tropic: TACU_BAF_G_Patrol_Tropic {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Tropic_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Scout,1);
    };

    class TACU_BAF_G_Squad_Tropic: TACU_BAF_G_Patrol_Tropic {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Tropic_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Grenadier,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_HeavyGunner,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Demolitions,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Marksman,1);
        GROUP_UNIT(TACU_BAF_U_B_Tropic_Scout,1);
    };
};
