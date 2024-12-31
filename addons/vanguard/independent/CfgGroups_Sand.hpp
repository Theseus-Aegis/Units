class TACU_Vanguard_G_Contractors_Sand {
    name = "Contractors (Sand)";

    class TACU_Vanguard_G_Patrol_Sand {
        name = "Patrol";
        side = 2;
        faction = "TACU_Vanguard_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_02,2);
    };

    class TACU_Vanguard_G_Fireteam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Grenadier,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Medic,2);
    };

    class TACU_Vanguard_G_ATTeam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01,2);
    };

    class TACU_Vanguard_G_Squad_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_TeamLeader,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_01,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Medic,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Engineer,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Sand_Autorifleman,2);
    };
};
