class TACU_Mercenaries {
    name = "Mercenaries";

    class TACU_Mercenaries_Infantry_Low {
        name = "Infantry (Low Tier)";

        class TACU_Mercenaries_G_Patrol_Low {
            name = "Patrol";
            side = 0;
            faction = "TACU_Mercenaries_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Low_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Low_Rifleman,0);
        };
        class TACU_Mercenaries_G_Fireteam_Low: TACU_Mercenaries_G_Patrol_Low {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Low_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Low_Medic,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_Low_Demolitions,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_Low_Rifleman,0);
        };
        class TACU_Mercenaries_G_ATTeam_Low: TACU_Mercenaries_G_Patrol_Low {
            name = "AT Team";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Low_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Low_AT,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_Low_AT,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_Low_Rifleman,0);
        };
        class TACU_Mercenaries_G_Squad_Low: TACU_Mercenaries_G_Patrol_Low {
            name = "Squad";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Low_SquadLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Low_Medic,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_Low_Rifleman,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_Low_Engineer,0);
            MACRO_UNIT4(TACU_Mercenaries_U_O_Low_TeamLeader,0);
            MACRO_UNIT5(TACU_Mercenaries_U_O_Low_MG,0);
            MACRO_UNIT6(TACU_Mercenaries_U_O_Low_Marksman,0);
            MACRO_UNIT7(TACU_Mercenaries_U_O_Low_AT,0);
        };
    };

    class TACU_Mercenaries_Infantry_Medium {
        name = "Infantry (Medium Tier)";

        class TACU_Mercenaries_G_Patrol_Medium {
            name = "Patrol";
            side = 0;
            faction = "TACU_Mercenaries_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Medium_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Medium_Rifleman,0);
        };
        class TACU_Mercenaries_G_Fireteam_Medium: TACU_Mercenaries_G_Patrol_Medium {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Medium_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Medium_Medic,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_Medium_Demolitions,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_Medium_Rifleman,0);
        };
        class TACU_Mercenaries_G_ATTeam_Medium: TACU_Mercenaries_G_Patrol_Medium {
            name = "AT Team";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Medium_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Medium_AT,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_Medium_AT,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_Medium_Rifleman,0);
        };
        class TACU_Mercenaries_G_Squad_Medium: TACU_Mercenaries_G_Patrol_Medium {
            name = "Squad";
            MACRO_UNIT0(TACU_Mercenaries_U_O_Medium_SquadLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_Medium_Medic,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_Medium_Rifleman,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_Medium_Engineer,0);
            MACRO_UNIT4(TACU_Mercenaries_U_O_Medium_TeamLeader,0);
            MACRO_UNIT5(TACU_Mercenaries_U_O_Medium_MG,0);
            MACRO_UNIT6(TACU_Mercenaries_U_O_Medium_Marksman,0);
            MACRO_UNIT7(TACU_Mercenaries_U_O_Medium_AT,0);
        };
    };

    class TACU_Mercenaries_Infantry_High {
        name = "Infantry (High Tier)";

        class TACU_Mercenaries_G_Patrol_High {
            name = "Patrol";
            side = 0;
            faction = "TACU_Mercenaries_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Mercenaries_U_O_High_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_High_Rifleman,0);
        };
        class TACU_Mercenaries_G_Fireteam_High: TACU_Mercenaries_G_Patrol_High {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Mercenaries_U_O_High_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_High_Medic,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_High_Demolitions,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_High_Rifleman,0);
        };
        class TACU_Mercenaries_G_ATTeam_High: TACU_Mercenaries_G_Patrol_High {
            name = "AT Team";
            MACRO_UNIT0(TACU_Mercenaries_U_O_High_TeamLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_High_AT,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_High_AT,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_High_Rifleman,0);
        };
        class TACU_Mercenaries_G_Squad_High: TACU_Mercenaries_G_Patrol_High {
            name = "Squad";
            MACRO_UNIT0(TACU_Mercenaries_U_O_High_SquadLeader,0);
            MACRO_UNIT1(TACU_Mercenaries_U_O_High_Medic,0);
            MACRO_UNIT2(TACU_Mercenaries_U_O_High_Rifleman,0);
            MACRO_UNIT3(TACU_Mercenaries_U_O_High_Engineer,0);
            MACRO_UNIT4(TACU_Mercenaries_U_O_High_TeamLeader,0);
            MACRO_UNIT5(TACU_Mercenaries_U_O_High_MG,0);
            MACRO_UNIT6(TACU_Mercenaries_U_O_High_Marksman,0);
            MACRO_UNIT7(TACU_Mercenaries_U_O_High_AT,0);
        };
    };
};