// Old units, will be hidden for a while before being completed removed.

#define MACRO_OPFOR_EAST_SIDE \
    side = 0; \
    faction = "TACU_SevenRings_O_Eastern"

#define MACRO_OPFOR_WEST_SIDE \
    side = 0; \
    faction = "TACU_SevenRings_O_Western"

// Independent Units
class TACU_SevenRings_U_I_Eastern_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (AK-101)";
    faction = "TACU_SevenRings_I_Eastern";
    editorSubcategory = "TACU_SevenRings_EdSubCat_Eastern";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguagePER_F", "Head_TK"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_lxWS_Djella_02_Brown";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_assaulter_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_arifle_AK101_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Rifleman_02: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-103)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {"CUP_arifle_AK103_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_762x39_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Rifleman_03: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman (AK-104)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {"CUP_arifle_AK104_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_762x39_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Grenadier_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Grenadier (AK-103)";
    role = "Grenadier";
    uniformClass = "U_lxWS_Djella_02_Sand";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_grenadier_belt_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_arifle_AK103_railed_GL","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_762x39_AK"), mag_4("CUP_1Rnd_HE_GP25_M"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Grenadier_02: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (SA-58)";
    uniformClass = "U_lxWS_C_Djella_03";
    weapons[] = {"CUP_arifle_DSA_SA58_OSW_M203","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51_FAL"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Grenadier_03: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    displayName = "Grenadier (AKS-74N)";
    uniformClass = "U_lxWS_C_Djella_07";
    weapons[] = {"CUP_arifle_AKS74_GL_top_rail","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_545x39_AK"), mag_4("CUP_1Rnd_HE_GP25_M"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Rifleman_AT_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Rifleman AT (M136)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_Tak_03_C";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_hgunner_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_arifle_AK101_railed","CUP_launch_M136","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_AK"),"CUP_M136_M", mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Rifleman_AT_02: TACU_SevenRings_U_I_Eastern_Rifleman_AT_01 {
    displayName = "Rifleman AT (RPG-18)";
    uniformClass = "U_lxWS_Tak_02_B";
    weapons[] = {"arifle_AK12U_F","CUP_launch_RPG18","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_762x39_AK"),"CUP_RPG18_M", mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Rifleman_AT_03: TACU_SevenRings_U_I_Eastern_Rifleman_AT_01 {
    displayName = "Rifleman AT (RPG-7)";
    uniformClass = "U_lxWS_Tak_02_A";
    backpack = "TACU_SevenRings_B_AT_Fieldpack_RPG7";
    weapons[] = {"CUP_arifle_AKMN_railed_afg","launch_RPG7_F","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_762x39_AK"),"RPG7_F", mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Autorifleman_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Autorifleman (RPK-12)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "U_lxWS_Djella_02_Brown";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_hgunner_belt_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"arifle_RPK12_F","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_75Rnd_762x39_Drum"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Autorifleman_02: TACU_SevenRings_U_I_Eastern_Autorifleman_01 {
    displayName = "Autorifleman (RPK-74)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {"CUP_arifle_RPK74_top_rail","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_75Rnd_762x39_Drum"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Autorifleman_03: TACU_SevenRings_U_I_Eastern_Autorifleman_01 {
    displayName = "Autorifleman (MG3)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {"CUP_lmg_MG3_rail","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_4("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Medic_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Medic (AK-107)";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_lxWS_Djella_02_Sand";
    backpack = "B_Patrol_Medic_bag_F";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_medic_belt_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_arifle_AK107_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_545x39_AK"), mag_2("SmokeShell"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Medic_02: TACU_SevenRings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS-74U)";
    uniformClass = "U_lxWS_C_Djella_02";
    weapons[] = {"CUP_arifle_AKS74U_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_545x39_AK"), mag_2("SmokeShell"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Medic_03: TACU_SevenRings_U_I_Eastern_Medic_01 {
    displayName = "Medic (AKS)";
    uniformClass = "U_lxWS_C_Djella_07";
    weapons[] = {"CUP_arifle_AKS_top_rail","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_762x39_AK"), mag_2("SmokeShell"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Engineer_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Engineer (Vikhr)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    uniformClass = "U_lxWS_Tak_02_B";
    backpack = "TACU_SevenRings_B_Engineer_Kitbag_Tan";
    Items[] = {"ACE_M26_Clacker", "ACE_DeadManSwitch"};
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_assaulter_belt_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_arifle_SR3M_Vikhr_VFG_top_rail","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Engineer_02: TACU_SevenRings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (Type 56)";
    uniformClass = "U_lxWS_Tak_02_A";
    weapons[] = {"CUP_arifle_TYPE_56_2","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_762x39_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Engineer_03: TACU_SevenRings_U_I_Eastern_Engineer_01 {
    displayName = "Engineer (M4)";
    uniformClass = "U_lxWS_Djella_02_Brown";
    weapons[] = {"CUP_arifle_M4A1_black","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Teamleader_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Team Leader (AK-107)";
    icon = "iconManLeader";
    uniformClass = "U_lxWS_Djella_03_Green";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_teamleader_belt_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_arifle_AK107_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_545x39_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Teamleader_02: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-15K)";
    uniformClass = "U_lxWS_Djella_02_Sand";
    weapons[] = {"arifle_AK12U_F","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_762x39_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Teamleader_03: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    displayName = "Team Leader (AK-108)";
    uniformClass = "U_lxWS_C_Djella_02";
    weapons[] = {"CUP_arifle_AK108_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "CQB Specialist (SAIGA-12)";
    uniformClass = "U_lxWS_C_Djella_07";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_light_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_sgun_Saiga12K_top_rail","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("CUP_12Rnd_B_Saiga12_Buck_00"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_02: TACU_SevenRings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Groza)";
    uniformClass = "U_lxWS_Tak_02_B";
    weapons[] = {"CUP_arifle_OTS14_GROZA_Grip","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("CUP_20Rnd_9x39_SP5_GROZA_M"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_CQBSpecialist_03: TACU_SevenRings_U_I_Eastern_CQBSpecialist_01 {
    displayName = "CQB Specialist (Scorpion EVO)";
    uniformClass = "U_lxWS_Tak_02_C";
    weapons[] = {"CUP_smg_EVO","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_9x19_EVO"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Marksman_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "Marksman (SVD)";
    role = "Marksman";
    uniformClass = "U_lxWS_Djella_02_Sand";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_marksman_cb","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_srifle_SVD","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_10Rnd_762x54r_AP"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Marksman_02: TACU_SevenRings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (Cyrus)";
    uniformClass = "U_lxWS_Djella_03_Green";
    weapons[] = {"srifle_DMR_05_blk_F","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("10Rnd_93x64_DMR_05_Mag"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_Marksman_03: TACU_SevenRings_U_I_Eastern_Marksman_01 {
    displayName = "Marksman (FN FAL)";
    uniformClass = "U_lxWS_Djella_02_Grey";
    weapons[] = {"CUP_arifle_FNFAL5061_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51_FAL"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Eastern_AA_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    displayName = "AA Specialist (Stinger)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_Djella_02_Brown";
    backpack = "TACU_SevenRings_B_AA_Kitbag_Tan";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_hgunner_rgr","H_turban_02_mask_black_lxws"};
    weapons[] = {"CUP_launch_FIM92Stinger","CUP_arifle_AK108_railed","hgun_Pistol_01_F","Throw", "Put"};
    magazines[] = {"CUP_Stinger_M", mag_8("tacgt_AI_30Rnd_556x45_AK"), mag_2("10Rnd_9x21_Mag"), mag_2("CUP_HandGrenade_RGO"), mag_2("CUP_HandGrenade_RGD5")};
};

class TACU_SevenRings_U_I_Western_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (CZ BREN)";
    faction = "TACU_SevenRings_I_Western";
    editorSubcategory = "TACU_SevenRings_EdSubCat_Western";
    scope = 1;
    scopeCurator = 1;
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Enoch"};
    genericNames = "EnochMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivityEar = 0.15;
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_assaulter_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"CUP_CZ_BREN2_556_14","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
    headgearList[] = {"H_Watchcap_blk", 0.25,"H_Cap_blk_CMMG", 0.25,"H_HelmetB_black", 0.50,"H_HelmetB", 0.50,"H_HelmetSpecB", 0.50,"H_HelmetSpecB_blk", 0.50,"H_HelmetB_light", 0.50,"H_HelmetB_light_black", 0.50,"H_Booniehat_khk", 0.25};
};

class TACU_SevenRings_U_I_Western_Rifleman_02: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman (SA58)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {"CUP_arifle_DSA_SA58_OSW_VFG","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51_FAL"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Rifleman_03: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman (G36K)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {"CUP_arifle_G36K_RIS","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_G36"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Grenadier_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Grenadier (CZ BREN)";
    role = "Grenadier";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_grenadier_belt_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"CUP_CZ_BREN2_556_14_GL","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Grenadier_02: TACU_SevenRings_U_I_Western_Grenadier_01 {
    displayName = "Grenadier (SA58)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {"CUP_arifle_DSA_SA58_OSW_M203","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51_FAL"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Grenadier_03: TACU_SevenRings_U_I_Western_Grenadier_01 {
    displayName = "Grenadier (G36K)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {"CUP_arifle_G36K_RIS_AG36","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_G36"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Rifleman_AT_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Rifleman AT (MAAWS)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "TACU_SevenRings_B_AT_Assault_Maaws";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_hgunner_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"CUP_arifle_AK109_railed","tacs_MRAWS_Black_Rail_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_762x39_AK"),"MRAWS_HEAT_F", mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Rifleman_AT_02: TACU_SevenRings_U_I_Western_Rifleman_AT_01 {
    displayName = "Rifleman AT (RPG-32)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "TACU_SevenRings_B_AT_Assault_RPG32";
    weapons[] = {"hlc_rifle_mk18mod0","launch_RPG32_green_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"),"RPG32_F", mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Rifleman_AT_03: TACU_SevenRings_U_I_Western_Rifleman_AT_01 {
    displayName = "Rifleman AT (NLAW)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    backpack = "";
    weapons[] = {"CUP_arifle_ACRC_blk_556","launch_NLAW_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Autorifleman_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Autorifleman (Stoner 99)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "tacs_Uniform_Polo_CP_BS_TP_BB_NoLogo";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_hgunner_belt_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"LMG_Mk200_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_4("tacgt_AI_200Rnd_65x39_Belt"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Autorifleman_02: TACU_SevenRings_U_I_Western_Autorifleman_01 {
    displayName = "Autorifleman (Minimi SPW)";
    uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
    weapons[] = {"LMG_03_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_4("tacgt_AI_200Rnd_556x45_Box"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Autorifleman_03: TACU_SevenRings_U_I_Western_Autorifleman_01 {
    displayName = "Autorifleman (MX LSW)";
    uniformClass = "U_O_R_Gorka_01_black_F";
    weapons[] = {"arifle_MX_SW_Black_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_5("tacgt_AI_100Rnd_65x39_MX_Black"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Medic_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Medic (G3A3)";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_C_E_LooterJacket_01_F";
    backpack = "G_FieldPack_Medic";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_medic_belt_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"CUP_arifle_G3A3_ris_black","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_2("SmokeShell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Medic_02: TACU_SevenRings_U_I_Western_Medic_01 {
    displayName = "Medic (SIG 551)";
    uniformClass = "U_BG_Guerilla2_1";
    weapons[] = {"hlc_rifle_SG551SB_TAC","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_SIG"), mag_2("SmokeShell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Medic_03: TACU_SevenRings_U_I_Western_Medic_01 {
    displayName = "Medic (AUG A2)";
    uniformClass = "tacs_Uniform_Combat_LS_GS_BP_BB";
    weapons[] = {"hlc_rifle_auga2_b","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_AUG"), mag_2("SmokeShell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Engineer_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Engineer (AK-15)";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    uniformClass = "U_BG_Guerilla2_2";
    backpack = "TACU_SevenRings_B_Engineer_Kitbag_Black";
    Items[] = {"ACE_M26_Clacker"};
    respawnItems[] = {"ACE_M26_Clacker"};
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_assaulter_belt_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"arifle_AK12_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_762x39_AK"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Engineer_02: TACU_SevenRings_U_I_Western_Engineer_01 {
    displayName = "Engineer (M1014)";
    uniformClass = "U_BG_Guerilla2_3";
    weapons[] = {"CUP_sgun_M1014","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_10("tacgt_8Rnd_P_000"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Engineer_03: TACU_SevenRings_U_I_Western_Engineer_01 {
    displayName = "Engineer (KH-2002)";
    uniformClass = "U_BG_Guerilla3_1";
    weapons[] = {"arifle_Katiba_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_65x39_Katiba"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Teamleader_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Team Leader (SCAR-L)";
    icon = "iconManLeader";
    uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_teamleader_belt_RGR","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"CUP_arifle_Mk16_STD_AFG_black","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Teamleader_02: TACU_SevenRings_U_I_Western_Teamleader_01 {
    displayName = "Team Leader (SIG 553)";
    uniformClass = "tacs_Uniform_Garment_LS_ES_EP_TB";
    weapons[] = {"hlc_rifle_sg553RSB_TAC","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_762x39_AK"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Teamleader_03: TACU_SevenRings_U_I_Western_Teamleader_01 {
    displayName = "Team Leader (AUG A3)";
    uniformClass = "tacs_Uniform_Garment_LS_TS_BP_BB";
    weapons[] = {"hlc_rifle_auga3_b","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_AUG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_CQBSpecialist_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "CQB Specialist (SAIGA-12)";
    uniformClass = "tacs_Uniform_Combat_RS_CLFS_GP_BB";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_light_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"CUP_sgun_Saiga12K_top_rail","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("CUP_12Rnd_B_Saiga12_Buck_00"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_CQBSpecialist_02: TACU_SevenRings_U_I_Western_CQBSpecialist_01 {
    displayName = "CQB Specialist (P90)";
    uniformClass = "tacs_Uniform_Combat_RS_CPS_BP_BB";
    weapons[] = {"SMG_03C_black","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_50Rnd_57x28"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_CQBSpecialist_03: TACU_SevenRings_U_I_Western_CQBSpecialist_01 {
    displayName = "CQB Specialist (Vector)";
    uniformClass = "tacs_Uniform_Combat_RS_CLBS_GP_BB";
    weapons[] = {"SMG_01_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_25Rnd_45ACP_Vector"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Marksman_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Marksman (SIG 556)";
    role = "Marksman";
    uniformClass = "U_I_C_Soldier_Bandit_3_F";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_marksman_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"srifle_DMR_03_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Marksman_02: TACU_SevenRings_U_I_Western_Marksman_01 {
    displayName = "Marksman (HK417)";
    uniformClass = "U_lxWS_SFIA_Tanker_O";
    weapons[] = {"arifle_SPAR_03_blk_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Marksman_03: TACU_SevenRings_U_I_Western_Marksman_01 {
    displayName = "Marksman (QBU-88)";
    uniformClass = "tacs_Uniform_Garment_RS_ES_BP_BB";
    weapons[] = {"srifle_DMR_07_blk_F","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_20Rnd_65x39"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_AA_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "AA Specialist (Titan)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "tacs_Uniform_Combat_LS_BS_TP_BB";
    backpack = "TACU_SevenRings_B_AA_Kitbag_Black";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"milgp_v_marciras_hgunner_rgr","G_Balaclava_blk","H_HelmetSpecB"};
    weapons[] = {"launch_B_Titan_olive_F","CUP_arifle_Mk16_STD_AFG_black","CUP_hgun_M9","Throw","Put"};
    magazines[] = {"Titan_AA", mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};

class TACU_SevenRings_U_I_Western_Pilot_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    displayName = "Pilot (P90)";
    role = "Crewman";
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "B_Parachute";
    linkedItems[] = {DEFAULT_ITEMS_RADIO,"V_HarnessO_gry","H_PilotHelmetHeli_O"};
    weapons[] = {"SMG_03C_black","CUP_hgun_M9","Throw","Put"};
    magazines[] = {mag_8("tacgt_AI_50Rnd_57x28"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
    headgearList[] = {"H_PilotHelmetHeli_O", 1};
};

// Opfor Units
class TACU_SevenRings_U_O_Eastern_Rifleman_01: TACU_SevenRings_U_I_Eastern_Rifleman_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Rifleman_02: TACU_SevenRings_U_I_Eastern_Rifleman_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Rifleman_03: TACU_SevenRings_U_I_Eastern_Rifleman_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Grenadier_01: TACU_SevenRings_U_I_Eastern_Grenadier_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Grenadier_02: TACU_SevenRings_U_I_Eastern_Grenadier_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Grenadier_03: TACU_SevenRings_U_I_Eastern_Grenadier_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Rifleman_AT_01: TACU_SevenRings_U_I_Eastern_Rifleman_AT_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Rifleman_AT_02: TACU_SevenRings_U_I_Eastern_Rifleman_AT_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Rifleman_AT_03: TACU_SevenRings_U_I_Eastern_Rifleman_AT_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Autorifleman_01: TACU_SevenRings_U_I_Eastern_Autorifleman_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Autorifleman_02: TACU_SevenRings_U_I_Eastern_Autorifleman_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Autorifleman_03: TACU_SevenRings_U_I_Eastern_Autorifleman_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Medic_01: TACU_SevenRings_U_I_Eastern_Medic_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Medic_02: TACU_SevenRings_U_I_Eastern_Medic_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Medic_03: TACU_SevenRings_U_I_Eastern_Medic_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Engineer_01: TACU_SevenRings_U_I_Eastern_Engineer_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Engineer_02: TACU_SevenRings_U_I_Eastern_Engineer_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Engineer_03: TACU_SevenRings_U_I_Eastern_Engineer_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Teamleader_01: TACU_SevenRings_U_I_Eastern_Teamleader_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Teamleader_02: TACU_SevenRings_U_I_Eastern_Teamleader_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Teamleader_03: TACU_SevenRings_U_I_Eastern_Teamleader_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_CQBSpecialist_01: TACU_SevenRings_U_I_Eastern_CQBSpecialist_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_CQBSpecialist_02: TACU_SevenRings_U_I_Eastern_CQBSpecialist_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_CQBSpecialist_03: TACU_SevenRings_U_I_Eastern_CQBSpecialist_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Marksman_01: TACU_SevenRings_U_I_Eastern_Marksman_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Marksman_02: TACU_SevenRings_U_I_Eastern_Marksman_02 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_Marksman_03: TACU_SevenRings_U_I_Eastern_Marksman_03 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Eastern_AA_01: TACU_SevenRings_U_I_Eastern_AA_01 {
    MACRO_OPFOR_EAST_SIDE;
};
class TACU_SevenRings_U_O_Western_Rifleman_01: TACU_SevenRings_U_I_Western_Rifleman_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Rifleman_02: TACU_SevenRings_U_I_Western_Rifleman_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Rifleman_03: TACU_SevenRings_U_I_Western_Rifleman_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Grenadier_01: TACU_SevenRings_U_I_Western_Grenadier_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Grenadier_02: TACU_SevenRings_U_I_Western_Grenadier_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Grenadier_03: TACU_SevenRings_U_I_Western_Grenadier_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Rifleman_AT_01: TACU_SevenRings_U_I_Western_Rifleman_AT_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Rifleman_AT_02: TACU_SevenRings_U_I_Western_Rifleman_AT_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Rifleman_AT_03: TACU_SevenRings_U_I_Western_Rifleman_AT_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Autorifleman_01: TACU_SevenRings_U_I_Western_Autorifleman_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Autorifleman_02: TACU_SevenRings_U_I_Western_Autorifleman_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Autorifleman_03: TACU_SevenRings_U_I_Western_Autorifleman_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Medic_01: TACU_SevenRings_U_I_Western_Medic_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Medic_02: TACU_SevenRings_U_I_Western_Medic_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Medic_03: TACU_SevenRings_U_I_Western_Medic_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Engineer_01: TACU_SevenRings_U_I_Western_Engineer_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Engineer_02: TACU_SevenRings_U_I_Western_Engineer_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Engineer_03: TACU_SevenRings_U_I_Western_Engineer_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Teamleader_01: TACU_SevenRings_U_I_Western_Teamleader_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Teamleader_02: TACU_SevenRings_U_I_Western_Teamleader_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Teamleader_03: TACU_SevenRings_U_I_Western_Teamleader_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_CQBSpecialist_01: TACU_SevenRings_U_I_Western_CQBSpecialist_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_CQBSpecialist_02: TACU_SevenRings_U_I_Western_CQBSpecialist_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_CQBSpecialist_03: TACU_SevenRings_U_I_Western_CQBSpecialist_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Marksman_01: TACU_SevenRings_U_I_Western_Marksman_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Marksman_02: TACU_SevenRings_U_I_Western_Marksman_02 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Marksman_03: TACU_SevenRings_U_I_Western_Marksman_03 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_AA_01: TACU_SevenRings_U_I_Western_AA_01 {
    MACRO_OPFOR_WEST_SIDE;
};
class TACU_SevenRings_U_O_Western_Pilot_01: TACU_SevenRings_U_I_Western_Pilot_01 {
    MACRO_OPFOR_WEST_SIDE;
};
