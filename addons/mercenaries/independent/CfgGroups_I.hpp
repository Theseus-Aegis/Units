class TACU_Mercenaries {
    name = "Mercenaries";

    class TACU_Mercenaries_Infantry_Low {
        name = "Infantry (Low Tier)";

        class TACU_Mercenaries_G_Patrol_Low {
            name = "Patrol";
            side = 2;
            faction = "TACU_Mercenaries_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Rifleman,2);
        };
        class TACU_Mercenaries_G_Fireteam_Low: TACU_Mercenaries_G_Patrol_Low {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Medic,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Demolitions,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Rifleman,2);
        };
        class TACU_Mercenaries_G_ATTeam_Low: TACU_Mercenaries_G_Patrol_Low {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_AT,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_AT,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Rifleman,2);
        };
        class TACU_Mercenaries_G_Squad_Low: TACU_Mercenaries_G_Patrol_Low {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_SquadLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Medic,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Rifleman,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Engineer,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_MG,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_Marksman,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Low_AT,2);
        };
    };

    class TACU_Mercenaries_Infantry_Medium {
        name = "Infantry (Medium Tier)";

        class TACU_Mercenaries_G_Patrol_Medium {
            name = "Patrol";
            side = 2;
            faction = "TACU_Mercenaries_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Rifleman,2);
        };
        class TACU_Mercenaries_G_Fireteam_Medium: TACU_Mercenaries_G_Patrol_Medium {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Medic,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Demolitions,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Rifleman,2);
        };
        class TACU_Mercenaries_G_ATTeam_Medium: TACU_Mercenaries_G_Patrol_Medium {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_AT,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_AT,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Rifleman,2);
        };
        class TACU_Mercenaries_G_Squad_Medium: TACU_Mercenaries_G_Patrol_Medium {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_SquadLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Medic,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Rifleman,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Engineer,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_MG,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_Marksman,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_Medium_AT,2);
        };
    };

    class TACU_Mercenaries_Infantry_High {
        name = "Infantry (High Tier)";

        class TACU_Mercenaries_G_Patrol_High {
            name = "Patrol";
            side = 2;
            faction = "TACU_Mercenaries_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_High_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Rifleman,2);
        };
        class TACU_Mercenaries_G_Fireteam_High: TACU_Mercenaries_G_Patrol_High {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_High_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Medic,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Demolitions,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Rifleman,2);
        };
        class TACU_Mercenaries_G_ATTeam_High: TACU_Mercenaries_G_Patrol_High {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_High_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_AT,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_AT,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Rifleman,2);
        };
        class TACU_Mercenaries_G_Squad_High: TACU_Mercenaries_G_Patrol_High {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Mercenaries_U_I_High_SquadLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Medic,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Rifleman,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Engineer,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_TeamLeader,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_MG,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_Marksman,2);
            GROUP_UNIT(TACU_Mercenaries_U_I_High_AT,2);
        };
    };
};
