class CfgPatches
{
	class RFWC_DragBoat_YourRetextureName
	{
		requiredAddons[]=
		{
			"DZ_Scripts",
            "DZ_Data",
            "DZ_Gear_Containers",
            "DZ_Sounds_Effects",
            "DZ_Vehicles_Wheeled",
            "DZ_Vehicles_Parts",
            "RFWC_Core_mod",
            "RFWC_DragBoat_mod"
		};

		weapons[]={};
	};
};
class CfgMods
{
	class RFWC_DragBoat_YourRetextureName
	{
		dir="RFWC_DragBoat_YourRetextureName";
		picture="";
		action="";
		hideName=0;
		hidePicture=0;
		name="RFWC DragBoat YourRetextureName";
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
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFWC_DragBoat_YourRetextureName/scripts/4_world"
				};
			};
	
		};
	};
};
class CfgVehicles
{
	class RFWC_DragBoat_base;
	class RFWC_DragBoat_YourRetextureName: RFWC_DragBoat_base 
	{
		scope=2;
		displayname="The DragBoat - YourRetextureName";
		descriptionShort="The DragBoat - YourRetextureName";
		hiddenSelections[]=
		{
			"hull_back",
			"hull_top",
			"hull_right",
			"hull_left",
			"hull_paint",
			"seat_lite",
			"seat_dark"
		};
		hiddenSelectionsTextures[]=
		{
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_back_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_top_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_right_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_left_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_paint_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_seat_lite_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_seat_dark_YourRetextureName_ca.paa"
		};
	};

	class RFWC_DragBoat_base_Wreck;
	class RFWC_DragBoat_YourRetextureName_Wreck: RFWC_DragBoat_base_Wreck
	{
		scope = 2;
		displayName = "RFWC DragBoat YourRetextureName Wreck";
		descriptionShort = "RFWC DragBoat YourRetextureName Wreck"; 

		hiddenSelections[]={
			"hull_back", 
			"hull_top", 
			"hull_right", 
			"hull_left", 
			"hull_paint", 
			"seat_lite"
		};
		
		hiddenSelectionsTextures[] = {
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_back_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_top_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_right_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_left_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_hull_paint_YourRetextureName_ca.paa",
			"RFWC_DragBoat_YourRetextureName\data\drag_seat_lite_YourRetextureName_ca.paa"
		};		
	};	
	
};