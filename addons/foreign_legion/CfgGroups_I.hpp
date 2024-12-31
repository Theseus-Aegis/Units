class TACU_Foreign_Legion_Infantry {
    name = "Infantry";

    class TACU_Foreign_Legion_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Foreign_Legion_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_I_TL,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Rifleman,2);
    };

    class TACU_Foreign_Legion_G_Fireteam: TACU_Foreign_Legion_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_I_TL,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Medic,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Grenadier,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Marksman,2);
    };

    class TACU_Foreign_Legion_G_ATTeam: TACU_Foreign_Legion_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_I_TL,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_AT,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_AT,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Rifleman,2);
    };

    class TACU_Foreign_Legion_G_Squad: TACU_Foreign_Legion_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Foreign_Legion_U_I_TL,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Medic,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Grenadier,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Demolitions,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_AT,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Marksman,2);
        GROUP_UNIT(TACU_Foreign_Legion_U_I_Rifleman,2);
    };
};
