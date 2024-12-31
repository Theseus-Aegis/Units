class TACU_Chernobog_Children_Infantry_I {
    name = "Infantry (Children)";

    class TACU_Chernobog_Children_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Chernobog";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_03,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_02,2);
    };

    class TACU_Chernobog_Children_G_Fireteam: TACU_Chernobog_Children_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Medic,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Marksman,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_01,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_02,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_03,2);
    };

    class TACU_Chernobog_Children_G_Squad: TACU_Chernobog_Children_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Squadleader,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_LAT,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Medic,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Marksman,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_01,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_02,2);
        GROUP_UNIT(TACU_Chernobog_Children_U_I_Rifleman_03,2);
    };
};
