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
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Green_Rifleman_01,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Green_Rifleman_02,2);
            };

            class TACU_Vanguard_G_Contractors_Green_Fireteam: TACU_Vanguard_G_Contractors_Green_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Green_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Green_Grenadier,2);
                MACRO_UNIT2(TACU_Vanguard_U_Contractor_Green_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Contractor_Green_Medic,2);
            };

            class TACU_Vanguard_G_Contractors_Green_Squad: TACU_Vanguard_G_Contractors_Green_Fireteam {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Green_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Green_Rifleman_01,2);
                MACRO_UNIT2(TACU_Vanguard_U_Contractor_Green_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Contractor_Green_Medic,2);
                MACRO_UNIT4(TACU_Vanguard_U_Contractor_Green_Engineer,2);
                MACRO_UNIT5(TACU_Vanguard_U_Contractor_Green_Autorifleman,2);
            };
        };
        class TACU_Vanguard_G_Contractors_Sand {
            name = "Contractors (Sand)";

            class TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Sand_Rifleman_01,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Sand_Rifleman_02,2);
            };

            class TACU_Vanguard_G_Contractors_Sand_Fireteam: TACU_Vanguard_G_Contractors_Sand_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Sand_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Sand_Grenadier,2);
                MACRO_UNIT2(TACU_Vanguard_U_Contractor_Sand_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Contractor_Sand_Medic,2);
            };

            class TACU_Vanguard_G_Contractors_Sand_Squad: TACU_Vanguard_G_Contractors_Sand_Fireteam {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Sand_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Sand_Rifleman_01,2);
                MACRO_UNIT2(TACU_Vanguard_U_Contractor_Sand_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Contractor_Sand_Medic,2);
                MACRO_UNIT4(TACU_Vanguard_U_Contractor_Sand_Engineer,2);
                MACRO_UNIT5(TACU_Vanguard_U_Contractor_Sand_Autorifleman,2);
            };
        };

        class TACU_Vanguard_G_Contractors_Winter {
            name = "Contractors (Winter)";

            class TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Winter_Rifleman_01,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Winter_Rifleman_02,2);
            };

            class TACU_Vanguard_G_Contractors_Winter_Fireteam: TACU_Vanguard_G_Contractors_Winter_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Winter_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Winter_Grenadier,2);
                MACRO_UNIT2(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Contractor_Winter_Medic,2);
            };

            class TACU_Vanguard_G_Contractors_Winter_Squad: TACU_Vanguard_G_Contractors_Winter_Fireteam {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_Contractor_Winter_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Contractor_Winter_Rifleman_01,2);
                MACRO_UNIT2(TACU_Vanguard_U_Contractor_Winter_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Contractor_Winter_Medic,2);
                MACRO_UNIT4(TACU_Vanguard_U_Contractor_Winter_Rifleman_02,2);
                MACRO_UNIT5(TACU_Vanguard_U_Contractor_Winter_Autorifleman,2);
            };
        };

        class TACU_Vanguard_G_Specialists {
            name = "Specialists";

            class TACU_Vanguard_G_Specialists_Patrol {
                name = "Patrol";
                side = 2;
                faction = "TACU_Vanguard";
                icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                MACRO_UNIT0(TACU_Vanguard_U_Specialist_Rifleman,2);
                MACRO_UNIT1(TACU_Vanguard_U_Specialist_Grenadier,2);
            };

            class TACU_Vanguard_G_Specialists_Fireteam: TACU_Vanguard_G_Specialists_Patrol {
                name = "Fireteam";
                MACRO_UNIT0(TACU_Vanguard_U_Specialist_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Specialist_Grenadier,2);
                MACRO_UNIT2(TACU_Vanguard_U_Specialist_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Specialist_Medic,2);
            };

            class TACU_Vanguard_G_Specialists_Squad: TACU_Vanguard_G_Specialists_Fireteam {
                name = "Squad";
                MACRO_UNIT0(TACU_Vanguard_U_Specialist_TeamLeader,2);
                MACRO_UNIT1(TACU_Vanguard_U_Specialist_Rifleman,2);
                MACRO_UNIT2(TACU_Vanguard_U_Specialist_Rifleman_AT,2);
                MACRO_UNIT3(TACU_Vanguard_U_Specialist_Medic,2);
                MACRO_UNIT4(TACU_Vanguard_U_Specialist_Marksman,2);
                MACRO_UNIT5(TACU_Vanguard_U_Specialist_Autorifleman,2);
            };
        };
    };
};
