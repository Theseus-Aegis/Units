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
