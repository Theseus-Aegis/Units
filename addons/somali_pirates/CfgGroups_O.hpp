class TACU_Somali_Pirates_O {
    name = "Somali Pirates";

    class TACU_Somali_Pirates_Infantry_O {
        name = "Infantry";

        class TACU_Somali_Pirates_Patrol_O {
            name = "Patrol";
            side = 0;
            faction = "TACU_Somali_O";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            class unit0 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_01";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_02";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class TACU_Somali_Pirates_Fireteam_O: TACU_Somali_Pirates_Patrol_O {
            name = "Fireteam";
            class unit0 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_03";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_04";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_Autorifleman";
                position[] = {-5, -5, 0};

            };
            class unit3: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_AT";
                position[] = {10, -10, 0};
            };
        };

        class TACU_Somali_Pirates_Squad_O: TACU_Somali_Pirates_Patrol_O {
            name = "Squad";
            class unit0 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_05";
                side = 0;
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class unit1: unit0 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_06";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class unit2: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_04";
                position[] = {-5, -5, 0};

            };
            class unit3: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_Autorifleman";
                position[] = {10, -10, 0};
            };
            class unit4: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_AT";
                position[] = {-10, -10, 0};
            };
            class unit5: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_03";
                position[] = {15, -15, 0};
            };
            class unit6: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_02";
                position[] = {-15, -15, 0};
            };
            class unit7: unit1 {
                vehicle = "TACU_Somali_Pirates_U_O_Rifleman_01";
                position[] = {20, -20, 0};
            };
        };
    };
};
