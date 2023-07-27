class TACU_Police_U_I_CT_Rifleman;
class TACU_Police_U_I_CT_RiotControl: TACU_Police_U_I_CT_Rifleman {
    scope = 2;
    scopeCurator = 2;
    displayName = "Riot Control";
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
