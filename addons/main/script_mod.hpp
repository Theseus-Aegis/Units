// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX x
#define PREFIX tacu
#define SUBPREFIX addons

#include "script_version.hpp"

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.94

#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif
#ifdef SUBCOMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Theseus Units - COMPONENT_BEAUTIFIED - SUBCOMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Theseus Units - COMPONENT_BEAUTIFIED)
#endif
