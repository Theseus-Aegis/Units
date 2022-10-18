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
            class unit1: unit0 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_I_CT_Fireteam: TACU_Police_G_I_CT_Guards {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Police_U_I_CT_Breacher";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Police_U_I_CT_Rifleman";
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
            class unit1: unit0 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_2";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_I_Enforcer_Fireteam: TACU_Police_G_I_Enforcer_Guards {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Police_U_I_Enforcer_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Police_U_I_Enforcer_Breacher";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_1";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Police_U_I_Enforcer_SMG_2";
                position[] = {10, -10, 0};
            };
        };
    };
};
