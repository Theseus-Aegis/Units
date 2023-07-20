class TACU_Taliban_Militia_Infantry_I {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Militia {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Militia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Rifleman_01,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Rifleman_03,2);
    };

    class TACU_Taliban_G_Fireteam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Leader,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Medic,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Rifleman_02,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Machinegunner,2);
    };

    class TACU_Taliban_G_ATTeam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Leader,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_AT,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_AT,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Rifleman_01,2);
    };

    class TACU_Taliban_G_Squad_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Leader,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_AT,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Demolitions,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Medic,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Grenadier,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Rifleman_03,2);
        GROUP_UNIT(TACU_Taliban_Militia_U_I_Rifleman_01,2);
    };
};
