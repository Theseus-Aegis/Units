class TACU_Seven_Rings_I {
    name = "Seven Rings (West)";

    class TACU_Seven_Rings_Infantry_I {
        name = "Infantry";

        class TACU_Seven_Rings_G_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_Seven_Rings_Western";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Rifleman_01,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Rifleman_02,2);
        };

        class TACU_Seven_Rings_G_Fireteam: TACU_Seven_Rings_G_Patrol {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Leader,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Medic,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Autorifleman,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Marksman,2);
        };

        class TACU_Seven_Rings_G_ATTeam: TACU_Seven_Rings_G_Patrol {
            name = "AT Team";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Leader,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Medic,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_AT,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_AT,2);
        };

        class TACU_Seven_Rings_G_Squad: TACU_Seven_Rings_G_Patrol {
            name = "Squad";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Leader,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Medic,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Grenadier,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Autorifleman,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Engineer,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_AT,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_CQB,2);
            GROUP_UNIT(TACU_Seven_Rings_Western_U_I_Rifleman_02,2);
        };
    };
};
