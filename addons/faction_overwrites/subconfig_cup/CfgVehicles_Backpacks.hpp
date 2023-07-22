class CUP_B_TK_CivPack_WDL_Ammo: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_20Rnd_762x51_FNFAL_M;
        delete _xx_CUP_1Rnd_HEDP_M203;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,2);
        MACRO_ADDMAGAZINE(tacgt_AI_20Rnd_762x51_FAL,2);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};

class CUP_B_TK_CivPack_WDL_RPK: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(tacgt_AI_60Rnd_545x39_AK,7);
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};

class CUP_B_TKI_CivPack_WDL_RPK_45: CUP_B_CivPack_WDL {
    class TransportMagazines {
        delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
        MACRO_ADDMAGAZINE(tacgt_AI_60Rnd_545x39_AK,9);
    };
};

class CUP_B_TK_AlicePack_Khaki_Ammo: CUP_B_AlicePack_Khaki {
    class TransportMagazines {
        delete _xx_CUP_30Rnd_556x45_Stanag;
        delete _xx_CUP_1Rnd_HEDP_M203;
        delete _xx_smokeshellOrange;
        MACRO_ADDMAGAZINE(tacgt_AI_30Rnd_556x45_STANAG,6);
        MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,4);
        MACRO_ADDMAGAZINE(SmokeShell,2);
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

class CUP_B_TK_AlicePack_Khaki_AmmoMG: CUP_B_AlicePack_Khaki {
    class TransportMagazines {
        delete _xx_CUP_HandGrenade_RGD5;
        MACRO_ADDMAGAZINE(HandGrenade,2);
    };
};
