// ToDo: Fix Textures, broke for some reason.
class TACU_BAF_Helmet_EnhancedCombatHelmet_Arid: H_HelmetSpecB {
    scope = 1;
    author = "GilleeDoo, Mike";
    displayName = "Enhanced Combat Helmet (Arid)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\equip1_baf_arid_co.paa)};
};
class TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic: TACU_BAF_Helmet_EnhancedCombatHelmet_Arid {
    displayName = "Enhanced Combat Helmet (Tropic)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\equip1_baf_tropic_co.paa)};
};
class TACU_BAF_Helmet_EnhancedCombatHelmet_Urban: TACU_BAF_Helmet_EnhancedCombatHelmet_Arid {
    displayName = "Enhanced Combat Helmet (Urban)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\equip1_baf_urban_co.paa)};
};
