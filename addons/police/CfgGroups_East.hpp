class TACU_Police_O {
    name = "Law Enforcement";
    class TACU_Police_G_O_CT {
        name = "Counter-Terrorists";

        class TACU_Police_G_O_CT_Guards {
            name = "Guards";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_O_CT_Rifleman";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_O_CT_SMG_2";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_O_CT_Fireteam {
            name = "Fireteam";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_O_CT_Rifleman";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_O_CT_Breacher";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Police_U_O_CT_SMG_1";
                side = 0;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Police_U_O_CT_SMG_2";
                side = 0;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };

    class TACU_Police_G_O_Enforcer {
        name = "Enforcers";

        class TACU_Police_G_O_Enforcer_Guards {
            name = "Guards";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_O_Enforcer_SMG_1";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_O_Enforcer_SMG_2";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Police_G_O_Enforcer_Fireteam {
            name = "Fireteam";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            class unit0 {
                vehicle = "TACU_Police_U_O_Enforcer_SMG_1";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Police_U_O_Enforcer_Breacher";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Police_U_O_Enforcer_SMG_2";
                side = 0;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Police_U_O_Enforcer_SMG_3";
                side = 0;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };
};
