class TACU_African_South_I {
    name = "Southern Africa";

    class TACU_African_South_Infantry_I {
        name = "Infantry";

        class TACU_African_South_G_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_African_South_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_South_U_I_Rifleman,2);
            MACRO_UNIT1(TACU_African_South_U_I_CQB,2);
        };

        class TACU_African_South_G_Sniper_Team: TACU_African_South_G_Patrol {
            name = "Sniper Team";
            MACRO_UNIT0(TACU_African_South_U_I_Sniper,2);
            MACRO_UNIT1(TACU_African_South_U_I_Spotter,2);
        };

        class TACU_African_South_G_Fireteam: TACU_African_South_G_Patrol {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_South_U_I_TL,2);
            MACRO_UNIT1(TACU_African_South_U_I_Medic,2);
            MACRO_UNIT2(TACU_African_South_U_I_Autorifleman,2);
            MACRO_UNIT3(TACU_African_South_U_I_Rifleman,2);
        };

        class TACU_African_South_G_ATTeam: TACU_African_South_G_Patrol {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_South_U_I_TL,2);
            MACRO_UNIT1(TACU_African_South_U_I_AT,2);
            MACRO_UNIT2(TACU_African_South_U_I_AT,2);
            MACRO_UNIT3(TACU_African_South_U_I_Rifleman,2);
        };

        class TACU_African_South_G_AATeam: TACU_African_South_G_Patrol {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_South_U_I_TL,2);
            MACRO_UNIT1(TACU_African_South_U_I_AA,2);
            MACRO_UNIT2(TACU_African_South_U_I_AA,2);
            MACRO_UNIT3(TACU_African_South_U_I_Rifleman,2);
        };

        class TACU_African_South_G_Squad: TACU_African_South_G_Patrol {
            name = "Squad";
            MACRO_UNIT0(TACU_African_South_U_I_TL,2);
            MACRO_UNIT1(TACU_African_South_U_I_Medic,2);
            MACRO_UNIT2(TACU_African_South_U_I_Grenadier,2);
            MACRO_UNIT3(TACU_African_South_U_I_Machinegunner,2);
            MACRO_UNIT4(TACU_African_South_U_I_AT,2);
            MACRO_UNIT5(TACU_African_South_U_I_Demolitions,2);
            MACRO_UNIT6(TACU_African_South_U_I_CQB,2);
            MACRO_UNIT7(TACU_African_South_U_I_Marksman,2);
        };
    };
};
