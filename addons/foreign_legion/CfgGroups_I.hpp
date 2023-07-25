class TACU_Foreign_Legion_Infantry {
    name = "Infantry";

    class TACU_Foreign_Legion_G_Patrol {
        name = "Patrol";
        side = 2;
        faction = "TACU_Foreign_Legion_I";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Foreign_Legion_U_I_TL,2);
        MACRO_UNIT1(TACU_Foreign_Legion_U_I_Rifleman,2);
    };

    class TACU_Foreign_Legion_G_Fireteam: TACU_Foreign_Legion_G_Patrol {
        name = "Fireteam";
        MACRO_UNIT0(TACU_Foreign_Legion_U_I_TL,2);
        MACRO_UNIT1(TACU_Foreign_Legion_U_I_Medic,2);
        MACRO_UNIT2(TACU_Foreign_Legion_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_Foreign_Legion_U_I_Marksman,2);
    };

    class TACU_Foreign_Legion_G_ATTeam: TACU_Foreign_Legion_G_Patrol {
        name = "AT Team";
        MACRO_UNIT0(TACU_Foreign_Legion_U_I_TL,2);
        MACRO_UNIT1(TACU_Foreign_Legion_U_I_AT,2);
        MACRO_UNIT2(TACU_Foreign_Legion_U_I_AT,2);
        MACRO_UNIT3(TACU_Foreign_Legion_U_I_Rifleman,2);
    };

    class TACU_Foreign_Legion_G_Squad: TACU_Foreign_Legion_G_Patrol {
        name = "Squad";
        MACRO_UNIT0(TACU_Foreign_Legion_U_I_TL,2);
        MACRO_UNIT1(TACU_Foreign_Legion_U_I_Medic,2);
        MACRO_UNIT2(TACU_Foreign_Legion_U_I_Grenadier,2);
        MACRO_UNIT3(TACU_Foreign_Legion_U_I_Machinegunner,2);
        MACRO_UNIT4(TACU_Foreign_Legion_U_I_Demolitions,2);
        MACRO_UNIT5(TACU_Foreign_Legion_U_I_AT,2);
        MACRO_UNIT6(TACU_Foreign_Legion_U_I_Marksman,2);
        MACRO_UNIT7(TACU_Foreign_Legion_U_I_Rifleman,2);
    };
};
