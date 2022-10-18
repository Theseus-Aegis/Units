class TACU_Takistan_Tehrik {
    name = "Tehrik-I-Taliban Takistan";
    class TACU_Takistan_G_Tehrik_Veteran_Infantry {
        name = "Men (Veterans)";

        class TACU_Takistan_G_Tehrik_Veteran_Patrol {
            name = "Patrol";
            side = 0;
            faction = "TACU_Takistan_Tehrik";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Rifleman";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Rifleman_02";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Takistan_G_Tehrik_Veteran_Fireteam: TACU_Takistan_G_Tehrik_Veteran_Patrol {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Leader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Rifleman_02";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_Tehrik_Grenadier";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_Tehrik_Autorifleman";
                position[] = {10, -10, 0};
            };
        };

        class TACU_Takistan_G_Tehrik_Veteran_Squad: TACU_Takistan_G_Tehrik_Veteran_Fireteam {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Leader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_Tehrik_Grenadier";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_Tehrik_Autorifleman";
                position[] = {10, -10, 0};
            };
            class unit4: unit3 {
                vehicle = "TACU_Takistan_U_Tehrik_Rifleman_AT";
                position[] = {-10, -10, 0};
            };
            class unit5: unit4 {
                vehicle = "TACU_Takistan_U_Tehrik_Rifleman_02";
                position[] = {15, -15, 0};
            };
        };
    };

    class TACU_Takistan_G_Tehrik_Enlisted_Infantry {
        name = "Men (Enlisted)";

        class TACU_Takistan_G_Tehrik_Enlisted_Patrol {
            name = "Patrol";
            side = 0;
            faction = "TACU_Takistan_Tehrik";
            icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_02";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Takistan_G_Tehrik_Enlisted_Fireteam: TACU_Takistan_G_Tehrik_Enlisted_Patrol {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Squadleader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Autorifleman";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_AT";
                position[] = {10, -10, 0};
            };
        };

        class TACU_Takistan_G_Tehrik_Enlisted_Squad: TACU_Takistan_G_Tehrik_Enlisted_Fireteam {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Squadleader";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_02";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_AT";
                position[] = {10, -10, 0};
            };
            class unit4: unit3 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Autorifleman";
                position[] = {-10, -10, 0};
            };
            class unit5: unit4 {
                vehicle = "TACU_Takistan_U_Tehrik_Enlisted_Rifleman_04";
                position[] = {15, -15, 0};
            };
        };
    };
};
