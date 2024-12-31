class TACU_Proxy_China_Infantry_O {
    name = "Infantry";

    class TACU_Proxy_China_G_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_Proxy_China_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Rifleman,0);
    };

    class TACU_Proxy_China_G_Fireteam: TACU_Proxy_China_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Medic,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Autorifleman,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Rifleman,0);
    };

    class TACU_Proxy_China_G_ATTeam: TACU_Proxy_China_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_AT,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_AT,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Rifleman,0);
    };

    class TACU_Proxy_China_G_Squad: TACU_Proxy_China_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_China_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Medic,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Grenadier,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Rifleman,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Demolitions,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_AT,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Machinegunner,0);
        GROUP_UNIT(TACU_Proxy_China_U_O_Marksman,0);
    };
};
