class TACU_Cartel_Greek_O_G_Enforcers_Infantry {
    name = "Enforcers";

    class TACU_Cartel_G_O_Enforcers_Patrol {
        name = "Enforcer Patrol";
        side = 0;
        faction = "TACU_Cartel_Greek_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_02,0);
    };

    class TACU_Cartel_G_O_Enforcers_Fireteam: TACU_Cartel_G_O_Enforcers_Patrol {
        name = "Enforcer Fireteam";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_02,0);
        MACRO_UNIT2(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_03,0);
        MACRO_UNIT3(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_04,0);
    };

    class TACU_Cartel_G_O_Enforcers_Squad: TACU_Cartel_G_O_Enforcers_Fireteam {
        name = "Enforcer Squad";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_02,0);
        MACRO_UNIT2(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_03,0);
        MACRO_UNIT3(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_04,0);
        MACRO_UNIT4(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_05,0);
        MACRO_UNIT5(TACU_Cartel_Greek_U_O_Enforcer_Rifleman_06,0);
    };
};
