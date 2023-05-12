// Units - AAF
class I_Soldier_base_F: SoldierGB {
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_soldier_F: I_Soldier_base_F {
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Soldier_lite_F: I_Soldier_02_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("SmokeShell")};
};
class I_Soldier_A_F: I_Soldier_02_F {
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Soldier_GL_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};
class I_Soldier_AR_F: I_Soldier_02_F {
    magazines[] = {mag_3("tacgt_AI_200Rnd_65x39_Belt"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_3("tacgt_AI_200Rnd_65x39_Belt"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "HandGrenade", mag_2("SmokeShell")};
};
class I_Soldier_SL_F: I_Soldier_02_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Soldier_TL_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};
class I_Soldier_M_F: I_Soldier_base_F {
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Soldier_LAT_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "NLAW_F", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "NLAW_F", mag_2("SmokeShell")};
};
class I_Soldier_AT_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "Titan_AT", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "Titan_AT", mag_2("SmokeShell")};
};
class I_Soldier_AA_F: I_Soldier_02_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "Titan_AA", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "Titan_AA", mag_2("SmokeShell")};
};
class I_medic_F: I_Soldier_02_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_4("SmokeShellOrange")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_4("SmokeShellOrange")};
};
class I_Soldier_repair_F: I_Soldier_02_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Soldier_exp_F: I_Soldier_02_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_3("APERSMine_Range_Mag")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_3("APERSMine_Range_Mag")};
};
class I_engineer_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_crew_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_helipilot_F: I_Soldier_03_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_3("SmokeShellGreen")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_3("SmokeShellGreen")};
};
class I_pilot_F: I_Soldier_04_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_3("SmokeShellGreen")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_3("SmokeShellGreen")};
};
class I_helicrew_F: I_helipilot_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("SmokeShellGreen")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("SmokeShellGreen")};
};
class I_officer_F: I_Soldier_base_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911")};
};
class I_soldier_UAV_F: I_Soldier_base_F {};

class I_diver_F: I_Soldier_diver_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_diver_exp_F: I_Soldier_diver_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_diver_TL_F: I_Soldier_diver_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Spotter_F: I_Soldier_sniper_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", mag_2("MiniGrenade"), mag_3("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", mag_2("MiniGrenade"), mag_3("SmokeShell")};
};
class I_Sniper_F: I_Soldier_sniper_base_F {
    magazines[] = {mag_6("5Rnd_127x108_Mag"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag", mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("5Rnd_127x108_Mag"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag", mag_4("SmokeShell")};
};
class I_Soldier_support_base_F: I_Soldier_base_F {
    magazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_9("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_Soldier_AAR_F: I_Soldier_support_base_F {};
class I_Soldier_AAT_F: I_Soldier_support_base_F {};
class I_Soldier_AAA_F: I_Soldier_AAT_F {};
class I_support_MG_F: I_Soldier_support_base_F {};
class I_support_GMG_F: I_Soldier_support_base_F {};
class I_support_Mort_F: I_Soldier_support_base_F {};
class I_support_AMG_F: I_Soldier_support_base_F {};
class I_support_AMort_F: I_Soldier_support_base_F {};

class I_ghillie_base_F: I_Soldier_sniper_base_F {
    magazines[] = {mag_6("5Rnd_127x108_Mag"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag", mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("5Rnd_127x108_Mag"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "APERSTripMine_Wire_Mag", "ClaymoreDirectionalMine_Remote_Mag", mag_4("SmokeShell")};
};
class I_ghillie_lsh_F: I_ghillie_base_F {};
class I_ghillie_sard_F: I_ghillie_base_F {};
class I_ghillie_ard_F: I_ghillie_base_F {};

class I_Story_Officer_01_F: I_officer_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_3("APERSMineDispenser_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), mag_3("APERSMineDispenser_Mag"), "SmokeShell"};
};
class I_Soldier_LAT2_F: I_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "MRAWS_HEAT_F", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("tacgt_AI_8Rnd_45ACP_1911"), "MRAWS_HEAT_F", mag_2("SmokeShell")};
};
class I_Story_Crew_F: I_crew_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("SmokeShellGreen")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("SmokeShellGreen")};
};
