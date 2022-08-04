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
		rotationFlags=17;
		weight=980;
		itemsCargoSize[]={6,7};
		absorbency=0;
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		repairableWithKits[]={8};
		repairCosts[]={25};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class WaterproofBag_ColorBase;
	class MAD_WaterproofBag_Pink: WaterproofBag_ColorBase
	{ 
		scope=2;
		displayName="WaterproofBag MAD";
		descriptionShort="WaterproofBag from MADness";
		rotationFlags=17;
		weight=980;
		itemsCargoSize[]={6,7};
		absorbency=0;
		canBeDigged=1;
		varWetMax=0.249;
		isMeleeWeapon=1;
		heatIsolation=1;
		repairableWithKits[]={5,6};
		repairCosts[]={30,25};
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\pouches\MAD_waterproof.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\pouches\MAD_waterproof.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\pouches\MAD_waterproof.paa",		// on-character texture
		};
	};
	class AmmoBox;
	class MAD_AmmoBox_Pink: AmmoBox
	{ 
		scope=2;
		displayName="AmmoBox MAD";
		descriptionShort="AmmoBox from MADness";
		rotationFlags=17;
		weight=2250;
		itemSize[]={5,4};
		itemsCargoSize[]={8,6};
			attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
						
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=4;
		canBeDigged=1;
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\pouches\300roundbox_MAD_Pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\pouches\300roundbox_MAD_Pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\pouches\300roundbox_MAD_Pink.paa",		// on-character texture
		};
	};/*
	class PlateCarrierVest;
	class MAD_PlateCarrier: PlateCarrierVest
	{
		scope=2;
		displayName="MAD Pink Platecarrier";
		descriptionShort="MAD Pink Platecarrier";
		model="OUTLIVE_server_mod\Data\vesty\plate_carrier_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestBackpack",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		weight=5500;
		itemSize[]={5,4};
		itemsCargoSize[]={5,10};
		varWetMax=0.0;
		heatIsolation=0.2;
		repairableWithKits[]={5,3,2};
		repairCosts[]={10,15,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa"
		};
	class ClothingTypes
		{
			male="OUTLIVE_server_mod\Data\vesty\plate_carrier_m.p3d";
			female="OUTLIVE_server_mod\Data\vesty\plate_carrier_f.p3d";
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OUTLIVE_server_mod\Data\vesty\BallisticVest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OUTLIVE_server_mod\Data\vesty\BallisticVest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"OUTLIVE_server_mod\Data\vesty\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"OUTLIVE_server_mod\Data\vesty\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"OUTLIVE_server_mod\Data\vesty\BallisticVest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.05999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.05;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.05;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.005;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.005;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.05;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.05999999;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MAD_PINK: MAD_PlateCarrier
	{
		scope=2;
		displayName="MAD Pink Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa"
		};
			
	};*/
};
