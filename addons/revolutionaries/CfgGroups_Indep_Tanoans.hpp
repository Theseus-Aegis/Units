// Tanoan Civil Defense
class TACU_Revolutionaries_G_I_Infantry_Tanoans {
    name = "Infantry (Tanoans)";

    class TACU_Revolutionaries_G_I_Infantry_Tanoans_Guards {
        name = "Guards";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Shotgunner";
            side = 2;
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_I_Infantry_Tanoans_SniperTeam: TACU_Revolutionaries_G_I_Infantry_Tanoans_Guards {
        name = "Sniper Team";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Marksman";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_I_Infantry_Tanoans_Fireteam: TACU_Revolutionaries_G_I_Infantry_Tanoans_SniperTeam {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman02";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Paramedic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman01";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_I_Infantry_Tanoans_Squad: TACU_Revolutionaries_G_I_Infantry_Tanoans_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Leader";
            side = 2;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Paramedic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman01";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman02";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_I_Tanoan_Rifleman03";
            position[] = {15, -15, 0};
        };
    };
};
