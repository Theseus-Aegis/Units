class TACU_Vanguard_G_Contractors_Winter {
    name = "Contractors (Winter)";

    class TACU_Vanguard_G_Patrol_Winter {
        name = "Patrol";
        side = 2;
        faction = "TACU_Vanguard_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_02,2);
    };

    class TACU_Vanguard_G_Fireteam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Winter_Grenadier,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Winter_Medic,2);
    };

    class TACU_Vanguard_G_ATTeam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01,2);
    };

    class TACU_Vanguard_G_Squad_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Contractor_Winter_Medic,2);
        MACRO_UNIT4(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_02,2);
        MACRO_UNIT5(TACU_Vanguard_U_I_Contractor_Winter_Autorifleman,2);
    };
};
