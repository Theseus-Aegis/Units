// Tanoan Revolutionaries
class TACU_Revolutionaries_G_O_Infantry_Tanoans {
    name = "Infantry (Tanoans)";

    class TACU_Revolutionaries_G_GuardsLight {
        name = "Guards (Light)";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Shotgunner,0);
    };

    class TACU_Revolutionaries_G_GuardsHeavy: TACU_Revolutionaries_G_GuardsLight {
        name = "Guards (Heavy)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
    };

    class TACU_Revolutionaries_G_SniperTeam: TACU_Revolutionaries_G_GuardsLight {
        name = "Sniper Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Marksman,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
    };

    class TACU_Revolutionaries_G_FireteamLight: TACU_Revolutionaries_G_GuardsLight {
        name = "Fireteam (Light)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Paramedic,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Marksman,0);
    };

    class TACU_Revolutionaries_G_FireteamHeavy: TACU_Revolutionaries_G_GuardsLight {
        name = "Fireteam (Heavy)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Leader,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_SMG02,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Autorifleman,0);
    };

    class TACU_Revolutionaries_G_SquadLight: TACU_Revolutionaries_G_GuardsLight {
        name = "Squad (Light)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Paramedic,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Marksman,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Machinegunner,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
    };

    class TACU_Revolutionaries_G_SquadHeavy: TACU_Revolutionaries_G_GuardsLight {
        name = "Squad (Heavy)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Leader,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_SMG02,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman02,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Autorifleman,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman01,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman04,0);
    };

    class TACU_Revolutionaries_G_SupportLight: TACU_Revolutionaries_G_GuardsLight {
        name = "Support (Light)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman03,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_SMG01,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Machinegunner,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Grenadier,0);
    };

    class TACU_Revolutionaries_G_SupportHeavy: TACU_Revolutionaries_G_GuardsLight {
        name = "Support (Heavy)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Leader,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Autorifleman,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Rifleman04,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Grenadier,0);
    };
};

// Tanoans Revolutionaries Vets
class TACU_Revolutionaries_G_O_Veterans_Tanoans {
    name = "Veterans (Tanoans)";

    class TACU_Revolutionaries_G_Patrol_Veterans {
        name = "Patrol";
        side = 0;
        faction = "TACU_Revolutionaries_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02,0);
    };

    class TACU_Revolutionaries_G_Scouts_Veterans: TACU_Revolutionaries_G_Patrol_Veterans {
        name = "Scouts";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG01,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_SMG02,0);
    };

    class TACU_Revolutionaries_G_SniperTeam_Veterans: TACU_Revolutionaries_G_Patrol_Veterans {
        name = "Sniper Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Marksman,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04,0);
    };

    class TACU_Revolutionaries_G_Fireteam_Veterans: TACU_Revolutionaries_G_Patrol_Veterans {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Leader,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Medic,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman,0);
    };

    class TACU_Revolutionaries_G_Squad_Veterans: TACU_Revolutionaries_G_Patrol_Veterans {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Leader,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman02,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman03,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman04,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Autorifleman,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Medic,0);
    };

    class TACU_Revolutionaries_G_Support_Veterans: TACU_Revolutionaries_G_Patrol_Veterans {
        name = "Support";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Shotgunner,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Machinegunner,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rocketeer,0);
        GROUP_UNIT(TACU_Revolutionaries_U_O_Tanoan_Vet_Rifleman01,0);
    };

};
