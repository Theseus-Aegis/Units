class TACU_Vanguard_G_Contractors_Green {
    name = "Contractors (Green)";

    class TACU_Vanguard_G_Patrol_Green {
        name = "Patrol";
        side = 0;
        faction = "TACU_Vanguard_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_Rifleman_01,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Rifleman_02,0);
    };

    class TACU_Vanguard_G_Fireteam_Green: TACU_Vanguard_G_Patrol_Green {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Grenadier,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Green_Medic,0);
    };

    class TACU_Vanguard_G_ATTeam_Green: TACU_Vanguard_G_Patrol_Green {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Green_Rifleman_01,0);
    };

    class TACU_Vanguard_G_Squad_Green: TACU_Vanguard_G_Patrol_Green {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Green_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Green_Rifleman_01,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Green_Medic,0);
        MACRO_UNIT4(TACU_Vanguard_U_O_Contractor_Green_Engineer,0);
        MACRO_UNIT5(TACU_Vanguard_U_O_Contractor_Green_Autorifleman,0);
    };
};
