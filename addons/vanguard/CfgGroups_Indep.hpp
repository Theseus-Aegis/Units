class INDEP {
    class TACU_Vanguard {
        name = "Vanguard PMC";
        class TACU_Vanguard_G_Contractors_Green {
            name = "Contractors (Green)";

            class TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Rifleman_01";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Rifleman_02";
                    side = 2;
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
            };

            class TACU_Vanguard_G_Contractors_Green_Fireteam: TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "Fireteam";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Grenadier";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Medic";
                    position[] = {10, -10, 0};
                };
            };

            class TACU_Vanguard_G_Contractors_Green_Squad: TACU_Vanguard_G_Contractors_Green_Fireteam {
                name = "Squad";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Rifleman_01";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Medic";
                    position[] = {10, -10, 0};
                };
                class unit4: unit3 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Engineer";
                    position[] = {-10, -10, 0};
                };
                class unit5: unit4 {
                    vehicle = "TACU_Vanguard_U_Contractor_Green_Autorifleman";
                    position[] = {15, -15, 0};
                };
            };
        };
        class TACU_Vanguard_G_Contractors_Sand {
            name = "Contractors (Sand)";

            class TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Rifleman_01";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Rifleman_02";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
            };

            class TACU_Vanguard_G_Contractors_Sand_Fireteam: TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Fireteam";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Grenadier";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Medic";
                    position[] = {10, -10, 0};
                };
            };

            class TACU_Vanguard_G_Contractors_Sand_Squad: TACU_Vanguard_G_Contractors_Sand_Fireteam {
                name = "Squad";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Rifleman_01";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Medic";
                    position[] = {10, -10, 0};
                };
                class unit4: unit3 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Engineer";
                    position[] = {-10, -10, 0};
                };
                class unit5: unit4 {
                    vehicle = "TACU_Vanguard_U_Contractor_Sand_Autorifleman";
                    position[] = {15, -15, 0};
                };
            };
        };
        /*
        class TACU_Vanguard_G_Contractors_Winter {
            name = "Contractors (Winter)";

            class TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Rifleman_01";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Rifleman_02";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
            };

            class TACU_Vanguard_G_Contractors_Winter_Fireteam: TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Fireteam";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Grenadier";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Medic";
                    position[] = {10, -10, 0};
                };
            };

            class TACU_Vanguard_G_Contractors_Winter_Squad: TACU_Vanguard_G_Contractors_Winter_Fireteam {
                name = "Squad";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Rifleman_01";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Medic";
                    position[] = {10, -10, 0};
                };
                class unit4: unit3 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Rifleman_02";
                    position[] = {-10, -10, 0};
                };
                class unit5: unit4 {
                    vehicle = "TACU_Vanguard_U_Contractor_Winter_Autorifleman";
                    position[] = {15, -15, 0};
                };
            };
        };
        */
        class TACU_Vanguard_G_Specialists {
            name = "Specialists";

            class TACU_Vanguard_G_Specialists_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Specialist_Rifleman";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Specialist_Grenadier";
                    rank = "PRIVATE";
                    position[] = {5,-5,0};
                };
            };

            class TACU_Vanguard_G_Specialists_Fireteam: TACU_Vanguard_G_Specialists_Patrol {
                name = "Fireteam";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Specialist_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Specialist_Grenadier";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Specialist_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Specialist_Medic";
                    position[] = {10, -10, 0};
                };
            };

            class TACU_Vanguard_G_Specialists_Squad: TACU_Vanguard_G_Specialists_Fireteam {
                name = "Squad";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                class unit0 {
                    vehicle = "TACU_Vanguard_U_Specialist_TeamLeader";
                    side = 2;
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };
                class unit1: unit0 {
                    vehicle = "TACU_Vanguard_U_Specialist_Rifleman";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };
                class unit2: unit1 {
                    vehicle = "TACU_Vanguard_U_Specialist_Rifleman_AT";
                    position[] = {-5, -5, 0};
                };
                class unit3: unit2 {
                    vehicle = "TACU_Vanguard_U_Specialist_Medic";
                    position[] = {10, -10, 0};
                };
                class unit4: unit3 {
                    vehicle = "TACU_Vanguard_U_Specialist_Marksman";
                    position[] = {-10, -10, 0};
                };
                class unit5: unit4 {
                    vehicle = "TACU_Vanguard_U_Specialist_Autorifleman";
                    position[] = {15, -15, 0};
                };
            };
        };
    };
};
