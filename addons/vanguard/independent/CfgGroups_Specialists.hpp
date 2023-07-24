class TACU_Vanguard_G_Specialists {
    name = "Specialists";

    class TACU_Vanguard_G_Patrol_Specialists {
        name = "Patrol";
        side = 2;
        faction = "TACU_Vanguard_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Vanguard_U_I_Specialist_Rifleman,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Specialist_Grenadier,2);
    };

    class TACU_Vanguard_G_Fireteam_Specialists: TACU_Vanguard_G_Patrol_Specialists {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Vanguard_U_I_Specialist_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Specialist_Grenadier,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Specialist_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Specialist_Medic,2);
    };

    class TACU_Vanguard_G_ATTeam_Specialists: TACU_Vanguard_G_Patrol_Specialists {
        name = "AT Team";
        MACRO_UNIT0(TACU_Vanguard_U_I_Specialist_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Specialist_Rifleman_AT,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Specialist_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Specialist_Rifleman,2);
    };

    class TACU_Vanguard_G_Squad_Specialists: TACU_Vanguard_G_Patrol_Specialists {
        name = "Squad";
        MACRO_UNIT0(TACU_Vanguard_U_I_Specialist_TeamLeader,2);
        MACRO_UNIT1(TACU_Vanguard_U_I_Specialist_Rifleman,2);
        MACRO_UNIT2(TACU_Vanguard_U_I_Specialist_Rifleman_AT,2);
        MACRO_UNIT3(TACU_Vanguard_U_I_Specialist_Medic,2);
        MACRO_UNIT4(TACU_Vanguard_U_I_Specialist_Marksman,2);
        MACRO_UNIT5(TACU_Vanguard_U_I_Specialist_Autorifleman,2);
    };
};
