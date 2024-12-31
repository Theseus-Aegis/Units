class TACU_Vanguard_G_Contractors_Sand {
    name = "Contractors (Sand)";

    class TACU_Vanguard_G_Patrol_Sand {
        name = "Patrol";
        side = 0;
        faction = "TACU_Vanguard_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_02,0);
    };

    class TACU_Vanguard_G_Fireteam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Grenadier,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Medic,0);
    };

    class TACU_Vanguard_G_ATTeam_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
    };

    class TACU_Vanguard_G_Squad_Sand: TACU_Vanguard_G_Patrol_Sand {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_TeamLeader,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Medic,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Engineer,0);
        GROUP_UNIT(TACU_Vanguard_U_O_Contractor_Sand_Autorifleman,0);
    };
};
