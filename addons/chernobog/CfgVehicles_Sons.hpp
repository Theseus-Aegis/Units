class TACU_Chernobog_Sons_U_I_Rifleman: TACU_Chernobog_Core_Unit {
    editorSubcategory = "TACU_Chernobog_Sons";
    displayName = "Guardian of the Prophet";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "U_O_R_Gorka_01_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"arifle_MSBS65_black_ico_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_MSBS65_black_ico_F", "Throw", "Put"};
    magazines[] = {
        mag_7("TACU_Magazine_30Rnd_MSBS"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_30Rnd_MSBS"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
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
    //EDITORPREVIEW(TACU_Chernobog_Sons_U_I_Rifleman);
};
class TACU_Chernobog_Sons_U_I_Medic: TACU_Chernobog_Sons_U_I_Rifleman {
    displayName = "Healer of Sacred Tears";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "CUP_U_O_RUS_VSR98_worn_gloves_MSV";
    backpack = "TACU_Chernobog_Kitbag_Medic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_VOG_Full_Green",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_VOG_Full_Green",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"TACU_Chernobog_W_ASVAL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Chernobog_W_ASVAL", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_SR3M")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_SR3M")};
    //EDITORPREVIEW(TACU_Chernobog_Sons_U_I_Medic);
};
class TACU_Chernobog_Sons_U_I_Machinegunner: TACU_Chernobog_Sons_U_I_Rifleman {
    displayName = "Guardian of the True Voice";
    icon = "iconManMG";
    uniformClass = "U_O_R_Gorka_01_F";
    backpack = "TACU_Chernobog_Viperharness_MG";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_VOG_full",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_VOG_full",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"TACU_Chernobog_W_Stoner", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Chernobog_W_Stoner", "Throw", "Put"};
    magazines[] = {
        "TACU_Magazine_200Rnd_65_Box",
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Chernobog_Sons_U_I_Machinegunner);
};
class TACU_Chernobog_Sons_U_I_Sniper: TACU_Chernobog_Sons_U_I_Rifleman {
    displayName = "Guardian of the True Sight";
    role = "Marksman";
    uniformClass = "U_I_GhillieSuit";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"TACU_Chernobog_W_KSVK", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Chernobog_W_KSVK", "Throw", "Put"};
    magazines[] = {mag_6("CUP_5Rnd_127x108_KSVK_M")};
    respawnMagazines[] = {mag_6("CUP_5Rnd_127x108_KSVK_M")};
    //EDITORPREVIEW(TACU_Chernobog_Sons_U_I_Sniper);
};
class TACU_Chernobog_Sons_U_I_Squadleader: TACU_Chernobog_Sons_U_I_Rifleman {
    displayName = "Enlightened One";
    icon = "iconManLeader";
    uniformClass = "CUP_U_C_Priest_01";
    backpack = "TACU_Chernobog_HikingPack_Squadleader";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_PKP_Del",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_PKP_Del",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"CUP_sgun_Saiga12K", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "Throw", "Put"};
    magazines[] = {mag_4("CUP_12Rnd_B_Saiga12_Buck_00")};
    respawnMagazines[] = {mag_4("CUP_12Rnd_B_Saiga12_Buck_00")};
    //EDITORPREVIEW(TACU_Chernobog_Sons_U_I_Squadleader);
};
