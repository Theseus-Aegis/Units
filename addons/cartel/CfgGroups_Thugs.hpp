class TACU_Cartel_O_G_Thugs_Infantry {
    name = "Thugs";

    class TACU_Cartel_G_O_Thugs_Patrol {
        name = "Thug Patrol";
        side = 0;
        faction = "TACU_Cartel_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Cartel_G_O_Thugs_Fireteam: TACU_Cartel_G_O_Thugs_Patrol {
        name = "Thug Fireteam";
        class unit0 {
            vehicle = "";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Cartel_G_O_Thugs_Squad: TACU_Cartel_G_O_Thugs_Fireteam {
        name = "Thug Squad";
        class unit0 {
            vehicle = "";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "";
            position[] = {15, -15, 0};
        };
    };
};
