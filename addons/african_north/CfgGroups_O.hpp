class TACU_African_North_O {
    name = "Army of the African Republic";

    class TACU_African_North_Infantry_O {
        name = "Infantry";

        class TACU_African_North_Patrol_O {
            name = "Patrol";
            side = 0;
            faction = "TACU_African_North_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_African_North_U_O_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_O_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_African_North_Fireteam_O: TACU_African_North_Patrol_O {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_African_North_U_O_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_O_Medic";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_O_Rifleman";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_O_Grenadier";
                position[] = {10, -10, 0};
            };
        };

        class TACU_African_North_Squad_O: TACU_African_North_Patrol_O {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_African_North_U_O_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_O_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_O_Medic";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_O_Demolitions";
                position[] = {10, -10, 0};
            };
            class unit4: unit1 {
                vehicle = "TACU_African_North_U_O_Machinegunner";
                position[] = {-10, -10, 0};
            };
            class unit5: unit1 {
                vehicle = "TACU_African_North_U_O_Grenadier";
                position[] = {15, -15, 0};
            };
            class unit6: unit1 {
                vehicle = "TACU_African_North_U_O_AT";
                position[] = {-15, -15, 0};
            };
            class unit7: unit1 {
                vehicle = "TACU_African_North_U_O_Marksman";
                position[] = {20, -20, 0};
            };
        };

        class TACU_African_North_AATeam_O: TACU_African_North_Patrol_O {
            name = "AA Team";
            class unit0 {
                vehicle = "TACU_African_North_U_O_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_O_AA";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_O_AA";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_O_Rifleman";
                position[] = {10, -10, 0};
            };
        };

        class TACU_African_North_ATTeam_O: TACU_African_North_Patrol_O {
            name = "AT Team";
            class unit0 {
                vehicle = "TACU_African_North_U_O_Teamleader";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_African_North_U_O_AT";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_African_North_U_O_AT";
                position[] = {-5, -5, 0};
            };
            class unit3: unit1 {
                vehicle = "TACU_African_North_U_O_Rifleman";
                position[] = {10, -10, 0};
            };
        };
    };
};
