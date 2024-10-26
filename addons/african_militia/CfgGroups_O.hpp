class TACU_African_Militia_Infantry_O {
    name = "Infantry";

    class TACU_African_Militia_G_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_Taliban_Militia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_African_Militia_U_O_Rifleman,0);
        MACRO_UNIT1(TACU_African_Militia_U_O_Rifleman_02,0);
    };

    class TACU_African_Militia_G_Fireteam: TACU_African_Militia_G_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_African_Militia_U_O_Teamleader,0);
        MACRO_UNIT1(TACU_African_Militia_U_O_Medic,0);
        MACRO_UNIT2(TACU_African_Militia_U_O_Rifleman_02,0);
        MACRO_UNIT3(TACU_African_Militia_U_O_Machinegunner,0);
    };

    class TACU_African_Militia_G_ATTeam: TACU_African_Militia_G_Patrol {
        name = "AT Team";
        MACRO_UNIT0(TACU_African_Militia_U_O_Teamleader,0);
        MACRO_UNIT1(TACU_African_Militia_U_O_AT,0);
        MACRO_UNIT2(TACU_African_Militia_U_O_AT,0);
        MACRO_UNIT3(TACU_African_Militia_U_O_Rifleman,0);
    };

    class TACU_African_Militia_G_Squad: TACU_African_Militia_G_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_African_Militia_U_O_Teamleader,0);
        MACRO_UNIT1(TACU_African_Militia_U_O_Medic,0);
        MACRO_UNIT2(TACU_African_Militia_U_O_Demolitions,0);
        MACRO_UNIT3(TACU_African_Militia_U_O_Machinegunner,0);
        MACRO_UNIT4(TACU_African_Militia_U_O_Grenadier,0);
        MACRO_UNIT5(TACU_African_Militia_U_O_AT,0);
        MACRO_UNIT6(TACU_African_Militia_U_O_Marksman,0);
        MACRO_UNIT7(TACU_African_Militia_U_O_Repair,0);
    };
};
