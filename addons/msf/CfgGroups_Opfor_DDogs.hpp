// Diamond Dogs Black
class TACU_MSF_G_O_Infantry_DDogs_Black {
    name = "Infantry (Diamond Dogs - Black)";

    class TACU_MSF_G_O_Infantry_DDogs_Black_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_DDogs_Black_Fireteam: TACU_MSF_G_O_Infantry_DDogs_Black_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Rifleman_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_DDogs_Black_Squad: TACU_MSF_G_O_Infantry_DDogs_Black_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Rifleman_AT";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Grenadier";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Medic";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Engineer";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_MSF_U_O_DDogs_Black_Marksman";
            position[] = {20, -20, 0};
        };
    };
};

// Diamond Dogs Desert
class TACU_MSF_G_O_Infantry_DDogs_Desert {
    name = "Infantry (Diamond Dogs - Desert)";

    class TACU_MSF_G_O_Infantry_DDogs_Desert_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_DDogs_Desert_Fireteam: TACU_MSF_G_O_Infantry_DDogs_Desert_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Rifleman_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_DDogs_Desert_Squad: TACU_MSF_G_O_Infantry_DDogs_Desert_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Rifleman_AT";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Grenadier";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Medic";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Engineer";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_MSF_U_O_DDogs_Desert_Marksman";
            position[] = {20, -20, 0};
        };
    };
};

// Diamond Dogs Woodland
class TACU_MSF_G_O_Infantry_DDogs_Wood {
    name = "Infantry (Diamond Dogs - Woodland)";

    class TACU_MSF_G_O_Infantry_DDogs_Wood_Patrol {
        name = "Patrol";
            side = 0;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_DDogs_Wood_Fireteam: TACU_MSF_G_O_Infantry_DDogs_Wood_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Rifleman_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_DDogs_Wood_Squad: TACU_MSF_G_O_Infantry_DDogs_Wood_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Teamleader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Rifleman_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Rifleman_AT";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Grenadier";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Medic";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Engineer";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_MSF_U_O_DDogs_Wood_Marksman";
            position[] = {20, -20, 0};
        };
    };
};
