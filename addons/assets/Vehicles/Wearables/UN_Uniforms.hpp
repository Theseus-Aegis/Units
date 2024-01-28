// Ground Items (UN)
class TACU_Assets_Item_Uniform_UN_Autumn: Item_Base_F {
    dlc = QUOTE(PREFIX);
    author = "Mike";
    scope = 1;
    scopeCurator = 1;
    vehicleClass = "ItemsUniforms";
    displayName = "UN Uniform (Autumn)";
    class TransportItems {
        MACRO_ADDITEM(TACU_UN_Uniform_Combat_Fatigues_Autumn,1);
    };
};
class TACU_Assets_Item_Uniform_UN_Urban: TACU_Assets_Item_Uniform_UN_Autumn {
    displayName = "UN Uniform (Urban)";
    class TransportItems {
        MACRO_ADDITEM(TACU_UN_Uniform_Combat_Fatigues_Urban,1);
    };
};
class TACU_Assets_Item_Uniform_UN_Woodland: TACU_Assets_Item_Uniform_UN_Autumn {
    displayName = "UN Uniform (Woodland)";
    class TransportItems {
        MACRO_ADDITEM(TACU_UN_Uniform_Combat_Fatigues_Woodland,1);
    };
};

// Uniforms (UN)
class TACU_UN_Unit_Autumn: B_UN_crew_lxWS {
    author = "Mike";
    scope = 1;
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Autumn";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\un_soldier_camo_autumn_co.paa),
        "\lxws\data_f_lxws\img\insignia\un_ca.paa"
    };
    modelSides[] = {6};
};
class TACU_UN_Unit_Urban: TACU_UN_Unit_Autumn {
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\un_soldier_camo_urban_co.paa),
        "\lxws\data_f_lxws\img\insignia\un_ca.paa"
    };
};
class TACU_UN_Unit_Woodland: TACU_UN_Unit_Autumn {
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\un_soldier_camo_woodland_co.paa),
        "\lxws\data_f_lxws\img\insignia\un_ca.paa"
    };
};

// Ground Items (Tiger Stripe), same as UN but without the Insignia.
class TACU_Assets_Item_Uniform_TigerStripe_Autumn: TACU_Assets_Item_Uniform_UN_Autumn {
    displayName = "Combat Fatigues, Tiger Stripe (Autumn)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn,1);
    };
};
class TACU_Assets_Item_Uniform_TigerStripe_Urban: TACU_Assets_Item_Uniform_UN_Autumn {
    displayName = "Combat Fatigues, Tiger Stripe (Urban)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Uniform_Combat_Fatigues_TigerStripe_Urban,1);
    };
};
class TACU_Assets_Item_Uniform_TigerStripe_Woodland: TACU_Assets_Item_Uniform_UN_Autumn {
    displayName = "Combat Fatigues, Tiger Stripe (Woodland)";
    class TransportItems {
        MACRO_ADDITEM(TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland,1);
    };
};

// Uniforms (Tiger Stripe)
class TACU_Unit_TigerStripe_Autumn: TACU_UN_Unit_Autumn {
    uniformClass = "TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\un_soldier_camo_autumn_co.paa),
        ""
    };
};
class TACU_Unit_TigerStripe_Urban: TACU_Unit_TigerStripe_Autumn {
    uniformClass = "TACU_Uniform_Combat_Fatigues_TigerStripe_Urban";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\un_soldier_camo_urban_co.paa),
        ""
    };
};
class TACU_Unit_TigerStripe_Woodland: TACU_Unit_TigerStripe_Autumn {
    uniformClass = "TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\un_soldier_camo_woodland_co.paa),
        ""
    };
};
