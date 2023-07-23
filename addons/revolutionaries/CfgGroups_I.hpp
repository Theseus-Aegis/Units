// Tanoan Civil Defense
class TACU_Revolutionaries_G_I_Infantry_Tanoans {
    name = "Infantry (Tanoans)";

    class TACU_Revolutionaries_G_Guards {
        name = "Guards";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Shotgunner,2);
    };

    class TACU_Revolutionaries_G_SniperTeam: TACU_Revolutionaries_G_Guards {
        name = "Sniper Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Marksman,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
    };

    class TACU_Revolutionaries_G_Fireteam: TACU_Revolutionaries_G_Guards {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman02,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Paramedic,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman01,2);
    };

    class TACU_Revolutionaries_G_Squad: TACU_Revolutionaries_G_Guards {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Leader,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Paramedic,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman01,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman02,2);
        GROUP_UNIT(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
    };
};
