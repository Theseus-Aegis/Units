// Tanoan Civil Defense
class TACU_Revolutionaries_G_I_Infantry_Tanoans {
    name = "Infantry (Tanoans)";

    class TACU_Revolutionaries_G_Guards {
        name = "Guards";
        side = 2;
        faction = "TACU_Revolutionaries_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
        MACRO_UNIT1(TACU_Revolutionaries_U_I_Tanoan_Shotgunner,2);
    };

    class TACU_Revolutionaries_G_SniperTeam: TACU_Revolutionaries_G_Guards {
        name = "Sniper Team";
        MACRO_UNIT0(TACU_Revolutionaries_U_I_Tanoan_Marksman,2);
        MACRO_UNIT1(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
    };

    class TACU_Revolutionaries_G_Fireteam: TACU_Revolutionaries_G_Guards {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Revolutionaries_U_I_Tanoan_Rifleman02,2);
        MACRO_UNIT1(TACU_Revolutionaries_U_I_Tanoan_Paramedic,2);
        MACRO_UNIT2(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
        MACRO_UNIT3(TACU_Revolutionaries_U_I_Tanoan_Rifleman01,2);
    };

    class TACU_Revolutionaries_G_Squad: TACU_Revolutionaries_G_Guards {
        name = "Squad";
        MACRO_UNIT0(TACU_Revolutionaries_U_I_Tanoan_Leader,2);
        MACRO_UNIT1(TACU_Revolutionaries_U_I_Tanoan_Paramedic,2);
        MACRO_UNIT2(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
        MACRO_UNIT3(TACU_Revolutionaries_U_I_Tanoan_Rifleman01,2);
        MACRO_UNIT4(TACU_Revolutionaries_U_I_Tanoan_Rifleman02,2);
        MACRO_UNIT5(TACU_Revolutionaries_U_I_Tanoan_Rifleman03,2);
    };
};
