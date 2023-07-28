// Vest without leg strap holster.
class TACU_Seven_Rings_Vest_Plate_Carrier_Coyote: V_PlateCarrier2_rgr {
    author = "Mike";
    scope = 1;
    displayName = "Carrier Rig (Coyote)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests\sr_platecarrier_east_co.paa)};
    model = "\A3\Characters_F\Common\equip_placeholder.p3d";
    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo"};
        uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
        containerClass = "Supply120";
    };
};

// With leg strap holster.
class TACU_Seven_Rings_Vest_Plate_Carrier_Green: V_PlateCarrier2_blk {
    scope = 1;
    author = "Mike";
    displayName = "Carrier Rig (Green)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests\sr_platecarrier_west_co.paa)};
};
