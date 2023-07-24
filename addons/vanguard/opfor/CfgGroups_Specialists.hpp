class TACU_Vanguard_G_Specialists {
    name = "Specialists";

    class TACU_Vanguard_G_Patrol_Specialists {
        name = "Patrol";
        side = 0;
        faction = "TACU_Vanguard_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_Rifleman,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Grenadier,0);
    };

    class TACU_Vanguard_G_Fireteam_Specialists: TACU_Vanguard_G_Patrol_Specialists {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Grenadier,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Specialist_Medic,0);
    };

    class TACU_Vanguard_G_ATTeam_Specialists: TACU_Vanguard_G_Patrol_Specialists {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Specialist_Rifleman,0);
    };

    class TACU_Vanguard_G_Squad_Specialists: TACU_Vanguard_G_Patrol_Specialists {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_O_Specialist_TeamLeader,0);
        MACRO_UNIT1(TACU_Vanguard_U_O_Specialist_Rifleman,0);
        MACRO_UNIT2(TACU_Vanguard_U_O_Specialist_Rifleman_AT,0);
        MACRO_UNIT3(TACU_Vanguard_U_O_Specialist_Medic,0);
        MACRO_UNIT4(TACU_Vanguard_U_O_Specialist_Marksman,0);
        MACRO_UNIT5(TACU_Vanguard_U_O_Specialist_Autorifleman,0);
    };
};
