class TACU_Cartel_Greek_O_G_Grunts_Infantry {
    name = "Grunts";

    class TACU_Cartel_G_Patrol_Grunts {
        name = "Grunt Patrol";
        side = 0;
        faction = "TACU_Cartel_Greek_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Grunt_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Grunt_Rifleman_02,0);
    };

    class TACU_Cartel_G_Fireteam_Grunts: TACU_Cartel_G_Patrol_Grunts {
        name = "Grunt Fireteam";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Grunt_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Grunt_Rifleman_02,0);
        MACRO_UNIT2(TACU_Cartel_Greek_U_O_Grunt_Rifleman_03,0);
        MACRO_UNIT3(TACU_Cartel_Greek_U_O_Grunt_Rifleman_04,0);
    };

    class TACU_Cartel_G_Squad_Grunts: TACU_Cartel_G_Patrol_Grunts {
        name = "Grunt Squad";
        MACRO_UNIT0(TACU_Cartel_Greek_U_O_Grunt_Rifleman_01,0);
        MACRO_UNIT1(TACU_Cartel_Greek_U_O_Grunt_Rifleman_02,0);
        MACRO_UNIT2(TACU_Cartel_Greek_U_O_Grunt_Rifleman_03,0);
        MACRO_UNIT3(TACU_Cartel_Greek_U_O_Grunt_Rifleman_04,0);
        MACRO_UNIT4(TACU_Cartel_Greek_U_O_Grunt_Rifleman_05,0);
        MACRO_UNIT5(TACU_Cartel_Greek_U_O_Grunt_Rifleman_06,0);
    };
};
