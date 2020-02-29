class TACU_TNA_I {
    name = "Takistan National Army";
    class TACU_TNA_G_I_EL {
        name = "Regular";
        
        class TACU_TNA_G_I_EL_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNA_U_I_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNA_U_I_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_TNA_G_I_EL_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNA_U_I_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNA_U_I_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_TNA_U_I_Rifleman2";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_TNA_U_I_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
        
        class TACU_TNA_G_I_EL_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNA_U_I_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNA_U_I_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_TNA_U_I_Rifleman2";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_TNA_U_I_Rifleman3";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_TNA_U_I_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_TNA_U_I_Rifleman2";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
        };
    };
    
    class TACU_TNA_G_I_CM {
        name = "Commandos";

        class TACU_TNA_G_I_CM_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNA_U_I_C_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNA_U_I_C_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_TNA_G_I_CM_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNA_U_I_C_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNA_U_I_C_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_TNA_U_I_C_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_TNA_U_I_C_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };

        class TACU_TNA_G_I_CM_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNA_U_I_C_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNA_U_I_C_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_TNA_U_I_C_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_TNA_U_I_C_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_TNA_U_I_C_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_TNA_U_I_C_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
        };
    };
};

class TACU_TNP_I {
    name = "Takistan National Police";
    class TACU_TNP_G_I_Of {
        name = "Officers";

        class TACU_TNP_G_I_CP_Patrol {
            name = "Patrol";
            scope = 2;
            faction = "TACU_TNP_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNP_U_I_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNP_U_I_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };
        
        class TACU_TNP_G_I_CP_Fireteam {
            name = "Fireteam";
            scope = 2;
            faction = "TACU_TNP_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_TNP_U_I_Officer";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_TNP_U_I_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_TNP_U_I_Rifleman2";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_TNP_U_I_LMG";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };
};
