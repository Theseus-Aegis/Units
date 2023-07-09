class TACU_African_South_B {
    name = "South Africa";

    class TACU_African_South_Infantry_B {
        name = "Infantry";

        class TACU_African_South_Patrol_B {
            name = "Patrol";
            side = 1;
            faction = "TACU_African_North_B";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_South_U_B_Rifleman,1);
            MACRO_UNIT1(TACU_African_South_U_B_CQB,1);
        };

        class TACU_African_South_Sniper_Team_B: TACU_African_South_Patrol_B {
            name = "Sniper Team";
            MACRO_UNIT0(TACU_African_South_U_B_Sniper,1);
            MACRO_UNIT1(TACU_African_South_U_B_Spotter,1);
        };

        class TACU_African_South_Fireteam_B: TACU_African_South_Patrol_B {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_South_U_B_TL,1);
            MACRO_UNIT1(TACU_African_South_U_B_Medic,1);
            MACRO_UNIT2(TACU_African_South_U_B_Autorifleman,1);
            MACRO_UNIT3(TACU_African_South_U_B_Rifleman,1);
        };

        class TACU_African_South_AT_B: TACU_African_South_Patrol_B {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_South_U_B_TL,1);
            MACRO_UNIT1(TACU_African_South_U_B_AT,1);
            MACRO_UNIT2(TACU_African_South_U_B_AT,1);
            MACRO_UNIT3(TACU_African_South_U_B_Rifleman,1);
        };

        class TACU_African_South_AA_B: TACU_African_South_Patrol_B {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_South_U_B_TL,1);
            MACRO_UNIT1(TACU_African_South_U_B_AA,1);
            MACRO_UNIT2(TACU_African_South_U_B_AA,1);
            MACRO_UNIT3(TACU_African_South_U_B_Rifleman,1);
        };

        class TACU_African_South_Squad_B: TACU_African_South_Patrol_B {
            name = "Squad";
            MACRO_UNIT0(TACU_African_South_U_B_TL,1);
            MACRO_UNIT1(TACU_African_South_U_B_Medic,1);
            MACRO_UNIT2(TACU_African_South_U_B_Grenadier,1);
            MACRO_UNIT3(TACU_African_South_U_B_Machinegunner,1);
            MACRO_UNIT4(TACU_African_South_U_B_AT,1);
            MACRO_UNIT5(TACU_African_South_U_B_Demolitions,1);
            MACRO_UNIT6(TACU_African_South_U_B_CQB,1);
            MACRO_UNIT7(TACU_African_South_U_B_Marksman,1);
        };
    };
};
