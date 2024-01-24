// Ground Items
class TACU_UN_Uniform_Combat_Fatigues_Autumn: Uniform_Base {
    author = "Mike";
    scope = 2;
    scopeCurator = 2;
    displayName = "Combat Fatigues (UN, Autumn)";
    //picture = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_UN_Unit_Autumn";
        containerClass = "Supply40";
        mass = 40;
    };
};
class TACU_UN_Uniform_Combat_Fatigues_Urban: TACU_UN_Uniform_Combat_Fatigues_Autumn {
    displayName = "Combat Fatigues (UN, Urban)";
    //picture = "";
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_UN_Unit_Urban";
    };
};
class TACU_UN_Uniform_Combat_Fatigues_Woodland: TACU_UN_Uniform_Combat_Fatigues_Autumn {
    displayName = "Combat Fatigues (UN, Woodland)";
    //picture = "";
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_UN_Unit_Woodland";
    };
};
