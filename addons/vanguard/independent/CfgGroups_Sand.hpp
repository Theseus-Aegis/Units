class TACU_Vanguard_G_Contractors_Sand {
    name = "Contractors (Sand)";

    class TACU_Vanguard_G_Patrol_Sand {
        name = "Patrol";
        side = 2;
        faction = "TACU_Vanguard_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_02,2);
    };

    class TACU_Vanguard_G_Fireteam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Sand_Grenadier,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Sand_Medic,2);
    };

    class TACU_Vanguard_G_ATTeam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01,2);
    };

    class TACU_Vanguard_G_Squad_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Sand_Medic,2);
        MACRO_UNIT4(TACU_Vanguard_U_I_Contractor_Sand_Engineer,2);
        MACRO_UNIT5(TACU_Vanguard_U_I_Contractor_Sand_Autorifleman,2);
    };
};
