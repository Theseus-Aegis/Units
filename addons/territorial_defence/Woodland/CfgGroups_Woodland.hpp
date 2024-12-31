class TACU_Territorial_Defence_Infantry_Woodland {
    name = "Infantry (Woodland)";

    class TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "Patrol";
        side = 0;
        faction = "TACU_Territorial_Defence_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman02_Woodland,0);
    };

    class TACU_Territorial_Defence_G_Fireteam_Woodland: TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Defence_U_O_TeamLeader_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Demolitions_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Grenadier_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman02_Woodland,0);
    };
    class TACU_Territorial_Defence_G_ATTeam_Woodland: TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Defence_U_O_TeamLeader_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_AT_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_AT_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
    };
    class TACU_Territorial_Defence_G_Squad_Woodland: TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Territorial_Defence_U_O_SquadLeader_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman02_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Autorifleman_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_TeamLeader_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Medic_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
        GROUP_UNIT(TACU_Territorial_Defence_U_O_Engineer_Woodland,0);
    };
};
