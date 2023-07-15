class TACU_Police_B {
    name = "Law Enforcement";
    class TACU_Police_G_B_CT {
        name = "Counter-Terrorists";

        class TACU_Police_G_Guards_CT {
            name = "Guards";
            side = 1;
            faction = "TACU_Police_B";
            icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
            MACRO_UNIT0(TACU_Police_U_B_CT_Rifleman,1);
            MACRO_UNIT1(TACU_Police_U_B_CT_Rifleman,1);
        };

        class TACU_Police_G_Fireteam_CT: TACU_Police_G_Guards_CT {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Police_U_B_CT_Rifleman,1);
            MACRO_UNIT1(TACU_Police_U_B_CT_Breacher,1);
            MACRO_UNIT2(TACU_Police_U_B_CT_Rifleman,1);
            MACRO_UNIT3(TACU_Police_U_B_CT_Rifleman,1);
        };
    };

    class TACU_Police_G_B_Enforcer {
        name = "Enforcers";

        class TACU_Police_G_Enforcer_Guards {
            name = "Guards";
            side = 1;
            faction = "TACU_Police_B";
            icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
            MACRO_UNIT0(TACU_Police_U_B_Enforcer_SMG_1,1);
            MACRO_UNIT1(TACU_Police_U_B_Enforcer_SMG_2,1);
        };

        class TACU_Police_G_Enforcer_Fireteam: TACU_Police_G_Enforcer_Guards {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Police_U_B_Enforcer_Rifleman,1);
            MACRO_UNIT1(TACU_Police_U_B_Enforcer_Breacher,1);
            MACRO_UNIT2(TACU_Police_U_B_Enforcer_SMG_1,1);
            MACRO_UNIT3(TACU_Police_U_B_Enforcer_SMG_2,1);
        };
    };
};
