class TACU_Somali_Pirates_O {
    name = "Somali Pirates";

    class TACU_Somali_Pirates_Infantry_O {
        name = "Infantry";

        class TACU_Somali_Pirates_G_Patrol {
            name = "Patrol";
            side = 0;
            faction = "TACU_Somali_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Somali_Pirates_U_O_Rifleman_01,0);
            MACRO_UNIT1(TACU_Somali_Pirates_U_O_Rifleman_02,0);
        };

        class TACU_Somali_Pirates_G_Fireteam: TACU_Somali_Pirates_G_Patrol {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Somali_Pirates_U_O_Rifleman_03,0);
            MACRO_UNIT1(TACU_Somali_Pirates_U_O_Rifleman_04,0);
            MACRO_UNIT2(TACU_Somali_Pirates_U_O_Autorifleman,0);
            MACRO_UNIT3(TACU_Somali_Pirates_U_O_AT,0);
        };

        class TACU_Somali_Pirates_G_ATTeam: TACU_Somali_Pirates_G_Patrol {
            name = "AT Team";
            MACRO_UNIT0(TACU_Somali_Pirates_U_O_Rifleman_03,0);
            MACRO_UNIT1(TACU_Somali_Pirates_U_O_AT,0);
            MACRO_UNIT2(TACU_Somali_Pirates_U_O_AT,0);
            MACRO_UNIT3(TACU_Somali_Pirates_U_O_Rifleman_01,0);
        };

        class TACU_Somali_Pirates_G_Squad: TACU_Somali_Pirates_G_Patrol {
            name = "Squad";
            MACRO_UNIT0(TACU_Somali_Pirates_U_O_Rifleman_05,0);
            MACRO_UNIT1(TACU_Somali_Pirates_U_O_Rifleman_06,0);
            MACRO_UNIT2(TACU_Somali_Pirates_U_O_Rifleman_04,0);
            MACRO_UNIT3(TACU_Somali_Pirates_U_O_Autorifleman,0);
            MACRO_UNIT4(TACU_Somali_Pirates_U_O_AT,0);
            MACRO_UNIT5(TACU_Somali_Pirates_U_O_Rifleman_03,0);
            MACRO_UNIT6(TACU_Somali_Pirates_U_O_Rifleman_02,0);
            MACRO_UNIT7(TACU_Somali_Pirates_U_O_Rifleman_01,0);
        };
    };
};
