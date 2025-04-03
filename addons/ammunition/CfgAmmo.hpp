class CfgAmmo {

    /*
     * AI Based Ammo, not designed for player use at all.
     * Won't require ACE values.
     * Anything larger than 7.62x54 is already balanced and won't need to be added.
    */

    class BulletBase;

    // 9mm
    class TACU_Ammunition_9x19: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.0016;
        airLock = 1;
        audibleFire = 30;
        caliber = 1;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        deflecting = 25;
        hit = 9;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        typicalSpeed = 380;
    };

    // .45ACP
    class TACU_Ammunition_45ACP: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.0018;
        airLock = 1;
        audibleFire = 45;
        caliber = 0.65;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        deflecting = 25;
        hit = 11.5;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        typicalSpeed = 280;
    };

    // 5.7x28
    class TACU_Ammunition_57x28: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.001412;
        airLock = 1;
        audibleFire = 25;
        caliber = 1.6;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        deflecting = 20;
        hit = 13;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 715;
        visibleFire = 3;
        visibleFireTime = 5;
    };

    // 5.45x39
    class TACU_Ammunition_545x39: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.0013;
        airLock = 1;
        caliber = 1.1;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        deflecting = 20;
        hit = 11.3;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 880;
    };

    // 5.56x45
    class TACU_Ammunition_556x45: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.0012000001;
        airLock = 1;
        audibleFire = 35;
        caliber = 1.7;
        cost = 1;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        hit = 12.3;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 920;
    };

    // 5.8x42
    class TACU_Ammunition_58x52: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.0011;
        airLock = 1;
        caliber = 1.4;
        cost = 1;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        deflecting = 20;
        hit = 10.7;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 870;
    };

    // 6.5x39
    class TACU_Ammunition_65x39: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.00089999998;
        airLock = 1;
        caliber = 1.8;
        cartridge = "FxCartridge_65";
        cost = 1;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        hit = 12;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 820;
    };

    // 7.62x39
    class TACU_Ammunition_762x39: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction=-0.0016;
        airLock = 1;
        caliber = 1.68;
        cartridge = "FxCartridge_762x39";
        cost = 1;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        hit = 12.5;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 730;
    };

    // 7.62x51
    class TACU_Ammunition_762x51: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.001;
        airLock = 1;
        audibleFire = 45;
        caliber = 2;
        cartridge = "FxCartridge_762";
        cost = 1;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        hit = 14;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 800;
        visibleFire = 3;
    };

    // 7.62x54
    class TACU_Ammunition_762x54: TACU_Ammunition_762x51 {
        airFriction = -0.0012000001;
        caliber = 2.1;
        hit = 14.5;
    };

    // CUP Ammo
    class TACU_Ammunition_46x30: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = 448;
        airFriction = -0.0008;
        airLock = 1;
        audibleFire = 7;
        caliber = 0.7;
        cartridge = "FxCartridge_9mm";
        cost = 20;
        deflecting = 35;
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 725;
        visibleFire = 3;
    };

    // 9x39, no tracer.
    class TACU_Ammunition_9x39: BulletBase {
        aiAmmoUsageFlags = 448;
        airFriction = -0.00075274;
        airLock = 1;
        audibleFire = 0.07;
        caliber = 1.1;
        cartridge = "CUP_FxCartridge_939";
        cost = 5;
        hit = 10;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 300;
        visibleFire = 0.07;
        visibleFireTime = 2;
    };

    // RPG Ammo
    class MissileBase;
    class RocketBase;

    // PG-7VM HEAT Grenade
    class R_PG7_F: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 200
    };
    // RPG-42 Rocket
    class R_PG32V_F: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 75; // default 100
    };

    // RPG-42 HE Rocket
    class R_TBG32V_F: R_PG32V_F {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 30; // default 100
    };

    // MAAWS HEAT 75 Round
    class R_MRAAWS_HEAT_F: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // OG-7V (Frag) Rocket
    class CUP_R_OG7_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 30; // default 100
        ace_frag_skip = 0;
        ace_frag_enabled = 1;
        ace_frag_metal = 350;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2800;
        ace_Frag_gurney_k = 3/5;
        ace_frag_classes[] = {"ACE_frag_medium"};
    };

    // PG-7V (HEAT) Rocket
    class CUP_R_PG7V_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // PG-7VL (HEAT) Rocket
    class CUP_R_PG7VL_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 200
    };

    // PG-7VM HEAT Rocket
    class CUP_R_PG7VM_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // PG-7VR (T-HEAT) Rocket
    class CUP_R_PG7VR_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 30;
    };

    // TBG-7V (Thermobaric) Rocket
    class CUP_R_TBG7V_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 300
    };

    // RPG-26 Rocket
    class CUP_R_PG26_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // RPG-18 Rocket
    class CUP_R_RPG18_AT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 200
    };

    // MAAWS HEAT 55 Round
    class R_MRAAWS_HEAT55_F: R_MRAAWS_HEAT_F {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // MAAWS HE 44 Round
    class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 30; // default 100
        ace_frag_classes[] = {"ACE_frag_medium"};
    };

    // SPG-9 HEAT
    class M_SPG9_HEAT: RocketBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        //cost = 30; Already default at 30.
    };

    // SPG-9 HE
    class M_SPG9_HE: M_SPG9_HEAT {
        ace_frag_enabled = 1;
        ace_frag_metal = 350;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2800;
        ace_Frag_gurney_k = 3/5;
        ace_frag_classes[] = {"ACE_frag_medium"};
    };

    // Vorona HEAT
    class M_Vorona_HEAT: MissileBase {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 250; // Default 500
    };

    // Vorona HE
    class M_Vorona_HE: M_Vorona_HEAT {
        aiAmmoUsageFlags = 960;
        airLock = 1;
        allowAgainstInfantry = 1;
        //cost = 30; Already default at 30.
    };
};
