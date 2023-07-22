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
