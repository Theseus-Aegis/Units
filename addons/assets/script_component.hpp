#define COMPONENT assets
#define COMPONENT_BEAUTIFIED Assets
#include "\x\tacu\addons\main\script_mod.hpp"
#include "\x\tacu\addons\main\script_macros.hpp"

// Vehicle Macros
#define MACRO_EVENTHANDLERS \
    class EventHandlers: EventHandlers { \
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };"; \
    }


#define MACRO_WRANGLER_MATERIALS \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat", \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat", \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat", \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"

#define MACRO_WRANGLER_MATERIALS_ALT \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat", \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat", \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat", \
    "\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"

#define MACRO_CARGO_MATERIALS \
    "\a3\soft_f_orange\van_02\data\van_body.rvmat", \
    "\a3\soft_f_orange\van_02\data\van_wheel.rvmat", \
    "", \
    "\a3\data_f\lights\car_beacon_orange_emit.rvmat"

#define MACRO_VAN_MATERIALS \
    "\a3\Soft_F_Orange\Van_02\Data\van_body.rvmat", \
    "\A3\Soft_F_Orange\Van_02\Data\van_wheel_transport.rvmat", \
    "", \
    "\a3\Data_f\Lights\Car_Beacon_Orange_emit.rvmat"
