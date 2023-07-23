class TACU_BAF_G_Desert {
    name = "Group 12 (Sahara Desert)";

    class TACU_BAF_G_Patrol_Desert {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Desert_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Scout,1);
    };
    class TACU_BAF_G_Fireteam_Desert: TACU_BAF_G_Patrol_Desert {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Desert_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Scout,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Marksman,1);
    };
    class TACU_BAF_G_Squad_Desert: TACU_BAF_G_Patrol_Desert {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_BAF_U_B_Desert_TL,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Medic,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Scout,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_HeavyGunner,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Demolitions,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_LAT,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Marksman,1);
        GROUP_UNIT(TACU_BAF_U_B_Desert_Scout,1);
    };
};
