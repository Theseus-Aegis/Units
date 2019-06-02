#include "groups.hpp"
#include "Patches.hpp"
#include "vehicles.hpp"
#include "Weapons.hpp"

class CfgMods
{
	class Mod_Base;
	class Vanguard_PMC : Mod_Base
	{
		tooltip = "Vanguard PMC";
		tooltipOwned = "Vanguard PMC";
		action = "https://www.theseus-aegis.com/";
		overview = "This mod provides the Vanguard PMC faction.";
	};
};

class CfgVehicleClasses
{
	class VANGUARD_B
	{
		faction = "VANGUARD_F";
		displayName = "Infantry";
	};
};

class CfgFactionClasses
{
	class VANGUARD_F
	{
		displayName = "Vanguard PMC";
		priority = 2;
		side = 2;
	};
};

class CfgEditorSubcategories
{
	class Vanguard_Editor_Category_Contractors
	{
		displayName = "Contractors";
	};

	class Vanguard_Editor_Category_Specialists
	{
		displayName = "Specialists";
	};
};
