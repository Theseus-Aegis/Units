// Doesn't use leg strap holster.
class TACU_Eastern_Asia_Vest_Carrier_Rig: V_PlateCarrier2_rgr {
    author = "Mike";
    scope = 2;
    displayName = "Carrier Rig (Eastern Asia)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    model = "\A3\Characters_F\Common\equip_placeholder.p3d";
    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo"};
        uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
        containerClass = "Supply120";
    };
};
