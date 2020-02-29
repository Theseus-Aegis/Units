class TACU_TNA_I {
    name = "Takistan National Army";
    class TACU_Takistan_G_TNA_Regular_Infantry {
        name = "Regular";
        
        class TACU_Takistan_G_TNA_Regular_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNA_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Takistan_G_TNA_Regular_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_02";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Takistan_U_TNA_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
        
        class TACU_Takistan_G_TNA_Regular_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_02";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_03";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_Takistan_U_TNA_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_02";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
        };
    };
    
    class TACU_Takistan_G_TNA_Commandos_Infantry {
        name = "Commandos";

        class TACU_Takistan_G_TNA_Commandos_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Takistan_G_TNA_Commandos_Fireteam {
            name = "Fireteam";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };

        class TACU_Takistan_G_TNA_Commandos_Squad {
            name = "Squad";
            side = 2;
            faction = "TACU_TNA_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Grenadier";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Medic";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class unit4 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class unit5 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
        };
    };
};

class TACU_TNP_I {
    name = "Takistan National Police";
    class TACU_Takistan_G_TNP_Officer_Infantry {
        name = "Officers";

        class TACU_Takistan_G_TNP_Officer_Patrol {
            name = "Patrol";
            scope = 2;
            faction = "TACU_TNP_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNP_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNP_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };
        
        class TACU_Takistan_G_TNP_Officer_Fireteam {
            name = "Fireteam";
            scope = 2;
            faction = "TACU_TNP_I";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNP_Officer";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNP_Rifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2 {
                vehicle = "TACU_Takistan_U_TNP_Rifleman_02";
                side = 2;
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class unit3 {
                vehicle = "TACU_Takistan_U_TNP_Machinegunner";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };
};
