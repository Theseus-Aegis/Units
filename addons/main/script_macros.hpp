// Internal
#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define QUOTE(var1) #var1
#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}

// Path
#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

// Editor Preview
#define EDITORPREVIEW(IMG) editorPreview = QPATHTOF(ui\IMG.jpg)

// Magazines
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

// Default Items (Compass, Map, Watch, Radio)
#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch"
#define DEFAULT_ITEMS_RADIO "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"

// Vehicle defaults for factions
#define MACRO_FACTION_VEHICLE_DEFAULTS \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    scopeCurator = 2; \
    forceInGarage = 1

// Add Weapon, Item, Magazine to transport cargo (Vehicle, backpack etc.)
#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE{ \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

// Empty vehicle cargo inventory
#define MACRO_CLEAR_VEHICLE_CARGO \
    class TransportBackpacks {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportWeapons {}

// Add Attachments to Weapons (Optics, Pointer, Muzzle, Bipod)
#define EQUIP_OPTIC(OPTIC) class LinkedItemsOptic { \
    slot = "CowsSlot"; \
    item = #OPTIC; \
}

#define EQUIP_POINTER(POINTER) class LinkedItemsAcc { \
    slot = "PointerSlot"; \
    item = #POINTER; \
}

#define EQUIP_MUZZLE(MUZZLE) class LinkedItemsMuzzle { \
    slot = "MuzzleSlot"; \
    item = #MUZZLE; \
}

#define EQUIP_BIPOD(BIPOD) class LinkedItemsUnder { \
    slot = "UnderBarrelSlot"; \
    item = #BIPOD; \
}
