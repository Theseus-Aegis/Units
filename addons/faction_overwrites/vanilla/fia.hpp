// Units - FIA (Blufor/Opfor inherit from here)
class I_G_Soldier_base_F: SoldierGB {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class I_G_Soldier_F: I_G_Soldier_base_F {};

class I_G_Soldier_lite_F: I_G_Soldier_base_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};

class I_G_Soldier_SL_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_4("SmokeShell")};
};

class I_G_Soldier_TL_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), mag_2("HandGrenade"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};

class I_G_Soldier_AR_F: I_G_Soldier_base_F {
    magazines[] = {mag_3("tacgt_AI_200Rnd_65x39_Belt"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_3("tacgt_AI_200Rnd_65x39_Belt"), mag_2("MiniGrenade"), mag_2("SmokeShell")};
};

class I_G_medic_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), "MiniGrenade", mag_4("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), "MiniGrenade", mag_4("SmokeShell")};
};

class I_G_engineer_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_4("SmokeShell"), "MiniGrenade"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_4("SmokeShell"), "MiniGrenade"};
};

class I_G_Soldier_exp_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("APERSMine_Range_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_3("APERSMine_Range_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class I_G_Soldier_GL_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("MiniGrenade"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("SmokeShell"), mag_4("1Rnd_Smoke_Grenade_shell")};
};

class I_G_Soldier_M_F: I_G_Soldier_base_F {
    magazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class I_G_Soldier_LAT_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("SmokeShell"), "RPG32_F"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("SmokeShell"), "RPG32_F"};
};

class I_G_Soldier_A_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class I_G_officer_F: I_G_Soldier_base_F {
    magazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("tacgt_AI_8Rnd_45ACP_1911"), mag_4("SmokeShell")};
};

class I_G_Sharpshooter_F: I_G_Soldier_base_F {
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), "HandGrenade", mag_2("SmokeShell")};
};

class I_G_Soldier_LAT2_F: I_G_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("SmokeShell"), "MRAWS_HEAT_F"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_556x45_STANAG"), mag_2("SmokeShell"), "MRAWS_HEAT_F"};
};

