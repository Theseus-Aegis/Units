class TACU_Somali_Pirates_I {
    name = "Somali Pirates";

    class TACU_Somali_Pirates_Infantry_I {
        name = "Infantry";

        class TACU_Somali_Pirates_G_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_Somali_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_01,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_02,2);
        };

        class TACU_Somali_Pirates_G_Fireteam: TACU_Somali_Pirates_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_03,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_04,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Autorifleman,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_AT,2);
        };

        class TACU_Somali_Pirates_G_ATTeam: TACU_Somali_Pirates_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_01,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_AT,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_AT,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_03,2);
        };

        class TACU_Somali_Pirates_G_Squad: TACU_Somali_Pirates_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_05,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_06,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_04,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Autorifleman,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_AT,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_03,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_02,2);
            GROUP_UNIT(TACU_Somali_Pirates_U_I_Rifleman_01,2);
        };
    };
};
