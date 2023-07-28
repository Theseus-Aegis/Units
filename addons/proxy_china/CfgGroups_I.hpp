class TACU_Proxy_China_Infantry_I {
    name = "Infantry";

    class TACU_Proxy_China_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Proxy_China_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Proxy_China_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_China_U_I_Rifleman,2);
    };

    class TACU_Proxy_China_G_Fireteam: TACU_Proxy_China_G_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Proxy_China_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_China_U_I_Medic,2);
        MACRO_UNIT2(TACU_Proxy_China_U_I_Autorifleman,2);
        MACRO_UNIT3(TACU_Proxy_China_U_I_Rifleman,2);
    };

    class TACU_Proxy_China_G_ATTeam: TACU_Proxy_China_G_Patrol {
        name = "AT Team";
        MACRO_UNIT0(TACU_Proxy_China_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_China_U_I_AT,2);
        MACRO_UNIT2(TACU_Proxy_China_U_I_AT,2);
        MACRO_UNIT3(TACU_Proxy_China_U_I_Rifleman,2);
    };

    class TACU_Proxy_China_G_Squad: TACU_Proxy_China_G_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_Proxy_China_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_China_U_I_Medic,2);
        MACRO_UNIT2(TACU_Proxy_China_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_Proxy_China_U_I_Rifleman,2);
        MACRO_UNIT4(TACU_Proxy_China_U_I_Demolitions,2);
        MACRO_UNIT5(TACU_Proxy_China_U_I_AT,2);
        MACRO_UNIT6(TACU_Proxy_China_U_I_Machinegunner,2);
        MACRO_UNIT7(TACU_Proxy_China_U_I_Marksman,2);
    };
};
