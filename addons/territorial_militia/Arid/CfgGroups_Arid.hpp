class TACU_Territorial_Militia_Infantry_Arid {
    name = "Infantry (Arid)";

    class TACU_Territorial_Militia_G_Patrol_Arid {
        name = "Patrol";
        side = 0;
        faction = "TACU_Territorial_Militia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman02_Arid,0);
    };
    class TACU_Territorial_Militia_G_Fireteam_Arid: TACU_Territorial_Militia_G_Patrol_Arid {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Militia_U_O_TeamLeader_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Demolitions_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Grenadier_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman02_Arid,0);
    };

    class TACU_Territorial_Militia_G_ATTeam_Arid: TACU_Territorial_Militia_G_Patrol_Arid {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Militia_U_O_TeamLeader_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_AT_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_AT_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman_Arid,0);
    };

    class TACU_Territorial_Militia_G_Squad_Arid: TACU_Territorial_Militia_G_Patrol_Arid {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Militia_U_O_SquadLeader_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman02_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Autorifleman_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_TeamLeader_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Medic_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Rifleman_Arid,0);
        GROUP_UNIT(TACU_Territorial_Militia_U_O_Engineer_Arid,0);
    };
};
