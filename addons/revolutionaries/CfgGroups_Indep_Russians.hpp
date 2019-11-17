// Russian Civil Defense
class TACU_Revolutionaries_G_I_Infantry_Russians {
    name = "Infantry (Russians)";

    class TACU_Revolutionaries_G_I_Infantry_Russians_Guards {
        name = "Guards";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Shotgunner";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_I_Infantry_Russians_SniperTeam {
        name = "Sniper Team";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Marksman";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_I_Infantry_Russians_Fireteam {
        name = "Fireteam";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman02";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Shotgunner";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
            side = 2;
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class unit3 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman01";
            side = 2;
            rank = "PRIVATE";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_I_Infantry_Russians_Squad {
        name = "Squad";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Leader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Shotgunner";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman03";
            side = 2;
            rank = "PRIVATE";
            position[] = {-5, -5, 0};
        };
        class unit3 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman01";
            side = 2;
            rank = "PRIVATE";
            position[] = {10, -10, 0};
        };
        class unit4 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Shotgunner";
            side = 2;
            rank = "PRIVATE";
            position[] = {-10, -10, 0};
        };
        class unit5 {
            vehicle = "TACU_Revolutionaries_U_I_Russian_Rifleman02";
            side = 2;
            rank = "PRIVATE";
            position[] = {15, -15, 0};
        };
    };
};
