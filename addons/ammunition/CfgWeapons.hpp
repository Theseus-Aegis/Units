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

    // CUP
    class CUP_hgun_CZ75: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_CZ75_Full"};
    };

    class CUP_hgun_M17_Coyote: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_M17"};
    };

    class CUP_hgun_Mk23: Pistol_Base_F {
        magazineWell[] += {"CBA_45ACP_MK23"};
    };
    class CUP_Mac10_Base: Rifle_Base_F {
        magazineWell[] += {"TACU_45ACP_Mac10"};
    };

    class CUP_hgun_Mac10_Base: Pistol_Base_F {
        magazineWell[] += {"TACU_45ACP_Mac10"};
    };

    class CUP_hgun_TEC9: Pistol_Base_F {
        magazineWell[] += {"TACU_9x19_TEC9"};
    };

    class CUP_arifle_AK19_Base: Rifle_Base_F {
        magazineWell[] += {"TACU_556x45_AK19"};
    };

    class CUP_CZ_BREN2_Base;
    class CUP_CZ_BREN2_762_Base: CUP_CZ_BREN2_Base {
        magazineWell[] = {"TACU_762x39_CZ", "tacgt_762x39_CZ"};
    };

    class CUP_Famas_Base: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };

    class arifle_TRG20_F;
    class CUP_arifle_Fort221: arifle_TRG20_F {
        magazineWell[] += {"CBA_545x39_Fort"};
    };

    class arifle_TRG21_F;
    class CUP_arifle_Fort222: arifle_TRG21_F {
        magazineWell[] += {"CBA_545x39_Fort"};
    };

    class CUP_arifle_X95;
    class CUP_arifle_Fort224: CUP_arifle_X95 {
        magazineWell[] += {"CBA_545x39_Fort"};
    };

    class CUP_arifle_X95_Grippod;
    class CUP_arifle_Fort224_Grippod: CUP_arifle_X95_Grippod {
        magazineWell[] += {"CBA_545x39_Fort"};
    };

    // RPG firemodes
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
    class CUP_launch_RPG7V: Launcher_Base_F {
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
