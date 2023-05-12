// Combat Divers - Part of CSAT Faction
class O_MU_CDT_diver_base_F: O_Soldier_diver_base_F {
    magazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
};
class O_MU_CDT_diver_TL_F: O_MU_CDT_diver_base_F {};
class O_MU_CDT_diver_F: O_MU_CDT_diver_base_F {};
class O_MU_CDT_diver_medic_F: O_MU_CDT_diver_base_F {};
class O_MU_CDT_diver_exp_F: O_MU_CDT_diver_base_F {
    magazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("tacgt_AI_30Rnd_65x39_Katiba"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
};
class O_MU_CDT_diver_AR_F: O_MU_CDT_diver_base_F {
    magazines[] = {mag_2("150Rnd_762x54_Box"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_2("150Rnd_762x54_Box"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), mag_2("SmokeShell")};
};
class O_MU_CDT_diver_M_F: O_MU_CDT_diver_base_F {
    magazines[] = {mag_6("10Rnd_762x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"),  mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("10Rnd_762x54_Mag"), mag_3("tacgt_AI_17Rnd_9x19_Walther"),  mag_2("SmokeShell")};
};
class O_MU_CDT_diver_A_F: O_MU_CDT_diver_base_F {};
class O_MU_DD_diver_medic_F: O_diver_F {};
