class TACU_Taliban_Veterans_Infantry_I {
    name = "Infantry";

    class TACU_Taliban_Veterans_Patrol_I {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Veterans_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Taliban_Veterans_U_I_Rifleman_03";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Taliban_Veterans_U_I_Rifleman_02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Taliban_Veterans_Fireteam_I: TACU_Taliban_Veterans_Patrol_I {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_Taliban_Veterans_U_I_Leader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Taliban_Veterans_U_I_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_Scout";
            position[] = {-5, -5, 0};

        };
        class unit3: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_AT";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Taliban_Veterans_Squad_I: TACU_Taliban_Veterans_Patrol_I {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_Taliban_Veterans_U_I_Leader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Taliban_Veterans_U_I_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_Demolitions";
            position[] = {-5, -5, 0};
        };
        class unit3: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_Grenadier";
            position[] = {10, -10, 0};
        };
        class unit4: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_Machinegunner";
            position[] = {-10, -10, 0};
        };
        class unit5: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_AT";
            position[] = {15, -15, 0};
        };
        class unit6: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_Rifleman_01";
            position[] = {-15, -15, 0};
        };
        class unit7: unit1 {
            vehicle = "TACU_Taliban_Veterans_U_I_Scout";
            position[] = {20, -20, 0};
        };
    };
};
