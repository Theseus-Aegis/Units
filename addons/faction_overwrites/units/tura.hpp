// Units - Tura
class I_SFIA_soldier_lxWS: I_soldier_F {
    magazines[] = {mag_8("TACU_Magazine_20Rnd_SLR"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_20Rnd_SLR"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_SFIA_scout_lxWS: I_C_Soldier_Bandit_5_F {
    magazines[] = {mag_5("TACU_Magazine_20Rnd_SLR"), mag_2("MiniGrenade")};
    respawnMagazines[] = {mag_5("TACU_Magazine_20Rnd_SLR"), mag_2("MiniGrenade")};
};
class I_SFIA_watcher_lxWS: I_C_Soldier_Bandit_4_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_762_AK"), mag_2("MiniGrenade")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_762_AK"), mag_2("MiniGrenade")};
};
class I_SFIA_enforcer_lxWS: I_C_Soldier_Para_2_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_762_AK"), mag_2("MiniGrenade")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_762_AK"), mag_2("MiniGrenade")};
};
class I_SFIA_hireling_lxWS: I_C_Soldier_Bandit_2_F {
    magazines[] = {mag_2("TACU_Magazine_30Rnd_SMG"), "RPG32_F"};
    respawnMagazines[] = {mag_2("TACU_Magazine_30Rnd_SMG"), "RPG32_F"};
};
class I_SFIA_medic2_lxWS: I_C_Soldier_Bandit_1_F {
    magazines[] = {mag_2("TACU_Magazine_30Rnd_762_AK")};
    respawnMagazines[] = {mag_2("TACU_Magazine_30Rnd_762_AK")};
};
class I_SFIA_thug_lxWS: I_SFIA_scout_lxWS {
    magazines[] = {mag_2("TACU_Magazine_30Rnd_762_AK")};
    respawnMagazines[] = {mag_2("TACU_Magazine_30Rnd_762_AK")};
};
class I_SFIA_deserter_lxWS: I_SFIA_soldier_lxWS {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_762_AK"), mag_3("SmokeShellGreen")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_762_AK"), mag_3("SmokeShellGreen")};
};
class I_Tura_deserter_lxWS: I_SFIA_deserter_lxWS {};
class I_SFIA_defector_lxWS: I_SFIA_soldier_lxWS {
    magazines[] = {mag_5("TACU_Magazine_20Rnd_SLR"), mag_2("SmokeShell"), mag_2("1Rnd_40mm_HE_lxWS"), "1Rnd_58mm_AT_lxWS"};
    respawnMagazines[] = {mag_5("TACU_Magazine_20Rnd_SLR"), mag_2("SmokeShell"), mag_2("1Rnd_40mm_HE_lxWS"), "1Rnd_58mm_AT_lxWS"};
};
class I_PMC_Soldier_01_lxWS: B_Soldier_F {
    magazines[] = {mag_6("TACU_Magazine_50Rnd_P90"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("TACU_Magazine_50Rnd_P90"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), mag_2("HandGrenade")};
};
class I_PMC_Soldier_02_lxWS: I_PMC_Soldier_01_lxWS {};
class I_PMC_Soldier_03_lxWS: I_PMC_Soldier_01_lxWS {};
class I_PMC_Story_Gustavo_lxWS: I_PMC_Soldier_01_lxWS {
    magazines[] = {"20Rnd_12Gauge_AA40_Pellets_lxWS", mag_5("8Rnd_12Gauge_AA40_Pellets_lxWS"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), mag_2("HandGrenade")};
    respawnMagazines[] = {"20Rnd_12Gauge_AA40_Pellets_lxWS", mag_5("8Rnd_12Gauge_AA40_Pellets_lxWS"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), mag_2("HandGrenade")};
};
class I_SFIA_officer_lxWS: I_officer_F {
    magazines[] = {mag_5("TACU_Magazine_20Rnd_SLR"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("TACU_Magazine_20Rnd_SLR"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class I_SFIA_Said_lxWS: I_SFIA_officer_lxWS {
    magazines[] = {mag_5("TACU_Magazine_30Rnd_762_AK"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_5("TACU_Magazine_30Rnd_762_AK"), mag_2("HandGrenade")};
};
class I_SFIA_crew_lxWS: I_crew_F {
    magazines[] = {mag_6("TACU_Magazine_35Rnd_R4"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_35Rnd_R4"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class I_Tura_soldier_UAV_lxWS: I_Tura_deserter_lxWS {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_762_AK"), mag_3("SmokeShellGreen"), mag_2("1Rnd_40mm_HE_lxWS"), mag_2("1Rnd_50mm_Smoke_lxWS"), "1Rnd_58mm_AT_lxWS"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_762_AK"), mag_3("SmokeShellGreen"), mag_2("1Rnd_40mm_HE_lxWS"), mag_2("1Rnd_50mm_Smoke_lxWS"), "1Rnd_58mm_AT_lxWS"};
};
class I_Tura_HeavyGunner_lxWS: I_Tura_deserter_lxWS {
    magazines[] = {mag_5("TACU_Magazine_100Rnd_762_SA77"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("TACU_Magazine_100Rnd_762_SA77"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
