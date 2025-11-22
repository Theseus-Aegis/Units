class CfgFactionClasses {
    class TACU_Police_B {
        displayName = "[TACU] Law Enforcement";
        side = 1;
        priority = 2;
    };

    class TACU_Police_O: TACU_Police_B {
        side = 0;
    };

    class TACU_Police_I: TACU_Police_O {
        side = 2;
    };
};

class CfgEditorSubcategories {
    class TACU_Police_EdSubCat_B_CT {
        displayName = "Men (Counter-Terrorists)";
    };

    class TACU_Police_EdSubCat_B_Enforcer {
        displayName = "Men (Enforcers)";
    };

    class TACU_Police_EdSubCat_O_CT: TACU_Police_EdSubCat_B_CT {};

    class TACU_Police_EdSubCat_O_Enforcer: TACU_Police_EdSubCat_B_Enforcer {};

    class TACU_Police_EdSubCat_I_CT: TACU_Police_EdSubCat_B_CT {};

    class TACU_Police_EdSubCat_I_Enforcer: TACU_Police_EdSubCat_B_Enforcer {};
};
