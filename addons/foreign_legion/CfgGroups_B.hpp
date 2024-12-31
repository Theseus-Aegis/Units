class TACU_Foreign_Legion_Infantry {
    name = "Infantry";

    class TACU_Foreign_Legion_G_Patrol {
        name = "Patrol";
        side = 1;
        faction = "TACU_Foreign_Legion_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_B_TL,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Rifleman,1);
    };

    class TACU_Foreign_Legion_G_Fireteam: TACU_Foreign_Legion_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_B_TL,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Medic,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Grenadier,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Marksman,1);
    };

    class TACU_Foreign_Legion_G_ATTeam: TACU_Foreign_Legion_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_B_TL,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_AT,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_AT,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Rifleman,1);
    };

    class TACU_Foreign_Legion_G_Squad: TACU_Foreign_Legion_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_B_TL,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Medic,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Grenadier,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Machinegunner,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Demolitions,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_AT,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Marksman,1);
        GROUP_UNIT(TACU_Foreign_Legion_U_B_Rifleman,1);
    };
};
