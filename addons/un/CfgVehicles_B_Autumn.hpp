// Autumn Units
class TACU_UN_Autumn_U_B_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_UN_B";
    editorSubcategory = "TACU_UN_Autumn";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_Euro", "Head_NATO", "Head_Greek", "Head_Enoch"};
    genericNames = "CivMen"; // Mixture of American, African, & Greek
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Autumn";
    items[] = {"ACE_NVG_Gen4_Black"};
    respawnItems[] = {"ACE_NVG_Gen4_Black"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_UN_Vest_Lite_F",
        "lxWS_H_PASGT_basic_UN_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_UN_Vest_Lite_F",
        "lxWS_H_PASGT_basic_UN_F"
    };
    weapons[] = {
        "TACU_UN_W_SCARL_Flashlight_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_UN_W_SCARL_Flashlight_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {
        "lxWS_H_PASGT_basic_UN_F", 0.5,
        "lxWS_H_PASGT_goggles_UN_F", 0.5
    };
    CBA_facewearList[] = {
        "G_Shades_Black", 0.2,
        "G_Shades_Blue", 0.2,
        "G_Shades_Green", 0.2,
        "G_Squares", 0.2,
        "G_Spectacles_Tinted", 0.2,
        "", 0.6
    };
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Rifleman);
};

class TACU_UN_Autumn_U_B_Demolitions: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Demolitions";
    icon = "iconManEngineer";
    role = "Sapper";
    canDeactivateMines = 1;
    backpack = "TACU_UN_B_Demolitions_Tan";
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Demolitions);
};

class TACU_UN_Autumn_U_B_Grenadier: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    backpack = "TACU_UN_B_Grenadier_Tan";
    weapons[] = {
        "TACU_UN_W_SCARL_GL_Flashlight_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_UN_W_SCARL_GL_Flashlight_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Grenadier);
};

class TACU_UN_Autumn_U_B_Marksman: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Marksman";
    weapons[] = {
        "TACU_UN_W_SCARH_MR_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_UN_W_SCARH_MR_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("TACU_Magazine_20Rnd_762_SCARH"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnmagazines[] = {
        mag_7("TACU_Magazine_20Rnd_762_SCARH"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Marksman);
};

class TACU_UN_Autumn_U_B_Teamleader: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    backpack = "TACU_UN_B_TL_Tan";
    weapons[] = {
        "TACU_UN_W_SCARL_ACOG_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_UN_W_SCARL_ACOG_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Teamleader);
};

class TACU_UN_Autumn_U_B_Squadleader: TACU_UN_Autumn_U_B_Teamleader {
    displayName = "Squad Leader";
    backpack = "TACU_UN_B_SQL_Tan";
    weapons[] = {
        "TACU_UN_W_SCARL_GL_Flashlight_ACOG_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_UN_W_SCARL_GL_Flashlight_ACOG_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
};

class TACU_UN_Autumn_U_B_Machinegunner: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_UN_B_MG_Tan";
    weapons[] = {
        "CUP_lmg_M249_E2",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_lmg_M249_E2",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    magazines[] = {
        mag_2("TACU_Magazine_200Rnd_556_Pouch"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_2("TACU_Magazine_200Rnd_556_Pouch"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Machinegunner);
};

class TACU_UN_Autumn_U_B_MGAsst: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Asst. Machinegunner";
    backpack = "TACU_UN_B_MG_Tan";
    EDITORPREVIEW(TACU_UN_Autumn_U_B_MGAsst);
};

class TACU_UN_Autumn_U_B_Medic: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_UN_B_Medic_Tan";
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Medic);
};

class TACU_UN_Autumn_U_B_AT: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_UN_B_AT_Tan";
    weapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_UN_W_SCARL_Flashlight_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "tacs_MRAWS_Black_Rail_F",
        "TACU_UN_W_SCARL_Flashlight_Tan",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    magazines[] = {
        "MRAWS_HEAT55_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT55_F",
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_UN_Autumn_U_B_AT);
};

class TACU_UN_Autumn_U_B_Driver: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Driver";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_UN_Vest_Lite_F",
        "lxWS_H_HelmetCrew_Blue"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_UN_Vest_Lite_F",
        "lxWS_H_HelmetCrew_Blue"
    };
    weapons[] = {
        "TACU_UN_W_P90",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_UN_W_P90",
        "TACU_UN_W_FNX45",
        "Throw", "Put"
    };
    magazines[] = {
        mag_2("TACU_Magazine_50Rnd_P90"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_2("TACU_Magazine_50Rnd_P90"),
        mag_2("TACU_Magazine_11Rnd_FNX"),
        mag_2("SmokeShell")
    };
    headGearList[] = {"lxWS_H_HelmetCrew_Blue", 1};
    EDITORPREVIEW(TACU_UN_Autumn_U_B_Driver);
};
