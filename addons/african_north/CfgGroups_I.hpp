class TACU_African_North_I {
    name = "Northern Africa";

    class TACU_African_North_Infantry_I {
        name = "Infantry";

        class TACU_African_North_G_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_African_North_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_I_Teamleader,2);
            GROUP_UNIT(TACU_African_North_U_I_Rifleman,2);
        };

        class TACU_African_North_G_Fireteam: TACU_African_North_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_I_Teamleader,2);
            GROUP_UNIT(TACU_African_North_U_I_Medic,2);
            GROUP_UNIT(TACU_African_North_U_I_Rifleman,2);
            GROUP_UNIT(TACU_African_North_U_I_Grenadier,2);
        };

        class TACU_African_North_G_Squad: TACU_African_North_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_I_Teamleader,2);
            GROUP_UNIT(TACU_African_North_U_I_Rifleman,2);
            GROUP_UNIT(TACU_African_North_U_I_Medic,2);
            GROUP_UNIT(TACU_African_North_U_I_Demolitions,2);
            GROUP_UNIT(TACU_African_North_U_I_Machinegunner,2);
            GROUP_UNIT(TACU_African_North_U_I_Grenadier,2);
            GROUP_UNIT(TACU_African_North_U_I_AT,2);
            GROUP_UNIT(TACU_African_North_U_I_Marksman,2);
        };

        class TACU_African_North_G_AATeam: TACU_African_North_G_Patrol {
            name = "AA Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_I_Teamleader,2);
            GROUP_UNIT(TACU_African_North_U_I_AA,2);
            GROUP_UNIT(TACU_African_North_U_I_AA,2);
            GROUP_UNIT(TACU_African_North_U_I_Rifleman,2);
        };

        class TACU_African_North_G_ATTeam: TACU_African_North_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_African_North_U_I_Teamleader,2);
            GROUP_UNIT(TACU_African_North_U_I_AT,2);
            GROUP_UNIT(TACU_African_North_U_I_AT,2);
            GROUP_UNIT(TACU_African_North_U_I_Rifleman,2);
        };
    };
};
