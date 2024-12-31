class TACU_Territorial_Defence_Infantry_Woodland {
    name = "Infantry (Woodland)";

    class TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "Patrol";
        side = 0;
        faction = "TACU_Territorial_Defence_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_Rifleman02_Woodland,0);
    };

    class TACU_Territorial_Defence_G_Fireteam_Woodland: TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_TeamLeader_Woodland,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_Demolitions_Woodland,0);
        MACRO_UNIT2(TACU_Territorial_Defence_U_O_Grenadier_Woodland,0);
        MACRO_UNIT3(TACU_Territorial_Defence_U_O_Rifleman02_Woodland,0);
    };
    class TACU_Territorial_Defence_G_ATTeam_Woodland: TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "AT Team";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_TeamLeader_Woodland,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_AT_Woodland,0);
        MACRO_UNIT2(TACU_Territorial_Defence_U_O_AT_Woodland,0);
        MACRO_UNIT3(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
    };
    class TACU_Territorial_Defence_G_Squad_Woodland: TACU_Territorial_Defence_G_Patrol_Woodland {
        name = "Squad";
        MACRO_UNIT0(TACU_Territorial_Defence_U_O_SquadLeader_Woodland,0);
        MACRO_UNIT1(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
        MACRO_UNIT2(TACU_Territorial_Defence_U_O_Rifleman02_Woodland,0);
        MACRO_UNIT3(TACU_Territorial_Defence_U_O_Autorifleman_Woodland,0);
        MACRO_UNIT4(TACU_Territorial_Defence_U_O_TeamLeader_Woodland,0);
        MACRO_UNIT5(TACU_Territorial_Defence_U_O_Medic_Woodland,0);
        MACRO_UNIT6(TACU_Territorial_Defence_U_O_Rifleman_Woodland,0);
        MACRO_UNIT7(TACU_Territorial_Defence_U_O_Engineer_Woodland,0);
    };
};
