
class CfgPatches
{
	class ModTemplateClient
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class ModTemplateClient
	{
		name = "ModTemplateClient";
		dir = "ModTemplateClient";
		credits = "";
		author = "";
		creditsJson = "ModTemplate/Client/Scripts/Data/Credits.json";
		versionPath = "ModTemplate/Client/Scripts/Data/Version.hpp";
		inputs = "ModTemplate/Client/Scripts/Data/Inputs.xml";
		type = "mod";
		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class engineScriptModule
			{
				value = "";
				files[] =
				{
					"ModTemplate/Client/scripts/common",
					"ModTemplate/Client/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"ModTemplate/Client/scripts/common",
					"ModTemplate/Client/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"ModTemplate/Client/scripts/common",
					"ModTemplate/Client/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"ModTemplate/Client/scripts/common",
					"ModTemplate/Client/scripts/5_Mission"
				};
			};
		};
	};
};
