class TACU_Vanguard_G_Contractors_Winter {
    name = "Contractors (Winter)";

    class TACU_Vanguard_G_Patrol_Winter {
        name = "Patrol";
        side = 2;
        faction = "TACU_Vanguard_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_02,2);
    };

    class TACU_Vanguard_G_Fireteam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Grenadier,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Medic,2);
    };

    class TACU_Vanguard_G_ATTeam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01,2);
    };

    class TACU_Vanguard_G_Squad_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_TeamLeader,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_01,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_AT,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Medic,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Rifleman_02,2);
        GROUP_UNIT(TACU_Vanguard_U_I_Contractor_Winter_Autorifleman,2);
    };
};
