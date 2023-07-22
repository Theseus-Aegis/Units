// Units - CSAT
class O_Soldier_base_F: SoldierEB {
    magazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_Soldier_02_F: O_Soldier_base_F {};
class O_Soldier_F: O_Soldier_base_F {};
class O_officer_F: O_Soldier_base_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_Katiba"), mag_3("6Rnd_45ACP_Cylinder"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_Katiba"), mag_3("6Rnd_45ACP_Cylinder"), mag_2("SmokeShell")};
};
class O_Soldier_lite_F: O_Soldier_base_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_Soldier_GL_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_5("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_5("1Rnd_Smoke_Grenade_shell")};
};
class O_Soldier_AR_F: O_Soldier_base_F {
    magazines[] = {mag_4("TACU_Magazine_150Rnd_Negev"), mag_3("TACU_Magazine_17Rnd_Walther"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_150Rnd_Negev"), mag_3("TACU_Magazine_17Rnd_Walther"), "HandGrenade", mag_2("SmokeShell")};
};
class O_Soldier_SL_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_4("SmokeShell")};
};
class O_Soldier_TL_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("SmokeShell"), mag_5("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("SmokeShell"), mag_5("1Rnd_Smoke_Grenade_shell")};
};
class O_soldier_M_F: O_Soldier_base_F {
    magazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_Soldier_LAT_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "RPG32_F", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "RPG32_F", mag_2("SmokeShell")};
};
class O_medic_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_4("SmokeShell")};
};
class O_soldier_repair_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldier_exp_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_helipilot_F: O_Soldier_02_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("SmokeShellRed")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("SmokeShellRed")};
};
class O_Soldier_A_F: O_Soldier_base_F {
    magazines[] = {mag_12("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_12("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_Soldier_AT_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), "Titan_AT"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), "Titan_AT"};
};
class O_Soldier_AA_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), "Titan_AA"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), "Titan_AA"};
};
class O_engineer_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_crew_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_Pilot_F: O_helipilot_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("SmokeShellRed")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("SmokeShellRed")};
};
class O_helicrew_F: O_helipilot_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_Katiba"), mag_2("SmokeShellRed")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_Katiba"), mag_2("SmokeShellRed")};
};
class O_soldier_PG_F: O_Soldier_base_F {};
class O_Story_Colonel_F: O_Soldier_base_F {};
class O_Story_CEO_F: O_Soldier_base_F {};

class O_soldier_UAV_F: O_Soldier_base_F {
    magazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), mag_2("MiniGrenade")};
    respawnMagazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), mag_2("MiniGrenade")};
};
class O_Soldier_diver_base_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_diver_F: O_Soldier_diver_base_F {};
class O_diver_TL_F: O_Soldier_diver_base_F {};
class O_diver_exp_F: O_Soldier_diver_base_F {};

class O_Soldier_sniper_base_F: O_Soldier_base_F {};
class O_spotter_F: O_Soldier_sniper_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", mag_2("MiniGrenade"), mag_3("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "Laserbatteries", mag_2("MiniGrenade"), mag_3("SmokeShell")};
};
class O_sniper_F: O_Soldier_sniper_base_F {
    magazines[] = {mag_4("5Rnd_127x108_Mag"), mag_2("5Rnd_127x108_APDS_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", mag_3("SmokeShell")};
    respawnMagazines[] = {mag_4("5Rnd_127x108_Mag"), mag_2("5Rnd_127x108_APDS_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", mag_3("SmokeShell")};
};
class O_Soldier_recon_base: O_Soldier_base_F {};

class O_recon_F: O_Soldier_recon_base {
    magazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_recon_M_F: O_Soldier_recon_base {
    magazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_recon_LAT_F: O_Soldier_recon_base {
    magazines[] = {mag_5("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "RPG32_F", mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "RPG32_F", mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_recon_medic_F: O_Soldier_recon_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "RPG32_F", mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "RPG32_F", mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_recon_exp_F: O_Soldier_recon_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_recon_JTAC_F: O_Soldier_recon_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), "Laserbatteries", mag_2("SmokeShell"), mag_5("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), "Laserbatteries", mag_2("SmokeShell"), mag_5("1Rnd_Smoke_Grenade_shell")};
};
class O_recon_TL_F: O_Soldier_recon_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_4("SmokeShell")};
};
class O_Soldier_support_base_F: O_Soldier_base_F {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_Soldier_AAR_F: O_Soldier_support_base_F {};
class O_Soldier_AAT_F: O_Soldier_support_base_F {};
class O_Soldier_AAA_F: O_Soldier_AAT_F {};
class O_support_MG_F: O_Soldier_support_base_F {};
class O_support_GMG_F: O_Soldier_support_base_F {};
class O_support_Mort_F: O_Soldier_support_base_F {};
class O_support_AMG_F: O_Soldier_support_base_F {};
class O_support_AMort_F: O_Soldier_support_base_F {};

class O_Soldier_Urban_base: O_Soldier_base_F {
    magazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_F: O_Soldier_Urban_base {};
class O_soldierU_AR_F: O_Soldier_Urban_base {
    magazines[] = {mag_4("TACU_Magazine_150Rnd_Negev"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_150Rnd_Negev"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_AAR_F: O_Soldier_Urban_base {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_LAT_F: O_Soldier_Urban_base {
    magazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "RPG32_F"};
    respawnMagazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "RPG32_F"};
};
class O_soldierU_AT_F: O_Soldier_Urban_base {
    magazines[] = {mag_7("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Titan_AT"};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Titan_AT"};
};
class O_soldierU_AAT_F: O_Soldier_Urban_base {
    magazines[] = {mag_7("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Titan_AT"};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Titan_AT"};
};
class O_soldierU_AA_F: O_Soldier_Urban_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Titan_AA"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Titan_AA"};
};
class O_soldierU_AAA_F: O_Soldier_Urban_base {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_TL_F: O_Soldier_Urban_base {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), mag_2("SmokeShell")};
};
class O_SoldierU_SL_F: O_Soldier_Urban_base {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_medic_F: O_Soldier_Urban_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_repair_F: O_Soldier_Urban_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_exp_F: O_Soldier_Urban_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_3("APERSMine_Range_Mag")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), mag_3("APERSMine_Range_Mag")};
};
class O_engineer_U_F: O_Soldier_Urban_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_M_F: O_Soldier_Urban_base {
    magazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_10Rnd_VS121"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_soldierU_A_F: O_Soldier_Urban_base {
    magazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_SoldierU_GL_F: O_Soldier_Urban_base {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), mag_2("SmokeShell")};
};
class O_ghillie_base_F: O_Soldier_sniper_base_F {
    magazines[] = {mag_4("5Rnd_127x108_Mag"), mag_2("5Rnd_127x108_APDS_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", mag_3("SmokeShell")};
    respawnMagazines[] = {mag_4("5Rnd_127x108_Mag"), mag_2("5Rnd_127x108_APDS_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", mag_3("SmokeShell")};
};
class O_ghillie_lsh_F: O_ghillie_base_F {};
class O_ghillie_sard_F: O_ghillie_base_F {};
class O_ghillie_ard_F: O_ghillie_base_F {};

class O_Sharpshooter_F: O_Soldier_base_F {
    magazines[] = {mag_8("10Rnd_93x64_DMR_05_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("10Rnd_93x64_DMR_05_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_Urban_Sharpshooter_F: O_Soldier_Urban_base {
    magazines[] = {mag_8("10Rnd_93x64_DMR_05_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("10Rnd_93x64_DMR_05_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_Pathfinder_F: O_Soldier_recon_base {
    magazines[] = {mag_8("10Rnd_127x54_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Laserbatteries"};
    respawnMagazines[] = {mag_8("10Rnd_127x54_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "Laserbatteries"};
};
class O_HeavyGunner_F: O_Soldier_base_F {
    magazines[] = {mag_3("150Rnd_93x64_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_3("150Rnd_93x64_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_Urban_HeavyGunner_F: O_Soldier_Urban_base {
    magazines[] = {mag_3("150Rnd_93x64_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_3("150Rnd_93x64_Mag"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_V_Soldier_Viper_F: O_Soldier_base_F {

};
class O_V_Soldier_base_F: O_Soldier_base_F {
    magazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther"};
    respawnMagazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther"};
};
class O_V_Soldier_hex_F: O_V_Soldier_base_F {};
class O_V_Soldier_TL_hex_F: O_V_Soldier_base_F {};
class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F {};
class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F {};
class O_V_Soldier_M_hex_F: O_V_Soldier_base_F {};
class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F {
    magazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther", "RPG32_F"};
    respawnMagazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther", "RPG32_F"};
};
class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F {
    magazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther", "Laserbatteries"};
    respawnMagazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther", "Laserbatteries"};
};
class O_Fighter_Pilot_F: O_Pilot_F {
    magazines[] = {mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_soldier_UAV_06_F: O_soldier_UAV_F {};
class O_soldier_UAV_06_medical_F: O_soldier_UAV_F {};
class O_soldier_mine_F: O_soldier_exp_F {};
class O_A_soldier_base_F: O_officer_F {};
class O_A_soldier_A_F: O_A_soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), mag_2("SmokeShell")};
};
class O_A_soldier_AR_F: O_A_soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_100Rnd_QBZ"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_100Rnd_QBZ"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_medic_F: O_A_soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), mag_2("SmokeShell")};
};
class O_A_soldier_GL_F: O_A_soldier_base_F {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_A_soldier_M_F: O_A_soldier_base_F {
    magazines[] = {mag_8("TACU_Magazine_20Rnd_QBU"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_20Rnd_QBU"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_officer_F: O_A_soldier_base_F {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_A_soldier_F: O_A_soldier_base_F {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_soldier_LAT_F: O_A_soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), "RPG32_F", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), "RPG32_F", mag_2("SmokeShell")};
};
class O_A_soldier_SL_F: O_A_soldier_base_F {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_soldier_TL_F: O_A_soldier_base_F {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_4("1Rnd_HE_Grenade_shell"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_QBZ"), mag_4("1Rnd_HE_Grenade_shell"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_soldier_AA_F: O_A_soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), "Titan_AA", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), "Titan_AA", mag_2("SmokeShell")};
};
class O_A_soldier_AT_F: O_A_soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), "Titan_AT", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_QBZ"), "Titan_AT", mag_2("SmokeShell")};
};
class O_Soldier_HAT_F: O_Soldier_base_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "Vorona_HEAT", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_Katiba"), mag_3("TACU_Magazine_17Rnd_Walther"), "Vorona_HEAT", mag_2("SmokeShell")};
};
class O_Soldier_AHAT_F: O_Soldier_support_base_F {};

class O_soldier_UAV_lxWS: O_soldier_UAV_F {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_SMG"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_A_officer_lxWS: O_officer_F {
    magazines[] = {mag_4("TACU_Magazine_20Rnd_SLR"), mag_3("6Rnd_45ACP_Cylinder"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_20Rnd_SLR"), mag_3("6Rnd_45ACP_Cylinder"), mag_2("SmokeShell")};
};
class O_A_Soldier_TL_lxWS: O_Soldier_TL_F {
    magazines[] = {mag_7("TACU_Magazine_20Rnd_SLR"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("TACU_Magazine_20Rnd_SLR"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_Soldier_lxWS: O_Soldier_F {
    magazines[] = {mag_7("TACU_Magazine_20Rnd_SLR"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("TACU_Magazine_20Rnd_SLR"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_Soldier_GL_lxWS: O_Soldier_GL_F {
    magazines[] = {mag_6("TACU_Magazine_20Rnd_SLR"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_3("1Rnd_40mm_HE_lxWS"), mag_2("1Rnd_58mm_AT_lxWS")};
    respawnMagazines[] = {mag_6("TACU_Magazine_20Rnd_SLR"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_3("1Rnd_40mm_HE_lxWS"), mag_2("1Rnd_58mm_AT_lxWS")};
};
class O_A_medic_lxWS: O_medic_F {
    magazines[] = {mag_6("TACU_Magazine_35Rnd_R4"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_35Rnd_R4"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell")};
};
class O_A_crew_lxWS: O_crew_F {
    magazines[] = {mag_4("TACU_Magazine_35Rnd_R4"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_35Rnd_R4"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_Soldier_AR_lxWS: O_Soldier_AR_F {
    magazines[] = {mag_4("TACU_Magazine_150Rnd_Negev"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_150Rnd_Negev"), mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_A_Soldier_LAT_lxWS: O_Soldier_LAT_F {
    magazines[] = {mag_6("TACU_Magazine_35Rnd_R4"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), "RPG32_F"};
    respawnMagazines[] = {mag_6("TACU_Magazine_35Rnd_R4"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("SmokeShell"), "RPG32_F"};
};
class O_A_HeavyGunner_lxWS: O_A_Soldier_AR_lxWS {
    magazines[] = {mag_5("TACU_Magazine_100Rnd_762_SA77"),  mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("TACU_Magazine_100Rnd_762_SA77"),  mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_ALC_Soldier_lxWS: O_A_Soldier_lxWS {
    magazines[] = {mag_8("TACU_Magazine_35Rnd_R4"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_35Rnd_R4"), mag_2("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_ALC_Soldier_AR_lxWS: O_A_Soldier_AR_lxWS {
    magazines[] = {mag_4("TACU_Magazine_100Rnd_762_SA77"),  mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_100Rnd_762_SA77"),  mag_3("TACU_Magazine_17Rnd_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_ALC_Soldier_GL_lxWS: O_A_Soldier_GL_lxWS {
    magazines[] = {mag_3("TACU_Magazine_17Rnd_Walther"), mag_10("1Rnd_HE_Grenade_shell"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
    respawnMagazines[] = {mag_3("TACU_Magazine_17Rnd_Walther"), mag_10("1Rnd_HE_Grenade_shell"), mag_2("HandGrenade"), mag_2("MiniGrenade")};
};
class O_ALC_V_Soldier_TL_hex_lxWS: O_V_Soldier_TL_hex_F {};
class O_ALC_V_Soldier_hex_lxWS: O_V_Soldier_hex_F {};
class O_ALC_V_Soldier_M_hex_lxWS: O_V_Soldier_M_hex_F {};
class O_ALC_V_Soldier_Medic_hex_lxWS: O_V_Soldier_Medic_hex_F {};
class O_ALC_V_Soldier_LAT_hex_lxWS: O_V_Soldier_LAT_hex_F {
    magazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther", "Vorona_HEAT"};
    respawnMagazines[] = {"TACU_Magazine_30Rnd_Katiba", "10Rnd_50BW_Mag_F", "TACU_Magazine_17Rnd_Walther", "Vorona_HEAT"};
};
