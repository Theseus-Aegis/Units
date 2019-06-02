class CfgGroups
{
    class Indep
    {
        side = 2;
class VANGUARD_F
{
    name = "Vanguard PMC";
    class VANGUARD_Infantry
    {
        name = "Infantry";

        class VANGUARD_Patrol
        {
            name = "Patrol";
            side = 2;
            faction = "VANGUARD_F";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            class Unit0
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_F";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_02_F";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };

        class VANGUARD_Fireteam
        {
            name = "Fireteam";
            side = 2;
            faction = "VANGUARD_F";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            class Unit0
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Teamleader_F";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Grenadier_F";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class Unit2
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_AT_F";
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class Unit3
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Medic_F";
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };

        class VANGUARD_Squad
        {
            name = "Squad";
            side = 2;
            faction = "VANGUARD_F";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            class Unit0
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Teamleader_F";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_F";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class Unit2
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_AT_F";
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class Unit3
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Medic_F";
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class Unit4
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Engineer_F";
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class Unit5
            {
                side = 2;
                vehicle = "I_Vanguard_Contractor_Autorifleman_F";
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
        };
    };
    class VANGUARD_Specialists
    {
        name = "Specialists";

        class VANGUARD_Patrol01
        {
            name = "Specialist Patrol";
            side = 2;
            faction = "VANGUARD_F";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            class Unit0
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_F";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_Grenadier_F";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
        };
        class VANGUARD_Fireteam01
        {
            name = "Specialist Fireteam";
            side = 2;
            faction = "VANGUARD_F";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            class Unit0
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_TeamLeader_F";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_Grenadier_F";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class Unit2
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_AT_F";
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class Unit3
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_Medic_F";
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
        };
        class VANGUARD_Squad01
        {
            name = "Specialist Squad";
            side = 2;
            faction = "VANGUARD_F";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            class Unit0
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_TeamLeader_F";
                rank = "SERGEANT";
                position[] = {0, 0, 0};
            };
            class Unit1
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_F";
                rank = "PRIVATE";
                position[] = {5, -5, 0};
            };
            class Unit2
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_AT_F";
                rank = "PRIVATE";
                position[] = {-5, -5, 0};
            };
            class Unit3
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_Medic_F";
                rank = "PRIVATE";
                position[] = {10, -10, 0};
            };
            class Unit4
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_Marksman_F";
                rank = "PRIVATE";
                position[] = {-10, -10, 0};
            };
            class Unit5
            {
                side = 2;
                vehicle = "I_Vanguard_Specialist_Autorifleman_F";
                rank = "PRIVATE";
                position[] = {15, -15, 0};
            };
        };
    };
};
    };
};