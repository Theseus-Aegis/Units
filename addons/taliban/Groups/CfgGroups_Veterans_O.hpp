class TACU_Taliban_Veterans_Infantry_O {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Veterans {
        name = "Patrol";
        side = 0;
        faction = "TACU_Taliban_Veterans_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Rifleman_03,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Rifleman_02,0);
    };

    class TACU_Taliban_G_Fireteam_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Leader,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Medic,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Scout,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_AT,0);
    };

    class TACU_Taliban_G_ATTeam_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Leader,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_AT,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_AT,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Rifleman_03,0);
    };

    class TACU_Taliban_G_Squad_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Leader,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Medic,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Demolitions,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Grenadier,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Machinegunner,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_AT,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Rifleman_01,0);
        GROUP_UNIT(TACU_Taliban_Veterans_U_O_Scout,0);
    };
};
