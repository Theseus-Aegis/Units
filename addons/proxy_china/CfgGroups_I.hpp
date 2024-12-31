class TACU_Proxy_China_Infantry_I {
    name = "Infantry";

    class TACU_Proxy_China_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Proxy_China_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Rifleman,2);
    };

    class TACU_Proxy_China_G_Fireteam: TACU_Proxy_China_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Medic,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Autorifleman,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Rifleman,2);
    };

    class TACU_Proxy_China_G_ATTeam: TACU_Proxy_China_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_AT,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_AT,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Rifleman,2);
    };

    class TACU_Proxy_China_G_Squad: TACU_Proxy_China_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Medic,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Grenadier,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Rifleman,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Demolitions,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_AT,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_Proxy_China_U_I_Marksman,2);
    };
};
