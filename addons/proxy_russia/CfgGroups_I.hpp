class TACU_Proxy_Russia_Infantry_I {
    name = "Infantry";

    class TACU_Proxy_Russia_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Proxy_Russia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman,2);
    };

    class TACU_Proxy_Russia_G_Fireteam: TACU_Proxy_Russia_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Medic,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Autorifleman,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman,2);
    };

    class TACU_Proxy_Russia_G_ATTeam: TACU_Proxy_Russia_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_AT,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_AT,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman,2);
    };

    class TACU_Proxy_Russia_G_Squad: TACU_Proxy_Russia_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Medic,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Grenadier,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Demolitions,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_AT,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Machinegunner,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Marksman,2);
    };
};

class TACU_Proxy_Russia_Infantry_CBRN_I {
    name = "Infantry (CBRN)";

    class TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Patrol (CBRN)";
        side = 2;
        faction = "TACU_Proxy_Russia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
    };

    class TACU_Proxy_Russia_G_Fireteam_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Fireteam (CBRN)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Medic_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Autorifleman_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
    };

    class TACU_Proxy_Russia_G_ATTeam_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "AT Team (CBRN)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_AT_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_AT_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
    };

    class TACU_Proxy_Russia_G_Squad_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Squad (CBRN)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Medic_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Grenadier_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Demolitions_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_AT_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Machinegunner_CBRN,2);
        GROUP_UNIT(TACU_Proxy_Russia_U_I_Marksman_CBRN,2);
    };
};
