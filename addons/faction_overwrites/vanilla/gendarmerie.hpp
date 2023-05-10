// Units - Gendarmerie
class O_GEN_crew_lxWS: O_crew_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), "HandGrenade", "SmokeShell"};
};

class B_GEN_Soldier_base_F: B_Soldier_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), "HandGrenade", "SmokeShell"};
};
class B_GEN_Soldier_F: B_GEN_Soldier_base_F {};
class B_GEN_Commander_F: B_GEN_Soldier_base_F {
    magazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_9x19"), mag_3("tacgt_AI_17Rnd_9x19_Walther"), "HandGrenade", "SmokeShell"};
};
