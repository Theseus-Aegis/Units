// Group 12 (Sahara Desert) - Essentially copies of the WS CTRG Units with minor updates
#define MACRO_GROUP_12_DEFAULT \
    faction = "TACU_BAF_B"; \
    editorSubcategory = "TACU_BAF_EdSubCat_B_Group_12"; \
    scope = 2; \
    scopeCurator = 2

class TACU_BAF_U_B_Desert_Scout: B_D_CTRG_Soldier_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_8("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_Demolitions: B_D_CTRG_Soldier_Exp_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_10("1Rnd_HE_Grenade_shell"), mag_4("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_10("1Rnd_HE_Grenade_shell"), mag_4("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_HeavyGunner: B_D_CTRG_Soldier_HG_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_4("100Rnd_762x51_S77_Red_lxWS"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("100Rnd_762x51_S77_Red_lxWS"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_JTAC: B_D_CTRG_Soldier_JTAC_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_8("tacgt_AI_35Rnd_556x45_R4"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_35Rnd_556x45_R4"), mag_4("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_Marksman: B_D_CTRG_Soldier_M_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_Medic: B_D_CTRG_Soldier_Medic_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_LAT: B_D_CTRG_Soldier_LAT2_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "MRAWS_HEAT_F"};
    respawnMagazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell"), "MRAWS_HEAT_F"};
};
class TACU_BAF_U_B_Desert_Shotgun: B_D_CTRG_Soldier_SG_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_6("20Rnd_12Gauge_AA40_Pellets_Snake_lxWS"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("20Rnd_12Gauge_AA40_Pellets_Snake_lxWS"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_BAF_U_B_Desert_TL: B_D_CTRG_Soldier_TL_lxWS {
    MACRO_GROUP_12_DEFAULT;
    magazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("tacgt_AI_17Rnd_9x19_Walther"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    linkedItems[] = {"V_PlateCarrierH_CTRG", "lxWS_H_turban_03_sand", "G_Combat_lxWS", DEFAULT_ITEMS_RADIO, "B_UavTerminal"};
    respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "lxWS_H_turban_03_sand", "G_Combat_lxWS", DEFAULT_ITEMS_RADIO, "B_UavTerminal"};
};
