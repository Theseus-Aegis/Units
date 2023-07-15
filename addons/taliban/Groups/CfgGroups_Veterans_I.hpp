class TACU_Taliban_Veterans_Infantry_I {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Veterans {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Veterans_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Taliban_Veterans_U_I_Rifleman_03,2);
        MACRO_UNIT1(TACU_Taliban_Veterans_U_I_Rifleman_02,2);
    };

    class TACU_Taliban_G_Fireteam_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Taliban_Veterans_U_I_Leader,2);
        MACRO_UNIT1(TACU_Taliban_Veterans_U_I_Medic,2);
        MACRO_UNIT2(TACU_Taliban_Veterans_U_I_Scout,2);
        MACRO_UNIT3(TACU_Taliban_Veterans_U_I_AT,2);
    };

    class TACU_Taliban_G_ATTeam_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "AT Team";
        MACRO_UNIT0(TACU_Taliban_Veterans_U_I_Leader,2);
        MACRO_UNIT1(TACU_Taliban_Veterans_U_I_AT,2);
        MACRO_UNIT2(TACU_Taliban_Veterans_U_I_AT,2);
        MACRO_UNIT3(TACU_Taliban_Veterans_U_I_Rifleman_03,2);
    };

    class TACU_Taliban_G_Squad_Veterans: TACU_Taliban_G_Patrol_Veterans {
        name = "Squad";
        MACRO_UNIT0(TACU_Taliban_Veterans_U_I_Leader,2);
        MACRO_UNIT1(TACU_Taliban_Veterans_U_I_Medic,2);
        MACRO_UNIT2(TACU_Taliban_Veterans_U_I_Demolitions,2);
        MACRO_UNIT3(TACU_Taliban_Veterans_U_I_Grenadier,2);
        MACRO_UNIT4(TACU_Taliban_Veterans_U_I_Machinegunner,2);
        MACRO_UNIT5(TACU_Taliban_Veterans_U_I_AT,2);
        MACRO_UNIT6(TACU_Taliban_Veterans_U_I_Rifleman_01,2);
        MACRO_UNIT7(TACU_Taliban_Veterans_U_I_Scout,2);
    };
};
