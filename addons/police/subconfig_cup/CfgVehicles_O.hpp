// Counter Terrorist Units
class TACU_Main_U_OPFOR_Soldier_Base;
class TACU_Police_U_O_CT_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    displayName = "Rifleman (AS VAL)";
    weapons[] = {
        "TACU_Police_W_ASVAL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_ASVAL",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_9("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_9("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
};

class TACU_Police_U_O_CT_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    weapons[] = {
        "TACU_Police_W_Vityaz_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Vityaz_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_Vityaz"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_Vityaz"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
};

class TACU_Police_U_O_CT_SMG_2: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vikhr)";
    weapons[] = {
        "TACU_Police_W_Vikhr_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Vikhr_Grip",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_SR3M"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
};

class TACU_Police_U_O_CT_Breacher: TACU_Police_U_O_CT_Rifleman {
    weapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_8("CUP_12Rnd_B_Saiga12_Buck_00"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
};

class TACU_Police_U_O_CT_Marksman: TACU_Police_U_O_CT_Rifleman {
    weapons[] = {
        "TACU_Police_W_Dragunov",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Police_W_Dragunov",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther")};
};

// Enforcers
class TACU_Police_U_O_Enforcer_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    weapons[] = {
        "CUP_smg_vityaz",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_smg_vityaz",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_30Rnd_Vityaz"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_Vityaz"), mag_2("TACU_Magazine_17Rnd_Walther")};
};

class TACU_Police_U_O_Enforcer_SMG_2: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Bizon)";
    weapons[] = {
        "CUP_smg_bizon",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_smg_bizon",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_8("TACU_Magazine_64Rnd_Bizon"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_8("TACU_Magazine_64Rnd_Bizon"), mag_2("TACU_Magazine_17Rnd_Walther")};
};

class TACU_Police_U_O_Enforcer_SMG_3: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Vikhr)";
    weapons[] = {
        "CUP_arifle_SR3M_Vikhr",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_arifle_SR3M_Vikhr",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_12("TACU_Magazine_30Rnd_SR3M"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_SR3M"), mag_2("TACU_Magazine_17Rnd_Walther")};
};

class TACU_Police_U_O_Enforcer_Breacher: TACU_Police_U_O_Enforcer_SMG_1 {
    weapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_sgun_Saiga12K",
        "hgun_Rook40_F",
        "Throw", "Put"
    };
    magazines[] = {mag_6("CUP_12Rnd_B_Saiga12_Buck_00"), mag_2("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_6("CUP_12Rnd_B_Saiga12_Buck_00"), mag_2("TACU_Magazine_17Rnd_Walther")};
};
