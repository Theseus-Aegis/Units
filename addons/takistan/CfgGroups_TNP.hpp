class TACU_Takistan_TNP {
    name = "Takistan National Police";
    class TACU_Takistan_G_TNP_Officer_Infantry {
        name = "Men (Officers)";

        class TACU_Takistan_G_TNP_Officer_Patrol {
            name = "Patrol";
            scope = 2;
            faction = "TACU_Takistan_TNP";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNP_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1 {
                vehicle = "TACU_Takistan_U_TNP_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };
        
        class TACU_Takistan_G_TNP_Officer_Fireteam {
            name = "Fireteam";
            scope = 2;
            faction = "TACU_Takistan_TNP";
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
                vehicle = "TACU_Takistan_U_TNP_Autorifleman";
                side = 2;
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
    };
};
