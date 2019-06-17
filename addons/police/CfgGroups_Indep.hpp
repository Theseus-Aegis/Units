class TACU_Police_I {
    name = "Law Enforcement";
    class TACU_Police_G_I_CT {
        name = "Counter-Terrorists";

        class TACU_Police_G_I_CT_Guards {
            name = "Guards";
            side = 2;
            faction = "TACU_Police_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_I_CT_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_Police_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_I_CT_Breacher";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };

    class TACU_Police_G_I_Enforcer {
        name = "Enforcer";

        class TACU_Police_G_I_Enforcer_Guards {
            name = "Guards";
            side = 2;
            faction = "TACU_Police_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_1";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_2";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_I_Enforcer_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_Police_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_I_Enforcer_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_I_Enforcer_Breacher";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_1";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_2";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };
};
