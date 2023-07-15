class TACU_African_South_O {
    name = "South Africa";

    class TACU_African_South_Infantry_O {
        name = "Infantry";

        class TACU_African_South_Patrol {
            name = "Patrol";
            side = 0;
            faction = "TACU_African_North_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_South_U_O_Rifleman,0);
            MACRO_UNIT1(TACU_African_South_U_O_CQB,0);
        };

        class TACU_African_South_Sniper_Team: TACU_African_South_Patrol {
            name = "Sniper Team";
            MACRO_UNIT0(TACU_African_South_U_O_Sniper,0);
            MACRO_UNIT1(TACU_African_South_U_O_Spotter,0);
        };

        class TACU_African_South_Fireteam: TACU_African_South_Patrol {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_Medic,0);
            MACRO_UNIT2(TACU_African_South_U_O_Autorifleman,0);
            MACRO_UNIT3(TACU_African_South_U_O_Rifleman,0);
        };

        class TACU_African_South_AT: TACU_African_South_Patrol {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_AT,0);
            MACRO_UNIT2(TACU_African_South_U_O_AT,0);
            MACRO_UNIT3(TACU_African_South_U_O_Rifleman,0);
        };

        class TACU_African_South_AA: TACU_African_South_Patrol {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_South_U_O_TL,0);
            MACRO_UNIT1(TACU_African_South_U_O_AA,0);
            MACRO_UNIT2(TACU_African_South_U_O_AA,0);
            MACRO_UNIT3(TACU_African_South_U_O_Rifleman,0);
        };

        class TACU_African_South_Squad: TACU_African_South_Patrol {
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
