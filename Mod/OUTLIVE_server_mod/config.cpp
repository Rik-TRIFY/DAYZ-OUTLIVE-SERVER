class CfgPatches
{
	class OUTLIVE_server_mod
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
			"OUTLIVE_server_mod\Data\top\Hoodie_mad_co.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\top\Hoodie_mad_co.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\top\Hoodie_mad_co.paa",		// on-character texture
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
			"OUTLIVE_server_mod\Data\kalhoty\mad_gorka_pants.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\kalhoty\mad_gorka_pants.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\kalhoty\mad_gorka_pants.paa",		// on-character texture
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
			"WalkieTalkie",
			"Melee",			
			"VestBackpack"
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
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_pink.paa",		// on-character texture
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
			"OUTLIVE_server_mod\Data\pouches\mad_teddybear_pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\pouches\mad_teddybear_pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\pouches\mad_teddybear_pink.paa",		// on-character texture
		};
	};
	class FirstAidKit;
	class MAD_firstaidkit_pink: FirstAidKit
	{
		scope = 2;
		displayName = "FirstAidKit from MADness";
		descriptionShort = "";
//příklad
		attachments[]=
		{
			"MedicalBandage"
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
		{};
//konec příkladu od PTI



		// link the textures here
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\pouches\mad_firstaidkit_pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\pouches\mad_firstaidkit_pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\pouches\mad_firstaidkit_pink.paa",		// on-character texture
		};
	};
	/*
   class Barrel_ColorBase;
   class OUTLIVE_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="OUTLIVE Barrel";
        descriptionShort="BIG BARREL";
		itemsCargoSize[]={10,50};
        weight=10000;
        itemSize[]={10,10};
        attachments[]=
                {};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\barrel_woodland_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_woodland_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_woodland_co.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };
	*/
   class Barrel_ColorBase;
   class OUTLIVE_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="OUTLIVE Barrel";
        descriptionShort="BIG BARREL";
		itemsCargoSize[]={10,25};
        weight=10000;
        itemSize[]={10,10};
        attachments[]=
                {};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\barrel_woodland_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_woodland_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_woodland_co.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    };
    class MAD_Pink_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Pink Barrel";
        descriptionShort="BIG BARREL";
		itemsCargoSize[]={10,25};
        weight=10000;
        itemSize[]={10,10};
        attachments[]=
                {};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\MAD_pink_barrel_co.paa",
			"OUTLIVE_server_mod\Data\barely\MAD_pink_barrel_co.paa",
			"OUTLIVE_server_mod\Data\barely\MAD_pink_barrel_co.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    };
    class MAD_Black_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Black Barrel";
        descriptionShort="BIG BARREL";
		itemsCargoSize[]={10,25};
        weight=10000;
        itemSize[]={10,10};
        attachments[]=
                {};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_black.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_black.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_black.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    };
    class OUTLIVE_Black_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="OUTLIVE Black Barrel";
        descriptionShort="BIG BARREL";
		itemsCargoSize[]={10,50};
        weight=10000;
        itemSize[]={10,10};
        attachments[]=
                {};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\barrel_OUTLIVE_black_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_OUTLIVE_black_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_OUTLIVE_black_co.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };
    class OUTLIVE_White_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="OUTLIVE White Barrel";
        descriptionShort="BIG BARREL";
		itemsCargoSize[]={10,50};
        weight=10000;
        itemSize[]={10,10};
        attachments[]=
                {};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\barrel_OUTLIVE_black_white_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_OUTLIVE_black_white_co.paa",
			"OUTLIVE_server_mod\Data\barely\barrel_OUTLIVE_black_white_co.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };
	class SmallProtectorCase;
	class MAD_ProtectorCase_Pink: SmallProtectorCase
	{ 
		scope=2;
		displayName="Case MAD";
		descriptionShort="Case from MADness";
		itemsCargoSize[]={6,7};
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
			"OUTLIVE_server_mod\Data\pouches\MAD_protectorcase.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\pouches\MAD_protectorcase.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\pouches\MAD_protectorcase.paa",		// on-character texture
		};
	};
};
