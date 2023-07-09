class TACU_African_South_Uniform_Combat_Fatigues: Uniform_Base {
    author = "Mike";
    scope = 1;
    scopeCurator = 1;
    displayName = "Combat Fatigues (South Africa)";
    picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_South_Africa_Unit_Combat_Fatigues";
        containerClass = "Supply40";
        mass = 40;
    };
};
class TACU_African_South_Uniform_Combat_Fatigues_Rolled: TACU_African_South_Uniform_Combat_Fatigues {
    displayName = "Combat Fatigues Rolled (South Africa)";
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_South_Africa_Unit_Combat_Fatigues_Rolled";
    };
};
