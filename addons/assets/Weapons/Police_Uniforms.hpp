class TACU_Police_Uniform_Combat_Black: Uniform_Base {
    author = "Kresky";
    scope = 2;
    scopeCurator = 2;
    displayName = "Police Combat Uniform (Black)";
    //picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Black.paa);
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_Police_Unit_Combat_Black";
        containerClass = "Supply40";
        mass = 40;
    };
};

class TACU_Police_Uniform_Combat_Blue: TACU_Police_Uniform_Combat_Black {
    displayName = "Police Combat Uniform (Blue)";
    //picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Blue.paa);
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_Police_Unit_Combat_Blue";
    };
};

class TACU_Police_Uniform_Combat_Brown: TACU_Police_Uniform_Combat_Blue {
    displayName = "Police Combat Uniform (Brown)";
    //picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Brown.paa);
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_Police_Unit_Combat_Brown";
    };
};

class TACU_Police_Uniform_Combat_Green: TACU_Police_Uniform_Combat_Brown {
    displayName = "Police Combat Uniform (Green)";
    //picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Green.paa);
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_Police_Unit_Combat_Green";
    };
};
