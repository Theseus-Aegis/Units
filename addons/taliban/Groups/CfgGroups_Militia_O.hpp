class TACU_Taliban_Militia_Infantry_O {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Militia {
        name = "Patrol";
        side = 0;
        faction = "TACU_Taliban_Militia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Rifleman_01,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Rifleman_03,0);
    };

    class TACU_Taliban_G_Fireteam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Leader,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Medic,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Rifleman_02,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Machinegunner,0);
    };

    class TACU_Taliban_G_ATTeam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Leader,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_AT,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_AT,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Rifleman_01,0);
    };

    class TACU_Taliban_G_Squad_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Leader,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_AT,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Machinegunner,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Demolitions,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Medic,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Grenadier,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Rifleman_03,0);
        GROUP_UNIT(TACU_Taliban_Militia_U_O_Rifleman_01,0);
    };
};
