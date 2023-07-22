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
        aiAmmoUsageFlags = "64 + 128";
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
        aiAmmoUsageFlags = "64 + 128";
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
        aiAmmoUsageFlags = "64 + 128";
        airFriction = -0.001412;
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
        aiAmmoUsageFlags = "64 + 128";
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
        aiAmmoUsageFlags = "64 + 128";
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
        aiAmmoUsageFlags = "64 + 128";
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
        aiAmmoUsageFlags = "64 + 128";
        airFriction = -0.00089999998;
        airLock = 1;
        caliber = 1.8;
        cartridge = "";
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
        aiAmmoUsageFlags = "64 + 128";
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
};
