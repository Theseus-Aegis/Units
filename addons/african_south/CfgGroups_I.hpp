class TACU_African_South_I {
    name = "Southern Africa";

    class TACU_African_South_Infantry_I {
        name = "Infantry";

        class TACU_African_South_G_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_African_South_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_I_Rifleman,2);
            GROUP_UNIT(TACU_African_South_U_I_CQB,2);
        };

        class TACU_African_South_G_Sniper_Team: TACU_African_South_G_Patrol {
            name = "Sniper Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_I_Sniper,2);
            GROUP_UNIT(TACU_African_South_U_I_Spotter,2);
        };

        class TACU_African_South_G_Fireteam: TACU_African_South_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_I_TL,2);
            GROUP_UNIT(TACU_African_South_U_I_Medic,2);
            GROUP_UNIT(TACU_African_South_U_I_Autorifleman,2);
            GROUP_UNIT(TACU_African_South_U_I_Rifleman,2);
        };

        class TACU_African_South_G_ATTeam: TACU_African_South_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_I_TL,2);
            GROUP_UNIT(TACU_African_South_U_I_AT,2);
            GROUP_UNIT(TACU_African_South_U_I_AT,2);
            GROUP_UNIT(TACU_African_South_U_I_Rifleman,2);
        };

        class TACU_African_South_G_AATeam: TACU_African_South_G_Patrol {
            name = "AA Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_I_TL,2);
            GROUP_UNIT(TACU_African_South_U_I_AA,2);
            GROUP_UNIT(TACU_African_South_U_I_AA,2);
            GROUP_UNIT(TACU_African_South_U_I_Rifleman,2);
        };

        class TACU_African_South_G_Squad: TACU_African_South_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_I_TL,2);
            GROUP_UNIT(TACU_African_South_U_I_Medic,2);
            GROUP_UNIT(TACU_African_South_U_I_Grenadier,2);
            GROUP_UNIT(TACU_African_South_U_I_Machinegunner,2);
            GROUP_UNIT(TACU_African_South_U_I_AT,2);
            GROUP_UNIT(TACU_African_South_U_I_Demolitions,2);
            GROUP_UNIT(TACU_African_South_U_I_CQB,2);
            GROUP_UNIT(TACU_African_South_U_I_Marksman,2);
        };
    };
};
