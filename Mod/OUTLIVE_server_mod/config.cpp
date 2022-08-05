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
			"DZ_Weapons_Melee",
			"DZ_Gear_Drinks"
		};
		author = "MADness";
		name = "MADness for OUTLIVE DayZ server";
		url = "";
	};
};
class CfgMods
{
	class OUTLIVE_mod
	{
		dir = "Data";
		name = "OUTLIVE_mod";
		hideName = 1;
		hidePicture = 1;
		credits = "MADness";
		author = "MADness";
		authorID = "76561198968762750";
		version = "1.0";
		extra = 0;
		type = "mod";
		/*
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"PTI_Gear/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"PTI_Gear/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"PTI_Gear/Scripts/5_Mission"};
			};
		};
		*/
	};
};

class CfgVehicles
{
// OBLECENIE MIX START
	class Hoodie_ColorBase;
	class Hoodie_mad_co: Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Hoodie from MADness";
		descriptionShort = "";
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\top\Hoodie_mad_co.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\top\Hoodie_mad_co.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\top\Hoodie_mad_co.paa"		// on-character texture
		};
	};
	class GorkaPants_ColorBase;
	class Gorka_mad_co: GorkaPants_ColorBase
	{
		scope = 2;
		displayName = "Pants from MADness";
		descriptionShort = "";
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\kalhoty\mad_gorka_pants.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\kalhoty\mad_gorka_pants.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\kalhoty\mad_gorka_pants.paa"		// on-character texture
		};
	};

// OBLECENIE MIX KONEC
// BATOHY START
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_pink.paa"		// on-character texture
		};
	};
	class MAD_Backpack_Black: HuntingBag
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_black.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_black.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\backpack\mad_hunting_black.paa"		// on-character texture
		};
	};
	class OUTLIVE_Backpack_Black: HuntingBag
	{
		scope = 2;
		displayName = "Backpack Outlive";
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\backpack\outlive_hunting_black.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\backpack\outlive_hunting_black.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\backpack\outlive_hunting_black.paa"		// on-character texture
		};
	};

// BATOHY KONEC
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
			"OUTLIVE_server_mod\Data\pouches\mad_teddybear_pink.paa"		// on-character texture
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
			"OUTLIVE_server_mod\Data\pouches\mad_firstaidkit_pink.paa"		// on-character texture
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

// BARREL START
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
		// itemsCargoSize[]={10,50};
        weight=10000;
        itemSize[]={10,10};
        attachments[]={};
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
		// itemsCargoSize[]={10,50};
        weight=10000;
        itemSize[]={10,10};
        attachments[]={};
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
	class MAD_Tools_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Tools Barrel";
        descriptionShort="BIG TOOLS BARREL";
		itemsCargoSize[]={10,30};
        weight=10000;
        itemSize[]={20,10};
        attachments[]={};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_tools.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_tools.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_tools.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };
	class MAD_Medic_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Medic Barrel";
        descriptionShort="BIG MEDIC BARREL";
		itemsCargoSize[]={10,30};
        weight=10000;
        itemSize[]={20,10};
        attachments[]={};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_medic.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_medic.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_medic.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };
   	class MAD_Food_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Food Barrel";
        descriptionShort="BIG FOOD BARREL";
		itemsCargoSize[]={10,30};
        weight=10000;
        itemSize[]={20,10};
        attachments[]={};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_food.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_food.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_food.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };
    class MAD_Atachment_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Attachment Barrel";
        descriptionShort="BIG ATTACHMENT BARREL";
		itemsCargoSize[]={10,30};
        weight=10000;
        itemSize[]={20,10};
        attachments[]={};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_attachment.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_attachment.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_attachment.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };	
    class MAD_Ammo_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Ammo Barrel";
        descriptionShort="BIG AMMO BARREL";
		itemsCargoSize[]={10,30};
        weight=10000;
        itemSize[]={20,10};
        attachments[]={};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_ammo2.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_ammo2.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_ammo2.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };	
   	class MAD_Ammo2_Barrel: Barrel_ColorBase
    {
        scope=2;
        displayName="MAD Ammo Barrel II";
        descriptionShort="BIG AMMO BARREL";
		itemsCargoSize[]={10,30};
        weight=10000;
        itemSize[]={20,10};
        attachments[]={};
        itemBehaviour=0;
        carveNavmesh=1;
        hiddenSelections[]=
        {
			"camoGround"
		};
        hiddenSelectionsTextures[]=
        {
            "OUTLIVE_server_mod\Data\barely\mad_barrel_ammo.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_ammo.paa",
			"OUTLIVE_server_mod\Data\barely\mad_barrel_ammo.paa"
        };
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};      
    };

// BARREL KONEC	

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
			"OUTLIVE_server_mod\Data\pouches\MAD_protectorcase.paa"		// on-character texture
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
			"OUTLIVE_server_mod\Data\pouches\MAD_waterproof.paa"		// on-character texture
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
			"OUTLIVE_server_mod\Data\pouches\300roundbox_MAD_Pink.paa",		// on-character texture
			"OUTLIVE_server_mod\Data\pouches\300roundbox_MAD_Pink.paa"		// on-character texture
		};
	};

// VESTY START
	class PlateCarrierVest;
	class MAD_PlateCarrier: PlateCarrierVest
	{
		scope=2;
		displayName="MAD Platecarrier";
		descriptionShort="MAD Platecarrier";
		model="\DZ\characters\vests\plate_carrier_g.p3d";
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
		weight=1200;
		itemSize[]={4,4};
		itemsCargoSize[]={6,10};
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
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest_black.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest_black.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest_black.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\plate_carrier_m.p3d";
			female="\DZ\characters\vests\plate_carrier_f.p3d";
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
								"DZ\characters\vests\Data\BallisticVest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\BallisticVest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"
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
	class MAD_Pink_Plate: MAD_PlateCarrier
	{
		scope=2;
		displayName="MAD Pink Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest.paa"
		};
			
	};
	class MAD_Green_Plate: MAD_PlateCarrier
	{
		scope=2;
		displayName="MAD Green Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest_green.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest_green.paa",
			"OUTLIVE_server_mod\Data\vesty\MAD_ballisticvest_green.paa"
		};
			
	};

//VESTY KONEC
	class HikingJacket_ColorBase;
	class MAD_Pink_Jacket: HikingJacket_ColorBase
	{
		scope = 2;
		displayName = "Jacket from MADness";
		descriptionShort = "";
		attachments[]={};
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\top\MAD_shirt_pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\top\MAD_shirt_pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\top\MAD_shirt_pink.paa"		// on-character texture
		};
	};
	class TShirt_ColorBase;
	class MAD_Pink_TShirt: TShirt_ColorBase
	{
		scope = 2;
		displayName = "TShirt from MADness";
		descriptionShort = "";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={6,5};
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\top\MAD_tshirt_black.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\top\MAD_tshirt_black.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\top\MAD_tshirt_black.paa"		// on-character texture
		};
	};
	class CargoPants_ColorBase;
	class MAD_Black_CargoPants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Pants from MADness";
		descriptionShort = "";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={3,3};
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\kalhoty\MAD_cargoPants_black.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\kalhoty\MAD_cargoPants_black.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\kalhoty\MAD_cargoPants_black.paa"		// on-character texture
		};
	};

/*
	class Bottle_Base;
	class MAD_Canteen_Pink: Bottle_Base
		{
		scope=2;
		displayName="MAD Canteen Pink";
		descriptionShort="Canteen from MADness";
		model="\dz\gear\drinks\Canteen.p3d";
		debug_ItemCategory=6;
		inventorySlot[]=
		{
			"Belt_Left"
		};
		weight=250;
		itemSize[]={2,2};
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\pouches\MAD_canteen_pink.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\pouches\MAD_canteen_pink.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\pouches\MAD_canteen_pink.paa"		// on-character texture
		};
	};
*/
	class MilitaryBoots_ColorBase;
	class MAD_Black_MilitaryBoots: MilitaryBoots_ColorBase
	{
		scope = 2;
		displayName = "MilitaryBoots from MADness";
		descriptionShort = "";
		attachments[]=
		{
			"Knife"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={3,1};
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

		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\boots\MAD_MilitaryBoots_black.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\boots\MAD_MilitaryBoots_black.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\boots\MAD_MilitaryBoots_black.paa"		// on-character texture
		};
	};

// BAMBIE START
	class Outlive_Black_CargoPants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Pants Outlive";
		descriptionShort = "";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={4,6};
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\kalhoty\outlive_cargoPants.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\kalhoty\outlive_cargoPants.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\kalhoty\outlive_cargoPants.paa"		// on-character texture
		};
	};

	class Outlive_TShirt: TShirt_ColorBase
	{
		scope = 2;
		displayName = "TShirt Outlive";
		descriptionShort = "";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={4,5};
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
		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\top\tshirt_outlive.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\top\tshirt_outlive.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\top\tshirt_outlive.paa"		// on-character texture
		};
	};

// BAMBIE KONEC

// DOPLNA RIK
/*
class MAD_Black_MilitaryBoots: MilitaryBoots_ColorBase
	{
		scope = 2;
		displayName = "MilitaryBoots from MADness";
		descriptionShort = "";
		attachments[]=
		{
			"Knife"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={3,1};
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

		hiddenSelectionsTextures[] =
		{
			"OUTLIVE_server_mod\Data\boots\MAD_MilitaryBoots_black.paa",		// on-ground texture
			"OUTLIVE_server_mod\Data\boots\MAD_MilitaryBoots_black.paa",	// on-character texture
			"OUTLIVE_server_mod\Data\boots\MAD_MilitaryBoots_black.paa"		// on-character texture
		};
	};
*/
// KONEC
};