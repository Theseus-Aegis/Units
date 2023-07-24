class TACU_Vanguard_G_Contractors_Sand {
    name = "Contractors (Sand)";

    class TACU_Vanguard_G_Patrol_Sand {
        name = "Patrol";
        side = 0;
        faction = "TACU_Vanguard_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_02,0);
    };

    class TACU_Vanguard_G_Fireteam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Grenadier,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Sand_Medic,0);
    };

    class TACU_Vanguard_G_ATTeam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
    };

    class TACU_Vanguard_G_Squad_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Sand_Medic,0);
        MACRO_UNIT4(TACU_Vanguard_U_O_Contractor_Sand_Engineer,0);
        MACRO_UNIT5(TACU_Vanguard_U_O_Contractor_Sand_Autorifleman,0);
    };
};
