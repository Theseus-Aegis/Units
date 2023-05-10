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
    class TransportItems {};
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

class B_ViperHarness_ghex_M_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_65x39_Katiba,7);
        MACRO_ADDMAGAZINE(tacgt_AI_17Rnd_9x19_Walther,2);
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

class B_Patrol_Carryall_green_Ammo_F: B_Carryall_green_F {
    class TransportMagazines {
        delete _xx_30rnd_762x39_AK12_Lush_Mag_F;
        delete _xx_75rnd_762x39_AK12_Lush_Mag_F;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,8);
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,3);
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

class CUP_B_TK_CivPack_WDL_Ammo: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_20Rnd_762x51_FNFAL_M;
        delete _xx_CUP_1Rnd_HEDP_M203;
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,2);
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_762x51_FAL,2);
    };
};

class CUP_B_TK_CivPack_WDL_RPK: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,3);
    };
};

class CUP_B_TKI_CivPack_WDL_RPK_45: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_60Rnd_545x39_AK,9);
    };
};

class CUP_B_TKI_AlicePack_Khaki_AmmoAK74: CUP_B_AlicePack_Khaki {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_545x39_AK_M;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,6);
    };
};

class CUP_B_TIK_CivPack_WDL_Ammo: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_20Rnd_762x51_FNFAL_M;
        delete _xx_CUP_1Rnd_HEDP_M203;
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_762x51_FAL,2);
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,2);
    };
};

class CUP_B_TKI_CivPack_WDL_RPK_762: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,5);
    };
};

class CUP_B_PMC_AlicePack_XM8Auto: CUP_B_AlicePack_Khaki {
    class TransportMagazines {
        delete _xx_CUP_100Rnd_556x45_BetaCMag;
        MACRO_ADDMAGAZINE(tacgt_AI_100Rnd_556x45_BetaC,4);
    };
};

class CUP_B_PMC_Backpack_GL: B_AssaultPack_rgr {
    class TransportMagazines {
        delete _xx_CUP_1Rnd_HEDP_M203;
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,7);
    };
};

class CUP_I_HikingPack_RPK: CUP_B_HikingPack_Civ {
    class TransportMagazines {
        delete _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,5);
    };
};

class CUP_I_HikingPack_Ammo: CUP_B_HikingPack_Civ {
    class TransportMagazines {
        delete _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M;
        delete _xx_CUP_30Rnd_762x39_AK47_M;
        delete _xx_CUP_30Rnd_545x39_AK_M;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,1);
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,6);
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,6);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};

class CUP_B_INS_AlicePack_Ammo: CUP_B_AlicePack_Bedroll {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_762x39_AK47_M;
        delete _xx_CUP_30Rnd_545x39_AK_M;
        delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,4);
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_762x39_AK,4);
    };
};

class CUP_B_INS_Backpack_AR: CUP_B_AlicePack_Khaki {
    class TransportMagazines {
        delete _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_75Rnd_762x39_Drum,6);
    };
};

class CUP_B_RACS_Backpack_AR: CUP_B_AssaultPack_Coyote {
    class TransportMagazines {
        delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_556x45_Pouch,2);
    };
};

class CUP_B_USArmy_MG: CUP_B_USPack_Coyote {
    class TransportMagazines {
        delete _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
        MACRO_ADDMAGAZINE(tacgt_AI_100Rnd_762x51_Belt,4);
    };
};

class CUP_B_RUS_Pack_AR: CUP_B_HikingPack_Civ {
    class TransportMagazines {
        delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M;
        MACRO_ADDMAGAZINE(tacgt_AI_60Rnd_545x39_AK,4);
    };
};

class CUP_O_RUS_Patrol_bag_Summer_Ammo: CUP_O_RUS_Patrol_bag_Summer {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_545x39_AK74M_M;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,6);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};

class CUP_O_RUS_Patrol_bag_Winter_Ammo: CUP_O_RUS_Patrol_bag_Winter {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_545x39_AK74M_M;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,6);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};

class CUP_O_RUS_Patrol_bag_BeigeDigital_Ammo: CUP_O_RUS_Patrol_bag_BeigeDigital {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_545x39_AK74M_M;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,6);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};

class CUP_O_RUS_Patrol_bag_Desert_Ammo: CUP_O_RUS_Patrol_bag_Desert {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_545x39_AK74M_M;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_545x39_AK,6);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};
