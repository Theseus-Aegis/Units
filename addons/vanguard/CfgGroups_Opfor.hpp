class EAST {
    class TACU_Vanguard_O {
        name = "Vanguard PMC";
        class TACU_Vanguard_G_O_Contractors_Green {
            name = "Contractors (Green)";

            class TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "Patrol";
                side = 0;
                faction = "TACU_Vanguard_O";
                icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_Rifleman_01,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Rifleman_02,0);
            };

            class TACU_Vanguard_G_Contractors_Green_Fireteam: TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Grenadier,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Green_Medic,0);
            };

            class TACU_Vanguard_G_Contractors_Green_ATTeam: TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "AT Team";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Green_Rifleman_01,0);
            };

            class TACU_Vanguard_G_Contractors_Green_Squad: TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Rifleman_01,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Green_Medic,0);
                MACRO_UNIT4(TACU_Vanguard_U_O_Contractor_Green_Engineer,0);
                MACRO_UNIT5(TACU_Vanguard_U_O_Contractor_Green_Autorifleman,0);
            };
        };
        class TACU_Vanguard_G_O_Contractors_Sand {
            name = "Contractors (Sand)";

            class TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Patrol";
                side = 0;
                faction = "TACU_Vanguard_O";
                icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_02,0);
            };

            class TACU_Vanguard_G_Contractors_Sand_Fireteam: TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Grenadier,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Sand_Medic,0);
            };

            class TACU_Vanguard_G_Contractors_Sand_ATTeam: TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "AT Team";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
            };

            class TACU_Vanguard_G_Contractors_Sand_Squad: TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Sand_Medic,0);
                MACRO_UNIT4(TACU_Vanguard_U_O_Contractor_Sand_Engineer,0);
                MACRO_UNIT5(TACU_Vanguard_U_O_Contractor_Sand_Autorifleman,0);
            };
        };

        class TACU_Vanguard_G_O_Contractors_Winter {
            name = "Contractors (Winter)";

            class TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Patrol";
                side = 0;
                faction = "TACU_Vanguard_O";
                icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02,0);
            };

            class TACU_Vanguard_G_Contractors_Winter_Fireteam: TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Grenadier,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Winter_Medic,0);
            };

            class TACU_Vanguard_G_Contractors_Winter_ATTeam: TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "AT Team";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
            };

            class TACU_Vanguard_G_Contractors_Winter_Squad: TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Winter_Medic,0);
                MACRO_UNIT4(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02,0);
                MACRO_UNIT5(TACU_Vanguard_U_O_Contractor_Winter_Autorifleman,0);
            };
        };

        class TACU_Vanguard_G_O_Specialists {
            name = "Specialists";

            class TACU_Vanguard_G_Specialists_Patrol {
                name = "Patrol";
                side = 0;
                faction = "TACU_Vanguard_O";
                icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_Rifleman,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Grenadier,0);
            };

            class TACU_Vanguard_G_Specialists_Fireteam: TACU_Vanguard_G_Specialists_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Grenadier,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Specialist_Medic,0);
            };

            class TACU_Vanguard_G_Specialists_ATTeam: TACU_Vanguard_G_Specialists_Patrol {
                name = "AT Team";
                MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Specialist_Rifleman,0);
            };

            class TACU_Vanguard_G_Specialists_Squad: TACU_Vanguard_G_Specialists_Patrol {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_TeamLeader,0);
                MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Rifleman,0);
                MACRO_UNIT2(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
                MACRO_UNIT3(TACU_Vanguard_U_O_Specialist_Medic,0);
                MACRO_UNIT4(TACU_Vanguard_U_O_Specialist_Marksman,0);
                MACRO_UNIT5(TACU_Vanguard_U_O_Specialist_Autorifleman,0);
            };
        };
    };
};
