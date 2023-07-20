class INDEP {
    class TACU_Vanguard {
        name = "Vanguard PMC";
        class TACU_Vanguard_G_Contractors_Green {
            name = "Contractors (Green)";

            class TACU_Vanguard_G_Patrol_Green {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_01,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_02,2);
            };

            class TACU_Vanguard_G_Fireteam_Green: TACU_Vanguard_G_Patrol_Green {
                name = "Fireteam";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Grenadier,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Medic,2);
            };

            class TACU_Vanguard_G_ATTeam_Green: TACU_Vanguard_G_Patrol_Green {
                name = "AT Team";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_01,2);
            };

            class TACU_Vanguard_G_Squad_Green: TACU_Vanguard_G_Patrol_Green {
                name = "Squad";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_01,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Medic,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Engineer,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Green_Autorifleman,2);
            };
        };
        class TACU_Vanguard_G_Contractors_Sand {
            name = "Contractors (Sand)";

            class TACU_Vanguard_G_Patrol_Sand {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_01,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_02,2);
            };

            class TACU_Vanguard_G_Fireteam_Sand: TACU_Vanguard_G_Patrol_Sand {
                name = "Fireteam";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Grenadier,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Medic,2);
            };

            class TACU_Vanguard_G_ATTeam_Sand: TACU_Vanguard_G_Patrol_Sand {
                name = "AT Team";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_01,2);
            };

            class TACU_Vanguard_G_Squad_Sand: TACU_Vanguard_G_Patrol_Sand {
                name = "Squad";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_01,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Medic,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Engineer,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Sand_Autorifleman,2);
            };
        };

        class TACU_Vanguard_G_Contractors_Winter {
            name = "Contractors (Winter)";

            class TACU_Vanguard_G_Patrol_Winter {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_01,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_02,2);
            };

            class TACU_Vanguard_G_Fireteam_Winter: TACU_Vanguard_G_Patrol_Winter {
                name = "Fireteam";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Grenadier,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Medic,2);
            };

            class TACU_Vanguard_G_ATTeam_Winter: TACU_Vanguard_G_Patrol_Winter {
                name = "AT Team";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_01,2);
            };

            class TACU_Vanguard_G_Squad_Winter: TACU_Vanguard_G_Patrol_Winter {
                name = "Squad";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_01,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Medic,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Rifleman_02,2);
                GROUP_UNIT(TACU_Vanguard_U_Contractor_Winter_Autorifleman,2);
            };
        };

        class TACU_Vanguard_G_Specialists {
            name = "Specialists";

            class TACU_Vanguard_G_Patrol_Specialists {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Grenadier,2);
            };

            class TACU_Vanguard_G_Fireteam_Specialists: TACU_Vanguard_G_Patrol_Specialists {
                name = "Fireteam";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Specialist_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Grenadier,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Medic,2);
            };

            class TACU_Vanguard_G_ATTeam_Specialists: TACU_Vanguard_G_Patrol_Specialists {
                name = "AT Team";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Specialist_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman,2);
            };

            class TACU_Vanguard_G_Squad_Specialists: TACU_Vanguard_G_Patrol_Specialists {
                name = "Squad";
                __COUNTER_RESET__
                GROUP_UNIT(TACU_Vanguard_U_Specialist_TeamLeader,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Rifleman_AT,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Medic,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Marksman,2);
                GROUP_UNIT(TACU_Vanguard_U_Specialist_Autorifleman,2);
            };
        };
    };
};
