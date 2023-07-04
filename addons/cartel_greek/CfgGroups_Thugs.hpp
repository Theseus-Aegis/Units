class TACU_Cartel_Greek_O_G_Thugs_Infantry {
    name = "Thugs";

    class TACU_Cartel_G_O_Thugs_Patrol {
        name = "Thug Patrol";
        side = 0;
        faction = "TACU_Cartel_Greek_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Thug_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Thug_Rifleman_02,0);
    };

    class TACU_Cartel_G_O_Thugs_Fireteam: TACU_Cartel_G_O_Thugs_Patrol {
        name = "Thug Fireteam";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Thug_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Thug_Rifleman_02,0);
        MACRO_UNIT2(TACU_Cartel_Greek_U_O_Thug_Rifleman_03,0);
        MACRO_UNIT3(TACU_Cartel_Greek_U_O_Thug_Rifleman_04,0);
    };

    class TACU_Cartel_G_O_Thugs_Squad: TACU_Cartel_G_O_Thugs_Fireteam {
        name = "Thug Squad";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Thug_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Thug_Rifleman_02,0);
        MACRO_UNIT2(TACU_Cartel_Greek_U_O_Thug_Rifleman_03,0);
        MACRO_UNIT3(TACU_Cartel_Greek_U_O_Thug_Rifleman_04,0);
        MACRO_UNIT4(TACU_Cartel_Greek_U_O_Thug_Rifleman_05,0);
        MACRO_UNIT5(TACU_Cartel_Greek_U_O_Thug_Rifleman_06,0);
    };
};
