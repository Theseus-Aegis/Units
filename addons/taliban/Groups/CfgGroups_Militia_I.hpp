class TACU_Taliban_Militia_Infantry_I {
    name = "Infantry";

    class TACU_Taliban_Militia_Patrol_I {
        name = "Patrol";
        side = 2;
        faction = "TACU_Taliban_Militia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Taliban_Militia_U_I_Rifleman_01";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Taliban_Militia_U_I_Rifleman_03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Taliban_Militia_Fireteam_I: TACU_Taliban_Militia_Patrol_I {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_Taliban_Militia_U_I_Leader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Taliban_Militia_U_I_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Rifleman_02";
            position[] = {-5, -5, 0};

        };
        class unit3: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Machinegunner";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Taliban_Militia_Squad_I: TACU_Taliban_Militia_Patrol_I {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_Taliban_Militia_U_I_Leader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Taliban_Militia_U_I_AT";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Machinegunner";
            position[] = {-5, -5, 0};
        };
        class unit3: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Demolitions";
            position[] = {10, -10, 0};
        };
        class unit4: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Medic";
            position[] = {-10, -10, 0};
        };
        class unit5: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Grenadier";
            position[] = {15, -15, 0};
        };
        class unit6: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Rifleman_03";
            position[] = {-15, -15, 0};
        };
        class unit7: unit1 {
            vehicle = "TACU_Taliban_Militia_U_I_Rifleman_01";
            position[] = {20, -20, 0};
        };
    };
};
