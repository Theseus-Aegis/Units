// Heli Pilot coveralls
class TACU_Proxy_Russia_Item_Uniform_Coveralls: Item_Base_F {
    author = "Mike";
    displayName = "Heli Pilot Coveralls (EE)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Coveralls,1);
    };
};

class TACU_Proxy_Russia_Unit_Coveralls: I_E_Uniform_01_coveralls_F {
    author = "GilleeDoo";
    scope = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Coveralls";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\proxy_russia_coveralls_01_co.paa),
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa),
        "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
    };
    modelSides[] = {6};
};

// Combat Fatigues
class TACU_Proxy_Russia_Item_Uniform_Combat_Fatigues: Item_Base_F {
    author = "Mike";
    displayName = "Combat Fatigues (EE)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Combat_Fatigues,1);
    };
};

class TACU_Proxy_Russia_Unit_Combat_Fatigues: I_E_Uniform_01_F {
    scope = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa),
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa),
        "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"
    };
    modelSides[] = {6};
};

// Combat Fatigues - Officer
class TACU_Proxy_Russia_Item_Uniform_Combat_Fatigues_Officer: Item_Base_F {
    author = "Mike";
    displayName = "Combat Fatigues (Officer, EE)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer,1);
    };
};

class TACU_Proxy_Russia_Unit_Combat_Fatigues_Officer: I_E_Uniform_01_officer_F {
    scope = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\proxy_russia_officer_01_co.paa),
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa),
    };
    modelSides[] = {6};
};

// Combat Fatigues - Rolled
class TACU_Proxy_Russia_Item_Uniform_Combat_Fatigues_Rolled: Item_Base_F {
    author = "Mike";
    displayName = "Combat Fatigues Rolled (EE)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled,1);
    };
};

class TACU_Proxy_Russia_Unit_Combat_Fatigues_Rolled: I_E_Uniform_01_shortsleeve_F {
    scope = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa),
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa)
    };
    modelSides[] = {6};
};

// Deserter Fatigues
class TACU_Proxy_Russia_Item_Uniform_Deserter_Fatigues: Item_Base_F {
    author = "Mike";
    displayName = "Deserter Fatigues (EE)";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Deserter,1);
    };
};

class TACU_Proxy_Russia_Unit_Deserter_Fatigues: I_L_Uniform_01_camo_F {
    scope = 1;
    uniformClass = "TACU_Proxy_Russia_Uniform_Deserter";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa),
        QPATHTOF(data\uniforms\proxy_russia_uniform_01_camo_co.paa),
        "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"
    };
    modelSides[] = {6};
};
