class TACU_African_South_B {
    name = "Southern Africa";

    class TACU_African_South_Infantry_B {
        name = "Infantry";

        class TACU_African_South_G_Patrol {
            name = "Patrol";
            side = 1;
            faction = "TACU_African_South_B";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_B_Rifleman,1);
            GROUP_UNIT(TACU_African_South_U_B_CQB,1);
        };

        class TACU_African_South_G_Sniper_Team: TACU_African_South_G_Patrol {
            name = "Sniper Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_B_Sniper,1);
            GROUP_UNIT(TACU_African_South_U_B_Spotter,1);
        };

        class TACU_African_South_G_Fireteam: TACU_African_South_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_B_TL,1);
            GROUP_UNIT(TACU_African_South_U_B_Medic,1);
            GROUP_UNIT(TACU_African_South_U_B_Autorifleman,1);
            GROUP_UNIT(TACU_African_South_U_B_Rifleman,1);
        };

        class TACU_African_South_G_ATTeam: TACU_African_South_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_B_TL,1);
            GROUP_UNIT(TACU_African_South_U_B_AT,1);
            GROUP_UNIT(TACU_African_South_U_B_AT,1);
            GROUP_UNIT(TACU_African_South_U_B_Rifleman,1);
        };

        class TACU_African_South_G_AATeam: TACU_African_South_G_Patrol {
            name = "AA Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_B_TL,1);
            GROUP_UNIT(TACU_African_South_U_B_AA,1);
            GROUP_UNIT(TACU_African_South_U_B_AA,1);
            GROUP_UNIT(TACU_African_South_U_B_Rifleman,1);
        };

        class TACU_African_South_G_Squad: TACU_African_South_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_South_U_B_TL,1);
            GROUP_UNIT(TACU_African_South_U_B_Medic,1);
            GROUP_UNIT(TACU_African_South_U_B_Grenadier,1);
            GROUP_UNIT(TACU_African_South_U_B_Machinegunner,1);
            GROUP_UNIT(TACU_African_South_U_B_AT,1);
            GROUP_UNIT(TACU_African_South_U_B_Demolitions,1);
            GROUP_UNIT(TACU_African_South_U_B_CQB,1);
            GROUP_UNIT(TACU_African_South_U_B_Marksman,1);
        };
    };
};
