class TACU_Police_B {
    name = "Law Enforcement";
    class TACU_Police_G_B_CT {
        name = "Counter-Terrorists";

        class TACU_Police_G_B_CT_Guards {
            name = "Guards";
            side = 1;
            faction = "TACU_Police_B";
            icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_B_CT_Rifleman";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Police_U_B_CT_Rifleman";
                side = 1;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_B_CT_Fireteam: TACU_Police_G_B_CT_Guards {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Police_U_B_CT_Rifleman";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Police_U_B_CT_Breacher";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Police_U_B_CT_Rifleman";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Police_U_B_CT_Rifleman";
                position[] = {10, -10, 0};
            };
        };
    };

    class TACU_Police_G_B_Enforcer {
        name = "Enforcers";

        class TACU_Police_G_B_Enforcer_Guards {
            name = "Guards";
            side = 1;
            faction = "TACU_Police_B";
            icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_B_Enforcer_SMG_1";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Police_U_B_Enforcer_SMG_2";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_B_Enforcer_Fireteam: TACU_Police_G_B_Enforcer_Guards {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Police_U_B_Enforcer_Rifleman";
                side = 1;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Police_U_B_Enforcer_Breacher";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Police_U_B_Enforcer_SMG_1";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Police_U_B_Enforcer_SMG_2";
                position[] = {10, -10, 0};
            };
        };
    };
};
