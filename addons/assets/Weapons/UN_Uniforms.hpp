// Ground Items
class TACU_UN_Uniform_Combat_Fatigues_Autumn: Uniform_Base {
    author = "Mike";
    scope = 1;
    scopeCurator = 1;
    displayName = "Combat Fatigues (UN, Autumn)";
    picture = QPATHTOF(ui\uniforms\un_uniform_autumn.paa);
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_UN_Unit_Autumn";
        containerClass = "Supply40";
        mass = 40;
    };
};
class TACU_UN_Uniform_Combat_Fatigues_Urban: TACU_UN_Uniform_Combat_Fatigues_Autumn {
    displayName = "Combat Fatigues (UN, Urban)";
    picture = QPATHTOF(ui\uniforms\un_uniform_urban.paa);
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_UN_Unit_Urban";
    };
};
class TACU_UN_Uniform_Combat_Fatigues_Woodland: TACU_UN_Uniform_Combat_Fatigues_Autumn {
    displayName = "Combat Fatigues (UN, Woodland)";
    picture = QPATHTOF(ui\uniforms\un_uniform_woodland.paa);
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_UN_Unit_Woodland";
    };
};

// Ground Items (Tiger Stripe), same as UN but without the Insignia.
class TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn: TACU_UN_Uniform_Combat_Fatigues_Autumn {
    displayName = "Combat Fatigues, Tiger Stripe (Autumn)";
    scope = 2;
    scopeCurator = 2;
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_Unit_TigerStripe_Autumn";
    };
};
class TACU_Uniform_Combat_Fatigues_TigerStripe_Urban: TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn {
    displayName = "Combat Fatigues, Tiger Stripe (Urban)";
    picture = QPATHTOF(ui\uniforms\un_uniform_urban.paa);
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_Unit_TigerStripe_Urban";
    };
};
class TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland: TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn {
    displayName = "Combat Fatigues, Tiger Stripe (Woodland)";
    picture = QPATHTOF(ui\uniforms\un_uniform_woodland.paa);
    class ItemInfo: ItemInfo {
        uniformClass = "TACU_Unit_TigerStripe_Woodland";
    };
};
