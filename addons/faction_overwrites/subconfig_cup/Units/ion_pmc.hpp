// Units - ION PMC
class CUP_I_PMC_Soldier_Base: CUP_I_PMC_Soldier_01 {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_556_G36"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_556_G36"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Soldier: CUP_I_PMC_Soldier_05 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Soldier_M4A3: CUP_I_PMC_Soldier_43 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Engineer: CUP_I_PMC_Soldier_01 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Crew: CUP_I_PMC_Soldier_19 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("HandGrenade"), mag_2("TACU_Magazine_17Rnd_Glock")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("HandGrenade"), mag_2("TACU_Magazine_17Rnd_Glock")};
};
class CUP_I_PMC_Medic: CUP_I_PMC_Soldier_38 {
    magazines[] = {mag_8("TACU_Magazine_30Rnd_556_G36"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_30Rnd_556_G36"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Soldier_TL: CUP_I_PMC_Soldier_36 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("HandGrenade"), mag_2("TACU_Magazine_17Rnd_Glock")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("HandGrenade"), mag_2("TACU_Magazine_17Rnd_Glock")};
};
class CUP_I_PMC_Pilot: CUP_I_PMC_Soldier_19 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("SmokeShell"), mag_2("TACU_Magazine_17Rnd_Glock")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("SmokeShell"), mag_2("TACU_Magazine_17Rnd_Glock")};
};
class CUP_I_PMC_Soldier_MG: CUP_I_PMC_Soldier_41 {
    magazines[] = {"TACU_Magazine_100Rnd_556_G36_BetaC", mag_2("HandGrenade")};
    respawnMagazines[] = {"TACU_Magazine_100Rnd_556_G36_BetaC", mag_2("HandGrenade")};
};
class CUP_I_PMC_Soldier_MG_PKM: CUP_I_PMC_Soldier_MG {
    magazines[] = {"TACU_Magazine_150Rnd_Negev", mag_2("HandGrenade")};
    respawnMagazines[] = {"TACU_Magazine_150Rnd_Negev", mag_2("HandGrenade")};
};
class CUP_I_PMC_Sniper: CUP_I_PMC_Soldier_42 {
    magazines[] = {mag_8("TACU_Magazine_20Rnd_M1A"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("TACU_Magazine_20Rnd_M1A"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Sniper_KSVK: CUP_I_PMC_Sniper {
    magazines[] = {mag_2("CUP_10Rnd_127x99_m107"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_2("CUP_10Rnd_127x99_m107"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Soldier_GL: CUP_I_PMC_Soldier_40 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell"), "1Rnd_HE_Grenade_shell"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell"), "1Rnd_HE_Grenade_shell"};
};
class CUP_I_PMC_Bodyguard_M4: CUP_I_PMC_Soldier_19 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Bodyguard_AA12: CUP_I_PMC_Bodyguard_M4 {
    magazines[] = {mag_6("CUP_20Rnd_B_AA12_Pellets"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("CUP_20Rnd_B_AA12_Pellets"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Soldier_AA: CUP_I_PMC_Soldier_01 {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), "CUP_Stinger_M"};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), "CUP_Stinger_M"};
};
class CUP_I_PMC_Soldier_AT: CUP_I_PMC_Soldier_40 {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), "CUP_RPG18_M"};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), "CUP_RPG18_M"};
};
class CUP_I_PMC_Contractor1: CUP_I_PMC_Soldier_36 {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Contractor2: CUP_I_PMC_Soldier_40 {
    magazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_STANAG"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Soldier_GL_M16A2: CUP_I_PMC_Soldier_43 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell"), "1Rnd_HE_Grenade_shell"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_STANAG"), mag_2("HandGrenade"), mag_2("SmokeShell"), "1Rnd_HE_Grenade_shell"};
};
class CUP_I_PMC_Winter_Soldier: CUP_I_PMC_Soldier_18 {
    magazines[] = {mag_7("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Soldier_M4A3: CUP_I_PMC_Soldier_18 {
    magazines[] = {mag_7("TACU_Magazine_30Rnd_STANAG"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_STANAG"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Engineer: CUP_I_PMC_Soldier_27 {
    magazines[] = {mag_7("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Crew: CUP_I_PMC_Soldier_28 {
    magazines[] = {mag_7("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Medic: CUP_I_PMC_Soldier_27 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Soldier_TL: CUP_I_PMC_Soldier_26 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Pilot: CUP_I_PMC_Soldier_28 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Soldier_MG: CUP_I_PMC_Soldier_26 {
    magazines[] = {"TACU_Magazine_100Rnd_556_G36_BetaC", mag_2("HandGrenade")};
    respawnMagazines[] = {"TACU_Magazine_100Rnd_556_G36_BetaC", mag_2("HandGrenade")};
};
class CUP_I_PMC_Winter_Soldier_MG_PKM: CUP_I_PMC_Winter_Soldier_MG {
    magazines[] = {"TACU_Magazine_150Rnd_Negev", mag_2("HandGrenade")};
    respawnMagazines[] = {"TACU_Magazine_150Rnd_Negev", mag_2("HandGrenade")};
};
class CUP_I_PMC_Winter_Sniper: CUP_I_PMC_Soldier_27 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Sniper_KSVK: CUP_I_PMC_Winter_Sniper {
    magazines[] = {mag_2("CUP_5Rnd_127x108_KSVK_M"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_2("CUP_5Rnd_127x108_KSVK_M"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class CUP_I_PMC_Winter_Soldier_GL: CUP_I_PMC_Soldier_26 {
    magazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell"), "1Rnd_HE_Grenade_shell"};
    respawnMagazines[] = {mag_6("TACU_Magazine_30Rnd_556_G36"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), mag_2("SmokeShell"), "1Rnd_HE_Grenade_shell"};
};
class CUP_I_PMC_Winter_Soldier_AA: CUP_I_PMC_Soldier_27 {
    magazines[] = {mag_4("TACU_Magazine_20Rnd_762_FAL"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), "CUP_Stinger_M"};
    respawnMagazines[] = {mag_4("TACU_Magazine_20Rnd_762_FAL"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), "CUP_Stinger_M"};
};
class CUP_I_PMC_Winter_Soldier_AT: CUP_I_PMC_Soldier_27 {
    magazines[] = {mag_4("TACU_Magazine_20Rnd_762_FAL"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), "CUP_RPG18_M"};
    respawnMagazines[] = {mag_4("TACU_Magazine_20Rnd_762_FAL"), mag_2("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade"), "CUP_RPG18_M"};
};

