class CfgPatches
{
	class MAD_test
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Characters_Tops"
		};
		author = "MADness";
		name = "";
		url = "";
	};
};

class CfgVehicles
{
	class Hoodie_ColorBase;
	class Hoodie_mad_co: Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Hoodie from MADness";
		descriptionShort = "";
//příklad
		attachments[]=
		{
			"AmmoBox",
			"Knife",
			"CanisterGasoline",
			"Canteen",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestHolster",
			"MedicalBandage",
			"Chemlight",
			"shoulder",
			"GasCooker",
			"compass",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={10,10};
		itemsCargoSize[]={10,15};
		weight=5500;
		quickBarBonus=4;
		repairableWithKits[]={5,3,2};
		repairCosts[]={10,15,25};
		soundAttType="Military";
		randomQuantity=6;
		absorbency=0;
		varWetMax=0.0;
		heatIsolation=0.7;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
//konec příkladu od PTI



		// link the textures here
		hiddenSelectionsTextures[] =
		{
			"MAD_test\Data\MADtest\Hoodie_mad_co.paa",		// on-ground texture
			"MAD_test\Data\MADtest\Hoodie_mad_co.paa",	// on-character texture
			"MAD_test\Data\MADtest\Hoodie_mad_co.paa",		// on-character texture
		};
	};
};