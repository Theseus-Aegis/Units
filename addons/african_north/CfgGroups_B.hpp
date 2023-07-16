class TACU_African_North_B {
    name = "Army of the African Republic";

    class TACU_African_North_Infantry {
        name = "Infantry";

        class TACU_African_North_G_Patrol {
            name = "Patrol";
            side = 1;
            faction = "TACU_African_North_B";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_North_U_B_Teamleader,1);
            MACRO_UNIT1(TACU_African_North_U_B_Rifleman,1);
        };

        class TACU_African_North_G_Fireteam: TACU_African_North_G_Patrol {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_North_U_B_Teamleader,1);
            MACRO_UNIT1(TACU_African_North_U_B_Medic,1);
            MACRO_UNIT2(TACU_African_North_U_B_Rifleman,1);
            MACRO_UNIT3(TACU_African_North_U_B_Grenadier,1);
        };

        class TACU_African_North_G_Squad: TACU_African_North_G_Patrol {
            name = "Squad";
            MACRO_UNIT0(TACU_African_North_U_B_Teamleader,1);
            MACRO_UNIT1(TACU_African_North_U_B_Rifleman,1);
            MACRO_UNIT2(TACU_African_North_U_B_Medic,1);
            MACRO_UNIT3(TACU_African_North_U_B_Demolitions,1);
            MACRO_UNIT4(TACU_African_North_U_B_Machinegunner,1);
            MACRO_UNIT5(TACU_African_North_U_B_Grenadier,1);
            MACRO_UNIT6(TACU_African_North_U_B_AT,1);
            MACRO_UNIT7(TACU_African_North_U_B_Marksman,1);
        };

        class TACU_African_North_G_AATeam: TACU_African_North_G_Patrol {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_North_U_B_Teamleader,1);
            MACRO_UNIT1(TACU_African_North_U_B_AA,1);
            MACRO_UNIT2(TACU_African_North_U_B_AA,1);
            MACRO_UNIT3(TACU_African_North_U_B_Rifleman,1);
        };

        class TACU_African_North_G_ATTeam: TACU_African_North_G_Patrol {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_North_U_B_Teamleader,1);
            MACRO_UNIT1(TACU_African_North_U_B_AT,1);
            MACRO_UNIT2(TACU_African_North_U_B_AT,1);
            MACRO_UNIT3(TACU_African_North_U_B_Rifleman,1);
        };
    };
};
