class B_MU_M_AssaultPack_rgr_AR: B_AssaultPack_rgr {
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
    };
};

class B_MU_M_TacticalPack_blk_A: B_TacticalPack_blk {
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,4);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
        MACRO_ADDMAGAZINE(HandGrenade,2);
        MACRO_ADDMAGAZINE(SmokeShell,2);
    };
};

class B_MU_GrDa_AssaultPack_dgtl_Rtws: B_AssaultPack_dgtl {
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(HandGrenade,3);
        MACRO_ADDMAGAZINE(SmokeShell,3);
    };
};

class B_MU_GrDa_AssaultPack_dgtl_GL: B_AssaultPack_dgtl {
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,5);
        MACRO_ADDMAGAZINE(1Rnd_SmokeYellow_Grenade_shell,3);
    };
};

class B_MU_GrDa_Carryall_oli_A: B_Carryall_oli {
    class TransportItems {};
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
        MACRO_ADDMAGAZINE(HandGrenade,2);
        MACRO_ADDMAGAZINE(SmokeShell,2);
        MACRO_ADDMAGAZINE(MiniGrenade,2);
    };
};

class I_Fieldpack_oli_Ammo: B_Carryall_oli {
    class TransportMagazines {
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,8);
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,6);
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_762x51,3);
        MACRO_ADDMAGAZINE(tacgt_AI_200Rnd_65x39_Belt,2);
        MACRO_ADDMAGAZINE(HandGrenade,2);
        MACRO_ADDMAGAZINE(SmokeShell,2);
        MACRO_ADDMAGAZINE(MiniGrenade,2);
    };
};
