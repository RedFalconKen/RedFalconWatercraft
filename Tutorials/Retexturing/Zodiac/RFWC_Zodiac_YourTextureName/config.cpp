class CfgPatches
{
	class RFWC_Zodiac_YourTextureName_mod
	{
		requiredAddons[] = {
			"DZ_Scripts",
			"DZ_Data",
			"DZ_Gear_Containers",
			"DZ_Sounds_Effects",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"RFWC_Core_mod",
			"RFWC_Zodiac_mod"
		};
	};
};

class CfgMods
{
	class RFWC_Zodiac_YourTextureName_mod
	{
		dir="RFWC_Zodiac_YourTextureName";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="RedFalcon Watercraft - Zodiac_YourTextureName";	
		credits=""; 
		author="";
		authorID="";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"RFWC_Zodiac_YourTextureName/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFWC_Zodiac_YourTextureName/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RFWC_Zodiac_YourTextureName/scripts/5_mission"
				};
			};
		};
	};
};

class CfgVehicles
{
	class RFWC_Zodiac_base;
	class RFWC_Zodiac_Black_Wreck;

	class RFWC_Zodiac_YourTextureName_Wreck: RFWC_Zodiac_Black_Wreck
	{
		scope = 2;
		displayName = "RFWC Zodiac YourTextureName Wreck";
		descriptionShort = "RFWC Zodiac YourTextureName Wreck"; 
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"RFWC_Zodiac_YourTextureName\data\zodiac_yourtexturename_ca.paa"};
		hiddenSelectionsMaterials[] = {"RFWC_Zodiac\data\zodiac_destruct.rvmat"};	
	};	
	
	class RFWC_Zodiac_YourTextureName: RFWC_Zodiac_base
	{
		scope = 2;
		displayname="The Zodiac YourTextureName";
		descriptionShort="The Zodiac - YourTextureName";	
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"RFWC_Zodiac_YourTextureName\data\zodiac_yourtexturename_ca.paa"};
		hiddenSelectionsMaterials[] = {"RFWC_Zodiac\data\zodiac.rvmat"};		
	};
};

		