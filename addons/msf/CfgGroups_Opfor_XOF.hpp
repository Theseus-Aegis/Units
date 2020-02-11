// XOF Special Forces Group
class TACU_MSF_G_O_Infantry_XOF {
    name = "Infantry (XOF CBRN Unit)";

    class TACU_MSF_G_O_Infantry_XOF_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_XOF_Rifleman_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_MSF_U_O_XOF_Grenadier";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_XOF_PatrolLight {
        name = "Patrol (Light)";
        side = 2;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_02";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_01";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_XOF_Fireteam {
        name = "Fireteam";
        side = 2;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_XOF_Rifleman_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_03";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_01";
            side = 2;
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class unit3 {
            vehicle = "TACU_MSF_U_O_XOF_Grenadier";
            side = 2;
            rank = "PRIVATE";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_XOF_Squad {
        name = "Squad";
        side = 2;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_XOF_Rifleman_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_MSF_U_O_XOF_Breacher";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_01";
            side = 2;
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class unit3 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_02";
            side = 2;
            rank = "PRIVATE";
            position[] = {10, -10, 0};
        };
        class unit4 {
            vehicle = "TACU_MSF_U_O_XOF_Grenadier";
            side = 2;
            rank = "PRIVATE";
            position[] = {-10, -10, 0};
        };
        class unit5 {
            vehicle = "TACU_MSF_U_O_XOF_SMG_03";
            side = 2;
            rank = "PRIVATE";
            position[] = {15, -15, 0};
        };
    };
};
