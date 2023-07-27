// Counter Terrorist Units
class TACU_Police_U_B_CT_Rifleman;
class TACU_Police_U_B_CT_Breacher: TACU_Police_U_B_CT_Rifleman {
    weapons[] = {
        "CUP_sgun_M1014_solidstock",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_sgun_M1014_solidstock",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_12("CUP_8Rnd_12Gauge_Pellets_No00_Buck"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
    respawnMagazines[] = {
        mag_12("CUP_8Rnd_12Gauge_Pellets_No00_Buck"),
        mag_3("TACU_Magazine_17Rnd_Walther"),
        "HandGrenade",
        "SmokeShell"
    };
};

class TACU_Police_U_B_CT_RiotControl: TACU_Police_U_B_CT_Rifleman {
    scope = 2;
    scopeCurator = 2;
    weapons[] = {"CUP_hgun_BallisticShield_Armed_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed_M9", "Throw", "Put"};
    magazines[] = {
        mag_12("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_12("TACU_Magazine_15Rnd_M9"),
        mag_2("HandGrenade"),
        mag_2("SmokeShell")
    };
};

// Enforcer Units
class TACU_Police_U_B_Enforcer_Rifleman;
class TACU_Police_U_B_Enforcer_Breacher: TACU_Police_U_B_Enforcer_Rifleman {
    weapons[] = {
        "CUP_sgun_M1014_solidstock",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_sgun_M1014_solidstock",
        "hgun_P07_blk_F",
        "Throw", "Put"
    };
    magazines[] = {mag_10("CUP_8Rnd_12Gauge_Pellets_No00_Buck"), mag_3("TACU_Magazine_17Rnd_Walther")};
    respawnMagazines[] = {mag_10("CUP_8Rnd_12Gauge_Pellets_No00_Buck"), mag_3("TACU_Magazine_17Rnd_Walther")};
};
