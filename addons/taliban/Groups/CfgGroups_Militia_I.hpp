class TACU_Taliban_Militia_Infantry_I {
    name = "Infantry";

    class TACU_Taliban_G_Patrol_Militia {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Militia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Taliban_Militia_U_I_Rifleman_01,2);
        MACRO_UNIT1(TACU_Taliban_Militia_U_I_Rifleman_03,2);
    };

    class TACU_Taliban_G_Fireteam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Taliban_Militia_U_I_Leader,2);
        MACRO_UNIT1(TACU_Taliban_Militia_U_I_Medic,2);
        MACRO_UNIT2(TACU_Taliban_Militia_U_I_Rifleman_02,2);
        MACRO_UNIT3(TACU_Taliban_Militia_U_I_Machinegunner,2);
    };

    class TACU_Taliban_G_ATTeam_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "AT Team";
        MACRO_UNIT0(TACU_Taliban_Militia_U_I_Leader,2);
        MACRO_UNIT1(TACU_Taliban_Militia_U_I_AT,2);
        MACRO_UNIT2(TACU_Taliban_Militia_U_I_AT,2);
        MACRO_UNIT3(TACU_Taliban_Militia_U_I_Rifleman_01,2);
    };

    class TACU_Taliban_G_Squad_Militia: TACU_Taliban_G_Patrol_Militia {
        name = "Squad";
        MACRO_UNIT0(TACU_Taliban_Militia_U_I_Leader,2);
        MACRO_UNIT1(TACU_Taliban_Militia_U_I_AT,2);
        MACRO_UNIT2(TACU_Taliban_Militia_U_I_Machinegunner,2);
        MACRO_UNIT3(TACU_Taliban_Militia_U_I_Demolitions,2);
        MACRO_UNIT4(TACU_Taliban_Militia_U_I_Medic,2);
        MACRO_UNIT5(TACU_Taliban_Militia_U_I_Grenadier,2);
        MACRO_UNIT6(TACU_Taliban_Militia_U_I_Rifleman_03,2);
        MACRO_UNIT7(TACU_Taliban_Militia_U_I_Rifleman_01,2);
    };
};
