// Backpacks
class TACU_Vietnam_B_PAVN_AT: CUP_B_RPGPack_Khaki {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        class _xx_CUP_PG7V_M {
            magazine = "CUP_PG7V_M";
            count = 2;
        };
    };
};

class TACU_Vietnam_B_PAVN_LMG: CUP_B_AlicePack_Khaki {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M {
            magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
            count = 4;
        };
    };
};

class TACU_Vietnam_B_PAVN_MMG: CUP_B_AlicePack_OD {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M {
            magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
            count = 3;
        };
    };
};


class TACU_Vietnam_B_PAVN_Medic: CUP_B_AlicePack_Bedroll {
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        class _xx_ACE_surgicalKit {
            name = "ACE_surgicalKit";
            count = 1;
        };
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 20;
        };
        class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 10;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 8;
        };
        class _xx_ACE_morphine {
            name = "ACE_morphine";
            count = 6;
        };
        class _xx_ACE_epinephrine {
            name = "ACE_epinephrine";
            count = 4;
        };
        class _xx_ACE_salineIV_500 {
            name = "ACE_salineIV";
            count = 4;
        };
    };
};

class TACU_Vietnam_B_PAVN_Sapper: B_FieldPack_khk {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        class _xx_APERSBoundingMine_Range_Mag {
            magazine = "APERSBoundingMine_Range_Mag";
            count = 2;
        };
        class _xx_APERSMine_Range_Mag {
            magazine = "APERSMine_Range_Mag";
            count = 2;
        };
    };
};

// Units - PAVN NVA
class TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman (Type 56-2)";
    faction = "TACU_Vietnam_PAVN";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageCHI_F", "Head_Asian", "NoGlasses"};
    genericNames = "ChineseMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_RUS_M88_MSV";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_OD"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_7("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "CUP_H_SLA_Helmet", 0.25,
        "CUP_H_SLA_Helmet_DES", 0.50,
        "CUP_H_SLA_Helmet_BLK", 0.25,
        "CUP_H_SLA_Helmet_URB", 0.25,
        "CUP_H_FR_BandanaGreen", 0.25,
        "CUP_H_ChDKZ_Cap", 0.25,
        "", 0.20
    };
    TACU_allowedFacewear[] = {
        "None", 0.90,
        "G_Squares", 0.10
    };
    editorSubcategory = "TACU_Vietnam_EdSubCat_PAVN_NVA";
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Rifleman_Type56.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Rifleman (AKS-74U)";
    uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN"};
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_7("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Rifleman_AKS74U.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Rifleman_AT: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_Vietnam_B_PAVN_AT";
    weapons[] = {"CUP_arifle_AK47_Early", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK47_Early", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    respawnWagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Rifleman_AT.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Autorifleman: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Vietnam_B_PAVN_LMG";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Autorifleman.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Machinegunner: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
    backpack = "TACU_Vietnam_B_PAVN_MMG";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG"};
    weapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Machinegunner.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_TeamLeader: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_SLCap", "CUP_V_O_SLA_M23_1_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_SLCap", "CUP_V_O_SLA_M23_1_OD"};
    weapons[] = {"CUP_arifle_AKS", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS", "Binocular", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    headgearList[] = {
        "CUP_H_SLA_SLCap", 1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_TeamLeader.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Medic: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_Vietnam_B_PAVN_Medic";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_ChDKZ_Cap", "CUP_V_O_TK_Vest_2"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_ChDKZ_Cap", "CUP_V_O_TK_Vest_2"};
    weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    magazines[] = {mag_4("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
    respawnMagazines[] = {mag_4("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
    headgearList[] = {
        "CUP_H_ChDKZ_Cap", 1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Medic.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Sniper: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Sniper";
    weapons[] = {"TACU_Vietnam_W_Dragunov", "CUP_hgun_Makarov", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vietnam_W_Dragunov", "CUP_hgun_Makarov", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
    respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Sniper.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Sniper_Ghillie: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Sniper (Ghillie)";
    uniformClass = "U_B_T_FullGhillie_tna_F";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_O_Ins_Carrier_Rig"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_O_Ins_Carrier_Rig"};
    weapons[] = {"TACU_Vietnam_W_Dragunov_Ghillie", "CUP_hgun_Makarov", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vietnam_W_Dragunov_Ghillie", "CUP_hgun_Makarov", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
    respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
    headgearList[] = {
        "", 1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Sniper_Ghillie.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Sapper: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Sapper";
    icon = "iconManEngineer";
    role = "Sapper";
    uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
    backpack = "TACU_Vietnam_B_PAVN_Sapper";
    linkedItems[] = {DEFAULT_ITEMS,"CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN"};
    respawnLinkedItems[] = {DEFAULT_ITEMS,"CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN"};
    Items[] = {mag_5("ACE_fieldDressing"), "ACE_DefusalKit"};
    respawnItems[] = {mag_5("ACE_fieldDressing"), "ACE_DefusalKit"};
    weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    magazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Sapper.jpg);
};

class TACU_Vietnam_U_PAVN_NVA_Rifleman_Wounded: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
    displayName = "Rifleman (Wounded)";
    uniformClass = "CUP_U_O_RUS_M88_MSV";
    linkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    respawnLinkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    Items[] = {"ACE_fieldDressing"};
    respawnItems[] = {"ACE_fieldDressing"};
    weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    magazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
    respawnMagazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
    headgearList[] = {
        "H_HeadBandage_clean_F", 0.30,
        "H_HeadBandage_stained_F", 0.30,
        "H_HeadBandage_bloody_F", 0.30,
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NVA_Rifleman_Wounded.jpg);
};

// Units - PAVN NLF
class TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman (Type 56-2)";
    faction = "TACU_Vietnam_PAVN";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageCHI_F", "Head_Asian", "NoGlasses"};
    genericNames = "ChineseMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_I_C_Soldier_Para_5_F";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    headgearList[] = {
        "H_Hat_Safari_sand_F", 0.25,
        "CUP_H_FR_BandanaGreen", 0.25,
        "CUP_H_NAPA_Fedora", 0.25,
        "CUP_H_ChDKZ_Cap", 0.25,
        "H_HeadBandage_clean_F", 0.25,
        "", 0.25
    };
    TACU_allowedFacewear[] = {
        "None", 0.90,
        "G_Squares", 0.10
    };
    editorSubcategory = "TACU_Vietnam_EdSubCat_PAVN_NLF";
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Rifleman_Type56.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Rifleman_AKS74U: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Rifleman (AKS-74U)";
    uniformClass = "U_I_C_Soldier_Para_3_F";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_RUS_Smersh_1"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_RUS_Smersh_1"};
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Rifleman_AKS74U.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Rifleman_AT: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_U_O_TK_Green";
    backpack = "TACU_Vietnam_B_PAVN_AT";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
    weapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Rifleman_AT.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_TeamLeader: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "U_I_C_Soldier_Para_2_F";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Com"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Com"};
    weapons[] = {"CUP_arifle_AK47_Early", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK47_Early", "Binocular", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_TeamLeader.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Autorifleman: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_I_C_Soldier_Para_4_F";
    backpack = "TACU_Vietnam_B_PAVN_LMG";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_MG"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_MG"};
    weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
    magazines[] = {mag_2("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_2("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Autorifleman.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Sapper: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Sapper";
    icon = "iconManEngineer";
    role = "Sapper";
    uniformClass = "CUP_U_O_TK_MixedCamo";
    backpack = "TACU_Vietnam_B_PAVN_Sapper";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
    weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
    magazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
    respawnMagazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Sapper.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Sniper: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Sniper";
    uniformClass = "CUP_U_O_SLA_Green";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "V_BandollierB_rgr"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "V_BandollierB_rgr"};
    weapons[] = {"TACU_Vietnam_W_Dragunov", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vietnam_W_Dragunov", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M")};
    respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M")};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Sniper.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Rifleman_Wounded: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Rifleman (Wounded)";
    uniformClass = "U_I_C_Soldier_Para_5_F";
    linkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    respawnLinkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    Items[] = {"ACE_fieldDressing"};
    respawnItems[] = {"ACE_fieldDressing"};
    weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    magazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
    respawnMagazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
    headgearList[] = {
        "H_HeadBandage_clean_F", 0.25,
        "H_HeadBandage_stained_F", 0.25,
        "H_HeadBandage_bloody_F", 0.25
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Rifleman_Wounded.jpg);
};

class TACU_Vietnam_U_PAVN_NLF_Medic: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    uniformClass = "U_I_C_Soldier_Para_3_F";
    backpack = "TACU_Vietnam_B_PAVN_Medic";
    linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
    weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
    magazines[] = {mag_5("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
    respawnMagazines[] = {mag_5("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vietnam_U_PAVN_NLF_Medic.jpg);
};

// Vehicles
class TACU_Vietnam_V_PAVN_UAZ: CUP_O_UAZ_Unarmed_SLA {
    faction = "TACU_Vietnam_PAVN";
    side = 0;
    displayName = "UAZ";
    crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
    editorPreview = QPATHTOF(ui\Vietnam_V_PAVN_UAZ.jpg);
};

class TACU_Vietnam_V_PAVN_UAZ_Open: CUP_O_UAZ_Open_SLA {
    faction = "TACU_Vietnam_PAVN";
    side = 0;
    displayName = "UAZ (Open)";
    crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
    editorPreview = QPATHTOF(ui\Vietnam_V_PAVN_UAZ_Open.jpg);
};

class TACU_Vietnam_V_PAVN_UAZ_MG: CUP_O_UAZ_MG_SLA {
    faction = "TACU_Vietnam_PAVN";
    side = 0;
    displayName = "UAZ (MG)";
    crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
    editorPreview = QPATHTOF(ui\Vietnam_V_PAVN_UAZ_MG.jpg);
};

class TACU_Vietnam_V_PAVN_Ural: CUP_O_Ural_SLA {
    faction = "TACU_Vietnam_PAVN";
    side = 0;
    displayName = "Ural";
    crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
    editorPreview = QPATHTOF(ui\Vietnam_V_PAVN_Ural.jpg);
};

class TACU_Vietnam_V_PAVN_Ural_Open: CUP_O_Ural_Open_SLA {
    faction = "TACU_Vietnam_PAVN";
    side = 0;
    displayName = "Ural (Open)";
    crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
    editorPreview = QPATHTOF(ui\Vietnam_V_PAVN_Ural_Open.jpg);
};
