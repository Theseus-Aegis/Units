class TACU_Proxy_Russia_Infantry_I {
    name = "Infantry";

    class TACU_Proxy_Russia_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Proxy_Russia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_Rifleman,2);
    };

    class TACU_Proxy_Russia_G_Fireteam: TACU_Proxy_Russia_G_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_Medic,2);
        MACRO_UNIT2(TACU_Proxy_Russia_U_I_Autorifleman,2);
        MACRO_UNIT3(TACU_Proxy_Russia_U_I_Rifleman,2);
    };

    class TACU_Proxy_Russia_G_ATTeam: TACU_Proxy_Russia_G_Patrol {
        name = "AT Team";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_AT,2);
        MACRO_UNIT2(TACU_Proxy_Russia_U_I_AT,2);
        MACRO_UNIT3(TACU_Proxy_Russia_U_I_Rifleman,2);
    };

    class TACU_Proxy_Russia_G_Squad: TACU_Proxy_Russia_G_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_Medic,2);
        MACRO_UNIT2(TACU_Proxy_Russia_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_Proxy_Russia_U_I_Rifleman,2);
        MACRO_UNIT4(TACU_Proxy_Russia_U_I_Demolitions,2);
        MACRO_UNIT5(TACU_Proxy_Russia_U_I_AT,2);
        MACRO_UNIT6(TACU_Proxy_Russia_U_I_Machinegunner,2);
        MACRO_UNIT7(TACU_Proxy_Russia_U_I_Marksman,2);
    };
};

class TACU_Proxy_Russia_Infantry_CBRN_I {
    name = "Infantry (CBRN)";

    class TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Patrol (CBRN)";
        side = 2;
        faction = "TACU_Proxy_Russia_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
    };

    class TACU_Proxy_Russia_G_Fireteam_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Fireteam (CBRN)";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_Medic_CBRN,2);
        MACRO_UNIT2(TACU_Proxy_Russia_U_I_Autorifleman_CBRN,2);
        MACRO_UNIT3(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
    };

    class TACU_Proxy_Russia_G_ATTeam_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "AT Team (CBRN)";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_AT_CBRN,2);
        MACRO_UNIT2(TACU_Proxy_Russia_U_I_AT_CBRN,2);
        MACRO_UNIT3(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
    };

    class TACU_Proxy_Russia_G_Squad_CBRN: TACU_Proxy_Russia_G_Patrol_CBRN {
        name = "Squad (CBRN)";
        MACRO_UNIT0(TACU_Proxy_Russia_U_I_Teamleader_CBRN,2);
        MACRO_UNIT1(TACU_Proxy_Russia_U_I_Medic_CBRN,2);
        MACRO_UNIT2(TACU_Proxy_Russia_U_I_Grenadier_CBRN,2);
        MACRO_UNIT3(TACU_Proxy_Russia_U_I_Rifleman_CBRN,2);
        MACRO_UNIT4(TACU_Proxy_Russia_U_I_Demolitions_CBRN,2);
        MACRO_UNIT5(TACU_Proxy_Russia_U_I_AT_CBRN,2);
        MACRO_UNIT6(TACU_Proxy_Russia_U_I_Machinegunner_CBRN,2);
        MACRO_UNIT7(TACU_Proxy_Russia_U_I_Marksman_CBRN,2);
    };
};
