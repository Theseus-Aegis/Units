class TACU_MSF_I {
    name = "Militaires Sans Frontières";
    class TACU_MSF_G_I_Infantry_Main {
        name = "Infantry";

        class TACU_MSF_G_I_Infantry_Main_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Main_TeamLeader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Main_Rifleman";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_MSF_G_I_Infantry_Main_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Main_TeamLeader";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Main_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_MSF_U_I_Main_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_MSF_U_I_Main_Rifleman_AT";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };

        class TACU_MSF_G_I_Infantry_Main_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Main_TeamLeader";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Main_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_MSF_U_I_Main_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_MSF_U_I_Main_Rifleman_AT";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_MSF_U_I_Main_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_MSF_U_I_Main_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
            class unit6 {
                vehicle = "TACU_MSF_U_I_Main_Engineer";
                side = 2;
                rank = "PRIVATE";
                position[] = {-15, -15, 0};
            };
            class unit7 {
                vehicle = "TACU_MSF_U_I_Main_Marksman";
                side = 2;
                rank = "PRIVATE";
                position[] = {20, -20, 0};
            };
        };
    };

    class TACU_MSF_G_I_Infantry_Desert {
        name = "Infantry (Desert)";

        class TACU_MSF_G_I_Infantry_Desert_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Desert_TeamLeader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Desert_Rifleman";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_MSF_G_I_Infantry_Desert_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Desert_TeamLeader";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Desert_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_MSF_U_I_Desert_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_MSF_U_I_Desert_Rifleman_AT";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };

        class TACU_MSF_G_I_Infantry_Desert_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Desert_TeamLeader";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Desert_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_MSF_U_I_Desert_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_MSF_U_I_Desert_Rifleman_AT";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_MSF_U_I_Desert_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_MSF_U_I_Desert_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
            class unit6 {
                vehicle = "TACU_MSF_U_I_Desert_Engineer";
                side = 2;
                rank = "PRIVATE";
                position[] = {-15, -15, 0};
            };
            class unit7 {
                vehicle = "TACU_MSF_U_I_Desert_Marksman";
                side = 2;
                rank = "PRIVATE";
                position[] = {20, -20, 0};
            };
        };
    };

    class TACU_MSF_G_I_Infantry_Wood {
        name = "Infantry (Woodland)";

        class TACU_MSF_G_I_Infantry_Wood_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Wood_TeamLeader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Wood_Rifleman";
                side = 0;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_MSF_G_I_Infantry_Wood_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Wood_TeamLeader";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Wood_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_MSF_U_I_Wood_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_MSF_U_I_Wood_Rifleman_AT";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };

        class TACU_MSF_G_I_Infantry_Wood_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_MSF_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_MSF_U_I_Wood_TeamLeader";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_MSF_U_I_Wood_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_MSF_U_I_Wood_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_MSF_U_I_Wood_Rifleman_AT";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_MSF_U_I_Wood_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_MSF_U_I_Wood_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
            class unit6 {
                vehicle = "TACU_MSF_U_I_Wood_Engineer";
                side = 2;
                rank = "PRIVATE";
                position[] = {-15, -15, 0};
            };
            class unit7 {
                vehicle = "TACU_MSF_U_I_Wood_Marksman";
                side = 2;
                rank = "PRIVATE";
                position[] = {20, -20, 0};
            };
        };
    };
};
