class TACU_BAF_G_Urban {
    name = "Group 15 (Urban)";

    class TACU_BAF_G_Urban_Patrol {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_BAF_U_B_Urban_TL";
            side = 1;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_BAF_U_B_Urban_Scout";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };
    class TACU_BAF_G_Urban_Fireteam: TACU_BAF_G_Urban_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_BAF_U_B_Urban_TL";
            side = 1;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_BAF_U_B_Urban_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_Grenadier";
            position[] = {-5, -5, 0};
        };
        class unit3: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_Marksman";
            position[] = {10, -10, 0};
        };
    };
    class TACU_BAF_G_Urban_Squad: TACU_BAF_G_Urban_Patrol {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_BAF_U_B_Urban_TL";
            side = 1;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_BAF_U_B_Urban_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_Grenadier";
            position[] = {-5, -5, 0};
        };
        class unit3: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_HeavyGunner";
            position[] = {10, -10, 0};
        };
        class unit4: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_Demolitions";
            position[] = {-10, -10, 0};
        };
        class unit5: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_LAT";
            position[] = {15, -15, 0};
        };
        class unit6: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_Marksman";
            position[] = {-15, -15, 0};
        };
        class unit7: unit1 {
            vehicle = "TACU_BAF_U_B_Urban_Scout";
            position[] = {20, -20, 0};
        };
    };
};
