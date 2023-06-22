// Ground items
class TACU_Police_Item_Uniform_Combat_Black: Item_Base_F {
    author = "Kresky";
    displayName = "Police Combat Uniform (Black)";
    scope = 2;
    scopeCurator = 2;
    vehicleClass = "ItemsUniforms";
    class TransportItems {
        MACRO_ADDITEM(TACU_Police_Uniform_Combat_Black,1);
    };
};

class TACU_Police_Item_Uniform_Combat_Blue: TACU_Police_Item_Uniform_Combat_Black {
    displayName = "Police Combat Uniform (Blue)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Police_Uniform_Combat_Blue,1);
    };
};

class TACU_Police_Item_Uniform_Combat_Brown: TACU_Police_Item_Uniform_Combat_Blue {
    displayName = "Police Combat Uniform (Brown)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Police_Uniform_Combat_Brown,1);
    };
};

class TACU_Police_Item_Uniform_Combat_Green: TACU_Police_Item_Uniform_Combat_Brown {
    displayName = "Police Combat Uniform (Green)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Police_Uniform_Combat_Green,1);
    };
};

// Uniforms
class TACU_Police_Unit_Combat_Black: I_G_Soldier_LAT_F {
    author = "Kresky";
    scope = 1;
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_black_co.paa)};
    modelSides[] = {6};
};

class TACU_Police_Unit_Combat_Blue: TACU_Police_Unit_Combat_Black {
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_blue_co.paa)};
};

class TACU_Police_Unit_Combat_Brown: TACU_Police_Unit_Combat_Black {
    uniformClass = "TACU_Police_Uniform_Combat_Brown";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_brown_co.paa)};
};

class TACU_Police_Unit_Combat_Green: TACU_Police_Unit_Combat_Black {
    uniformClass = "TACU_Police_Uniform_Combat_Green";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_green_co.paa)};
};
