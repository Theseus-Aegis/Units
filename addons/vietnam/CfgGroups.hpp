class CfgGroups {
    class WEST {
        class TACU_Vietnam_US {
            name = "US Vietnam Forces";
            class TACU_Vietnam_G_US_Infantry {
                name = "Infantry";

                class TACU_Vietnam_G_US_Infantry_Patrol {
                    name = "Soldiers (Patrol)";
                    side = 1;
                    faction = "TACU_Vietnam_US";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M16_Light";
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M16_Light";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M14_Light";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };

                class TACU_Vietnam_G_US_Infantry_Fireteam {
                    name = "Soldiers (Fireteam)";
                    side = 1;
                    faction = "TACU_Vietnam_US";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_US_TeamLeader";
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M16";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M14";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_AT";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };

                class TACU_Vietnam_G_US_Infantry_Squad {
                    name = "Soldiers (Squad)";
                    side = 1;
                    faction = "TACU_Vietnam_US";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_US_TeamLeader";
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M16";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M14";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_AT";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        vehicle = "TACU_Vietnam_U_US_Machinegunner";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        vehicle = "TACU_Vietnam_U_US_Grenadier";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_M16";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        vehicle = "TACU_Vietnam_U_US_Medic";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };

                class TACU_Vietnam_G_US_Infantry_MGTeam {
                    name = "Soldiers (MG Team)";
                    side = 1;
                    faction = "TACU_Vietnam_US";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_US_TeamLeader";
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_US_Machinegunner";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_US_Machinegunner";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };

                class TACU_Vietnam_G_US_Infantry_ATTeam {
                    name = "Soldiers (AT Team)";
                    side = 1;
                    faction = "TACU_Vietnam_US";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_US_TeamLeader";
                        side = 1;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_AT";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_US_Rifleman_AT";
                        side = 1;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };

    class EAST {
        class TACU_Vietnam_PAVN {
            name = "People's Army of Vietnam";
            class TACU_Vietnam_G_PAVN_NVA_Infantry {
                name = "Infantry (North Vietnamese Army)";

                class TACU_Vietnam_G_PAVN_NVA_Infantry_Patrol {
                    name = "Soldiers (Patrol)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };

                class TACU_Vietnam_G_PAVN_NVA_Infantry_Fireteam {
                    name = "Soldiers (Fireteam)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AT";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };

                class TACU_Vietnam_G_PAVN_NVA_Infantry_Squad {
                    name = "Soldiers (Squad)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AT";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Autorifleman";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Medic";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Sapper";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };

                class TACU_Vietnam_G_PAVN_NVA_Infantry_MGTeam {
                    name = "Soldiers (MG Team)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Machinegunner";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NVA_Machinegunner";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };

            class TACU_Vietnam_G_PAVN_NLF_Infantry {
                name = "Infantry (National Liberation Front)";

                class TACU_Vietnam_G_PAVN_NLF_Infantry_Patrol {
                    name = "Soldiers (Patrol)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_AKS74U";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };

                class TACU_Vietnam_G_PAVN_NLF_Infantry_Fireteam {
                    name = "Soldiers (Fireteam)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_AKS74U";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_AT";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };

                class TACU_Vietnam_G_PAVN_NLF_Infantry_Squad {
                    name = "Soldiers (Squad)";
                    side = 0;
                    faction = "TACU_Vietnam_PAVN";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class unit0 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_TeamLeader";
                        side = 0;
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class unit1 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class unit2 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class unit3 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_AT";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class unit4 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Autorifleman";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class unit5 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Medic";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class unit6 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Rifleman_AKS74U";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class unit7 {
                        vehicle = "TACU_Vietnam_U_PAVN_NLF_Sapper";
                        side = 0;
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
        };
    };
};
