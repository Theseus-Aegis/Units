class I_Fieldpack_oli_Ammo: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag;
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_NLAW_F;
        delete _xx_20Rnd_762x51_Mag;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_STANAG,8);
        MACRO_ADDMAGAZINE(TACU_Magazine_20Rnd_M1A,3);
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,2);
    };
};

class B_TacticalPack_oli_AAR: B_TacticalPack_oli {
    class TransportMagazines {
        delete _xx_200Rnd_65x39_cased_Box;
        delete _xx_200Rnd_65x39_cased_Box_Tracer;
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,4);
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
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_STANAG,8);
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_65_Box,1);
        MACRO_ADDMAGAZINE(TACU_Magazine_20Rnd_M1A,3);
    };
};

class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_762_AK,4);
    };
};

class B_Kitbag_cbr_Para_5_F: B_Kitbag_cbr {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_545_AK,4);
    };
};

class B_Kitbag_rgr_Para_8_F: B_Kitbag_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_762_AK,4);
    };
};

class B_FieldPack_khk_Bandit_1_F: B_FieldPack_khk {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_545_AK,4);
    };
};

class B_Kitbag_cbr_Bandit_2_F: B_Kitbag_cbr {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_545_AK,4);
    };
};

class B_FieldPack_cb_Bandit_3_F: B_FieldPack_cbr {
    class TransportMagazines {
        delete _xx_200Rnd_556x45_Box_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_200Rnd_556_Box,2);
    };
};

class B_FieldPack_blk_Bandit_8_F: B_FieldPack_blk {
    class TransportMagazines {
        delete _xx_30Rnd_545x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_545_AK,4);
    };
};

class B_Kitbag_cbr_Hireling_1_lxWS: B_Kitbag_rgr {
    class TransportMagazines {
        delete _xx_30Rnd_9x21_Mag;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_SMG,4);
    };
};

class B_FieldPack_oli_Medic_1_lxWS: B_FieldPack_oli {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_762_AK,4);
    };
};

class B_FieldPack_khk_Bandit_2_lxWS: B_FieldPack_oli {
    class TransportMagazines {
        delete _xx_30Rnd_762x39_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_762_AK,4);
    };
};

class B_FieldPack_cbr_Ammo: B_Carryall_ocamo {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,6);
    };
};

class B_FieldPack_oucamo_Ammo: B_Carryall_oucamo {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,6);
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
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,5);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_ViperHarness_hex_M_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,7);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_ViperHarness_hex_Exp_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,7);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_ViperHarness_hex_Medic_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,7);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_ViperHarness_hex_LAT_F: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,7);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
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
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,7);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_FieldPack_cbr_Ammo_F: B_FieldPack_cbr_Ammo {
    class TransportMagazines {
        delete _xx_30Rnd_580x42_Mag_F;
        delete _xx_100Rnd_580x42_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_QBZ,12);
        MACRO_ADDMAGAZINE(TACU_Magazine_100Rnd_QBZ,4);
    };
};

class B_ViperHarness_hex_LAT_lxWS: B_ViperHarness_hex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,3);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,1);
    };
};

class B_Carryall_ghex_OTAmmo_F: B_Carryall_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_580x42_Mag_F;
        delete _xx_100Rnd_580x42_Mag_F;
        delete _xx_20Rnd_650x39_Cased_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_QBZ,6);
        MACRO_ADDMAGAZINE(TACU_Magazine_100Rnd_QBZ,1);
        MACRO_ADDMAGAZINE(TACU_Magazine_20Rnd_QBU,3);
    };
};

class B_ViperHarness_ghex_Exp_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,5);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
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
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,5);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_ViperHarness_ghex_LAT_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,5);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
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
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,5);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
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
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,5);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_ViperHarness_ghex_M_F: B_ViperHarness_ghex_F {
    class TransportMagazines {
        delete _xx_30Rnd_65x39_caseless_green;
        delete _xx_16Rnd_9x21_Mag;
        delete _xx_SmokeShellRed;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_Katiba,7);
        MACRO_ADDMAGAZINE(TACU_Magazine_17Rnd_Walther,2);
    };
};

class B_Patrol_Carryall_green_Ammo_F: B_Carryall_green_F {
    class TransportMagazines {
        delete _xx_30rnd_762x39_AK12_Lush_Mag_F;
        delete _xx_75rnd_762x39_AK12_Lush_Mag_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_762_AK,8);
        MACRO_ADDMAGAZINE(TACU_Magazine_75Rnd_762_AK,3);
    };
};

class B_Carryall_ghex_OTAAR_AAR_F: B_Carryall_ghex_F {
    class TransportMagazines {
        delete _xx_100Rnd_580x42_Mag_F;
        delete _xx_100Rnd_580x42_Mag_Tracer_F;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_QBZ,1);
        MACRO_ADDMAGAZINE(TACU_Magazine_100Rnd_QBZ,1);
    };
};

class O_Assault_Diver: B_FieldPack_blk {
    class TransportMagazines {
        delete _xx_30Rnd_556x45_Stanag_green;
        delete _xx_20Rnd_556x45_UW_mag;
        delete _xx_Chemlight_red;
        MACRO_ADDMAGAZINE(TACU_Magazine_30Rnd_STANAG,4);
    };
};

class I_Fieldpack_oli_Medic: B_FieldPack_oli {
    class TransportItems {
        delete _xx_Medikit;
        delete _xx_FirstAidKit;
        MACRO_ADDITEM(ACE_fieldDressing,20);
        MACRO_ADDITEM(ACE_epinephrine,5);
        MACRO_ADDITEM(ACE_morphine,5);
        MACRO_ADDITEM(ACE_bloodIV,4);
        MACRO_ADDITEM(ACE_bloodIV_500,4);
        MACRO_ADDITEM(ACE_splint,4);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_bloodIV_250,2);
    };
};

class I_Carryall_oli_Eng: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_SatchelCharge_Remote_Mag;
        delete _xx_DemoCharge_Remote_Mag;
    };
    class TransportItems {
        delete _xx_MineDetector;
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};

class I_Carryall_oli_Exp: B_Carryall_oli {
    class TransportMagazines {
        delete _xx_APERSBoundingMine_Range_Mag;
        delete _xx_ClaymoreDirectionalMine_Remote_Mag;
        delete _xx_SLAMDirectionalMine_Wire_Mag;
        delete _xx_Democharge_Remote_Mag;
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,3);
    };
    class TransportItems {
        delete _xx_ToolKit;
        delete _xx_MineDetector;
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
    };
};
