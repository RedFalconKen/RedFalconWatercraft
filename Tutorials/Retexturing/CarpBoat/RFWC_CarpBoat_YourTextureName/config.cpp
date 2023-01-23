class CfgPatches
{
	class RFWC_CarpBoat_YourTextureName_mod
	{
		requiredAddons[] = {
			"DZ_Scripts",
			"DZ_Data",
			"DZ_Gear_Containers",
			"DZ_Sounds_Effects",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"RFWC_Core_mod",
			"RFWC_CarpBoat"
		};
	};
};

class CfgMods
{
	class RFWC_CarpBoa_YourTextureNamet_mod
	{
		dir="RFWC_CarpBoat_YourTextureName";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="RedFalcon Watercraft - CarpBoat_YourTextureName";	
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
					"RFWC_CarpBoat_YourTextureName/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFWC_CarpBoat_YourTextureName/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RFWC_CarpBoat_YourTextureName/scripts/5_mission"
				};
			};
		};
	};
};

class CfgVehicles
{
	class RFWC_CarpBoat;
	class RFWC_CarpBoat_Wreck;

	class RFWC_CarpBoat_YourTextureName_Wreck: RFWC_CarpBoat_Wreck
	{
		scope = 2;
		displayName = "RFWC CarpBoat YourTextureName Wreck";
		descriptionShort = "RFWC CarpBoat YourTextureName Wreck"; 
		hiddenSelections[]={"camo", "outboard_motor"};
		hiddenSelectionsTextures[] = {"RFWC_CarpBoat_YourTextureName\data\carpboat_yourtexturename_ca.paa", "RFWC_CarpBoat\data\carpboat_engine_ca.paa"};
		hiddenSelectionsMaterials[] = {"RFWC_CarpBoat\data\carpboat_destruct.rvmat", "RFWC_CarpBoat\data\carpboat_motor_destruct.rvmat"};	
	};	

	
	class RFWC_CarpBoat_YourTextureName: RFWC_CarpBoat
	{
		scope = 2;
		displayname="The CarpBoat_YourTextureName";
		descriptionShort="The CarpBoat_YourTextureName";
		hiddenSelections[]={"camo", "outboard_motor"};
		hiddenSelectionsTextures[] = {"RFWC_CarpBoat_YourTextureName\data\carpboat_yourtexturename_ca.paa", "RFWC_CarpBoat\data\carpboat_engine_ca.paa"};
		hiddenSelectionsMaterials[] = {"RFWC_CarpBoat\data\carpboat.rvmat", "RFWC_CarpBoat\data\carpboat_motor.rvmat"};
	};

};

		