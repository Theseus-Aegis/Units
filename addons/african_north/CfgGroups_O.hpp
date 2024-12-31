class TACU_African_North_O {
    name = "Northern Africa";

    class TACU_African_North_Infantry_O {
        name = "Infantry";

        class TACU_African_North_G_Patrol {
            name = "Patrol";
            side = 0;
            faction = "TACU_African_North_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_O_Teamleader,0);
            GROUP_UNIT(TACU_African_North_U_O_Rifleman,0);
        };

        class TACU_African_North_G_Fireteam: TACU_African_North_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_O_Teamleader,0);
            GROUP_UNIT(TACU_African_North_U_O_Medic,0);
            GROUP_UNIT(TACU_African_North_U_O_Rifleman,0);
            GROUP_UNIT(TACU_African_North_U_O_Grenadier,0);
        };

        class TACU_African_North_G_Squad: TACU_African_North_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_O_Teamleader,0);
            GROUP_UNIT(TACU_African_North_U_O_Rifleman,0);
            GROUP_UNIT(TACU_African_North_U_O_Medic,0);
            GROUP_UNIT(TACU_African_North_U_O_Demolitions,0);
            GROUP_UNIT(TACU_African_North_U_O_Machinegunner,0);
            GROUP_UNIT(TACU_African_North_U_O_Grenadier,0);
            GROUP_UNIT(TACU_African_North_U_O_AT,0);
            GROUP_UNIT(TACU_African_North_U_O_Marksman,0);
        };

        class TACU_African_North_G_AATeam: TACU_African_North_G_Patrol {
            name = "AA Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_O_Teamleader,0);
            GROUP_UNIT(TACU_African_North_U_O_AA,0);
            GROUP_UNIT(TACU_African_North_U_O_AA,0);
            GROUP_UNIT(TACU_African_North_U_O_Rifleman,0);
        };

        class TACU_African_North_G_ATTeam: TACU_African_North_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_O_Teamleader,0);
            GROUP_UNIT(TACU_African_North_U_O_AT,0);
            GROUP_UNIT(TACU_African_North_U_O_AT,0);
            GROUP_UNIT(TACU_African_North_U_O_Rifleman,0);
        };
    };
};
