class TACU_Somali_Pirates_I {
    name = "Somali Pirates";

    class TACU_Somali_Pirates_Infantry_I {
        name = "Infantry";

        class TACU_Somali_Pirates_Patrol_I {
            name = "Patrol";
            side = 2;
            faction = "TACU_Somali_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Somali_Pirates_U_I_Rifleman_01,2);
            MACRO_UNIT1(TACU_Somali_Pirates_U_I_Rifleman_02,2);
        };

        class TACU_Somali_Pirates_Fireteam_I: TACU_Somali_Pirates_Patrol_I {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Somali_Pirates_U_I_Rifleman_03,2);
            MACRO_UNIT1(TACU_Somali_Pirates_U_I_Rifleman_04,2);
            MACRO_UNIT2(TACU_Somali_Pirates_U_I_Autorifleman,2);
            MACRO_UNIT3(TACU_Somali_Pirates_U_I_AT,2);
        };

        class TACU_Somali_Pirates_ATTeam_I: TACU_Somali_Pirates_Patrol_I {
            name = "AT Team";
            MACRO_UNIT0(TACU_Somali_Pirates_U_I_Rifleman_01,2);
            MACRO_UNIT1(TACU_Somali_Pirates_U_I_AT,2);
            MACRO_UNIT2(TACU_Somali_Pirates_U_I_AT,2);
            MACRO_UNIT3(TACU_Somali_Pirates_U_I_Rifleman_03,2);
        };

        class TACU_Somali_Pirates_Squad_I: TACU_Somali_Pirates_Patrol_I {
            name = "Squad";
            MACRO_UNIT0(TACU_Somali_Pirates_U_I_Rifleman_05,2);
            MACRO_UNIT1(TACU_Somali_Pirates_U_I_Rifleman_06,2);
            MACRO_UNIT2(TACU_Somali_Pirates_U_I_Rifleman_04,2);
            MACRO_UNIT3(TACU_Somali_Pirates_U_I_Autorifleman,2);
            MACRO_UNIT4(TACU_Somali_Pirates_U_I_AT,2);
            MACRO_UNIT5(TACU_Somali_Pirates_U_I_Rifleman_03,2);
            MACRO_UNIT6(TACU_Somali_Pirates_U_I_Rifleman_02,2);
            MACRO_UNIT7(TACU_Somali_Pirates_U_I_Rifleman_01,2);
        };
    };
};
