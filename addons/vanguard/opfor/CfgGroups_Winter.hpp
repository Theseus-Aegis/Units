class TACU_Vanguard_G_Contractors_Winter {
    name = "Contractors (Winter)";

    class TACU_Vanguard_G_Patrol_Winter {
        name = "Patrol";
        side = 0;
        faction = "TACU_Vanguard_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02,0);
    };

    class TACU_Vanguard_G_Fireteam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Grenadier,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Medic,0);
    };

    class TACU_Vanguard_G_ATTeam_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
    };

    class TACU_Vanguard_G_Squad_Winter: TACU_Vanguard_G_Patrol_Winter {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_TeamLeader,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Medic,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Winter_Autorifleman,0);
    };
};
