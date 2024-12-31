// Autumn Groups
class TACU_UN_G_Autumn_B {
    name = "Infantry (Autumn)";

    class TACU_UN_G_Patrol_Autumn {
        name = "Patrol";
        side = 1;
        faction = "TACU_UN_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Rifleman,1);
    };

    class TACU_UN_G_Fireteam_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Marksman,1);
    };

    class TACU_UN_G_ATTeam_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Rifleman,1);
    };

    class TACU_UN_G_Squad_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_B_Squadleader,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Machinegunner,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Demolitions,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Marksman,1);
        GROUP_UNIT(TACU_UN_Autumn_U_B_Rifleman,1);
    };
};

// Desert Groups
class TACU_UN_G_Desert {
    name = "Infantry (Desert)";

    class TACU_UN_G_Patrol_Desert {
        name = "Patrol";
        side = 1;
        faction = "TACU_UN_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Rifleman,1);
    };

    class TACU_UN_G_Fireteam_Desert: TACU_UN_G_Patrol_Desert {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Marksman,1);
    };

    class TACU_UN_G_ATTeam_Desert: TACU_UN_G_Patrol_Desert {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Rifleman,1);
    };

    class TACU_UN_G_Squad_Desert: TACU_UN_G_Patrol_Desert {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_B_Squadleader,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Machinegunner,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Demolitions,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Marksman,1);
        GROUP_UNIT(TACU_UN_Desert_U_B_Rifleman,1);
    };
};

// Urban Groups
class TACU_UN_G_Urban {
    name = "Infantry (Urban)";

    class TACU_UN_G_Patrol_Urban {
        name = "Patrol";
        side = 1;
        faction = "TACU_UN_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Rifleman,1);
    };

    class TACU_UN_G_Fireteam_Urban: TACU_UN_G_Patrol_Urban {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Marksman,1);
    };

    class TACU_UN_G_ATTeam_Urban: TACU_UN_G_Patrol_Urban {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Rifleman,1);
    };

    class TACU_UN_G_Squad_Urban: TACU_UN_G_Patrol_Urban {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_B_Squadleader,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Machinegunner,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Demolitions,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Marksman,1);
        GROUP_UNIT(TACU_UN_Urban_U_B_Rifleman,1);
    };
};

// Woodland Groups
class TACU_UN_G_Woodland {
    name = "Infantry (Woodland)";

    class TACU_UN_G_Patrol_Woodland {
        name = "Patrol";
        side = 1;
        faction = "TACU_UN_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Rifleman,1);
    };

    class TACU_UN_G_Fireteam_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Marksman,1);
    };

    class TACU_UN_G_ATTeam_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_B_Teamleader,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Rifleman,1);
    };

    class TACU_UN_G_Squad_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_B_Squadleader,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Medic,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Grenadier,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Machinegunner,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Demolitions,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_AT,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Marksman,1);
        GROUP_UNIT(TACU_UN_Woodland_U_B_Rifleman,1);
    };
};
