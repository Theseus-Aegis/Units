class TACU_African_South_O {
    name = "South Africa";

    class TACU_African_South_Infantry_O {
        name = "Infantry";

        class TACU_African_South_Patrol_O {
            name = "Patrol";
            side = 0;
            faction = "TACU_African_North_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_South_U_O_Rifleman,0);
            MACRO_UNIT1(TACU_African_South_U_O_CQB,0);
        };

        class TACU_African_South_Sniper_Team_O: TACU_African_South_Patrol_O {
            name = "Sniper Team";
            MACRO_UNIT0(TACU_African_South_U_O_Sniper,0);
            MACRO_UNIT1(TACU_African_South_U_O_Spotter,0);
        };

        class TACU_African_South_Fireteam_O: TACU_African_South_Patrol_O {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_Medic,0);
            MACRO_UNIT2(TACU_African_South_U_O_Autorifleman,0);
            MACRO_UNIT3(TACU_African_South_U_O_Rifleman,0);
        };

        class TACU_African_South_AT_O: TACU_African_South_Patrol_O {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_AT,0);
            MACRO_UNIT2(TACU_African_South_U_O_AT,0);
            MACRO_UNIT3(TACU_African_South_U_O_Rifleman,0);
        };

        class TACU_African_South_AA_O: TACU_African_South_Patrol_O {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_AA,0);
            MACRO_UNIT2(TACU_African_South_U_O_AA,0);
            MACRO_UNIT3(TACU_African_South_U_O_Rifleman,0);
        };

        class TACU_African_South_Squad_O: TACU_African_South_Patrol_O {
            name = "Squad";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_Medic,0);
            MACRO_UNIT2(TACU_African_South_U_O_Grenadier,0);
            MACRO_UNIT3(TACU_African_South_U_O_Machinegunner,0);
            MACRO_UNIT4(TACU_African_South_U_O_AT,0);
            MACRO_UNIT5(TACU_African_South_U_O_Demolitions,0);
            MACRO_UNIT6(TACU_African_South_U_O_CQB,0);
            MACRO_UNIT7(TACU_African_South_U_O_Marksman,0);
        };
    };
};
