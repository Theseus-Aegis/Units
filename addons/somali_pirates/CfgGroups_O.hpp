class TACU_Somali_Pirates_O {
    name = "Somali Pirates";

    class TACU_Somali_Pirates_Infantry_O {
        name = "Infantry";

        class TACU_Somali_Pirates_G_Patrol {
            name = "Patrol";
            side = 0;
            faction = "TACU_Somali_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_01,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_02,0);
        };

        class TACU_Somali_Pirates_G_Fireteam: TACU_Somali_Pirates_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_03,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_04,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Autorifleman,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_AT,0);
        };

        class TACU_Somali_Pirates_G_ATTeam: TACU_Somali_Pirates_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_03,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_AT,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_AT,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_01,0);
        };

        class TACU_Somali_Pirates_G_Squad: TACU_Somali_Pirates_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_05,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_06,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_04,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Autorifleman,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_AT,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_03,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_02,0);
            GROUP_UNIT(TACU_Somali_Pirates_U_O_Rifleman_01,0);
        };
    };
};
