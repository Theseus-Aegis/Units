class CfgWeapons {
    /*
     * Here only to add Magwells to guns missing them.
    */

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
};
