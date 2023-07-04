class TACU_African_North_O {
    name = "Army of the African Republic";

    class TACU_African_North_Infantry_O {
        name = "Infantry";

        class TACU_African_North_Patrol_O {
            name = "Patrol";
            side = 0;
            faction = "TACU_African_North_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_African_North_U_O_Teamleader,0);
            MACRO_UNIT1(TACU_African_North_U_O_Rifleman,0);
        };

        class TACU_African_North_Fireteam_O: TACU_African_North_Patrol_O {
            name = "Fireteam";
            MACRO_UNIT0(TACU_African_North_U_O_Teamleader,0);
            MACRO_UNIT1(TACU_African_North_U_O_Medic,0);
            MACRO_UNIT2(TACU_African_North_U_O_Rifleman,0);
            MACRO_UNIT3(TACU_African_North_U_O_Grenadier,0);
        };

        class TACU_African_North_Squad_O: TACU_African_North_Patrol_O {
            name = "Squad";
            MACRO_UNIT0(TACU_African_North_U_O_Teamleader,0);
            MACRO_UNIT1(TACU_African_North_U_O_Rifleman,0);
            MACRO_UNIT2(TACU_African_North_U_O_Medic,0);
            MACRO_UNIT3(TACU_African_North_U_O_Demolitions,0);
            MACRO_UNIT4(TACU_African_North_U_O_Machinegunner,0);
            MACRO_UNIT5(TACU_African_North_U_O_Grenadier,0);
            MACRO_UNIT6(TACU_African_North_U_O_AT,0);
            MACRO_UNIT7(TACU_African_North_U_O_Marksman,0);
        };

        class TACU_African_North_AATeam_O: TACU_African_North_Patrol_O {
            name = "AA Team";
            MACRO_UNIT0(TACU_African_North_U_O_Teamleader,0);
            MACRO_UNIT1(TACU_African_North_U_O_AA,0);
            MACRO_UNIT2(TACU_African_North_U_O_AA,0);
            MACRO_UNIT3(TACU_African_North_U_O_Rifleman,0);
        };

        class TACU_African_North_ATTeam_O: TACU_African_North_Patrol_O {
            name = "AT Team";
            MACRO_UNIT0(TACU_African_North_U_O_Teamleader,0);
            MACRO_UNIT1(TACU_African_North_U_O_AT,0);
            MACRO_UNIT2(TACU_African_North_U_O_AT,0);
            MACRO_UNIT3(TACU_African_North_U_O_Rifleman,0);
        };
    };
};