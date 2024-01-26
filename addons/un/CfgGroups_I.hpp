class TACU_UN_G_Autumn_I {
    name = "Infantry (Autumn)";

    class TACU_UN_G_Patrol_Autumn {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_UN_Autumn_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Autumn_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "Fireteam";
        MACRO_UNIT0(TACU_UN_Autumn_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Autumn_U_I_Medic,2);
        MACRO_UNIT2(TACU_UN_Autumn_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_UN_Autumn_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "AT Team";
        MACRO_UNIT0(TACU_UN_Autumn_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Autumn_U_I_AT,2);
        MACRO_UNIT2(TACU_UN_Autumn_U_I_AT,2);
        MACRO_UNIT3(TACU_UN_Autumn_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Autumn: TACU_UN_G_Patrol_Autumn {
        name = "Squad";
        MACRO_UNIT0(TACU_UN_Autumn_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Autumn_U_I_Medic,2);
        MACRO_UNIT2(TACU_UN_Autumn_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_UN_Autumn_U_I_Autorifleman,2);
        MACRO_UNIT4(TACU_UN_Autumn_U_I_Demolitions,2);
        MACRO_UNIT5(TACU_UN_Autumn_U_I_AT,2);
        MACRO_UNIT6(TACU_UN_Autumn_U_I_Marksman,2);
        MACRO_UNIT7(TACU_UN_Autumn_U_I_Rifleman,2);
    };
};

class TACU_UN_G_Urban {
    name = "Infantry (Urban)";

    class TACU_UN_G_Patrol_Urban {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_UN_Urban_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Urban_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Urban: TACU_UN_G_Patrol_Urban {
        name = "Fireteam";
        MACRO_UNIT0(TACU_UN_Urban_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Urban_U_I_Medic,2);
        MACRO_UNIT2(TACU_UN_Urban_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_UN_Urban_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Urban: TACU_UN_G_Patrol_Urban {
        name = "AT Team";
        MACRO_UNIT0(TACU_UN_Urban_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Urban_U_I_AT,2);
        MACRO_UNIT2(TACU_UN_Urban_U_I_AT,2);
        MACRO_UNIT3(TACU_UN_Urban_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Urban: TACU_UN_G_Patrol_Urban {
        name = "Squad";
        MACRO_UNIT0(TACU_UN_Urban_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Urban_U_I_Medic,2);
        MACRO_UNIT2(TACU_UN_Urban_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_UN_Urban_U_I_Autorifleman,2);
        MACRO_UNIT4(TACU_UN_Urban_U_I_Demolitions,2);
        MACRO_UNIT5(TACU_UN_Urban_U_I_AT,2);
        MACRO_UNIT6(TACU_UN_Urban_U_I_Marksman,2);
        MACRO_UNIT7(TACU_UN_Urban_U_I_Rifleman,2);
    };
};

class TACU_UN_G_Woodland {
    name = "Infantry (Woodland)";

    class TACU_UN_G_Patrol_Woodland {
        name = "Patrol";
        side = 2;
        faction = "TACU_UN_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_UN_Woodland_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Woodland_U_I_Rifleman,2);
    };

    class TACU_UN_G_Fireteam_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "Fireteam";
        MACRO_UNIT0(TACU_UN_Woodland_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Woodland_U_I_Medic,2);
        MACRO_UNIT2(TACU_UN_Woodland_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_UN_Woodland_U_I_Marksman,2);
    };

    class TACU_UN_G_ATTeam_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "AT Team";
        MACRO_UNIT0(TACU_UN_Woodland_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Woodland_U_I_AT,2);
        MACRO_UNIT2(TACU_UN_Woodland_U_I_AT,2);
        MACRO_UNIT3(TACU_UN_Woodland_U_I_Rifleman,2);
    };

    class TACU_UN_G_Squad_Woodland: TACU_UN_G_Patrol_Woodland {
        name = "Squad";
        MACRO_UNIT0(TACU_UN_Woodland_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_UN_Woodland_U_I_Medic,2);
        MACRO_UNIT2(TACU_UN_Woodland_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_UN_Woodland_U_I_Autorifleman,2);
        MACRO_UNIT4(TACU_UN_Woodland_U_I_Demolitions,2);
        MACRO_UNIT5(TACU_UN_Woodland_U_I_AT,2);
        MACRO_UNIT6(TACU_UN_Woodland_U_I_Marksman,2);
        MACRO_UNIT7(TACU_UN_Woodland_U_I_Rifleman,2);
    };
};
