// Autumn Groups
class TACU_UN_G_Autumn_I {
    name = "Infantry (Autumn)";

    class TACU_UN_G_Patrol_Autumn {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Autumn_U_I_Squadleader,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Demolitions,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Marksman,2);
        GROUP_UNIT(TACU_UN_Autumn_U_I_Rifleman,2);
    };
};

// Desert Groups
class TACU_UN_G_Desert_I {
    name = "Infantry (Desert)";

    class TACU_UN_G_Patrol_Desert {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Desert: TACU_UN_G_Patrol_Desert {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Desert: TACU_UN_G_Patrol_Desert {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Desert: TACU_UN_G_Patrol_Desert {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Desert_U_I_Squadleader,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Demolitions,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Marksman,2);
        GROUP_UNIT(TACU_UN_Desert_U_I_Rifleman,2);
    };
};

// Urban Groups
class TACU_UN_G_Urban {
    name = "Infantry (Urban)";

    class TACU_UN_G_Patrol_Urban {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Urban: TACU_UN_G_Patrol_Urban {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Urban: TACU_UN_G_Patrol_Urban {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Urban: TACU_UN_G_Patrol_Urban {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Urban_U_I_Squadleader,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Demolitions,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Marksman,2);
        GROUP_UNIT(TACU_UN_Urban_U_I_Rifleman,2);
    };
};

// Woodland Groups
class TACU_UN_G_Woodland {
    name = "Infantry (Woodland)";

    class TACU_UN_G_Patrol_Woodland {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_I_Teamleader,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_UN_Woodland_U_I_Squadleader,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Medic,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Grenadier,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Demolitions,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_AT,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Marksman,2);
        GROUP_UNIT(TACU_UN_Woodland_U_I_Rifleman,2);
    };
};
