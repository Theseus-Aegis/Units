class CfgWeapons {
    /*
     * Adds missing magwells to weapons that lack them.
     * Alters RPG firemodes.
    */

    // Magwells
    class Pistol_Base_F;
    class hgun_Pistol_01_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x18_PM"};
    };

    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        magazineWell[] += {"CBA_9x19_ScorpionEvo3"};
    };

    class Pistol_Base_F;
    class hgun_P07_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_Walther"};
    };

    class hgun_Pistol_heavy_01_F: Pistol_Base_F {
        magazineWell[] += {"CBA_45ACP_FNX45"};
    };

    class hgun_Rook40_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_Walther"};
    };

    class Rifle_Long_Base_F;
    class DMR_07_base_F: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_65x39_QBU"};
    };

    class Rifle_Base_F;
    class arifle_MSBS65_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };

    class arifle_SPAR_01_base_F;
    class arifle_XMS_Base_lxWS: arifle_SPAR_01_base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };

    class arifle_Galat_base_lxWS;
    class arifle_Galat_lxWS: arifle_Galat_base_lxWS {
        magazineWell[] += {"CBA_762x39_AK"};
    };

    // RPG firemodes
    class Mode_SemiAuto;
    class Launcher_Base_F;
    class launch_RPG7_F: Launcher_Base_F {
        class Single: Mode_SemiAuto {
            minRange = 50;
            minRangeProbab = 0.50;
            midRange = 500;
            midRangeProbab = 0.40;
            maxRange = 800;
            maxRangeProbab = 0.30;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
        };
    };
};
