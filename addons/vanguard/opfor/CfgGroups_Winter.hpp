class TACU_Vanguard_G_Contractors_Winter {
    name = "Contractors (Winter)";

    class TACU_Vanguard_G_Patrol_Winter {
        name = "Patrol";
        side = 0;
        faction = "TACU_Vanguard_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02,0);
    };

    class TACU_Vanguard_G_Fireteam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Grenadier,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Winter_Medic,0);
    };

    class TACU_Vanguard_G_ATTeam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
    };

    class TACU_Vanguard_G_Squad_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Contractor_Winter_Medic,0);
        MACRO_UNIT4(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02,0);
        MACRO_UNIT5(TACU_Vanguard_U_O_Contractor_Winter_Autorifleman,0);
    };
};
