class CfgFactionClasses {
    class TACU_SevenRings_I_Western {
        //displayName = "Seven Rings (West)";
        displayName = "DEPRECATED";
        side = 2;
        priority = 2;
    };

    class TACU_SevenRings_I_Eastern {
        //displayName = "Seven Rings (East)";
        displayName = "DEPRECATED";
        side = 2;
        priority = 2;
    };

    class TACU_SevenRings_O_Western: TACU_SevenRings_I_Western {
        side = 0;
    };

    class TACU_SevenRings_O_Eastern: TACU_SevenRings_I_Eastern {
        side = 0;
    };
};

class CfgEditorSubcategories {
    class TACU_SevenRings_EdSubCat_Eastern {
        displayName = "Men";
    };

    class TACU_SevenRings_EdSubCat_Western: TACU_SevenRings_EdSubCat_Eastern {};
};
