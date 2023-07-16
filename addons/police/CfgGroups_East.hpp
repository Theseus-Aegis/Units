class TACU_Police_O {
    name = "Law Enforcement";
    class TACU_Police_G_O_CT {
        name = "Counter-Terrorists";

        class TACU_Police_G_Guards_CT {
            name = "Guards";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            MACRO_UNIT0(TACU_Police_U_O_CT_Rifleman,0);
            MACRO_UNIT1(TACU_Police_U_O_CT_SMG_2,0);
        };

        class TACU_Police_G_Fireteam_CT: TACU_Police_G_Guards_CT {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Police_U_O_CT_Rifleman,0);
            MACRO_UNIT1(TACU_Police_U_O_CT_Breacher,0);
            MACRO_UNIT2(TACU_Police_U_O_CT_SMG_1,0);
            MACRO_UNIT3(TACU_Police_U_O_CT_SMG_2,0);
        };
    };

    class TACU_Police_G_O_Enforcer {
        name = "Enforcers";

        class TACU_Police_G_Enforcer_Guards {
            name = "Guards";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            MACRO_UNIT0(TACU_Police_U_O_Enforcer_SMG_1,0);
            MACRO_UNIT1(TACU_Police_U_O_Enforcer_SMG_2,0);
        };

        class TACU_Police_G_Enforcer_Fireteam: TACU_Police_G_Enforcer_Guards {
            name = "Fireteam";
            side = 0;
            faction = "TACU_Police_O";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            MACRO_UNIT0(TACU_Police_U_O_Enforcer_SMG_1,0);
            MACRO_UNIT1(TACU_Police_U_O_Enforcer_Breacher,0);
            MACRO_UNIT2(TACU_Police_U_O_Enforcer_SMG_2,0);
            MACRO_UNIT3(TACU_Police_U_O_Enforcer_SMG_3,0);
        };
    };
};
