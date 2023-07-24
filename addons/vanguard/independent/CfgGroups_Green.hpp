class TACU_Vanguard_G_Contractors_Green {
    name = "Contractors (Green)";

    class TACU_Vanguard_G_Patrol_Green {
        name = "Patrol";
        side = 2;
        faction = "TACU_Vanguard_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Green_Rifleman_01,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Green_Rifleman_02,2);
    };

    class TACU_Vanguard_G_Fireteam_Green: TACU_Vanguard_G_Patrol_Green {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Green_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Green_Grenadier,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Green_Medic,2);
    };

    class TACU_Vanguard_G_ATTeam_Green: TACU_Vanguard_G_Patrol_Green {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Green_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Green_Rifleman_01,2);
    };

    class TACU_Vanguard_G_Squad_Green: TACU_Vanguard_G_Patrol_Green {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Green_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Green_Rifleman_01,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Green_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Green_Medic,2);
        MACRO_UNIT4(TACU_Vanguard_U_I_Contractor_Green_Engineer,2);
        MACRO_UNIT5(TACU_Vanguard_U_I_Contractor_Green_Autorifleman,2);
    };
};
