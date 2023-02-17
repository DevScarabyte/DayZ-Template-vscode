
class CfgPatches
{
	class ModTemplateServer
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","ModTemplateClient"};
	};
};

class CfgMods 
{
	class ModTemplateServer
	{
		name = "ModTemplateServer";
		dir = "ModTemplateServer";
		credits = "";
		author = "";
		creditsJson = "ModTemplate/Server/Scripts/Data/Credits.json";
		versionPath = "ModTemplate/Server/Scripts/Data/Version.hpp";
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
					"ModTemplate/Server/scripts/common",
					"ModTemplate/Server/scripts/1_core"
				};
			};

			class gameScriptModule
			{
				value="";
				files[] = 
				{
					"ModTemplate/Server/scripts/common",
					"ModTemplate/Server/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"ModTemplate/Server/scripts/common",
					"ModTemplate/Server/scripts/4_World"
				};
			};

			class missionScriptModule 
			{
				value="";
				files[] = 
				{
					"ModTemplate/Server/scripts/common",
					"ModTemplate/Server/scripts/5_Mission"
				};
			};
		};
	};
};
