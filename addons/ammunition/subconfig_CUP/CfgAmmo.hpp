class CfgAmmo {
    class BulletBase;
    class TACU_Ammunition_46x30: BulletBase {
        MACRO_TRACERS;
        aiAmmoUsageFlags = "64 + 128";
        airFriction = -0.0008;
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
        aiAmmoUsageFlags = "64 + 128";
        airFriction = -0.00075274;
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
};
