class TACU_Chernobog_Children_Infantry_I {
    name = "Infantry (Children)";

    class TACU_Chernobog_Children_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Chernobog";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Chernobog_Children_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Chernobog_Children_U_I_Rifleman_03,2);
        MACRO_UNIT2(TACU_Chernobog_Children_U_I_Rifleman_02,2);
    };

    class TACU_Chernobog_Children_G_Fireteam: TACU_Chernobog_Children_G_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Chernobog_Children_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Chernobog_Children_U_I_Medic,2);
        MACRO_UNIT2(TACU_Chernobog_Children_U_I_Marksman,2);
        MACRO_UNIT3(TACU_Chernobog_Children_U_I_Rifleman_01,2);
        MACRO_UNIT4(TACU_Chernobog_Children_U_I_Rifleman_02,2);
        MACRO_UNIT5(TACU_Chernobog_Children_U_I_Rifleman_03,2);
    };

    class TACU_Chernobog_Children_G_Squad: TACU_Chernobog_Children_G_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_Chernobog_Children_U_I_Squadleader,2);
        MACRO_UNIT1(TACU_Chernobog_Children_U_I_Teamleader,2);
        MACRO_UNIT2(TACU_Chernobog_Children_U_I_LAT,2);
        MACRO_UNIT3(TACU_Chernobog_Children_U_I_Medic,2);
        MACRO_UNIT4(TACU_Chernobog_Children_U_I_Marksman,2);
        MACRO_UNIT5(TACU_Chernobog_Children_U_I_Rifleman_01,2);
        MACRO_UNIT6(TACU_Chernobog_Children_U_I_Rifleman_02,2);
        MACRO_UNIT7(TACU_Chernobog_Children_U_I_Rifleman_03,2);
    };
};