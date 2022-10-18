class CfgFactionClasses {
    class TACU_Takistan_TNA {
        displayName = "Takistan National Army";
        side = 2;
        priority = 4;
    };

    class TACU_Takistan_TNP: TACU_Takistan_TNA {
        displayName = "Takistan National Police";
    };

    class TACU_Takistan_Tehrik: TACU_Takistan_TNP {
        displayName = "Tehrik-I-Taliban Takistan";
        side = 0;
    };
};

class CfgEditorSubcategories {
    class TACU_Takistan_EdSubCat_TakistanSF {
        displayName = "Men (Takistani SF)";
    };
    class TACU_Takistan_EdSubCat_Regular {
        displayName = "Men (Regular)";
    };
    class TACU_Takistan_EdSubCat_Commandos {
        displayName = "Men (Commandos)";
    };
    class TACU_Takistan_EdSubCat_Veteran {
        displayName = "Men (Veterans)";
    };
    class TACU_Takistan_EdSubCat_Enlisted {
        displayName = "Men (Enlisted)";
    };
};
