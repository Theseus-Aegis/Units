// Units - Spetznaz
class O_R_Soldier_TL_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};
class O_R_Soldier_GL_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};
class O_R_soldier_exp_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_R_Soldier_AR_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_75Rnd_762x39_Drum"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_75Rnd_762x39_Drum"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_R_soldier_M_F: O_R_Soldier_Base_F {
    magazines[] = {mag_10("10Rnd_127x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("10Rnd_127x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_R_medic_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_4("SmokeShell")};
};
class O_R_Soldier_LAT_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell"), "RPG32_F"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell"), "RPG32_F"};
};
class O_R_JTAC_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class O_R_Soldier_recon_base: O_R_Soldier_Base_F {};

class O_R_recon_TL_F: O_R_Soldier_recon_base {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_6("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), mag_2("SmokeShell")};
};
class O_R_recon_exp_F: O_R_Soldier_recon_base {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_3("APERSMine_Range_Mag"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_recon_AR_F: O_R_Soldier_recon_base {
    magazines[] = {mag_5("tacgt_AI_75Rnd_762x39_Drum"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_75Rnd_762x39_Drum"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_recon_M_F: O_R_Soldier_recon_base {
    magazines[] = {mag_9("10Rnd_127x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_9("10Rnd_127x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_recon_medic_F: O_R_Soldier_recon_base {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_recon_GL_F: O_R_Soldier_recon_base {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), mag_2("HandGrenade"), mag_5("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), mag_2("HandGrenade"), mag_5("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};
class O_R_recon_LAT_F: O_R_Soldier_recon_base {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), "RPG32_F"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), "RPG32_F"};
};
class O_R_recon_JTAC_F: O_R_Soldier_recon_base {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), "Laserbatteries"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), "Laserbatteries"};
};
class O_R_Patrol_Soldier_TL_F: O_R_Soldier_TL_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_7("1Rnd_HE_Grenade_shell"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_7("1Rnd_HE_Grenade_shell"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_AR_F: O_R_Soldier_AR_F {
    magazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_AR2_F: O_R_Soldier_AR_F {
    magazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_GL_F: O_R_Soldier_GL_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_7("1Rnd_HE_Grenade_shell"), mag_3("1Rnd_Smoke_Grenade_shell"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_7("1Rnd_HE_Grenade_shell"), mag_3("1Rnd_Smoke_Grenade_shell"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_A_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_M_F: O_R_soldier_M_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_M2_F: O_R_soldier_M_F {
    magazines[] = {mag_7("10Rnd_127x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("10Rnd_127x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_Medic: O_R_medic_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};
class O_R_Patrol_Soldier_Engineer_F: O_R_Soldier_Base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), "LaserBatteries"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), mag_2("SmokeShell"), "LaserBatteries"};
};
class O_R_Patrol_Soldier_LAT_F: O_R_Soldier_LAT_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), "SmokeShell", "RPG32_F"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("MiniGrenade"), "SmokeShell", "RPG32_F"};
};
