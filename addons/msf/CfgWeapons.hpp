class CfgWeapons {
    // Uniforms
    class Uniform_Base;
    class UniformItem;

    class TACU_MSF_Uniform_Combat_TigerBlack: Uniform_Base {
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Black)";
        //picture = QPATHTOF(ui\MSF_Uniform_Combat_TigerBlack.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerBlack";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerDesert: Uniform_Base {
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Desert)";
        //picture = QPATHTOF(ui\MSF_Uniform_Combat_TigerDesert.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "MSF_Unit_Combat_TigerDesert";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerWood: Uniform_Base {
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Wood)";
        //picture = QPATHTOF(ui\MSF_Uniform_Combat_TigerWood.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerWood";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Weapons
    class hlc_rifle_ACR_carb_black;
    class hlc_rifle_ACR_GL_Carb_black;
    class srifle_DMR_03_F;

    class TACU_MSF_W_ACR_Carb_Black: hlc_rifle_ACR_carb_black {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
		};
    };

    class TACU_MSF_W_ACR_GL_Carb_Black: hlc_rifle_ACR_GL_Carb_black {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
		};
    };

    class TACU_MSF_W_SIG556_DMR: srifle_DMR_03_F {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_BIPOD(bipod_01_f_blk);
		};
    };
};
