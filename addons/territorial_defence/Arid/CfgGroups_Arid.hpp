class TACU_Territorial_Defence_Infantry_Arid {
    name = "Infantry (Arid)";

    class TACU_Territorial_Defence_G_Patrol_Arid {
        name = "Patrol";
        side = 0;
        faction = "TACU_Territorial_Defence_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_Rifleman_Arid,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_Rifleman02_Arid,0);
    };
    class TACU_Territorial_Defence_G_Fireteam_Arid: TACU_Territorial_Defence_G_Patrol_Arid {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_TeamLeader_Arid,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_Demolitions_Arid,0);
        MACRO_UNIT2(TACU_Territorial_Defence_U_O_Grenadier_Arid,0);
        MACRO_UNIT3(TACU_Territorial_Defence_U_O_Rifleman02_Arid,0);
    };

    class TACU_Territorial_Defence_G_ATTeam_Arid: TACU_Territorial_Defence_G_Patrol_Arid {
        name = "AT Team";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_TeamLeader_Arid,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_AT_Arid,0);
        MACRO_UNIT2(TACU_Territorial_Defence_U_O_AT_Arid,0);
        MACRO_UNIT3(TACU_Territorial_Defence_U_O_Rifleman_Arid,0);
    };

    class TACU_Territorial_Defence_G_Squad_Arid: TACU_Territorial_Defence_G_Patrol_Arid {
        name = "Squad";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_SquadLeader_Arid,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_Rifleman_Arid,0);
        MACRO_UNIT2(TACU_Territorial_Defence_U_O_Rifleman02_Arid,0);
        MACRO_UNIT3(TACU_Territorial_Defence_U_O_Autorifleman_Arid,0);
        MACRO_UNIT4(TACU_Territorial_Defence_U_O_TeamLeader_Arid,0);
        MACRO_UNIT5(TACU_Territorial_Defence_U_O_Medic_Arid,0);
        MACRO_UNIT6(TACU_Territorial_Defence_U_O_Rifleman_Arid,0);
        MACRO_UNIT7(TACU_Territorial_Defence_U_O_Engineer_Arid,0);
    };
};
