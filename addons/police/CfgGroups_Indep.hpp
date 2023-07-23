class TACU_Police_I {
    name = "Law Enforcement";
    class TACU_Police_G_I_CT {
        name = "Counter-Terrorists";

        class TACU_Police_G_Guards_CT {
            name = "Guards";
            side = 2;
            faction = "TACU_Police_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Police_U_I_CT_Rifleman,2);
            GROUP_UNIT(TACU_Police_U_I_CT_Rifleman,2);
        };

        class TACU_Police_G_Fireteam_CT: TACU_Police_G_Guards_CT {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Police_U_I_CT_Rifleman,2);
            GROUP_UNIT(TACU_Police_U_I_CT_Breacher,2);
            GROUP_UNIT(TACU_Police_U_I_CT_Rifleman,2);
            GROUP_UNIT(TACU_Police_U_I_CT_Rifleman,2);
        };
    };

    class TACU_Police_G_I_Enforcer {
        name = "Enforcer";

        class TACU_Police_G_Enforcer_Guards {
            name = "Guards";
            side = 2;
            faction = "TACU_Police_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Police_U_I_Enforcer_SMG_1,2);
            GROUP_UNIT(TACU_Police_U_I_Enforcer_SMG_2,2);
        };

        class TACU_Police_G_Enforcer_Fireteam: TACU_Police_G_Enforcer_Guards {
            name = "Fireteam";
            __COUNTER_RESET__
            GROUP_UNIT(TACU_Police_U_I_Enforcer_Rifleman,2);
            GROUP_UNIT(TACU_Police_U_I_Enforcer_Breacher,2);
            GROUP_UNIT(TACU_Police_U_I_Enforcer_SMG_1,2);
            GROUP_UNIT(TACU_Police_U_I_Enforcer_SMG_2,2);
        };
    };
};
