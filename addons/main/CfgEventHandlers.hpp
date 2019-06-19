class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

// "call compile preprocessFileLineNumbers 'PATHTOF(XEH_preInit.sqf)'";
