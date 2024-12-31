class TACU_Taliban_Veterans_Infantry_I {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Veterans {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Veterans_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Rifleman_03,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Rifleman_02,2);
    };

    class TACU_Taliban_G_Fireteam_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Leader,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Medic,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Scout,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_AT,2);
    };

    class TACU_Taliban_G_ATTeam_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Leader,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_AT,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_AT,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Rifleman_03,2);
    };

    class TACU_Taliban_G_Squad_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Leader,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Medic,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Demolitions,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Grenadier,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_AT,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Rifleman_01,2);
        GROUP_UNIT(TACU_Taliban_Veterans_U_I_Scout,2);
    };
};
