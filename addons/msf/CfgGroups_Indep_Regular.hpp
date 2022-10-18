// Regular Black
class TACU_MSF_G_I_Infantry_Regular_Black {
    name = "Infantry (Regular - Black)";

    class TACU_MSF_G_I_Infantry_Regular_Black_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_MSF_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Black_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_I_Infantry_Regular_Black_Fireteam: TACU_MSF_G_I_Infantry_Regular_Black_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Black_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Rifleman_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_I_Infantry_Regular_Black_Squad: TACU_MSF_G_I_Infantry_Regular_Black_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Black_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Rifleman_AT";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Grenadier";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Medic";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Engineer";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_MSF_U_I_Regular_Black_Marksman";
            position[] = {20, -20, 0};
        };
    };
};

// Regular Desert
class TACU_MSF_G_I_Infantry_Regular_Desert {
    name = "Infantry (Regular - Desert)";

    class TACU_MSF_G_I_Infantry_Desert_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_MSF_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_I_Infantry_Regular_Desert_Fireteam: TACU_MSF_G_I_Infantry_Desert_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Rifleman_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_I_Infantry_Regular_Desert_Squad: TACU_MSF_G_I_Infantry_Regular_Desert_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Rifleman_AT";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Grenadier";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Medic";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Engineer";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_MSF_U_I_Regular_Desert_Marksman";
            position[] = {20, -20, 0};
        };
    };
};

// Regular Woodland
class TACU_MSF_G_I_Infantry_Wood {
    name = "Infantry (Regular - Woodland)";

    class TACU_MSF_G_I_Infantry_Regular_Wood_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_MSF_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_I_Infantry_Regular_Wood_Fireteam: TACU_MSF_G_I_Infantry_Regular_Wood_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Rifleman_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_I_Infantry_Regular_Wood_Squad: TACU_MSF_G_I_Infantry_Regular_Wood_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_TeamLeader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Rifleman_AT";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Grenadier";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Medic";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Engineer";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_MSF_U_I_Regular_Wood_Marksman";
            position[] = {20, -20, 0};
        };
    };
};
