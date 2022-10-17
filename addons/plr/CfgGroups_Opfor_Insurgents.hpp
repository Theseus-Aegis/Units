// PLR Insurgents
class TACU_PLR_G_O_Infantry_Insurgents {
    name = "Infantry (Insurgents)";

    class TACU_PLR_G_O_Infantry_Insurgents_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_PLR_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_PLR_G_O_Infantry_Insurgents_Fireteam: TACU_PLR_G_O_Infantry_Insurgents_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_PLR_U_O_Insurgent_TeamLeader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_05";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_PLR_U_O_Insurgent_Autorifleman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_PLR_G_O_Infantry_Insurgents_Squad: TACU_PLR_G_O_Infantry_Insurgents_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_PLR_U_O_Insurgent_TeamLeader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_04";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_PLR_U_O_Insurgent_Autorifleman";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_01";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_AT";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_05";
            position[] = {-15, -15, 0};
        };
        class unit7: unit6 {
            vehicle = "TACU_PLR_U_O_Insurgent_Rifleman_03";
            position[] = {20, -20, 0};
        };
    };
};
