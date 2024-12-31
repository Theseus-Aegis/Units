class TACU_Proxy_Russia_Infantry_O {
    name = "Infantry";

    class TACU_Proxy_Russia_G_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_Proxy_Russia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman,0);
    };

    class TACU_Proxy_Russia_G_Fireteam: TACU_Proxy_Russia_G_Patrol {
        name = "Fireteam";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Medic,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Autorifleman,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman,0);
    };

    class TACU_Proxy_Russia_G_ATTeam: TACU_Proxy_Russia_G_Patrol {
        name = "AT Team";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_AT,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_AT,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman,0);
    };

    class TACU_Proxy_Russia_G_Squad: TACU_Proxy_Russia_G_Patrol {
        name = "Squad";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Medic,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Grenadier,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Demolitions,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_AT,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Machinegunner,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Marksman,0);
    };
};

class TACU_Proxy_Russia_Infantry_CBRN_O {
    name = "Infantry (CBRN)";

    class TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Patrol (CBRN)";
        side = 0;
        faction = "TACU_Proxy_Russia_O";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman_CBRN,0);
    };

    class TACU_Proxy_Russia_G_Fireteam_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Fireteam (CBRN)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Medic_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Autorifleman_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman_CBRN,0);
    };

    class TACU_Proxy_Russia_G_ATTeam_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "AT Team (CBRN)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_AT_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_AT_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman_CBRN,0);
    };

    class TACU_Proxy_Russia_G_Squad_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Squad (CBRN)";
        __COUNTER_RESET__
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Teamleader_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Medic_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Grenadier_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Rifleman_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Demolitions_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_AT_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Machinegunner_CBRN,0);
        GROUP_UNIT(TACU_Proxy_Russia_U_O_Marksman_CBRN,0);
    };
};
