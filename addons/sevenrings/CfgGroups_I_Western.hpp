class TACU_SevenRings_G_I_Western {
    name = "Seven Rings (Western)";

    // Patrol Groups
    class TACU_SevenRings_G_I_Western_Patrol_01 {
        name = "Patrol 1";
        side = 2;
        faction = "TACU_SevenRings_I_Western";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Rifleman_01,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Grenadier_01,2);
    };

    class TACU_SevenRings_G_I_Western_Patrol_02: TACU_SevenRings_G_I_Western_Patrol_01 {
        name = "Patrol 2";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Rifleman_02,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Grenadier_02,2);
    };

    class TACU_SevenRings_G_I_Western_Patrol_03: TACU_SevenRings_G_I_Western_Patrol_02 {
        name = "Patrol 3";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Rifleman_03,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Grenadier_03,2);
    };

    // Fireteam Groups
    class TACU_SevenRings_G_I_Western_Fireteam_01: TACU_SevenRings_G_I_Western_Patrol_03 {
        name = "Fireteam 1";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Teamleader_01,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Rifleman_AT_01,2);
        MACRO_UNIT2(TACU_SevenRings_U_I_Western_Medic_01,2);
        MACRO_UNIT3(TACU_SevenRings_U_I_Western_Autorifleman_01,2);
    };

    class TACU_SevenRings_G_I_Western_Fireteam_02: TACU_SevenRings_G_I_Western_Fireteam_01 {
        name = "Fireteam 2";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Teamleader_02,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Rifleman_AT_02,2);
        MACRO_UNIT2(TACU_SevenRings_U_I_Western_Medic_02,2);
        MACRO_UNIT3(TACU_SevenRings_U_I_Western_Autorifleman_02,2);
    };

    class TACU_SevenRings_G_I_Western_Fireteam_03: TACU_SevenRings_G_I_Western_Fireteam_02 {
        name = "Fireteam 3";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Teamleader_03,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Rifleman_AT_03,2);
        MACRO_UNIT2(TACU_SevenRings_U_I_Western_Medic_03,2);
        MACRO_UNIT3(TACU_SevenRings_U_I_Western_Autorifleman_03,2);
    };

    // Squad Groups
    class TACU_SevenRings_G_I_Western_Squad_01: TACU_SevenRings_G_I_Western_Fireteam_03 {
        name = "Squad 1";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Teamleader_01,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Rifleman_01,2);
        MACRO_UNIT2(TACU_SevenRings_U_I_Western_Grenadier_01,2);
        MACRO_UNIT3(TACU_SevenRings_U_I_Western_Medic_01,2);
        MACRO_UNIT4(TACU_SevenRings_U_I_Western_Engineer_01,2);
        MACRO_UNIT5(TACU_SevenRings_U_I_Western_Marksman_01,2);
        MACRO_UNIT6(TACU_SevenRings_U_I_Western_Autorifleman_01,2);
        MACRO_UNIT7(TACU_SevenRings_U_I_Western_Rifleman_AT_01,2);
    };

    class TACU_SevenRings_G_I_Western_Squad_02: TACU_SevenRings_G_I_Western_Squad_01 {
        name = "Squad 2";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Teamleader_02,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Rifleman_02,2);
        MACRO_UNIT2(TACU_SevenRings_U_I_Western_Grenadier_02,2);
        MACRO_UNIT3(TACU_SevenRings_U_I_Western_Medic_02,2);
        MACRO_UNIT4(TACU_SevenRings_U_I_Western_Engineer_02,2);
        MACRO_UNIT5(TACU_SevenRings_U_I_Western_Marksman_02,2);
        MACRO_UNIT6(TACU_SevenRings_U_I_Western_Autorifleman_02,2);
        MACRO_UNIT7(TACU_SevenRings_U_I_Western_Rifleman_AT_02,2);
    };

    class TACU_SevenRings_G_I_Western_Squad_03: TACU_SevenRings_G_I_Western_Squad_02 {
        name = "Squad 3";
        MACRO_UNIT0(TACU_SevenRings_U_I_Western_Teamleader_03,2);
        MACRO_UNIT1(TACU_SevenRings_U_I_Western_Rifleman_03,2);
        MACRO_UNIT2(TACU_SevenRings_U_I_Western_Grenadier_03,2);
        MACRO_UNIT3(TACU_SevenRings_U_I_Western_Medic_03,2);
        MACRO_UNIT4(TACU_SevenRings_U_I_Western_Engineer_03,2);
        MACRO_UNIT5(TACU_SevenRings_U_I_Western_Marksman_03,2);
        MACRO_UNIT6(TACU_SevenRings_U_I_Western_Autorifleman_03,2);
        MACRO_UNIT7(TACU_SevenRings_U_I_Western_Rifleman_AT_03,2);
    };
};
