// Tanoan Revolutionaries
class TACU_Revolutionaries_G_O_Infantry_Tanoans {
    name = "Infantry (Tanoans)";

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsLight {
        name = "Guards (Light)";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Shotgunner,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsLight {
        name = "Guards (Heavy)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SniperTeam: TACU_Revolutionaries_G_O_Infantry_Tanoans_GuardsHeavy {
        name = "Sniper Team";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Marksman,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamLight: TACU_Revolutionaries_G_O_Infantry_Tanoans_SniperTeam {
        name = "Fireteam (Light)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Paramedic,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Marksman,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamLight {
        name = "Fireteam (Heavy)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Leader,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_SMG02,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Autorifleman,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadLight: TACU_Revolutionaries_G_O_Infantry_Tanoans_FireteamHeavy {
        name = "Squad (Light)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Paramedic,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Marksman,0);
        MACRO_UNIT4(TACU_Revolutionaries_U_O_Tanoan_Machinegunner,0);
        MACRO_UNIT5(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadLight {
        name = "Squad (Heavy)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Leader,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_SMG02,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Autorifleman,0);
        MACRO_UNIT4(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
        MACRO_UNIT5(TACU_Revolutionaries_U_O_Tanoan_Rifleman04,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SupportLight: TACU_Revolutionaries_G_O_Infantry_Tanoans_SquadHeavy {
        name = "Support (Light)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_SMG01,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Machinegunner,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Grenadier,0);
    };

    class TACU_Revolutionaries_G_O_Infantry_Tanoans_SupportHeavy: TACU_Revolutionaries_G_O_Infantry_Tanoans_SupportLight {
        name = "Support (Heavy)";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Leader,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Autorifleman,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Rifleman04,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Grenadier,0);
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
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02,0);
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Scout: TACU_Revolutionaries_G_O_Veterans_Tanoans_Patrol {
        name = "Scouts";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02,0);
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_SniperTeam: TACU_Revolutionaries_G_O_Veterans_Tanoans_Scout {
        name = "Sniper Team";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04,0);
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Fireteam: TACU_Revolutionaries_G_O_Veterans_Tanoans_SniperTeam {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Vet_Leader,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Vet_Medic,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman,0);
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Squad: TACU_Revolutionaries_G_O_Veterans_Tanoans_Fireteam {
        name = "Squad";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Vet_Leader,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04,0);
        MACRO_UNIT4(TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman,0);
        MACRO_UNIT5(TACU_Revolutionaries_U_O_Tanoan_Vet_Medic,0);
    };

    class TACU_Revolutionaries_G_O_Veterans_Tanoans_Support: TACU_Revolutionaries_G_O_Veterans_Tanoans_Squad {
        name = "Support";
        MACRO_UNIT0(TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner,0);
        MACRO_UNIT1(TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner,0);
        MACRO_UNIT2(TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer,0);
        MACRO_UNIT3(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01,0);
    };

};
