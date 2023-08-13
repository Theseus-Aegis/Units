class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        author = CSTRING(Author);
        dir = "@theseus_units";
        name = CSTRING(Name);
        picture = QPATHTOF(UI\logo_tacu_ca.paa);
        logo = QPATHTOF(UI\logo_tacu_small_ca.paa);
        logoOver = QPATHTOF(UI\logo_tacu_small_ca.paa);
        logoSmall = QPATHTOF(UI\logo_tacu_small_ca.paa);
        hidePicture = "true";
        hideName = "true";
        actionName = "GitHub";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/Theseus-Aegis/Units/issues";
    };
};
