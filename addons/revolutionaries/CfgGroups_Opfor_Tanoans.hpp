// Tanoan Revolutionaries
class TACU_Revolutionaries_G_O_Infantry_Tanoans {
    name = "Infantry (Tanoans)";

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsLight {
        name = "Guards (Light)";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Shotgunner";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsLight {
        name = "Guards (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SniperTeam: TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsHeavy {
        name = "Sniper Team";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Marksman";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamLight: TACU_Revolutionaries_G_O_Infantry_Tanoans_SniperTeam {
        name = "Fireteam (Light)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Paramedic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Marksman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamLight {
        name = "Fireteam (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_SMG02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Autorifleman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadLight: TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamHeavy {
        name = "Squad (Light)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Paramedic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Marksman";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Machinegunner";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman01";
            position[] = {15, -15, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadLight {
        name = "Squad (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_SMG02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Autorifleman";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman01";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman04";
            position[] = {15, -15, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SupportLight: TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadHeavy {
        name = "Support (Light)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_SMG01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Machinegunner";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Grenadier";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SupportHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_SupportLight {
        name = "Support (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Rifleman04";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Grenadier";
            position[] = {10, -10, 0};
        };
    };
};

// Tanoans Revolutionaries Vets
class TACU_Revolutionaries_G_O_Veterans_Tanoans {
    name = "Veterans (Tanoans)";

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Scout: TACU_Revolutionaries_G_O_Veterans_Tanoans_Patrol {
        name = "Scouts";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_SniperTeam: TACU_Revolutionaries_G_O_Veterans_Tanoans_Scout {
        name = "Sniper Team";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Fireteam: TACU_Revolutionaries_G_O_Veterans_Tanoans_SniperTeam {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Squad: TACU_Revolutionaries_G_O_Veterans_Tanoans_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Medic";
            position[] = {15, -15, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Support: TACU_Revolutionaries_G_O_Veterans_Tanoans_Squad {
        name = "Support";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01";
            position[] = {10, -10, 0};
        };
    };

};
