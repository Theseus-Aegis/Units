class TACU_BAF_G_Desert {
    name = "Group 12 (Sahara Desert)";

    class TACU_BAF_G_Desert_Patrol {
        name = "Patrol";
        side = 1;
        faction = "TACU_BAF_B";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_BAF_U_B_Desert_TL";
            side = 1;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_BAF_U_B_Desert_Scout";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };
    class TACU_BAF_G_Desert_Fireteam: TACU_BAF_G_Desert_Patrol {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_BAF_U_B_Desert_TL";
            side = 1;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_BAF_U_B_Desert_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_Scout";
            position[] = {-5, -5, 0};
        };
        class unit3: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_Marksman";
            position[] = {10, -10, 0};
        };
    };
    class TACU_BAF_G_Desert_Squad: TACU_BAF_G_Desert_Patrol {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_BAF_U_B_Desert_TL";
            side = 1;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_BAF_U_B_Desert_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_Scout";
            position[] = {-5, -5, 0};
        };
        class unit3: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_HeavyGunner";
            position[] = {10, -10, 0};
        };
        class unit4: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_Demolitions";
            position[] = {-10, -10, 0};
        };
        class unit5: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_LAT";
            position[] = {15, -15, 0};
        };
        class unit6: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_Marksman";
            position[] = {-15, -15, 0};
        };
        class unit7: unit1 {
            vehicle = "TACU_BAF_U_B_Desert_Scout";
            position[] = {20, -20, 0};
        };
    };
};
