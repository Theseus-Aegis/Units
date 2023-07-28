class TACU_Proxy_China_Item_Uniform_Combat_Fatigues: Item_Base_F {
    author = "Mike";
    displayName = "Combat Fatigues (Eastern Asia)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Proxy_China_Uniform_Combat_Fatigues,1);
    };
};

class TACU_Proxy_China_Unit_Combat_Fatigues: O_A_Soldier_lxWS {
    scope = 1;
    uniformClass = "TACU_Proxy_China_Uniform_Combat_Fatigues";
    hiddenSelectionsTextures[] = {
        "lxWS\characters_1_f_lxws\uniform\data\lxws_gloves_brown_co.paa",
        QPATHTOF(data\uniforms\proxy_china_combatfatigues_noinsignia_hex_co.paa),
        QPATHTOF(data\uniforms\proxy_china_clothing_co.paa),
        "" // Insignia
    };
    modelSides[] = {6};
};
