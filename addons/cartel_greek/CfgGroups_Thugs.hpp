class TACU_Cartel_Greek_O_G_Thugs_Infantry {
    name = "Thugs";

    class TACU_Cartel_G_Patrol_Thugs {
        name = "Thug Patrol";
        side = 0;
        faction = "TACU_Cartel_Greek_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_01,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_02,0);
    };

    class TACU_Cartel_G_Fireteam_Thugs: TACU_Cartel_G_Patrol_Thugs {
        name = "Thug Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_01,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_02,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_03,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_04,0);
    };

    class TACU_Cartel_G_Squad_Thugs: TACU_Cartel_G_Patrol_Thugs {
        name = "Thug Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_01,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_02,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_03,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_04,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_05,0);
        GROUP_UNIT(TACU_Cartel_Greek_U_O_Thug_Rifleman_06,0);
    };
};
