class TACU_Chernobog_Children_U_I_Rifleman_01: TACU_Chernobog_Core_Unit {
    editorSubcategory = "TACU_Chernobog_Children";
    displayName = "Initiate";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_BG_Guerilla2_1";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_BandollierB_rgr",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_BandollierB_rgr",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_srifle_Mosin_Nagant", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_Mosin_Nagant", "Throw", "Put"};
    magazines[] = {mag_8("CUP_5Rnd_762x54_Mosin_M")};
    respawnMagazines[] = {mag_8("CUP_5Rnd_762x54_Mosin_M")};
    CBA_facewearList[] = {
        "G_Bandanna_aviator", 0.3,
        "G_Bandanna_beast", 0.3,
        "G_Bandanna_blk", 0.3,
        "G_Bandanna_khk", 0.3,
        "G_Bandanna_oli", 0.3,
        "G_Squares", 0.3,
        "CUP_G_TK_RoundGlasses_blk", 0.3,
        "", 0.6
    };
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Rifleman_01);
};
class TACU_Chernobog_Children_U_I_Rifleman_02: TACU_Chernobog_Children_U_I_Rifleman_01 {
    uniformClass = "U_I_C_Soldier_Bandit_5_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_O_SLA_M23_1_OD",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_O_SLA_M23_1_OD",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_SKS", "Throw", "Put"};
    respawnWeapons[] = {"CUP_SKS", "Throw", "Put"};
    magazines[] = {mag_8("CUP_10Rnd_762x39_SKS_M")};
    respawnMagazines[] = {mag_8("CUP_10Rnd_762x39_SKS_M")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Rifleman_02);
};
class TACU_Chernobog_Children_U_I_Rifleman_03: TACU_Chernobog_Children_U_I_Rifleman_01 {
    uniformClass = "U_lxWS_SFIA_deserter";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_LegStrapBag_olive_F",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_LegStrapBag_olive_F",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_sgun_CZ584", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_CZ584", "Throw", "Put"};
    magazines[] = {mag_12("CUP_1Rnd_12Gauge_Pellets_No00_Buck"), mag_8("CUP_1Rnd_12Gauge_Pellets_No00_Buck")};
    respawnMagazines[] = {mag_12("CUP_1Rnd_12Gauge_Pellets_No00_Buck"), mag_8("CUP_1Rnd_12Gauge_Pellets_No00_Buck")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Rifleman_03);
};
class TACU_Chernobog_Children_U_I_LAT: TACU_Chernobog_Children_U_I_Rifleman_01 {
    displayName = "Acolyte";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_C_WorkerCoveralls";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_O_Ins_Carrier_Rig",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_O_Ins_Carrier_Rig",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {
        "CUP_launch_RPG18",
        "CUP_arifle_AKS",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_launch_RPG18",
        "CUP_arifle_AKS",
        "Throw", "Put"
    };
    magazines[] = {"CUP_RPG18_M", mag_7("TACU_Magazine_30Rnd_762_AK")};
    respawnMagazines[] = {"CUP_RPG18_M", mag_7("TACU_Magazine_30Rnd_762_AK")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_LAT);
};
class TACU_Chernobog_Children_U_I_Medic: TACU_Chernobog_Children_U_I_Rifleman_01 {
    displayName = "Healer of the Crimson Tears";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy";
    backpack = "TACU_Chernobog_Alicepack_Medic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Plain_crystal_F",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Plain_crystal_F",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_SKS", "Throw", "Put"};
    respawnWeapons[] = {"CUP_SKS", "Throw", "Put"};
    magazines[] = {mag_8("CUP_10Rnd_762x39_SKS_M")};
    respawnMagazines[] = {mag_8("CUP_10Rnd_762x39_SKS_M")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Medic);
};
class TACU_Chernobog_Children_U_I_Squadleader: TACU_Chernobog_Children_U_I_Rifleman_01 {
    displayName = "Enlightened Monk";
    icon = "iconManLeader";
    uniformClass = "U_I_C_Soldier_Para_1_F";
    backpack = "TACU_Chernobog_EverydayPack_Squadleader";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_B_PASGT_OD",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_B_PASGT_OD",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_arifle_AKM_GL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKM_GL", "Throw", "Put"};
    magazines[] = {"CUP_1Rnd_HE_GP25_M", mag_7("TACU_Magazine_30Rnd_762_AK")};
    respawnMagazines[] = {"CUP_1Rnd_HE_GP25_M", mag_7("TACU_Magazine_30Rnd_762_AK")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Squadleader);
};
class TACU_Chernobog_Children_U_I_Teamleader: TACU_Chernobog_Children_U_I_Rifleman_01 {
    displayName = "Monk";
    icon = "iconManLeader";
    uniformClass = "U_I_L_Uniform_01_tshirt_black_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_OI_TKI_Jacket2_01",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_V_OI_TKI_Jacket2_01",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"arifle_AKM_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKM_F", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_762_AK")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_762_AK")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Teamleader);
};
class TACU_Chernobog_Children_U_I_Marksman: TACU_Chernobog_Children_U_I_Rifleman_01 {
    displayName = "True Sight Acolyte";
    role = "Marksman";
    uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_LegStrapBag_olive_F",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_LegStrapBag_olive_F",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_7("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_7("CUP_5x_22_LR_17_HMR_M")};
    //EDITORPREVIEW(TACU_Chernobog_Children_U_I_Marksman);
};
