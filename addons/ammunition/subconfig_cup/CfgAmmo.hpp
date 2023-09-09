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

    // RPG Ammo
    class RocketBase;

    // OG-7V (Frag) Rocket
    class CUP_R_OG7_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 30; // default 100
        ace_frag_enabled = 1;
        ace_frag_metal = 350;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2800;
        ace_Frag_gurney_k = "3/5";
        ace_frag_classes[] = {"ACE_frag_medium"};
    };

    // PG-7V (HEAT) Rocket
    class CUP_R_PG7V_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // PG-7VL (HEAT) Rocket
    class CUP_R_PG7VL_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 200
    };

    // PG-7VM HEAT Rocket
    class CUP_R_PG7VM_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // PG-7VR (T-HEAT) Rocket
    class CUP_R_PG7VR_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 30;
    };

    // TBG-7V (Thermobaric) Rocket
    class CUP_R_TBG7V_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 300
    };

    // RPG-26 Rocket
    class CUP_R_PG26_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 100
    };

    // RPG-18 Rocket
    class CUP_R_RPG18_AT: RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50; // default 200
    };
};
