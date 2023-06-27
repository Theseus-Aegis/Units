class TACU_African_North_I {
    name = "Army of the African Republic";

    class TACU_African_North_Infantry_I {
        name = "Infantry";

        class TACU_African_North_Patrol_I {
            name = "Patrol";
            side = 2;
            faction = "TACU_African_North_B";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_African_North_U_I_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_I_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_African_North_Fireteam_I: TACU_African_North_Patrol_I {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_African_North_U_I_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_I_Medic";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_I_Rifleman";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_I_Grenadier";
                position[] = {10, -10, 0};
            };
        };

        class TACU_African_North_Squad_I: TACU_African_North_Patrol_I {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_African_North_U_I_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_I_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_I_Medic";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_I_Demolitions";
                position[] = {10, -10, 0};
            };
            class unit4: unit1 {
                vehicle = "TACU_African_North_U_I_Machinegunner";
                position[] = {-10, -10, 0};
            };
            class unit5: unit1 {
                vehicle = "TACU_African_North_U_I_Grenadier";
                position[] = {15, -15, 0};
            };
            class unit6: unit1 {
                vehicle = "TACU_African_North_U_I_AT";
                position[] = {-15, -15, 0};
            };
            class unit7: unit1 {
                vehicle = "TACU_African_North_U_I_Marksman";
                position[] = {20, -20, 0};
            };
        };

        class TACU_African_North_AATeam_I: TACU_African_North_Patrol_I {
            name = "AA Team";
            class unit0 {
                vehicle = "TACU_African_North_U_I_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_I_AA";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_I_AA";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_I_Rifleman";
                position[] = {10, -10, 0};
            };
        };

        class TACU_African_North_ATTeam_I: TACU_African_North_Patrol_I {
            name = "AT Team";
            class unit0 {
                vehicle = "TACU_African_North_U_I_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_I_AT";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_I_AT";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_I_Rifleman";
                position[] = {10, -10, 0};
            };
        };
    };
};
