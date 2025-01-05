class TACU_Chernobog_Chosen_U_I_Rifleman: TACU_Chernobog_Core_Unit {
    editorSubcategory = "TACU_Chernobog_Chosen";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_C_racketeer_04";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_Green",
        "H_Hat_Tinfoil_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "CUP_Vest_RUS_6B45_Sh117_Green",
        "H_Hat_Tinfoil_F"
    };
    weapons[] = {"TACU_Chernobog_W_AK74M", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Chernobog_W_AK74M", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_545_AK")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_545_AK")};
    CBA_facewearList[] = {"", 1};
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_Rifleman);
};
class TACU_Chernobog_Chosen_U_I_Medic: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_Chernobog_Alicepack_Medic";
    uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy";
    weapons[] = {"CUP_arifle_AK74M", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK74M", "Throw", "Put"};
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_Medic);
};
class TACU_Chernobog_Chosen_U_I_LAT: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Rifleman (LAT)";
    uniformClass = "U_C_WorkerCoveralls";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {
        "CUP_launch_RPG18",
        "TACU_Chernobog_W_AK74M",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_launch_RPG18",
        "TACU_Chernobog_W_AK74M",
        "Throw", "Put"
    };
    magazines[] = {
        "CUP_RPG18_M",
        mag_7("TACU_Magazine_30Rnd_545_AK"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "CUP_RPG18_M",
        mag_7("TACU_Magazine_30Rnd_545_AK"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_LAT);
};
class TACU_Chernobog_Chosen_U_I_AT: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "U_I_C_Soldier_Para_4_F";
    backpack = "TACU_Chernobog_RPGPack_AT";
    weapons[] = {
        "CUP_launch_RPG7V",
        "TACU_Chernobog_W_AK74M",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_launch_RPG7V",
        "TACU_Chernobog_W_AK74M",
        "Throw", "Put"
    };
    magazines[] = {
        "CUP_PG7VM_M",
        mag_7("TACU_Magazine_30Rnd_545_AK"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "CUP_PG7VM_M",
        mag_7("TACU_Magazine_30Rnd_545_AK"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_AT);
};
class TACU_Chernobog_Chosen_U_I_Teamleader: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "U_C_E_LooterJacket_01_F";
    backpack = "TACU_Chernobog_SportPack_TL";
    weapons[] = {"TACU_Chernobog_W_AK74M_GL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Chernobog_W_AK74M_GL", "Throw", "Put"};
    magazines[] = {
        "CUP_1Rnd_HE_GP25_M",
        mag_7("TACU_Magazine_30Rnd_545_AK"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        "CUP_1Rnd_HE_GP25_M",
        mag_7("TACU_Magazine_30Rnd_545_AK"),
        mag_2("CUP_HandGrenade_RGO"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_Teamleader);
};
class TACU_Chernobog_Chosen_U_I_Squadleader: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Squad Leader";
    icon = "iconManLeader";
    uniformClass = "CUP_U_I_GUE_Anorak_02";
    backpack = "TACU_Chernobog_Alicepack_Squadleader";
    weapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
    magazines[] = {"TACU_Magazine_150Rnd_Negev"};
    respawnMagazines[] = {"TACU_Magazine_150Rnd_Negev"};
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_Squadleader);
};
class TACU_Chernobog_Chosen_U_I_Marksman: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_BG_leader";
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
    weapons[] = {"TACU_Chernobog_W_SVD", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Chernobog_W_SVD", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_10Rnd_VS121")};
    respawnMagazines[] = {mag_7("TACU_Magazine_10Rnd_VS121")};
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_Marksman);
};
class TACU_Chernobog_Chosen_U_I_Demolitions: TACU_Chernobog_Chosen_U_I_Rifleman {
    displayName = "Demolitions";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    uniformClass = "CUP_U_I_GUE_Anorak_02";
    backpack = "TACU_Chernobog_Messenger_Demolitions";
    //EDITORPREVIEW(TACU_Chernobog_Chosen_U_I_Marksman);
};
