class CfgFactionClasses {
    // Deprecate these later.
    class TACU_SevenRings_I_Western {
        displayName = "Seven Rings (West)";
        side = 2;
        priority = 2;
    };

    class TACU_SevenRings_I_Eastern {
        displayName = "Seven Rings (East)";
        side = 2;
        priority = 2;
    };

    class TACU_SevenRings_O_Western: TACU_SevenRings_I_Western {
        side = 0;
    };

    class TACU_SevenRings_O_Eastern: TACU_SevenRings_I_Eastern {
        side = 0;
    };
    // New classes - Eastern is Opfor, Western is Independent
    class TACU_Seven_Rings_Eastern {
        displayName = "Seven Rings (East)";
        side = 0;
        priority = 2;
    };
    class TACU_Seven_Rings_Western: TACU_Seven_Rings_Eastern {
        displayName = "Seven Rings (West)";
        side = 2;
    };
};

// Deprecate these later too.
class CfgEditorSubcategories {
    class TACU_SevenRings_EdSubCat_Eastern {
        displayName = "Men";
    };

    class TACU_SevenRings_EdSubCat_Western: TACU_SevenRings_EdSubCat_Eastern {};
};
