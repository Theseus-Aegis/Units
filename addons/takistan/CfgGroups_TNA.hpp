class TACU_Takistan_TNA {
    name = "Takistan National Army";
    class TACU_Takistan_G_TNA_Regular_Infantry {
        name = "Men (Regular)";

        class TACU_Takistan_G_TNA_Regular_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_Takistan_TNA";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_TNA_Autorifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Takistan_G_TNA_Regular_Fireteam: TACU_Takistan_G_TNA_Regular_Patrol {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_02";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_TNA_Autorifleman";
                position[] = {10, -10, 0};
            };
        };

        class TACU_Takistan_G_TNA_Regular_Squad: TACU_Takistan_G_TNA_Regular_Fireteam {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_02";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_03";
                position[] = {10, -10, 0};
            };
            class unit4: unit3 {
                vehicle = "TACU_Takistan_U_TNA_Autorifleman";
                position[] = {-10, -10, 0};
            };
            class unit5: unit4 {
                vehicle = "TACU_Takistan_U_TNA_Rifleman_02";
                position[] = {15, -15, 0};
            };
        };
    };

    class TACU_Takistan_G_TNA_Commandos_Infantry {
        name = "Men (Commandos)";

        class TACU_Takistan_G_TNA_Commandos_Patrol {
            name = "Patrol";
            side = 2;
            faction = "TACU_Takistan_TNA";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman_AT";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Takistan_G_TNA_Commandos_Fireteam: TACU_Takistan_G_TNA_Commandos_Patrol {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Grenadier";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Medic";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Autorifleman";
                position[] = {10, -10, 0};
            };
        };

        class TACU_Takistan_G_TNA_Commandos_Squad: TACU_Takistan_G_TNA_Commandos_Fireteam {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_NCO";
                side = 2;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Grenadier";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Medic";
                position[] = {-5, -5, 0};
            };
            class unit3: unit2 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Autorifleman";
                position[] = {10, -10, 0};
            };
            class unit4: unit3 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman_AT";
                position[] = {-10, -10, 0};
            };
            class unit5: unit4 {
                vehicle = "TACU_Takistan_U_TNA_Commandos_Rifleman_AT";
                position[] = {15, -15, 0};
            };
        };
    };
};
