// Military Police
class TACU_AAF_U_I_MP_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "MP (F2000)";
    editorSubcategory = "TACU_AAF_EdSubCat_Military_Police";
    faction = "IND_F";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Greek"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_I_CombatUniform";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_TacVest_blk_POLICE",
        "H_MilCap_dgtl"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_TacVest_blk_POLICE",
        "H_MilCap_dgtl"
    };
    weapons[] = {"arifle_Mk20_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_F", "Throw", "Put"};
    magazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("SmokeShell")};
    EDITORPREVIEW(TACU_AAF_U_I_MP_Rifleman);
};
class TACU_AAF_U_I_MP_SMG: TACU_AAF_U_I_MP_Rifleman {
    displayName = "MP (SMG)";
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG_02"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG_02"), mag_2("SmokeShell")};
    EDITORPREVIEW(TACU_AAF_U_I_MP_SMG);
};
class TACU_AAF_U_I_MP_Shotgun: TACU_AAF_U_I_MP_Rifleman {
    displayName = "MP (Shotgun)";
    weapons[] = {"CUP_sgun_M1014_solidstock", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014_solidstock", "Throw", "Put"};
    magazines[] = {mag_4("CUP_8Rnd_12Gauge_Pellets_No00_Buck"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("CUP_8Rnd_12Gauge_Pellets_No00_Buck"), mag_2("SmokeShell")};
    EDITORPREVIEW(TACU_AAF_U_I_MP_Shotgun);
};
class TACU_AAF_U_I_MP_LongRifle: TACU_AAF_U_I_MP_Rifleman {
    displayName = "MP (Long Rifle)";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {mag_4("TACU_Magazine_10Rnd_M1A"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_10Rnd_M1A"), mag_2("SmokeShell")};
    EDITORPREVIEW(TACU_AAF_U_I_MP_LongRifle);
};

// Green Dagger Units
class TACU_AAF_U_I_Rifleman: TACU_AAF_U_I_MP_Rifleman {
    displayName = "Rifleman";
    editorSubcategory = "TACU_AAF_EdSubCat_Green_Daggers";
    identityTypes[] = {"LanguageGRE_F", "Head_Greek_camo_semiarid"};
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_PlateCarrierIA1_dgtl",
        "CUP_H_OpsCore_Covered_AAF"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_PlateCarrierIA1_dgtl",
        "CUP_H_OpsCore_Covered_AAF"
    };
    weapons[] = {
        "TACU_AAF_W_F2000",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_AAF_W_F2000",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    magazines[] = {
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    headgearList[] = {
        "CUP_H_OpsCore_Covered_AAF", 0.33,
        "CUP_H_OpsCore_Covered_AAF_NoHS", 0.33,
        "CUP_H_OpsCore_Covered_AAF_SF", 0.33
    };
    CBA_facewearList[] = {
        "", 0.14,
        "G_Bandanna_oli", 0.14,
        "G_Bandanna_blk", 0.14,
        "G_Shades_Black", 0.14,
        "G_Shades_Blue", 0.14,
        "G_Shades_Green", 0.14,
        "G_Spectacles", 0.14
    };
    EDITORPREVIEW(TACU_AAF_U_I_Rifleman);
};

class TACU_AAF_U_I_Rifleman_AT: TACU_AAF_U_I_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_AAF_B_AT_Carryall";
    weapons[] = {
        "launch_PSRL1_PWS_digi_RF",
        "TACU_AAF_W_F2000",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_PSRL1_PWS_digi_RF",
        "TACU_AAF_W_F2000",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    magazines[] = {
        "PSRL1_AT_RF",
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "PSRL1_AT_RF",
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_AAF_U_I_Rifleman_AT);
};

class TACU_AAF_U_I_Rifleman_AP: TACU_AAF_U_I_Rifleman_AT {
    displayName = "Rifleman (AP)";
    TACU_isAP = 1;
    backpack = "TACU_AAF_B_AP_Carryall";
    magazines[] = {
        "PSRL1_HE_RF",
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "PSRL1_HE_RF",
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
};

class TACU_AAF_U_I_Grenadier: TACU_AAF_U_I_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_AAF_W_F2000_GL",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_AAF_W_F2000_GL",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    magazines[] = {
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_9("TACU_Magazine_30Rnd_STANAG"),
        mag_6("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_AAF_U_I_Grenadier);
};

class TACU_AAF_U_I_Marksman: TACU_AAF_U_I_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    weapons[] = {
        "TACU_AAF_W_HK417",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_AAF_W_HK417",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_7("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_AAF_U_I_Marksman);
};

class TACU_AAF_U_I_TeamLeader: TACU_AAF_U_I_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_AAF_W_F2000",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_AAF_W_F2000",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    EDITORPREVIEW(TACU_AAF_U_I_TeamLeader);
};

class TACU_AAF_U_I_MG: TACU_AAF_U_I_Rifleman {
    displayName = "Machine Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_AAF_B_MG_AssaultPack";
    weapons[] = {
        "TACU_AAF_W_Vektor_77",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_AAF_W_Vektor_77",
        "TACU_AAF_W_P99",
        "Throw", "Put"
    };
    magazines[] = {
        "TACU_Magazine_100Rnd_762_SA77",
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "TACU_Magazine_100Rnd_762_SA77",
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_AAF_U_I_MG);
};

class TACU_AAF_U_I_Medic: TACU_AAF_U_I_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_AAF_B_Medic_Kitbag";
    EDITORPREVIEW(TACU_AAF_U_I_Medic);
};

class TACU_AAF_U_I_Demolitions: TACU_AAF_U_I_Rifleman {
    displayName = "Demolitions Specialist";
    icon = "iconManExplosive";
    role = "Sapper";
    backpack = "TACU_AAF_B_Demo_AssaultPack";
    canDeactivateMines = 1;
    EDITORPREVIEW(TACU_AAF_U_I_Demolitions);
};

class TACU_AAF_U_I_Engineer: TACU_AAF_U_I_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "TACU_AAF_B_Repair_AssaultPack";
    EDITORPREVIEW(TACU_AAF_U_I_Engineer);
};
