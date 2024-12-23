class TACU_Seven_Rings_I {
    name = "Seven Rings (West)";

    class TACU_Seven_Rings_Infantry_I {
        name = "Infantry";

        class TACU_Seven_Rings_G_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_Seven_Rings_Western";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Seven_Rings_Western_U_I_Rifleman_01,2);
            MACRO_UNIT1(TACU_Seven_Rings_Western_U_I_Rifleman_02,2);
        };

        class TACU_Seven_Rings_G_Fireteam: TACU_Seven_Rings_G_Patrol {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Seven_Rings_Western_U_I_Leader,2);
            MACRO_UNIT1(TACU_Seven_Rings_Western_U_I_Medic,2);
            MACRO_UNIT2(TACU_Seven_Rings_Western_U_I_Autorifleman,2);
            MACRO_UNIT3(TACU_Seven_Rings_Western_U_I_Marksman,2);
        };

        class TACU_Seven_Rings_G_ATTeam: TACU_Seven_Rings_G_Patrol {
            name = "AT Team";
            MACRO_UNIT0(TACU_Seven_Rings_Western_U_I_Leader,2);
            MACRO_UNIT1(TACU_Seven_Rings_Western_U_I_Medic,2);
            MACRO_UNIT2(TACU_Seven_Rings_Western_U_I_AT,2);
            MACRO_UNIT3(TACU_Seven_Rings_Western_U_I_AT,2);
        };

        class TACU_Seven_Rings_G_Squad: TACU_Seven_Rings_G_Patrol {
            name = "Squad";
            MACRO_UNIT0(TACU_Seven_Rings_Western_U_I_Leader,2);
            MACRO_UNIT1(TACU_Seven_Rings_Western_U_I_Medic,2);
            MACRO_UNIT2(TACU_Seven_Rings_Western_U_I_Grenadier,2);
            MACRO_UNIT3(TACU_Seven_Rings_Western_U_I_Autorifleman,2);
            MACRO_UNIT4(TACU_Seven_Rings_Western_U_I_Engineer,2);
            MACRO_UNIT5(TACU_Seven_Rings_Western_U_I_AT,2);
            MACRO_UNIT6(TACU_Seven_Rings_Western_U_I_CQB,2);
            MACRO_UNIT7(TACU_Seven_Rings_Western_U_I_Rifleman_02,2);
        };
    };
};
