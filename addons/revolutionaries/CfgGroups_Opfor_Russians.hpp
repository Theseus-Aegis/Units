// Russian Revolutionaries
class TACU_Revolutionaries_G_O_Infantry_Russians {
    name = "Infantry (Russians)";

    class TACU_Revolutionaries_G_O_Infantry_Russians_GuardsLight {
        name = "Guards (Light)";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Shotgunner";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_GuardsHeavy: TACU_Revolutionaries_G_O_Infantry_Russians_GuardsLight {
        name = "Guards (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_SniperTeam: TACU_Revolutionaries_G_O_Infantry_Russians_GuardsHeavy {
        name = "Sniper Team";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Marksman";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman03";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_FireteamLight: TACU_Revolutionaries_G_O_Infantry_Russians_SniperTeam {
        name = "Fireteam (Light)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Paramedic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Marksman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_FireteamHeavy: TACU_Revolutionaries_G_O_Infantry_Russians_FireteamLight {
        name = "Fireteam (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_SMG02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Autorifleman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_SquadLight: TACU_Revolutionaries_G_O_Infantry_Russians_FireteamHeavy {
        name = "Squad (Light)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Paramedic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Marksman";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Machinegunner";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman01";
            position[] = {15, -15, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_SquadHeavy: TACU_Revolutionaries_G_O_Infantry_Russians_SquadLight {
        name = "Squad (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_SMG02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman02";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Autorifleman";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman01";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman04";
            position[] = {15, -15, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_SupportLight: TACU_Revolutionaries_G_O_Infantry_Russians_SquadHeavy {
        name = "Support (Light)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman03";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_SMG01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Machinegunner";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Grenadier";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Infantry_Russians_SupportHeavy: TACU_Revolutionaries_G_O_Infantry_Russians_SupportLight {
        name = "Support (Heavy)";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Autorifleman";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Rifleman04";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Grenadier";
            position[] = {10, -10, 0};
        };
    };
};

// Russian Revolutionaries Vets
class TACU_Revolutionaries_G_O_Veterans_Russians {
    name = "Veterans (Russians)";

    class TACU_Revolutionaries_G_O_Veterans_Russians_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Russians_Scout: TACU_Revolutionaries_G_O_Veterans_Russians_Patrol {
        name = "Scouts";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_SMG01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_SMG02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Russians_SniperTeam: TACU_Revolutionaries_G_O_Veterans_Russians_Scout {
        name = "Sniper Team";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Marksman";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman04";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Russians_Fireteam: TACU_Revolutionaries_G_O_Veterans_Russians_SniperTeam {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Medic";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Autorifleman";
            position[] = {10, -10, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Russians_Squad: TACU_Revolutionaries_G_O_Veterans_Russians_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Leader";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman02";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman03";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman04";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Autorifleman";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Medic";
            position[] = {15, -15, 0};
        };
    };

    class TACU_Revolutionaries_G_O_Veterans_Russians_Support: TACU_Revolutionaries_G_O_Veterans_Russians_Squad {
        name = "Support";
        class unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Shotgunner";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Machinegunner";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rocketeer";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_Revolutionaries_U_O_Russian_Vet_Rifleman01";
            position[] = {10, -10, 0};
        };
    };
};
