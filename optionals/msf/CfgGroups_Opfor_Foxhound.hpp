// Foxhound Special Forces Group
class TACU_MSF_G_O_Infantry_Foxhound {
    name = "Infantry (Foxhound Special Forces)";

    class TACU_MSF_G_O_Infantry_Foxhound_Patrol {
        name = "Patrol";
        side = 0;
        faction = "TACU_MSF_O";
        icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
        class unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_Foxhound_PatrolLight: TACU_MSF_G_O_Infantry_Foxhound_Patrol {
        name = "Patrol (Light)";
        class unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_SMG_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_SMG_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_Foxhound_Fireteam: TACU_MSF_G_O_Infantry_Foxhound_PatrolLight {
        name = "Fireteam";
        class unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_Foxhound_Marksman";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            position[] = {10, -10, 0};
        };
    };

    class TACU_MSF_G_O_Infantry_Foxhound_Squad: TACU_MSF_G_O_Infantry_Foxhound_Fireteam {
        name = "Squad";
        class unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            side = 0;
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class unit1: unit0 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            rank = "PRIVATE";
            position[] = {5, -5, 0};
        };
        class unit2: unit1 {
            vehicle = "TACU_MSF_U_O_Foxhound_SMG_01";
            position[] = {-5, -5, 0};
        };
        class unit3: unit2 {
            vehicle = "TACU_MSF_U_O_Foxhound_Marksman";
            position[] = {10, -10, 0};
        };
        class unit4: unit3 {
            vehicle = "TACU_MSF_U_O_Foxhound_SMG_01";
            position[] = {-10, -10, 0};
        };
        class unit5: unit4 {
            vehicle = "TACU_MSF_U_O_Foxhound_SMG_01";
            position[] = {15, -15, 0};
        };
        class unit6: unit5 {
            vehicle = "TACU_MSF_U_O_Foxhound_Rifleman_01";
            position[] = {-15, -15, 0};
        };
    };
};
