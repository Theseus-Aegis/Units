class B_MU_M_AssaultPack_rgr_AR: B_AssaultPack_rgr {
    class TransportMagazines {
        delete _xx_200Rnd_65x39_cased_Box;
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,3);
    };
};

class B_MU_M_TacticalPack_blk_A: B_TacticalPack_blk {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_SmokeShellGreen;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellPurple;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,4);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
    };
};

class B_MU_GrDa_AssaultPack_dgtl_Rtws: B_AssaultPack_dgtl {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_30Rnd_556x45_Stanag_Tracer_Yellow;
        delete _xx_SmokeShell;
        delete _xx_SmokeShellYellow;
        delete _xx_I_IR_Grenade;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(SmokeShell,3);
    };
};

class B_MU_GrDa_AssaultPack_dgtl_GL: B_AssaultPack_dgtl {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_UGL_FlareYellow_F;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(1Rnd_SmokeYellow_Grenade_shell,3);
    };
};

class B_MU_GrDa_Carryall_oli_A: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_30Rnd_556x45_Stanag_Tracer_Yellow;
        delete _xx_SmokeShellYellow;
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_NLAW_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
        MACRO_ADDMAGAZINE(MiniGrenade,2);
    };
};

class I_Fieldpack_oli_Ammo: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_NLAW_F;
        delete _xx_20Rnd_762x51_Mag;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,8);
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_762x51,3);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
    };
};

class B_TacticalPack_oli_AAR: B_TacticalPack_oli {
    class TransportMagazines {
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_200Rnd_65x39_cased_Box_Tracer;
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,4);
    };
};

class G_Carryall_Ammo: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_20Rnd_762x51_Mag;
        delete _xx_SmokeShellGreen;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellBlue;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,8);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,1);
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_762x51,3);
    };
};

class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,4);
    };
};

class B_Kitbag_cbr_Para_5_F: B_Kitbag_cbr {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,4);
    };
};

class B_Kitbag_rgr_Para_8_F: B_Kitbag_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,4);
    };
};

class B_FieldPack_khk_Bandit_1_F: B_FieldPack_khk {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,4);
    };
};

class B_Kitbag_cbr_Bandit_2_F: B_Kitbag_cbr {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,4);
    };
};

class B_FieldPack_cb_Bandit_3_F: B_FieldPack_cbr {
    class TransportMagazines {
        delete _xx_200Rnd_556x45_Box_F;
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_556x45_Box,2);
    };
};

class B_FieldPack_blk_Bandit_8_F: B_FieldPack_blk {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,4);
    };
};

class B_Kitbag_cbr_Hireling_1_lxWS: B_Kitbag_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_9x21_Mag;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_9x19,4);
    };
};

class B_FieldPack_oli_Medic_1_lxWS: B_FieldPack_oli {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,4);
    };
};

class B_FieldPack_khk_Bandit_2_lxWS: B_FieldPack_oli {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,4);
    };
};

class B_FieldPack_cbr_Ammo: B_Carryall_ocamo {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,6);
    };
};

class B_FieldPack_oucamo_Ammo: B_Carryall_oucamo {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,6);
    };
};

class B_ViperHarness_hex_TL_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green_mag_Tracer;
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellOrange;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,5);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_hex_M_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_hex_Exp_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_hex_Medic_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_hex_LAT_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_hex_JTAC_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellOrange;
        delete _xx_O_IR_Grenade;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_FieldPack_cbr_Ammo_F: B_FieldPack_cbr_Ammo {
    class TransportMagazines {
        delete _xx_30Rnd_580x42_Mag_F;
        delete _xx_100Rnd_580x42_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_58x42,12);
        MACRO_ADDMAGAZINE(tacgt_AI_100Rnd_58x42,4);
    };
};

class B_ViperHarness_hex_LAT_lxWS: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,3);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,1);
    };
};

class B_Carryall_ghex_OTAmmo_F: B_Carryall_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_580x42_Mag_F;
        delete _xx_100Rnd_580x42_Mag_F;
        delete _xx_20Rnd_650x39_Cased_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_58x42,6);
        MACRO_ADDMAGAZINE(tacgt_AI_100Rnd_58x42,1);
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_65x39,3);
    };
};

class B_ViperHarness_ghex_Exp_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,5);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_ghex_TL_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green_mag_Tracer;
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellOrange;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,5);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_ghex_LAT_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,5);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_ghex_Medic_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellOrange;
        delete _xx_O_IR_Grenade;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,5);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_ghex_JTAC_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellOrange;
        delete _xx_O_IR_Grenade;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,5);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_ViperHarness_ghex_M_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
    };
};

class B_Patrol_Carryall_green_Ammo_F: B_Carryall_green_F {
    class TransportMagazines {
        delete _xx_30rnd_762x39_AK12_Lush_Mag_F;
        delete _xx_75rnd_762x39_AK12_Lush_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,8);
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,3);
    };
};

class B_Carryall_ghex_OTAAR_AAR_F: B_Carryall_ghex_F {
    class TransportMagazines {
        delete _xx_100Rnd_580x42_Mag_F;
        delete _xx_100Rnd_580x42_Mag_Tracer_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_58x42,1);
        MACRO_ADDMAGAZINE(tacgt_AI_100Rnd_58x42,1);
    };
};

class O_Assault_Diver: B_FieldPack_blk {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag_green;
        delete _xx_20Rnd_556x45_UW_mag;
        delete _xx_Chemlight_red;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,4);
    };
};

class O_MU_FieldPack_oli_CDT_AB: B_FieldPack_green_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_Chemlight_red;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,6);
    };
};

class O_MU_AssaultPack_rgr_CDT_D: B_AssaultPack_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,6);
    };
};

class B_MU_RUSP_Carryall_blk_A: B_MU_Carryall_blk {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_AK12_Mag_F;
        delete _xx_30Rnd_762x39_AK12_Mag_Tracer_F;
        delete _xx_75rnd_762x39_AK12_Mag_F;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellBlue;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,4);
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,2);
    };
};

class B_MU_IS_Carryall_cbr_A: B_Carryall_cbr {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        delete _xx_200Rnd_556x45_Box_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,10);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_556x45_Box,2);
    };
};

class B_MU_Mil_AssaultPack_cbr_AR: B_AssaultPack_cbr {
    class TransportMagazines {
        delete _xx_100Rnd_580x42_Mag_Tracer_F;
        delete _xx_100Rnd_580x42_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_100Rnd_58x42,3);
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_58x42,3);
    };
};

class B_MU_Mil_Carryall_cbr_ammo: B_Carryall_cbr {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
    };
};

class B_MU_Mil_FieldPack_cbr_GL: B_FieldPack_cbr {
    class TransportMagazines {
        delete _xx_1Rnd_SmokePurple_Grenade_shell;
        delete _xx_UGL_FlareWhite_F;
        delete _xx_30Rnd_556x45_Stanag;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,5);
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,5);
    };
};

class B_MU_LIVP_FieldPack_green_AR: B_FieldPack_green_F {
    class TransportMagazines {
        delete _xx_75rnd_762x39_AK12_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,5);
    };
};

class B_MU_LIVP_Carryall_oli_A: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_75rnd_762x39_AK12_Mag_F;
        delete _xx_30Rnd_545x39_Mag_Green_F;
        delete _xx_30Rnd_762x39_Mag_Green_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,6);
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,2);
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,2);
    };
};
