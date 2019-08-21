// PLR Paramilitary
class TACU_PLR_G_O_Infantry_Paramilitary {
    name = "Infantry (Paramilitary)";

    class TACU_PLR_G_O_Infantry_Paramilitary_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_PLR_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_PLR_U_O_Paramilitary_TeamLeader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_02";
            side = 0;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_PLR_G_O_Infantry_Paramilitary_Fireteam {
        name = "Fireteam";
        side = 0;
        faction = "TACU_PLR_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_PLR_U_O_Paramilitary_TeamLeader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_01";
            side = 0;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_02";
            side = 0;
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class unit3 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Autorifleman";
            side = 0;
            rank = "PRIVATE";
            position[] = {10, -10, 0};
        };
    };

    class TACU_PLR_G_O_Infantry_Paramilitary_Squad {
        name = "Squad";
        side = 0;
        faction = "TACU_PLR_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_PLR_U_O_Paramilitary_TeamLeader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_01";
            side = 0;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_02";
            side = 0;
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class unit3 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Autorifleman";
            side = 0;
            rank = "PRIVATE";
            position[] = {10, -10, 0};
        };
        class unit4 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Grenadier";
            side = 0;
            rank = "PRIVATE";
            position[] = {-10, -10, 0};
        };
        class unit5 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_AT";
            side = 0;
            rank = "PRIVATE";
            position[] = {15, -15, 0};
        };
        class unit6 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_02";
            side = 0;
            rank = "PRIVATE";
            position[] = {-15, -15, 0};
        };
        class unit7 {
            vehicle = "TACU_PLR_U_O_Paramilitary_Rifleman_01";
            side = 0;
            rank = "PRIVATE";
            position[] = {20, -20, 0};
        };
    };
};
