class CfgMagazines {
    /*
     * Vanilla Content Magazines, all DLCs, Western Sahara & CUP
     * SMG Magazines use the same macro as Handguns.
     * Marksman Rifles will use same macro as Assault Rifles.
     * MG box magazines will also have caliber in the classname.
    */

    // Handgun Magazines
    class 9Rnd_45ACP_Mag;
    class TACU_Magazine_8Rnd_1911: 9Rnd_45ACP_Mag {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic 8Rnd 1911 Magazine";
    };

    class 11Rnd_45ACP_Mag;
    class TACU_Magazine_11Rnd_FNX: 11Rnd_45ACP_Mag {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic 11Rnd FNX Magazine";
    };

    class 6Rnd_45ACP_Cylinder;
    class TACU_Magazine_Cylinder: 6Rnd_45ACP_Cylinder {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic .45 Cylinder";
    };

    class 16Rnd_9x21_Mag;
    class TACU_Magazine_17Rnd_Walther: 16Rnd_9x21_Mag {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 17Rnd Walther Magazine";
    };

    class 10Rnd_9x21_Mag;
    class TACU_Magazine_10Rnd_Makarov: 10Rnd_9x21_Mag {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 10Rnd Makarov Magazine";
    };

    // SMG Magazines
    // Vanilla has 2 Variants of this, will match classname in the same method.
    class 30Rnd_9x21_Mag;
    class TACU_Magazine_30Rnd_SMG: 30Rnd_9x21_Mag {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 30Rnd 9mm SMG Magazine";
        mass = 8;
    };

    class 30Rnd_9x21_Mag_SMG_02;
    class TACU_Magazine_30Rnd_SMG_02: 30Rnd_9x21_Mag_SMG_02 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 30Rnd 9mm SMG Magazine";
        mass = 8;
    };

    class 30Rnd_45ACP_Mag_SMG_01;
    class TACU_Magazine_25Rnd_Vector: 30Rnd_45ACP_Mag_SMG_01 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic 25Rnd Vector Magazine";
        mass = 8;
    };

    class 50Rnd_570x28_SMG_03;
    class TACU_Magazine_50Rnd_P90: 50Rnd_570x28_SMG_03 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_58x52";
        displayName = "Generic 50Rnd P90 Magazine";
        mass = 8;
    };

    // Assault Rifles
    class 30Rnd_545x39_Mag_F;
    class TACU_Magazine_30Rnd_545_AK: 30Rnd_545x39_Mag_F {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_545x39";
        displayName = "Generic 30Rnd 5.45 AK Magazine";
        mass = 9;
    };

    class 30Rnd_556x45_Stanag;
    class TACU_Magazine_30Rnd_STANAG: 30Rnd_556x45_Stanag {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 30Rnd STANAG Magazine";
        mass = 9;
    };

    class 35Rnd_556x45_Velko_reload_tracer_red_lxWS;
    class TACU_Magazine_35Rnd_R4: 35Rnd_556x45_Velko_reload_tracer_red_lxWS {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 35Rnd Velko Magazine";
        mass = 10;
    };

    class 30Rnd_580x42_Mag_F;
    class TACU_Magazine_30Rnd_QBZ: 30Rnd_580x42_Mag_F {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_58x52";
        displayName = "Generic 30Rnd QBZ Magazine";
        mass = 9;
    };

    // Katiba
    class 30Rnd_65x39_caseless_green;
    class TACU_Magazine_30Rnd_Katiba: 30Rnd_65x39_caseless_green {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_65x39";
        displayName = "Generic 30Rnd Katiba Magazine";
        mass = 9;
    };

    // MX
    class 30Rnd_65x39_caseless_black_mag;
    class TACU_Magazine_30Rnd_MX: 30Rnd_65x39_caseless_black_mag {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_65x39";
        displayName = "Generic 30Rnd MX Magazine";
        mass = 9;
    };

    // Promet / MSBS
    class 30Rnd_65x39_caseless_msbs_mag;
    class TACU_Magazine_30Rnd_MSBS: 30Rnd_65x39_caseless_msbs_mag {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_65x39";
        displayName = "Generic 30Rnd MSBS Magazine";
        mass = 9;
    };

    class 30Rnd_762x39_Mag_F;
    class TACU_Magazine_30Rnd_762_AK: 30Rnd_762x39_Mag_F {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x39";
        displayName = "Generic 30Rnd 7.62 AK Magazine";
        mass = 10;
    };

    // Battle Rifles / Marksman Rifles
    class 20Rnd_650x39_Cased_Mag_F;
    class TACU_Magazine_20Rnd_QBU: 20Rnd_650x39_Cased_Mag_F {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_65x39";
        displayName = "Generic 20Rnd QBU Magazine";
    };

    // M1A is the generic magazine that fits most 7.62x51 Rifles
    class 10Rnd_Mk14_762x51_Mag;
    class TACU_Magazine_10Rnd_M1A: 10Rnd_Mk14_762x51_Mag {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 10Rnd M1A Magazine";
    };

    class 20Rnd_762x51_Mag;
    class TACU_Magazine_20Rnd_M1A: 20Rnd_762x51_Mag {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 20Rnd M1A Magazine";
        mass = 10;
    };

    class 10Rnd_762x54_Mag;
    class TACU_Magazine_10Rnd_VS121: 10Rnd_762x54_Mag {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x54";
        displayName = "Generic 10Rnd VS-121 Magazine";
    };

    class 20Rnd_762x51_slr_lxWS;
    class TACU_Magazine_20Rnd_SLR: 20Rnd_762x51_slr_lxWS {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 20Rnd SLR Magazine";
        mass = 10;
    };

    // Machine Guns
    class 75Rnd_556x45_Stanag_lxWS;
    class TACU_Magazine_75Rnd_556_Surefire: 75Rnd_556x45_Stanag_lxWS {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 75Rnd 5.56 Surefire Magazine";
        mass = 15;
    };

    class 150Rnd_556x45_Drum_Mag_F;
    class TACU_Magazine_150Rnd_556_Drum: 150Rnd_556x45_Drum_Mag_F {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 150Rnd 5.56 Drum Magazine";
    };

    class 200Rnd_556x45_Box_F;
    class TACU_Magazine_200Rnd_556_Box: 200Rnd_556x45_Box_F {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 200Rnd 5.56 Box";
    };

    class 100Rnd_580x42_Mag_F;
    class TACU_Magazine_100Rnd_QBZ: 100Rnd_580x42_Mag_F {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_58x52";
        displayName = "Generic 100Rnd QBZ Magazine";
    };

    class 100Rnd_65x39_caseless_black_mag;
    class TACU_Magazine_100Rnd_MX: 100Rnd_65x39_caseless_black_mag {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_65x39";
        displayName = "Generic 100Rnd MX Magazine";
    };

    class 200Rnd_65x39_cased_Box;
    class TACU_Magazine_200Rnd_65_Box: 200Rnd_65x39_cased_Box {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_65x39";
        displayName = "Generic 200Rnd 6.5 Box";
    };

    class 75rnd_762x39_AK12_Mag_F;
    class TACU_Magazine_75Rnd_762_AK: 75rnd_762x39_AK12_Mag_F {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_762x39";
        displayName = "Generic 75Rnd AK Drum Magazine";
        mass = 25;
    };

    class 150Rnd_762x51_Box;
    class TACU_Magazine_150Rnd_762_Box: 150Rnd_762x51_Box {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 150Rnd 7.62 Box Magazine";
    };

    class 100Rnd_762x51_S77_Red_lxWS;
    class TACU_Magazine_100Rnd_762_SA77: 100Rnd_762x51_S77_Red_lxWS {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 100Rnd SA77 Belt";
    };

    class 150Rnd_762x54_Box;
    class TACU_Magazine_150Rnd_Negev: 150Rnd_762x54_Box {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_762x54";
        displayName = "Generic 150Rnd Negev Box";
    };

    // CUP Magazines
    // Handgun Magazines
    class CUP_13Rnd_9x19_Browning_HP;
    class TACU_Magazine_13Rnd_Browning: CUP_13Rnd_9x19_Browning_HP {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 13Rnd Browning Magazine";
    };

    class CUP_10Rnd_9x19_Compact;
    class TACU_Magazine_10Rnd_CZCompact: CUP_10Rnd_9x19_Compact {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 10Rnd CZ Magazine";
    };

    class CUP_17Rnd_9x19_glock17;
    class TACU_Magazine_17Rnd_Glock: CUP_17Rnd_9x19_glock17 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 17Rnd Glock Magazine";
    };

    class CUP_17Rnd_9x19_M17_Black;
    class TACU_Magazine_17Rnd_M17: CUP_17Rnd_9x19_M17_Black {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 17Rnd M17 Magazine";
    };

    class CUP_15Rnd_9x19_M9;
    class TACU_Magazine_15Rnd_M9: CUP_15Rnd_9x19_M9 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 15Rnd M9 Magazine";
    };

    class CUP_18Rnd_9x19_Phantom;
    class TACU_Magazine_18Rnd_Phantom: CUP_18Rnd_9x19_Phantom {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 18Rnd Phantom Magazine";
    };

    class CUP_12Rnd_45ACP_mk23;
    class TACU_Magazine_12Rnd_SOCOM: CUP_12Rnd_45ACP_mk23 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic 12Rnd SOCOM Magazine";
    };

    // SMG Magazines
    class CUP_40Rnd_46x30_MP7;
    class TACU_Magazine_40Rnd_MP7: CUP_40Rnd_46x30_MP7 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_46x30";
        displayName = "Generic 40Rnd MP7 Magazine";
        mass = 8;
    };

    class CUP_30Rnd_45ACP_M3A1_BLK_M;
    class TACU_Magazine_30Rnd_M3A1: CUP_30Rnd_45ACP_M3A1_BLK_M {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic 30Rnd M3A1 Magazine";
        mass = 8;
    };

    class CUP_30Rnd_45ACP_MAC10_M;
    class TACU_Magazine_30Rnd_MAC10: CUP_30Rnd_45ACP_MAC10_M {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_45ACP";
        displayName = "Generic 30Rnd MAC-10 Magazine";
        mass = 8;
    };

    class CUP_64Rnd_9x19_Bizon_M;
    class TACU_Magazine_64Rnd_Bizon: CUP_64Rnd_9x19_Bizon_M {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 64Rnd Bizon Magazine";
        mass = 16;
    };

    class CUP_30Rnd_9x19_MP5;
    class TACU_Magazine_30Rnd_MP5: CUP_30Rnd_9x19_MP5 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 30Rnd MP5 Magazine";
        mass = 8;
    };

    class CUP_32Rnd_9x19_TEC9;
    class TACU_Magazine_32Rnd_TEC9: CUP_32Rnd_9x19_TEC9 {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 32Rnd TEC9 Magazine";
        mass = 8;
    };

    class CUP_32Rnd_9x19_UZI_M;
    class TACU_Magazine_32Rnd_UZI: CUP_32Rnd_9x19_UZI_M {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 32Rnd UZI Magazine";
        mass = 8;
    };

    class CUP_72Rnd_9x19_UZI_M;
    class TACU_Magazine_72Rnd_UZI: CUP_72Rnd_9x19_UZI_M {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 72Rnd UZI Magazine";
        mass = 16;
    };

    class CUP_30Rnd_9x19_Vityaz;
    class TACU_Magazine_30Rnd_Vityaz: CUP_30Rnd_9x19_Vityaz {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x19";
        displayName = "Generic 30Rnd Vityaz Magazine";
        mass = 8;
    };

    class CUP_30Rnd_9x39_SP5_VIKHR_M;
    class TACU_Magazine_30Rnd_SR3M: CUP_30Rnd_9x39_SP5_VIKHR_M {
        MACRO_HANDGUN_MAGAZINE;
        ammo = "TACU_Ammunition_9x39";
        displayName = "Generic 30Rnd SR3M Magazine";
        mass = 8;
    };

    // Assault Rifles
    class CUP_30Rnd_556x45_AK;
    class TACU_Magazine_30Rnd_556_AK: CUP_30Rnd_556x45_AK {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 30Rnd 5.56 AK Magazine";
        mass = 9;
    };

    class CUP_30Rnd_556x45_AK19_M;
    class TACU_Magazine_30Rnd_556_AK19: CUP_30Rnd_556x45_AK19_M {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 30Rnd 5.56 AK19 Magazine";
        mass = 9;
    };

    class CUP_30Rnd_556x45_AUG;
    class TACU_Magazine_30Rnd_556_AUG: CUP_30Rnd_556x45_AUG {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 30Rnd 5.56 AUG Magazine";
        mass = 9;
    };

    class CUP_30Rnd_556x45_G36;
    class TACU_Magazine_30Rnd_556_G36: CUP_30Rnd_556x45_G36 {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 30Rnd 5.56 G36 Magazine";
        mass = 9;
    };

    class CUP_25Rnd_556x45_Famas;
    class TACU_Magazine_25Rnd_556_Famas: CUP_25Rnd_556x45_Famas {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 25Rnd 5.56 FAMAS Magazine";
        mass = 8;
    };

    class CUP_30Rnd_545x39_Fort224_M;
    class TACU_Magazine_30Rnd_556_Fort: CUP_30Rnd_545x39_Fort224_M {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 30Rnd 5.56 Fort Magazine";
        mass = 9;
    };

    class CUP_30Rnd_762x39_CZ807;
    class TACU_Magazine_30Rnd_762_CZ: CUP_30Rnd_762x39_CZ807 {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x39";
        displayName = "Generic 30Rnd 7.62 CZ Magazine";
        mass = 10;
    };

    class CUP_30Rnd_Sa58_M;
    class TACU_Magazine_30Rnd_762_SA58: CUP_30Rnd_Sa58_M {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x39";
        displayName = "Generic 30Rnd 7.62 SA58 Magazine";
        mass = 10;
    };

    // Battle Rifles / Marksman Rifles
    class CUP_20Rnd_762x51_FNFAL_M;
    class TACU_Magazine_20Rnd_762_FAL: CUP_20Rnd_762x51_FNFAL_M {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 20Rnd 7.62 FAL Magazine";
        mass = 10;
    };

    class CUP_20Rnd_762x51_B_SCAR_bkl;
    class TACU_Magazine_20Rnd_762_SCARH: CUP_20Rnd_762x51_B_SCAR_bkl {
        MACRO_RIFLE_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 20Rnd 7.62 SCAR-H Magazine";
        mass = 10;
    };

    // Machine Guns
    class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M;
    class TACU_Magazine_45Rnd_545_AK: CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_545x39";
        displayName = "Generic 45Rnd 5.45 RPK Magazine";
        mass = 13;
    };

    class CUP_60Rnd_545x39_AK74M_M;
    class TACU_Magazine_60Rnd_545_AK: CUP_60Rnd_545x39_AK74M_M {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_545x39";
        displayName = "Generic 60Rnd 5.45 Quadstack Magazine";
        mass = 14;
    };

    class CUP_100Rnd_556x45_BetaCMag_ar15;
    class TACU_Magazine_100Rnd_556_AR15_BetaC: CUP_100Rnd_556x45_BetaCMag_ar15 {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 100Rnd 556 AR15 Beta-C Magazine";
        mass = 17;
    };

    class CUP_100Rnd_556x45_BetaCMag;
    class TACU_Magazine_100Rnd_556_G36_BetaC: CUP_100Rnd_556x45_BetaCMag {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 100Rnd 556 G36 Beta-C Magazine";
        mass = 17;
    };

    class CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch;
    class TACU_Magazine_200Rnd_556_Pouch: CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_556x45";
        displayName = "Generic 200Rnd 5.56 Pouch";
    };

    class CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M;
    class TACU_Magazine_40Rnd_762_AK: CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_762x39";
        displayName = "Generic 40Rnd 7.62 RPK Magazine";
        mass = 12;
    };

    class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
    class TACU_Magazine_100Rnd_762_M240: CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {
        MACRO_MG_MAGAZINE;
        ammo = "TACU_Ammunition_762x51";
        displayName = "Generic 100Rnd 7.62 M240 Magazine";
    };
};
