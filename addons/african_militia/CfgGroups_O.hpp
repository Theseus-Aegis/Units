class TACU_African_Militia_Infantry_O {
    name = "Infantry";

    class TACU_African_Militia_G_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_Taliban_Militia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_African_Militia_U_O_Rifleman,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Rifleman_02,0);
    };

    class TACU_African_Militia_G_Fireteam: TACU_African_Militia_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_African_Militia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Medic,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Rifleman_02,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Machinegunner,0);
    };

    class TACU_African_Militia_G_ATTeam: TACU_African_Militia_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_African_Militia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_African_Militia_U_O_AT,0);
        GROUP_UNIT(TACU_African_Militia_U_O_AT,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Rifleman,0);
    };

    class TACU_African_Militia_G_Squad: TACU_African_Militia_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_African_Militia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Medic,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Demolitions,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Machinegunner,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Grenadier,0);
        GROUP_UNIT(TACU_African_Militia_U_O_AT,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Marksman,0);
        GROUP_UNIT(TACU_African_Militia_U_O_Repair,0);
    };
};
