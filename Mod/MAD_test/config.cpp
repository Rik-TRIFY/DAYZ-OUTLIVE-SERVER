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
			"DZ_Characters_Tops",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Belts",
			"DZ_Characters_Vests",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Gear_Containers",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Melee"
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
		{};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={5,5};
		itemsCargoSize[]={8,5};
		weight=1500;
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
			"MAD_test\Data\top\Hoodie_mad_co.paa",		// on-ground texture
			"MAD_test\Data\top\Hoodie_mad_co.paa",	// on-character texture
			"MAD_test\Data\top\Hoodie_mad_co.paa",		// on-character texture
		};
	};
	class GorkaPants_ColorBase;
	class Gorka_mad_co: GorkaPants_ColorBase
	{
		scope = 2;
		displayName = "Pants from MADness";
		descriptionShort = "";
//příklad
		attachments[]=
		{
			"Knife",
			"VestGrenadeA",
			"VestGrenadeB",
			"MedicalBandage"
		};
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={5,5};
		itemsCargoSize[]={8,5};
		weight=2500;
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
			"MAD_test\Data\kalhoty\mad_gorka_pants.paa",		// on-ground texture
			"MAD_test\Data\kalhoty\mad_gorka_pants.paa",	// on-character texture
			"MAD_test\Data\kalhoty\mad_gorka_pants.paa",		// on-character texture
		};
	};
	class HuntingBag;
	class Backpack_mad_co: HuntingBag
	{
		scope = 2;
		displayName = "Backpack from MADness";
		descriptionShort = "";
//příklad
		attachments[]=
		{
			"Knife",
			"CanisterGasoline",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestHolster",
			"MedicalBandage",
			"Chemlight",
			"shoulder",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
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
			"MAD_test\Data\backpack\mad_hunting_pink.paa.paa",		// on-ground texture
			"MAD_test\Data\backpack\mad_hunting_pink.paa.paa",	// on-character texture
			"MAD_test\Data\backpack\mad_hunting_pink.paa.paa",		// on-character texture
		};
	};

	class Bear_ColorBase;
	class MAD_Bear_ColorBase: Bear_ColorBase
	{ 
		scope=2;
		displayName="Teddy from MADness";
		descriptionShort="Teddy from MADness";
		itemsCargoSize[]={6,5};
		absorbency=0;
		isMeleeWeapon=1;
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
						
		};
		hiddenSelectionsTextures[] =
		{
			"MAD_test\Data\pouches\mad_teddybear_pink.paa",		// on-ground texture
			"MAD_test\Data\pouches\mad_teddybear_pink.paa",	// on-character texture
			"MAD_test\Data\pouches\mad_teddybear_pink.paa",		// on-character texture
		};
	};
	class FirstAidKit;
	class mad_firstaidkit: FirstAidKit
	{
		scope = 2;
		displayName = "FirstAidKit from MADness";
		descriptionShort = "";
//příklad
		attachments[]=
		{
			"MedicalBandage"
		};
		itemInfo[]=
		{};
		itemSize[]={5,5};
		itemsCargoSize[]={8,5};
		weight=2500;
		quickBarBonus=4;
		repairableWithKits[]={5,3,2};
		repairCosts[]={10,15,25};
		soundAttType="Military";
		randomQuantity=6;
		absorbency=0;
		varWetMax=0.0;
		heatIsolation=0.7;
		hiddenSelections[]=
		{};
//konec příkladu od PTI



		// link the textures here
		hiddenSelectionsTextures[] =
		{
			"MAD_test\Data\pouches\mad_firstaidkit_pink.paa",		// on-ground texture
			"MAD_test\Data\pouches\mad_firstaidkit_pink.paa",	// on-character texture
			"MAD_test\Data\pouches\mad_firstaidkit_pink.paa",		// on-character texture
		};
	};



};
