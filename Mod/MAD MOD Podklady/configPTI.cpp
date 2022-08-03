class CfgPatches
{
	class PTI_Gear
	{
		units[]={};
		autor="ElektroVodka";
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
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
			"DZ_Structures",
			"DZ_Scripts",
			"DZ_Data",
			"Mass_Textures"

		};
	};
};
class CfgMods
{
	class PTI_Gear
	{
		dir = "PTI_Gear";
		name = "PTI_Gear";
		hideName = 1;
		hidePicture = 1;
		credits = "ElektroVodka, Hallugenetic";
		author = "ElektroVodka";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
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
	};
};

class CfgSlots 
	{ //Cassette slots for cupboard
		class Slot_PTI_pump_Cassette
		{
			name="PTI_pump_Cassette";
		displayName = "Rare recording of God talking about the Pump";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump1_Cassette
		{
			name="PTI_pump1_Cassette";
			displayName="PTI Theme By Behmen";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump2_Cassette
		{
			name="PTI_pump2_Cassette";
			displayName = "The PTI God's best lines";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump3_Cassette
		{
			name="PTI_pump3_Cassette";
		displayName = "Chernarussian Theme";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump4_Cassette
		{
			name="PTI_pump4_Cassette";
			displayName = "Odracirs Theme";
				ghostIcon = "unknown";
		};
		class Slot_PTI_pump5_Cassette
		{
			name="PTI_pump5_Cassette";
		displayName = "PTI God's Song";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump6_Cassette
		{
			name="PTI_pump6_Cassette";
		displayName = "Partypooper - Fake Friday";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump7_Cassette
		{
			name="PTI_pump7_Cassette";
		displayName = "PTI Tunes Mottled Iron";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump8_Cassette
		{
			name="PTI_pump8_Cassette";
		displayName = "PTI Tunes ToTheClouds";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump9_Cassette
		{
			name="PTI_pump9_Cassette";
		displayName = "PTI Aloaa's Greatest #1";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump10_Cassette
		{
			name="PTI_pump10_Cassette";
		displayName = "PTI Aloaa's Greatest #2";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump11_Cassette
		{
			name="PTI_pump11_Cassette";
		displayName = "PTI Tunes - Sprinkle";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump12_Cassette
		{
			name="PTI_pump12_Cassette";
		displayName = "My Cheese - Fake Friday";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump13_Cassette
		{
			name="PTI_pump13_Cassette";
		displayName = "Opa's tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump14_Cassette
		{
			name="PTI_pump14_Cassette";
		displayName = "Arabic trance Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump15_Cassette
		{
			name="PTI_pump15_Cassette";
		displayName = "S3RL Hentai BB Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump16_Cassette
		{
			name="PTI_pump16_Cassette";
		displayName = "Spongebob Trance Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump17_Cassette
		{
			name="PTI_pump17_Cassette";
		displayName = "Pippi Langstrumpf V2 Trance Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump18_Cassette
		{
			name="PTI_pump18_Cassette";
		displayName = "Pippi Langstrumpf V1 Trance Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump19_Cassette
		{
			name="PTI_pump19_Cassette";
		displayName = "Pingu Trap Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump20_Cassette
		{
			name="PTI_pump20_Cassette";
		displayName = "Star Wars Cantina Hardstyle";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump21_Cassette
		{
			name="PTI_pump21_Cassette";
		displayName = "PoC Hardstyle Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump22_Cassette
		{
			name="PTI_pump22_Cassette";
		displayName = "L'avonturier Hardstyle Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump23_Cassette
		{
			name="PTI_pump23_Cassette";
		displayName = "Sky Full of stars Hardstyle Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump24_Cassette
		{
			name="PTI_pump24_Cassette";
		displayName = "Blood Of Rage Hardcore tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump25_Cassette
		{
			name="PTI_pump25_Cassette";
		displayName = "Sacre Bob Hardcore Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump26_Cassette
		{
			name="PTI_pump26_Cassette";
		displayName = "Coffin Dance Techno Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump27_Cassette
		{
			name="PTI_pump27_Cassette";
		displayName = "Western Chill Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump28_Cassette
		{
			name="PTI_pump28_Cassette";
		displayName = "Alpace Chill Tape";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump29_Cassette
		{
			name="PTI_pump29_Cassette";
		displayName = "Agonoize";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump30_Cassette
		{
			name="PTI_pump30_Cassette";
		displayName = "Empty Pages - Shane";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump31_Cassette
		{
			name="PTI_pump31_Cassette";
		displayName = "Fear in Takistan - Behmen";
			ghostIcon = "unknown";
		};
		class Slot_PTI_pump32_Cassette
		{
			name="PTI_pump32_Cassette";
		displayName = "In Waves of Tears - Behmen";
			ghostIcon = "unknown";
		};
		
		class Slot_PTI_creepy1_Cassette
		{
			name="PTI_creepy1_Cassette";
		displayName = "Creepy #1";
			ghostIcon = "unknown";
		};
		class Slot_PTI_creepy2_Cassette
		{
			name="PTI_creepy2_Cassette";
		displayName = "Creepy #2";
			ghostIcon = "unknown";
		};
		class Slot_PTI_creepy3_Cassette
		{
			name="PTI_creepy3_Cassette";
		displayName = "Creepy #3";
			ghostIcon = "unknown";
		};
		class Slot_PTI_creepy4_Cassette
		{
			name="PTI_creepy4_Cassette";
		displayName = "Creepy #4";
			ghostIcon = "unknown";
		};
		class Slot_PTI_creepy5_Cassette
		{
			name="PTI_creepy5_Cassette";
		displayName = "Creepy #5";
			ghostIcon = "unknown";
		};
		class Slot_PTI_creepy6_Cassette
		{
			name="PTI_creepy6_Cassette";
		displayName = "Creepy #6";
			ghostIcon = "unknown";
		};
		class Slot_PTI_creepy7_Cassette
		{
			name="PTI_creepy7_Cassette";
		displayName = "Creepy #7";
			ghostIcon = "unknown";
		};
				class Slot_PTI_meme_Cassette
		{
			name="PTI_meme_Cassette";
		displayName = "meme";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme1_Cassette
		{
			name="PTI_meme1_Cassette";
		displayName = "meme #1";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme2_Cassette
		{
			name="PTI_meme2_Cassette";
		displayName = "meme #2";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme3_Cassette
		{
			name="PTI_meme3_Cassette";
		displayName = "meme #3";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme4_Cassette
		{
			name="PTI_meme4_Cassette";
		displayName = "meme #4";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme5_Cassette
		{
			name="PTI_meme5_Cassette";
		displayName = "meme #5";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme6_Cassette
		{
			name="PTI_meme6_Cassette";
		displayName = "meme #6";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme7_Cassette
		{
			name="PTI_meme7_Cassette";
		displayName = "meme #7";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme8_Cassette
		{
			name="PTI_meme8_Cassette";
		displayName = "meme #8";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme9_Cassette
		{
			name="PTI_meme9_Cassette";
		displayName = "meme #9";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme10_Cassette
		{
			name="PTI_meme10_Cassette";
		displayName = "meme #10";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme11_Cassette
		{
			name="PTI_meme11_Cassette";
		displayName = "meme #11";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme12_Cassette
		{
			name="PTI_meme12_Cassette";
		displayName = "meme #12";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme13_Cassette
		{
			name="PTI_meme13_Cassette";
		displayName = "meme #13";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme14_Cassette
		{
			name="PTI_meme14_Cassette";
		displayName = "meme #14";
			ghostIcon = "unknown";
		};
		class Slot_PTI_meme15_Cassette
		{
			name="PTI_meme15_Cassette";
		displayName = "meme #15";
			ghostIcon = "unknown";
		};
			class ZOS_bandit1_Cassette
		{
			name="ZOS_bandit1_Cassette";
		displayName = "Bandit Cassette 1";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_bandit2_Cassette
		{
			name="ZOS_bandit2_Cassette";
		displayName = "Bandit Cassette 2";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_bandit3_Cassette
		{
			name="ZOS_bandit3_Cassette";
		displayName = "Bandit Cassette 3";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_bandit4_Cassette
		{
			name="ZOS_bandit4_Cassette";
		displayName = "Bandit Cassette 4";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_derebas1_Cassette
		{
			name="ZOS_derebas1_Cassette";
		displayName = "Stalker songs and anecdotes  №1";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_derebas2_Cassette
		{
			name="ZOS_derebas2_Cassette";
		displayName = "Stalker songs and anecdotes  №2";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_derebas3_Cassette
		{
			name="ZOS_derebas3_Cassette";
		displayName = "Stalker songs and anecdotes  №3";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_derebas4_Cassette
		{
			name="ZOS_derebas4_Cassette";
		displayName = "Stalker songs and anecdotes  №4";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_dolg1_Cassette
		{
			name="ZOS_dolg1_Cassette";
		displayName = "Agitation and songs of DOLGA  №1";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_dolg2_Cassette
		{
			name="ZOS_dolg2_Cassette";
		displayName = "Agitation and songs of DOLGA  №2";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_dolg3_Cassette
		{
			name="ZOS_dolg3_Cassette";
		displayName = "Agitation and songs of DOLGA №3";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_freedom1_Cassette
		{
			name="ZOS_freedom1_Cassette";
		displayName = "Agitation and songs of Svoboda  №1";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_freedom2_Cassette
		{
			name="ZOS_freedom2_Cassette";
		displayName = "Agitation and songs of Svoboda  №2";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_freedom3_Cassette
		{
			name="ZOS_freedom3_Cassette";
		displayName = "Agitation and songs of Svoboda  №3";
			ghostIcon = "unknown";
		};
		class Slot_ZOS_bobmarley_Cassette
		{
			name="ZOS_bobmarley_Cassette";
		displayName = "Bob Marley";
			ghostIcon = "unknown";
		};
		// dif slots
		class Slot_Dildo
		{
			name="Dildo";
			displayName="Dildo";
			ghostIcon = "unknown";
		};
		class Slot_PTI_Radio
		{
			name="PTI_Radio";
			displayName="Radio/Jukebox";
			ghostIcon = "unknown";
		};
		class Slot_PTI_Radio2
		{
			name="PTI_Radio2";
			displayName="Radio/Jukebox";
			ghostIcon = "unknown";
		};
		class Slot_DB1
		{
			name="MassDB1";
			displayName="Dragonball #1";
			ghostIcon = "unknown";
		};
		class Slot_DB2
		{
			name="MassDB2";
			displayName="Dragonball #2";
			ghostIcon = "unknown";
		};
		class Slot_DB3
		{
			name="MassDB3";
			displayName="Dragonball #3";
			ghostIcon = "unknown";
		};
		class Slot_DB4
		{
			name="MassDB4";
			displayName="Dragonball #4";
			ghostIcon = "unknown";
		};
		class Slot_DB5
		{
			name="MassDB5";
			displayName="Dragonball #5";
			ghostIcon = "unknown";
		};
		class Slot_DB6
		{
			name="MassDB6";
			displayName="Dragonball #6";
			ghostIcon = "unknown";
		};
		class Slot_DB7
		{
			name="MassDB7";
			displayName="Dragonball #7";
		ghostIcon = "unknown";
		};
		class Slot_Shenron
		{
			name="Massshenron";
			displayName="Shenron";
		ghostIcon = "unknown";
		};
		class Slot_MedicalBandagePTI
		{
			name="MedicalBandagePTI";
			displayName="Bandages";
		ghostIcon = "Bandage";
		};
	};

class cfgVehicles
{	
	
	
	class MilitaryBelt;
	class PTIBelt_Base: MilitaryBelt
	{
		scope=0;
		displayName="PTI Military Belt";
		descriptionShort="PTI Military Belt";
		model="\DZ\characters\belts\mil_belt_g.p3d";
		attachments[]=
		{
			"Belt_Back",
			"Belt_Right",
			"Belt_Left",
			"WalkieTalkie",
			"VestBackpack",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"VestHolster",
			"VestPouch"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		itemSize[]={3,1};
		weight=20;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		lootCategory="Crafted";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
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
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\mil_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\mil_belt_m.p3d";
			female="\DZ\characters\belts\mil_belt_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTIBeltB: PTIBelt_Base
	{
		scope=2;
		displayName="PTI Belt in Black";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\belts\PTIBeltB.paa",
			"\PTI_Gear\data\belts\PTIBeltB.paa",
			"\PTI_Gear\data\belts\PTIBeltB.paa"
		};
	};
	class PTIBeltP: PTIBelt_Base
	{
		scope=2;
		displayName="PTI Belt in Pink";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\belts\PTIBeltP.paa",
			"\PTI_Gear\data\belts\PTIBeltP.paa",
			"\PTI_Gear\data\belts\PTIBeltP.paa"
		};
	};
	class PTIBeltW: PTIBelt_Base
	{
		scope=2;
		displayName="PTI Belt in White";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\belts\PTIBeltW.paa",
			"\PTI_Gear\data\belts\PTIBeltW.paa",
			"\PTI_Gear\data\belts\PTIBeltW.paa"
		};
	};
	class PlateCarrierVest;
	class PTIBV_Base: PlateCarrierVest
	{
		scope=2;
		displayName="PTI Platecarrier";
		descriptionShort="PTI Platecarrier";
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
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa"
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
	class PTIBV: PTIBV_Base
	{
		scope=2;
		displayName="PTI Tan Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa"
		};
			
	};
	class PTIBV_Mario: PTIBV_Base
	{
		scope=2;
		displayName="Mario's Tan Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV_mario.paa",
			"PTI_Gear\data\vests\PTIBV_mario.paa",
			"PTI_Gear\data\vests\PTIBV_mario.paa"
		};
			
	};
	class PTIBVB: PTIBV_Base
	{
		scope=2;
		displayName="PTI Black Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVB.paa",
			"PTI_Gear\data\vests\PTIBVB.paa",
			"PTI_Gear\data\vests\PTIBVB.paa"
		};
		
	};
	class PTIBVP: PTIBV_Base
	{
		scope=2;	
		displayName="PTI Pink Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVP.paa",
			"PTI_Gear\data\vests\PTIBVP.paa",
			"PTI_Gear\data\vests\PTIBVP.paa"
		};
		
	};
	class PTIBVP1: PTIBV_Base
	{
		scope=2;
		displayName="PTI Pink Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVP1.paa",
			"PTI_Gear\data\vests\PTIBVP1.paa",
			"PTI_Gear\data\vests\PTIBVP1.paa"
		};
		
	};
	class PTIBVPU: PTIBV_Base
	{
		scope=2;
		displayName="PTI Purple Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVPU.paa",
			"PTI_Gear\data\vests\PTIBVPU.paa",
			"PTI_Gear\data\vests\PTIBVPU.paa"
		};
		
	};
	class PTIBVR: PTIBV_Base
	{
		scope=2;
		displayName="PTI Red Platecarrier";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVR.paa",
			"PTI_Gear\data\vests\PTIBVR.paa",
			"PTI_Gear\data\vests\PTIBVR.paa"
		};
		
	};
	class PTIBVW: PTIBV_Base
	{
		scope=2;
		displayName="PTI Platecarrier in White";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVW.paa",
			"PTI_Gear\data\vests\PTIBVW.paa",
			"PTI_Gear\data\vests\PTIBVW.paa"
		};
		
	};
	class PTIBVOG: PTIBV_Base
	{
		scope=2;
		displayName="PTI Platecarrier in OD-Green";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVOG.paa",
			"PTI_Gear\data\vests\PTIBVOG.paa",
			"PTI_Gear\data\vests\PTIBVOG.paa"
		};
		
	};
	class PlateCarrierHolster;
	class PTI_PlateCarrierHolster_Base: PlateCarrierHolster
	{
		scope=2;
		displayName="PTI Plate Carrier holster";
		descriptionShort="PTI Plate Carrier holster";
		model="\DZ\characters\vests\plate_carrier_holster_g.p3d";
		inventorySlot[]=
		{
			"VestHolster",
			"Belt_Right"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=110;
		itemSize[]={2,3};
		attachments[]=
		{
			"Pistol"
		};
		varWetMax=0.79000002;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					transferToAttachmentsCoef=0;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\data\ballisticvest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\data\ballisticvest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\data\ballisticvest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\data\ballisticvest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\data\ballisticvest_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\chest_holster_m.p3d";
			female="\DZ\characters\vests\chest_holster_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_PlateCarrierHolster: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI Tan Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa"
		};
	};
	class PTI_PlateCarrierHolster_Mario: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="Mario's Tan Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV_mario.paa",
			"PTI_Gear\data\vests\PTIBV_mario.paa",
			"PTI_Gear\data\vests\PTIBV_mario.paa"
		};
	};
	class PTI_PlateCarrierHolster_P: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI Pink Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVP.paa",
			"PTI_Gear\data\vests\PTIBVP.paa",
			"PTI_Gear\data\vests\PTIBVP.paa"
		};
		
	};
	class PTI_PlateCarrierHolster_P1: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI Pink Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVP1.paa",
			"PTI_Gear\data\vests\PTIBVP1.paa",
			"PTI_Gear\data\vests\PTIBVP1.paa"
		};
		
	};
	class PTI_PlateCarrierHolster_B: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI Black Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVB.paa",
			"PTI_Gear\data\vests\PTIBVB.paa",
			"PTI_Gear\data\vests\PTIBVB.paa"
		};
		
	};
	class PTI_PlateCarrierHolster_PU: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI Purple Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVPU.paa",
			"PTI_Gear\data\vests\PTIBVPU.paa",
			"PTI_Gear\data\vests\PTIBVPU.paa"
		};
		
	};
	class PTI_PlateCarrierHolster_R: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI Red Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVR.paa",
			"PTI_Gear\data\vests\PTIBVR.paa",
			"PTI_Gear\data\vests\PTIBVR.paa"
		};
		
	};
	class PTI_PlateCarrierHolster_W: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI White Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVW.paa",
			"PTI_Gear\data\vests\PTIBVW.paa",
			"PTI_Gear\data\vests\PTIBVW.paa"
		};
		
	};
	class PTI_PlateCarrierHolster_OG: PTI_PlateCarrierHolster_Base
	{
		scope=2;
		displayName="PTI OD Green Platecarrier Holster";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVOG.paa",
			"PTI_Gear\data\vests\PTIBVOG.paa",
			"PTI_Gear\data\vests\PTIBVOG.paa"
		};
		
	};
	class Container_Base;
	//Soviet Cabinet by ev
	class PTI_Cassette_Cupboard: Container_Base
	{
		scope=2;
		displayName="PTI Cassette Cupboard";
		descriptionShort="PTI Cupboard to store your whole PTI cassette collection";
		model="\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		inventorySlot[]={};
		weight=10000;
		itemSize[]={10,5};
		attachments[]=
				{
					"PTI_Radio",
					"PTI_Radio2",
					"PTI_pump_Cassette",
					"PTI_pump1_Cassette",
					"PTI_pump2_Cassette",
					"PTI_pump3_Cassette",
					"PTI_pump4_Cassette",
					"PTI_pump5_Cassette",
					"PTI_pump6_Cassette",
					"PTI_pump7_Cassette",
					"PTI_pump8_Cassette",
					"PTI_pump9_Cassette",
					"PTI_pump10_Cassette",
					"PTI_pump11_Cassette",
					"PTI_pump12_Cassette",
					"PTI_pump13_Cassette",
					"PTI_pump14_Cassette",
					"PTI_pump15_Cassette",
					"PTI_pump16_Cassette",
					"PTI_pump17_Cassette",
					"PTI_pump18_Cassette",
					"PTI_pump19_Cassette",
					"PTI_pump20_Cassette",
					"PTI_pump21_Cassette",
					"PTI_pump22_Cassette",
					"PTI_pump23_Cassette",
					"PTI_pump24_Cassette",
					"PTI_pump25_Cassette",
					"PTI_pump26_Cassette",
					"PTI_pump27_Cassette",
					"PTI_pump28_Cassette",
					"PTI_pump29_Cassette",
					"PTI_pump30_Cassette",
					"PTI_pump31_Cassette",
					"PTI_pump32_Cassette",
					"PTI_creepy1_Cassette",
					"PTI_creepy2_Cassette",
					"PTI_creepy3_Cassette",
					"PTI_creepy4_Cassette",
					"PTI_creepy5_Cassette",
					"PTI_creepy6_Cassette",
					"PTI_creepy7_Cassette",
					"PTI_meme_Cassette",
					"PTI_meme1_Cassette",
					"PTI_meme2_Cassette",
					"PTI_meme3_Cassette",
					"PTI_meme4_Cassette",
					"PTI_meme5_Cassette",
					"PTI_meme6_Cassette",
					"PTI_meme7_Cassette",
					"PTI_meme8_Cassette",
					"PTI_meme9_Cassette",
					"PTI_meme10_Cassette",
					"PTI_meme11_Cassette",
					"PTI_meme12_Cassette",
					"PTI_meme13_Cassette",
					"PTI_meme14_Cassette",
					"PTI_meme15_Cassette",
					"ZOS_bandit1_Cassette",
					"ZOS_bandit2_Cassette",
					"ZOS_bandit3_Cassette",
					"ZOS_bandit4_Cassette",
					"ZOS_derebas1_Cassette",
					"ZOS_derebas2_Cassette",
					"ZOS_derebas3_Cassette",
					"ZOS_derebas4_Cassette",
					"ZOS_dolg1_Cassette",
					"ZOS_dolg2_Cassette",
					"ZOS_dolg3_Cassette",
					"ZOS_freedom1_Cassette",
					"ZOS_freedom2_Cassette",
					"ZOS_freedom3_Cassette",
					"ZOS_bobmarley_Cassette"
				};
		itemBehaviour=0;
		carveNavmesh=1;
		canBeDigged=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4000;
					transferToAttachmentsCoef=0.0;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\PTI_Gear\data\items\baseitems\SovietCabinet\PTI_Cupboard.rvmat"
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
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={0,0};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_CarrierPouches_Base: Container_Base
	{
		scope = 2;
		displayName = "PTI Carrier Pouches";
		descriptionShort = "PTI Carrier Pouches";
		model = "\dz\characters\vests\plate_carrier_pouches_g.p3d";
		inventorySlot = "VestPouch";
		weight = 250;
		itemSize[] = {6,4};
		itemsCargoSize[] = {7,6};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa"
		};
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\PlateCarrier.rvmat"}},{0.5,{"DZ\gear\containers\data\PlateCarrier_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\PlateCarrier_destruct.rvmat"}}};
				};
			};
		};
	};
	class PTI_CarrierPouches: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI Tan Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa",
			"PTI_Gear\data\vests\PTIBV.paa"
		};
		
	};
	class PTI_CarrierPouches_Mario: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="Mario's Tan Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBV_mario.paa",
			"PTI_Gear\data\vests\PTIBV_mario.paa",
			"PTI_Gear\data\vests\PTIBV_mario.paa"
		};
		
	};
	class PTI_CarrierPouches_P: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI Pink Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVP.paa",
			"PTI_Gear\data\vests\PTIBVP.paa",
			"PTI_Gear\data\vests\PTIBVP.paa"
		};
		
	};
	class PTI_CarrierPouches_P1: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI Pink Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVP1.paa",
			"PTI_Gear\data\vests\PTIBVP1.paa",
			"PTI_Gear\data\vests\PTIBVP1.paa"
		};
		
	};
	class PTI_CarrierPouches_B: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI Black Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVB.paa",
			"PTI_Gear\data\vests\PTIBVB.paa",
			"PTI_Gear\data\vests\PTIBVB.paa"
		};
		
	};
	class PTI_CarrierPouches_PU: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI Purple Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVPU.paa",
			"PTI_Gear\data\vests\PTIBVPU.paa",
			"PTI_Gear\data\vests\PTIBVPU.paa"
		};
		
	};
	class PTI_CarrierPouches_R: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI Red Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVR.paa",
			"PTI_Gear\data\vests\PTIBVR.paa",
			"PTI_Gear\data\vests\PTIBVR.paa"
		};
		
	};
	class PTI_CarrierPouches_W: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI White Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVW.paa",
			"PTI_Gear\data\vests\PTIBVW.paa",
			"PTI_Gear\data\vests\PTIBVW.paa"
		};
		
	};
	class PTI_CarrierPouches_OG: PTI_CarrierPouches_Base
	{
		scope=2;
		displayName="PTI OD Green Platecarrier Pouches";		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIBVOG.paa",
			"PTI_Gear\data\vests\PTIBVOG.paa",
			"PTI_Gear\data\vests\PTIBVOG.paa"
		};
		
	};
	
class ReflexVest;
class PTIReflexVest: ReflexVest
	{
		scope=2;
		displayName="P.T.I. Logging ReflexVest";
		descriptionShort="P.T.I. Logging ReflexVest";
		model="\DZ\characters\vests\orange_vest_g.p3d";
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"Shoulder",
			"Axe1",
			"Hatchet",
			"Saw1",
			"Hammer1",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs",
			"Material_WoodenLogs",
			"Material_WoodenPlanks",
			"Material_L1_WoodenPlanks",
			"Material_L1W1_WoodenPlanks",
			"Material_L1W2_WoodenPlanks",
			"Stones",
			"Material_MetalSheets",
			"Material_L1W1_MetalSheets"
			
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=200;
		itemSize[]={3,2};
		varWetMax=0.0;
		heatIsolation=0.7;
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
			"PTI_Gear\data\vests\PTILV.paa",
			"PTI_Gear\data\vests\PTILV.paa",
			"PTI_Gear\data\vests\PTILV.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\orange_vest_m.p3d";
			female="\DZ\characters\vests\orange_vest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\orange_vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\orange_vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\orange_vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\orange_vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\orange_vest_destruct.rvmat"
							}
						}
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
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTILoggingVestYellow: PTIReflexVest
	{
		scope=2;
		displayName="P.T.I. Yellow Logging Hi-Viz Vest";
		descriptionShort="P.T.I. Yellow Logging Hi-Viz Vest";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTILVY.paa",
			"PTI_Gear\data\vests\PTILVY.paa",
			"PTI_Gear\data\vests\PTILVY.paa"
		};
		
	};
	class PTILoggingVestPink: PTIReflexVest
	{
		scope=2;
		displayName="P.T.I. Pink Logging Hi-Viz Vest";
		descriptionShort="P.T.I. Pink Logging Hi-Viz Vest";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTILVP.paa",
			"PTI_Gear\data\vests\PTILVP.paa",
			"PTI_Gear\data\vests\PTILVP.paa"
		};
		
	};
	class PTIRoadsideVest: ReflexVest
	{
		scope=2;
		displayName="P.T.I. Yellow Roadside-Assistance Hi-Viz Vest";
		descriptionShort="P.T.I. Yellow Roadside-Assistance Hi-Viz Vest";
		model="\DZ\characters\vests\orange_vest_g.p3d";
		itemsCargoSize[]={3,3};
		inventorySlot[]=
		{
			"Vest"
		};
		attachments[]=
		{
			"Shoulder",
			"CarRadiator",
			"CarBattery",
			"TruckBattery",
			"SparkPlug",
			"CookingEquipment",
			"CanisterGasoline"		
			
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=200;
		itemSize[]={3,2};
		varWetMax=0.0;
		heatIsolation=0.7;
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
			"PTI_Gear\data\vests\PTIRAV.paa",
			"PTI_Gear\data\vests\PTIRAV.paa",
			"PTI_Gear\data\vests\PTIRAV.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\vests\orange_vest_m.p3d";
			female="\DZ\characters\vests\orange_vest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\orange_vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\orange_vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\orange_vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\orange_vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\orange_vest_destruct.rvmat"
							}
						}
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
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTIRoadsideVestPink: PTIRoadsideVest
	{
		scope=2;
		displayName="P.T.I. Pink Roadside-Assistance ReflexVest";
		descriptionShort="P.T.I. Pink Roadside-Assistance ReflexVest";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\vests\PTIRAVP.paa",
			"PTI_Gear\data\vests\PTIRAVP.paa",
			"PTI_Gear\data\vests\PTIRAVP.paa"
		};
		
	};
			
	class HuntingBag;
	class PTIBAGB: HuntingBag
	{
		displayName="P.T.I Black IvanBag";
		descriptionShort="Based on the all-time DayZ Classic, this backpack should suit in most of your needs. Highly sought after but only wearable by the Real Ivan";
		scope=2;
		attachments[]=
		{
			"AmmoBox",
			"Knife",
			"Shovel",
			"CanisterGasoline",
			"Canteen",
			"LeatherKnifeSheath",
			"NylonKnifeSheath",
			"MassTacticalBag",
			"VestBackpack",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"VestHolster",
			"VestPouch",
			"MedicalBandage",
			"Belt_Left",
			"CamoNet",
			"Chemlight",
			"CookingEquipment",
			"shoulder",
			"Melee",			
            "Dildo",
			"GasCooker",
			"compass",
			"Tripod",
			"Material_MetalSheets",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		itemSize[]={5,5};
		itemsCargoSize[]={10,13};
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
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIBAGB.paa",
			"PTI_Gear\data\gear\PTIBAGB.paa",
			"PTI_Gear\data\gear\PTIBAGB.paa"
		};
	};
	class PTIBAGP: PTIBAGB
	{
		displayName="P.T.I Pink IvanBag";
		descriptionShort="Based on the all-time DayZ Classic, this backpack should suit in most of your needs. Highly sought after but only wearable by the Real Ivan";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIBAGP.paa",
			"PTI_Gear\data\gear\PTIBAGP.paa",
			"PTI_Gear\data\gear\PTIBAGP.paa"
		};
	};
	
	class PTIBAGG: PTIBAGB
	{
		displayName="P.T.I Green IvanBag";
		descriptionShort="Based on the all-time DayZ Classic, this backpack should suit in most of your needs. Highly sought after but only wearable by the Real Ivan";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIBAGG.paa",
			"PTI_Gear\data\gear\PTIBAGG.paa",
			"PTI_Gear\data\gear\PTIBAGG.paa"
		};
	};
	class PTIBAGW: PTIBAGB
	{
		displayName="P.T.I White IvanBag ";
		descriptionShort="Based on the all-time DayZ Classic, this backpack should suit in most of your needs. Highly sought after but only wearable by the Real Ivan";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIBAGW.paa",
			"PTI_Gear\data\gear\PTIBAGW.paa",
			"PTI_Gear\data\gear\PTIBAGW.paa"
		};
	};
	class PTIBAGR: PTIBAGB
	{
		displayName="P.T.I Red IvanBag";
		descriptionShort="Based on the all-time DayZ Classic, this backpack should suit in most of your needs. Highly sought after but only wearable by the Real Ivan";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
				hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIBAGR.paa",
			"PTI_Gear\data\gear\PTIBAGR.paa",
			"PTI_Gear\data\gear\PTIBAGR.paa"
		};
	};
	//Gym Carry bag
	class PTI_GymCarryBag: PTIBAGB
	{
		scope = 0;
		displayName = "PTI Gym CarryBag";
		descriptionShort = "Lightweight gym bag. Based on the MSP medbag by Helkhiana. Comfortably supports any load that fits in.";
		model = "\MuchStuffPack\MSP_Clothing_Data\medicbag\medicbag_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[]=
		{
			"AmmoBox",
			"Knife",
			"Shovel",
			"CanisterGasoline",
			"Canteen",
			"LeatherKnifeSheath",
			"NylonKnifeSheath",
			"MassTacticalBag",
			"VestBackpack",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"VestHolster",
			"VestPouch",
			"MedicalBandage",
			"Belt_Left",
			"CamoNet",
			"Chemlight",
			"CookingEquipment",
			"shoulder",
			"Melee",			
            "Dildo",
			"GasCooker",
			"compass",
			"Tripod",
			"Material_MetalSheets",
			"WalkieTalkie"
		};
		rotationFlags = 2;
		weight = 1300;
		itemSize[] = {5,5};
		itemsCargoSize[] = {10,15};
		varWetMax = 0.0;
		heatIsolation = 0.0;
		repairableWithKits[]={5,3,2};
		repairCosts[]={10,15,25};
		soundAttType = "Outdoor";
		randomQuantity = 3;
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\bags\pti_gymcarrybag_black_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\bags\pti_gymcarrybag.rvmat"};
		class ClothingTypes
		{
			male = "\MuchStuffPack\MSP_Clothing_Data\medicbag\medicbag_m.p3d";
			female = "\MuchStuffPack\MSP_Clothing_Data\medicbag\medicbag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLevels[] = {{1.0,{"PTI_Gear\data\bags\pti_gymcarrybag.rvmat"}},{0.7,{"PTI_Gear\data\bags\pti_gymcarrybag.rvmat"}},{0.5,{"PTI_Gear\data\bags\pti_gymcarrybag_damage.rvmat"}},{0.3,{"PTI_Gear\data\bags\pti_gymcarrybag_damage.rvmat"}},{0.0,{"PTI_Gear\data\bags\pti_gymcarrybag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymCarryBag_Black: PTI_GymCarryBag
	{
		scope = 2;
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\bags\pti_gymcarrybag_black_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\bags\pti_gymcarrybag.rvmat"};
	};
	class PTI_GymCarryBag_Pink: PTI_GymCarryBag
	{
		scope = 2;
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\bags\pti_gymcarrybag_pink_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\bags\pti_gymcarrybag.rvmat"};
		
	};
	class PTI_GymCarryBag_White: PTI_GymCarryBag
	{
		scope = 2;
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\bags\pti_gymcarrybag_white_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\bags\pti_gymcarrybag.rvmat"};
	};
	
	class Hoodie_ColorBase;
	class PTISHO: Hoodie_ColorBase
	{
		displayName="P.T.I Hoodie Black";
		descriptionShort="The P.T.I. Sly Hoodie";
		scope=2;
		attachments[]={};
		itemInfo[] = {"Clothing","Body"};
		weight = 850;
		itemSize[] = {3,3};
		itemsCargoSize[] = {10,6};
		quickBarBonus = 1;
		absorbency = 0;
		varWetMax=0.0;
		heatIsolation = 0.5;
		ragQuantity = 4;
		repairableWithKits[]={5,3,2};
		repairCosts[]={10,15,25};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLevels[] = {{ 1.0,{ "DZ\characters\tops\Data\hoodie.rvmat","DZ\characters\tops\Data\Hoodie_m_grd.rvmat" } },{ 0.7,{ "DZ\characters\tops\Data\hoodie.rvmat","DZ\characters\tops\Data\Hoodie_m_grd.rvmat" } },{ 0.5,{ "DZ\characters\tops\Data\hoodie_damage.rvmat","DZ\characters\tops\Data\Hoodie_m_grd_damage.rvmat" } },{ 0.3,{ "DZ\characters\tops\Data\hoodie_damage.rvmat","DZ\characters\tops\Data\Hoodie_m_grd_damage.rvmat" } },{ 0.0,{ "DZ\characters\tops\Data\hoodie_destruct.rvmat","DZ\characters\tops\Data\Hoodie_m_grd_destruct.rvmat" } }};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.1;
					};
					class Shock
					{
						damage = 0.05;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.01;
					};
				};
			};
		};
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\gear\PTISHO.paa",
			"PTI_Gear\data\gear\PTISHO.paa",
			"PTI_Gear\data\gear\PTISHO.paa"
		};
	};
	class PTISHOW: PTISHO
	{
		displayName="P.T.I Hoodie White";
		descriptionShort="The P.T.I. Sly Hoodie in white";
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTISHOW.paa",
			"PTI_Gear\data\gear\PTISHOW.paa",
			"PTI_Gear\data\gear\PTISHOW.paa"
		};
	};
	class PTISHOP: PTISHO
	{
		displayName="P.T.I Hoodie Pink";
		descriptionShort="The P.T.I. Sly Hoodie in pink";
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTISHOP.paa",
			"PTI_Gear\data\gear\PTISHOP.paa",
			"PTI_Gear\data\gear\PTISHOP.paa"
		};
	};
	class PTISHO_DZN: PTISHO
	{
		displayName="P.T.I Hoodie Black";
		descriptionShort="The Insulated and water-resistant P.T.I. Sly Hoodie in Black";
		scope=2;
		absorbency = 0;
		varWetMax=0.0;
		heatIsolation = 1.0;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTISHO.paa",
			"PTI_Gear\data\gear\PTISHO.paa",
			"PTI_Gear\data\gear\PTISHO.paa"
		};
	};
	class PTISHOW_DZN: PTISHO
	{
		displayName="P.T.I Hoodie White";
		descriptionShort="The Insulated and water-resistant P.T.I. Sly Hoodie in white";
		scope=2;
		absorbency = 0;
		varWetMax=0.0;
		heatIsolation = 1.0;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTISHOW.paa",
			"PTI_Gear\data\gear\PTISHOW.paa",
			"PTI_Gear\data\gear\PTISHOW.paa"
		};
	};
	
	class PTISHOP_DZN: PTISHO
	{
		displayName="P.T.I Hoodie Pink";
		descriptionShort="The Insulated and water-resistant P.T.I. Sly Hoodie in pink";
		scope=2;
		absorbency = 0;
		varWetMax=0.0;
		heatIsolation = 1.0;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTISHOP.paa",
			"PTI_Gear\data\gear\PTISHOP.paa",
			"PTI_Gear\data\gear\PTISHOP.paa"
		};
	};
	class TacticalGloves_ColorBase;	
	class PTIYG: TacticalGloves_ColorBase
	{
		displayName="P.T.I. Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Water-resistant";
		scope=2;
		weight=170;
		itemsCargoSize[]={2,3};
		quickBarBonus=1;
		itemSize[]={2,2};
		repairableWithKits[]={5,3,2};
		repairCosts[]={25,25};
		absorbency=0;
		heatIsolation=0.7;
		varWetMax=0.0;
		attachments[]=
		{
			"Knife"
			
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYG.paa",
			"PTI_Gear\data\gear\PTIYG.paa",
			"PTI_Gear\data\gear\PTIYG.paa"
		};
	};
	class PTIYGR: PTIYG
	{
		displayName="P.T.I. Red Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGR.paa",
			"PTI_Gear\data\gear\PTIYGR.paa",
			"PTI_Gear\data\gear\PTIYGR.paa"
		};
	};
	class PTIYGP: PTIYG
	{
		displayName="P.T.I. Pink Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGP.paa",
			"PTI_Gear\data\gear\PTIYGP.paa",
			"PTI_Gear\data\gear\PTIYGP.paa"
		};
	};
	class PTIYGPU: PTIYG
	{
		displayName="P.T.I. Purple Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGPU.paa",
			"PTI_Gear\data\gear\PTIYGPU.paa",
			"PTI_Gear\data\gear\PTIYGPU.paa"
		};
	};
	class PTIYG_DZN: PTIYG
	{
		displayName="P.T.I. Insulated Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and insulated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYG.paa",
			"PTI_Gear\data\gear\PTIYG.paa",
			"PTI_Gear\data\gear\PTIYG.paa"
		};
	};
	class PTIYG_DZNR: PTIYG_DZN
	{
		displayName="P.T.I. Red Insulated Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and insulated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGR.paa",
			"PTI_Gear\data\gear\PTIYGR.paa",
			"PTI_Gear\data\gear\PTIYGR.paa"
		};
	};
	class PTIYGP_DZN: PTIYG_DZN
	{
		displayName="P.T.I. Pink Insulated Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and insulated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGP.paa",
			"PTI_Gear\data\gear\PTIYGP.paa",
			"PTI_Gear\data\gear\PTIYGP.paa"
		};
	};
	class PTIYGPU_DZN: PTIYG_DZN
	{
		displayName="P.T.I. Purple Insulated Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and insulated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGPU.paa",
			"PTI_Gear\data\gear\PTIYGPU.paa",
			"PTI_Gear\data\gear\PTIYGPU.paa"
		};
	};
	class PTIYG_NBC: PTIYG
	{
		displayName="P.T.I. NBC Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Water-resistant and NBC rated";
		scope=2;
		weight=170;
		itemsCargoSize[]={2,3};
		quickBarBonus=1;
		itemSize[]={2,2};
		repairableWithKits[]={5,3,2};
		repairCosts[]={25,25};
		absorbency=0;
		heatIsolation=0.7;
		varWetMax=0.0;
		attachments[]=
		{
			"Knife"
			
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYG.paa",
			"PTI_Gear\data\gear\PTIYG.paa",
			"PTI_Gear\data\gear\PTIYG.paa"
		};
			class Protection
			{
			biological=1;
			chemical=1;
			};
	};
	class PTIYGR_NBC: PTIYG
	{
		displayName="P.T.I. Red NBC Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and NBC rated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGR.paa",
			"PTI_Gear\data\gear\PTIYGR.paa",
			"PTI_Gear\data\gear\PTIYGR.paa"
		};
			
			class Protection
			{
			biological=1;
			chemical=1;
			};
	};
	class PTIYGP_NBC: PTIYG
	{
		displayName="P.T.I. Pink NBC Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and NBC rated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGP.paa",
			"PTI_Gear\data\gear\PTIYGP.paa",
			"PTI_Gear\data\gear\PTIYGP.paa"
		};
			
			class Protection
			{
			biological=1;
			chemical=1;
			};
	};
	class PTIYGPU_NBC: PTIYG
	{
		displayName="P.T.I. Purple Gini Gloves";
		descriptionShort="Tacticaly modified gloves by the hands of Yuri - Watah-resistant and NBC rated";
		scope=2;		
		absorbency=0;
		heatIsolation=1.0;
		varWetMax=0.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIYGPU.paa",
			"PTI_Gear\data\gear\PTIYGPU.paa",
			"PTI_Gear\data\gear\PTIYGPU.paa"
		};
			
			class Protection
			{
			biological=1;
			chemical=1;
			};
	};
	class MilitaryBoots_ColorBase;
	
	class PTIOB: MilitaryBoots_ColorBase
	{
		displayName="P.T.I. Behmen Boots";
		descriptionShort="Military Boots with a touch of PTI, Water-resistant";
		scope=2;
		itemSize[]={4,4};
		itemsCargoSize[]={3,2};
		quickBarBonus=1;
		weight=700;
		durability=1.0;
		repairableWithKits[]={5,3,2};
		repairCosts[]={25,25};
		absorbency=0;
		varWetMax=0.0;
		heatIsolation=0.7;
		attachments[]=
		{
			"Knife"
		};
		
		soundAttType="Boots";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIOB.paa",
			"PTI_Gear\data\gear\PTIOB.paa",
			"PTI_Gear\data\gear\PTIOB.paa"
		};
	};	
	class PTIOB_DZN: PTIOB
	{
		displayName="P.T.I. Insulated Behmen Boots";
		descriptionShort="Military Boots with a touch of PTI - Water-resistant and Insulated";
		scope=2;		
		absorbency=0;
		varWetMax=0.0;
		heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIOB.paa",
			"PTI_Gear\data\gear\PTIOB.paa",
			"PTI_Gear\data\gear\PTIOB.paa"
		};
	};	
	class GorkaPants_ColorBase;
	class PTIAP_Base: GorkaPants_ColorBase
	{
		displayName="PTI Black Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants";
		scope=1;
		itemSize[]={3,3};
		itemsCargoSize[]={10,5};
		weight=520;
		ragQuantity=6;
		repairableWithKits[]={5,3,2};
		repairCosts[]={25,25,25};
		quickBarBonus=3;
		absorbency=0;
		varWetMax=0.0;
		heatIsolation=0.8;
		attachments[]=
		{
			"compass",
			"MedicalBandage",
			"MedicalBandagePTI"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPB.paa",
			"PTI_Gear\data\gear\PTIAPB.paa",
			"PTI_Gear\data\gear\PTIAPB.paa"
		};
	};
	class PTIAPB: PTIAP_Base
	{
		displayName="PTI Black Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants";
		scope=2;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPB.paa",
			"PTI_Gear\data\gear\PTIAPB.paa",
			"PTI_Gear\data\gear\PTIAPB.paa"
		};
	};
	
	class PTIAPW: PTIAP_Base
	{
		displayName="PTI White Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPW.paa",
			"PTI_Gear\data\gear\PTIAPW.paa",
			"PTI_Gear\data\gear\PTIAPW.paa"
		};
	};
	
	class PTIAPP: PTIAP_Base
	{
		displayName="PTI Pink Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPP.paa",
			"PTI_Gear\data\gear\PTIAPP.paa",
			"PTI_Gear\data\gear\PTIAPP.paa"
		};
	};
	class PTIAPP2: PTIAP_Base
	{
		displayName="PTI Pink Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPP2.paa",
			"PTI_Gear\data\gear\PTIAPP2.paa",
			"PTI_Gear\data\gear\PTIAPP2.paa"
		};
	};
	class PTIAPBR: PTIAP_Base
	{
		displayName="PTI Brown Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants.";
		scope=2;
		itemsCargoSize[]={10,5};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPBR.paa",
			"PTI_Gear\data\gear\PTIAPBR.paa",
			"PTI_Gear\data\gear\PTIAPBR.paa"
		};
	};
	class PTIAPGREEN: PTIAP_Base
	{
		displayName="PTI Green Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\gear\PTIAPGREEN.paa",
			"PTI_Gear\data\gear\PTIAPGREEN.paa",
			"PTI_Gear\data\gear\PTIAPGREEN.paa"
		};
	};
	class PTIAP_Base_DZN: PTIAP_Base
    {
        scope=1;     
        absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;

    };
	class PTIAPB_DZN: PTIAP_Base_DZN
    {
        displayName="PTI Black Insulated Aloaa Pants";
        descriptionShort="50 slot Insulated and water-resistant P.T.I. Aloaa pants";
        scope=2;     
        hiddenSelectionsTextures[]=
        {
            "PTI_Gear\data\gear\PTIAPB.paa",
            "PTI_Gear\data\gear\PTIAPB.paa",
            "PTI_Gear\data\gear\PTIAPB.paa"
        };
    };
	class PTIAPW_DZN: PTIAP_Base_DZN
    {
        displayName="PTI White Insulated Aloaa Pants";
        descriptionShort="50 slot Insulated and water-resistant P.T.I. Aloaa pants";
        scope=2;     
        hiddenSelectionsTextures[]=
        {
            "PTI_Gear\data\gear\PTIAPW.paa",
            "PTI_Gear\data\gear\PTIAPW.paa",
            "PTI_Gear\data\gear\PTIAPW.paa"
        };
    };
	
	class PTIAPP_DZN: PTIAP_Base_DZN
    {
        displayName="PTI Pink Insulated Aloaa Pants";
        descriptionShort="50 slot Insulated and water-resistant P.T.I. Aloaa pants";
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "PTI_Gear\data\gear\PTIAPP.paa",
            "PTI_Gear\data\gear\PTIAPP.paa",
            "PTI_Gear\data\gear\PTIAPP.paa"
        };
    };
	//Pants by Hallugenetic	
	class PTIGorkaPants_Camo: PTIAP_Base
	{
		displayName="PTI Camo Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, for your camo fetish";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti1_co.paa",
			"PTI_Gear\data\pants\gorkapti1_co.paa",
			"PTI_Gear\data\pants\gorkapti1_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Fish: PTIAP_Base
	{
		displayName="PTI Fish Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, something smells fishy";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti2_co.paa",
			"PTI_Gear\data\pants\gorkapti2_co.paa",
			"PTI_Gear\data\pants\gorkapti2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Commi: PTIAP_Base
	{
		displayName="PTI Commi Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, don't trust them";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti3_co.paa",
			"PTI_Gear\data\pants\gorkapti3_co.paa",
			"PTI_Gear\data\pants\gorkapti3_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Crystal: PTIAP_Base
	{
		displayName="PTI Crystal Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, you might feel fancy with";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti4_co.paa",
			"PTI_Gear\data\pants\gorkapti4_co.paa",
			"PTI_Gear\data\pants\gorkapti4_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Camo2: PTIAP_Base
	{
		displayName="PTI Blue Digital Camo Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, another camo";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti5_co.paa",
			"PTI_Gear\data\pants\gorkapti5_co.paa",
			"PTI_Gear\data\pants\gorkapti5_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Pink: PTIAP_Base
	{
		displayName="PTI Pink Flower Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, feeling fancy yet?";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti6_co.paa",
			"PTI_Gear\data\pants\gorkapti6_co.paa",
			"PTI_Gear\data\pants\gorkapti6_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Color: PTIAP_Base
	{
		displayName="PTI Color Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, how many colors? Yes";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti7_co.paa",
			"PTI_Gear\data\pants\gorkapti7_co.paa",
			"PTI_Gear\data\pants\gorkapti7_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_White: PTIAP_Base
	{
		displayName="PTI White Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, nobody can spot florida snow on this pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti8_co.paa",
			"PTI_Gear\data\pants\gorkapti8_co.paa",
			"PTI_Gear\data\pants\gorkapti8_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	//Insulated version of pants by Hallugenetic
	
	class PTIGorkaPants_Camo_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Camo Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, for your camo fetish";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti1_co.paa",
			"PTI_Gear\data\pants\gorkapti1_co.paa",
			"PTI_Gear\data\pants\gorkapti1_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Fish_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Fish Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, something smells fishy";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti2_co.paa",
			"PTI_Gear\data\pants\gorkapti2_co.paa",
			"PTI_Gear\data\pants\gorkapti2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Commi_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Commi Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, don't trust them";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti3_co.paa",
			"PTI_Gear\data\pants\gorkapti3_co.paa",
			"PTI_Gear\data\pants\gorkapti3_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Crystal_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Crystal Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, you might feel fancy with";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti4_co.paa",
			"PTI_Gear\data\pants\gorkapti4_co.paa",
			"PTI_Gear\data\pants\gorkapti4_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Camo2_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Blue Digital Camo Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, another camo";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti5_co.paa",
			"PTI_Gear\data\pants\gorkapti5_co.paa",
			"PTI_Gear\data\pants\gorkapti5_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Pink_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Pink Flower Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, feeling fancy yet?";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti6_co.paa",
			"PTI_Gear\data\pants\gorkapti6_co.paa",
			"PTI_Gear\data\pants\gorkapti6_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_Color_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated Color Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, how many colors? Yes";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti7_co.paa",
			"PTI_Gear\data\pants\gorkapti7_co.paa",
			"PTI_Gear\data\pants\gorkapti7_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	class PTIGorkaPants_White_DZN: PTIAP_Base_DZN
	{
		displayName="PTI Insulated White Aloaa Pants";
		descriptionShort="50 slot P.T.I. Aloaa pants, nobody can spot florida snow on this pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"PTI_Gear\data\pants\gorkapti8_co.paa",
			"PTI_Gear\data\pants\gorkapti8_co.paa",
			"PTI_Gear\data\pants\gorkapti8_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat",
			"PTI_Gear\data\pants\gorka.rvmat"
		};
	};
	//Airborne Mask by Hallugenetic
	class AirborneMask_ColorBase;
	class AirborneMask_PTI: AirborneMask_ColorBase
	{			
		scope = 2;
		displayName = "PTI Airborne Mask";
		descriptionShort = "PTI Airborne Mask. Makes you look good at night";
		model = "\DZ\characters\masks\airborne_mask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		attachments[]=
		{
			"GasMaskFilter"
		};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 700;
		itemSize[] = {3,4};
		varWetMax = 0.0;
		heatIsolation = 0.8;
		visibilityModifier = 0.9;
		noHelmet = 0;
		noEyewear = 0;
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","camoFilter","camoGlass"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\airborne_mask_co.paa","\dz\characters\masks\data\airborne_mask_co.paa","\dz\characters\masks\data\airborne_mask_co.paa","\dz\characters\masks\data\gp5gasmask_white_co.paa","\dz\characters\masks\data\airborne_mask_glass_ca.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\masks\HalluAirborne\airborne_mask.rvmat","PTI_Gear\data\masks\HalluAirborne\airborne_mask.rvmat","PTI_Gear\data\masks\HalluAirborne\airborne_mask.rvmat","dz\characters\masks\data\gp5gasmask.rvmat""dz\characters\masks\data\airborne_mask_glass.rvmat"};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\airborne_mask_m.p3d";
			female = "\DZ\characters\masks\airborne_mask_f.p3d";
		};
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};

	class TShirt_ColorBase;
	class PTITShirt_Maga: TShirt_ColorBase
	{
		displayName="P.T.I MAGA shirt";
		descriptionShort="The Insulated and water-resistant P.T.I. MAGA shirt";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_maga_co.paa",
			"PTI_Gear\data\shirts\tshirt_maga_co.paa",
			"PTI_Gear\data\shirts\tshirt_maga_co.paa"
		};
	};
	class PTITShirt_Mvga: TShirt_ColorBase
	{
		displayName="P.T.I MVGA shirt";
		descriptionShort="The Insulated and water-resistant P.T.I. MVGA shirt";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_mvga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mvga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mvga_co.paa"
		};
	};
	class PTITShirt_Mega: TShirt_ColorBase
	{
		displayName="P.T.I MEGA shirt";
		descriptionShort="The Insulated and water-resistant P.T.I. MEGA shirt";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_mega_co.paa",
			"PTI_Gear\data\shirts\tshirt_mega_co.paa",
			"PTI_Gear\data\shirts\tshirt_mega_co.paa"
		};
	};
	class PTITShirt_Mrga: TShirt_ColorBase
	{
		displayName="P.T.I MRGA shirt";
		descriptionShort="The Insulated and water-resistant P.T.I. MRGA shirt";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_mrga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mrga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mrga_co.paa"
		};
	};
	class PTITShirt_Mcga: TShirt_ColorBase
	{
		displayName="P.T.I MCGA shirt";
		descriptionShort="The Insulated and water-resistant P.T.I. MCGA shirt";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_mcga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mcga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mcga_co.paa"
		};
	};
	class PTITShirt_Mlga: TShirt_ColorBase
	{
		displayName="P.T.I MLGA shirt";
		descriptionShort="The Insulated and water-resistant P.T.I. MLGA shirt";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_mlga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mlga_co.paa",
			"PTI_Gear\data\shirts\tshirt_mlga_co.paa"
		};
	};
	class PTITShirt_Sharq_Maga: TShirt_ColorBase
	{
		displayName="P.T.I SharqEyes MAGA shirt";
		descriptionShort="A Personalized P.T.I. MAGA shirt.";
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;
		attachments[]=
        {
            "compass",
            "MedicalBandage",
            "MedicalBandage"
        };
		itemSize[]={3,3};
		itemsCargoSize[]={10,5};		
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_sharq_maga_co.paa",
			"PTI_Gear\data\shirts\tshirt_sharq_maga_co.paa",
			"PTI_Gear\data\shirts\tshirt_sharq_maga_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					
				};
			};
		};
	};
	class PTITShirt_Rusty_Maga: TShirt_ColorBase
	{
		displayName="P.T.I RustyNork MAGA shirt";
		descriptionShort="A Personalized P.T.I. MAGA shirt."
		scope=2;
		absorbency=0;
        varWetMax=0.0;
        heatIsolation=1.0;
		attachments[]=
        {
            "Dildo",
            "MedicalBandage",
            "MedicalBandage"
        };
		itemSize[]={3,3};
		itemsCargoSize[]={10,5};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\shirts\tshirt_rusty_maga_co.paa",
			"PTI_Gear\data\shirts\tshirt_rusty_maga_co.paa",
			"PTI_Gear\data\shirts\tshirt_rusty_maga_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					
				};
			};
		};
	};
	class tofu_vstorage_barrel_other;
	class Barrel_ColorBase;
	
class PTIVF_Barrel: Barrel_ColorBase
	{
		scope=2;
		displayName="Replace me with a Virtual Storage barrel!";
		descriptionShort="This barrel will be deleted, replace with a Virtual Storage barrel also comes in PTI versions.";
		attachments[]= {
			"shoulder",
			"melee",
		"CanisterGasoline"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIFB.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,100};
			openable=0;
			allowOwnedCargoManipulation=1;
		};		
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="barrel_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="PTIpickUpBarrel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="PTIbarrel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTIVF_Static_Barrel: PTIVF_Barrel
	{
		scope=2;
		displayName="Replace me with a Virtual Storage barrel!";
		descriptionShort="A barrel once owned by the crude oil supplier Odin, Cannot be picked up";
		attachments[]= {
			"shoulder",
			"melee",
		"CanisterGasoline"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIFB.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,100};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	//LootChest Edits
	class CJ_MilitaryCrate_Base;
	class CJ_LootChest_Small_Base: CJ_MilitaryCrate_Base
	{
		scope = 0;
		itemsCargoSize[] = {10,30};
	};
	class CJ_LootChest_Medium_Base: CJ_MilitaryCrate_Base
	{
		scope = 0;
		itemsCargoSize[] = {10,30};
	};
	class CJ_LootChest_Large_Base: CJ_MilitaryCrate_Base
	{
		scope = 0;
		itemsCargoSize[] = {10,30};
	};	

	class HouseNoDestruct;
	class PTI_Static_Buoy_Port: HouseNoDestruct
	{
		scope=2;
		displayName="P.T.I. Buoy Red(Port)";
		model="\PTI_Gear\data\items\buoyptired.p3d";
		simulation="pasreceiver";
		broadcasterRange=1000;
		range=150;
		gain=2;
	};
	class PTI_TU141_Crash: HouseNoDestruct
	{
		scope=2;
		displayName="PTI TU141 Drone Crash";
		model="\PTI_Gear\data\items\baseitems\Tu141\tu141.p3d";
	};
	class PTI_Static_Buoy_Starboard: HouseNoDestruct
	{
		scope=2;
		displayName="P.T.I. Buoy Green(Starboard)";
		model="\PTI_Gear\data\items\buoyptigreen.p3d";
		simulation="pasreceiver";
		broadcasterRange=1000;
		range=150;
		gain=2;
	};
	class PTI_Static_Officer: HouseNoDestruct
	{
		scope=2;
		displayName="P.T.I. Static Officer";
		model="\PTI_Gear\data\char\officer\officer.p3d";
		simulation="pasreceiver";
		broadcasterRange=1000;
		range=150;
		gain=2.2;
	};
	class Garage_Sign;	
	class PTI_Static_Officer_Garage: Garage_Sign
	{
		scope=2;
		displayName="P.T.I. Static Garage Officer";
		model="\PTI_Gear\data\char\officer\officer.p3d";
	};
	class PTI_Parking_Machine: Garage_Sign
	{
		scope=2;
		displayName="P.T.I. Virtual Parking Machine";
		model="\PTI_Gear\data\items\parking\ptiparking.p3d";
		hiddenSelections[]=
		{
			"zbytek",
			"screen"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\parking\white_diffuse.paa",
			"\PTI_Gear\data\items\parking\pti_parking.paa"
		};
	};
	class PTI_Billboard_large_Base: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard Large";
		model="\PTI_Gear\data\items\billboards\large\PTI_Billboard_large.p3d";
	
	hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\PTI_Billboard_large_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\items\billboards\large\PTI_Billboard_large.rvmat"
		};
	};
	class PTI_Billboard_large_Arnie: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard Large";
		model="\PTI_Gear\data\items\billboards\large\PTI_Billboard_large.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\PTI_Billboard_large_arnie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\items\billboards\large\PTI_Billboard_large.rvmat"
		};
	};
	class PTI_Billboard_large_BadGateway: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard Large";
		model="\PTI_Gear\data\items\billboards\large\PTI_Billboard_large.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\Bad_Gateway.paa"
		};
	};
	class PTI_Billboard_large_Parking: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard Large";
		model="\PTI_Gear\data\items\billboards\large\PTI_Billboard_large.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\Parking.paa"
		};
	};
	class PTI_Billboard_medium_Arnie: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard medium";
		model="\PTI_Gear\data\items\billboards\medium\PTI_Billboard_medium.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\arnie.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\items\billboards\medium\PTI_Billboard_medium.rvmat"
		};
	};
	class PTI_Billboard_medium_BadGateway: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard medium";
		model="\PTI_Gear\data\items\billboards\medium\PTI_Billboard_medium.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\Bad_Gateway.paa"
		};
	};
	class PTI_Billboard_medium_Parking: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard medium";
		model="\PTI_Gear\data\items\billboards\medium\PTI_Billboard_medium.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\Parking.paa"
		};
	};
	class PTI_Billboard_medium_BoatPrip: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard medium";
		model="\PTI_Gear\data\items\billboards\medium\PTI_Billboard_medium.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\coastguardprip.paa"
		};
	};
	class PTI_Billboard_medium_BoatDeer: HouseNoDestruct
	{
		scope=2;
		displayName="Billboard medium";
		model="\PTI_Gear\data\items\billboards\medium\PTI_Billboard_medium.p3d";	
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\billboards\images\coastguarddeerisle.paa"
		};
	};
	class PTI_Rules_Centaur: HouseNoDestruct
	{
		scope=2;
		displayName="Read the fucking rules";
		model="\PTI_Gear\data\char\horsefficcer\horsefficcer.p3d";	
		hiddenSelections[]=
		{
			"zbytek",
			"scroll"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\char\horsefficcer\body_co.paa",
			"\PTI_Gear\data\char\horsefficcer\Scroll.paa"
		};
	};
	class PTI_Rules_Centaur_Cock: HouseNoDestruct
	{
		scope=2;
		displayName="Read the fucking rules";
		model="\PTI_Gear\data\char\horsefficcer\horsefficcer_cock.p3d";	
		hiddenSelections[]=
		{
			"zbytek",
			"scroll",
			"dick"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\char\horsefficcer\body_co.paa",
			"\PTI_Gear\data\char\horsefficcer\Scroll.paa"
		};
	};
	
	class PTI_Thermometer_Static: HouseNoDestruct
	{
		scope=2;
		displayName="PTI Gym Thermometer";
		descriptionShort="Keeping your temperature monitored while performing at these levels is critical, this device surprisingly helps with that.";
		model="\PTI_Gear\Admin\PurpleSlammer.p3d";	
		simulation="pasreceiver";
		broadcasterRange=1000;
		range=150;
		gain=2;	
	};
	class PTI_ThermometerPump_Static: HouseNoDestruct
	{
		scope=2;
		displayName="PTI Weird pump";
		descriptionShort="Keeping your temperature monitored while performing at these levels is critical, this device surprisingly helps with that.";
		model="\PTI_Gear\Admin\PurpleSlammer.p3d";	
	};
	
	
	class Clothing;
	//Ghillies weapon and suit by Hallugenetic
	class GhillieBushrag_ColorBase: Clothing
	{
		inventorySlot[] = {"Hips","Back","Armband"};
	};
	class GhillieTop_ColorBase: Clothing
	{
		inventorySlot[] = {"Hips","Back","Armband"};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		inventorySlot[] = {"Hips","Back","Armband"};
	};
	class GhillieHood_ColorBase;
	class GhillieAtt_ColorBase;
	class GhillieBushrag_PTIred: GhillieBushrag_ColorBase
	{
		displayName = "PTI Custom Ghillie Bushrag Red";
		descriptionShort="PTI Custom Glowing Ghillie Bushrag Red";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat"};
	};
	class GhillieTop_PTIred: GhillieTop_ColorBase
	{
		displayName = "PTI Custom Ghillie Top Red";
		descriptionShort="PTI Custom Glowing Ghillie Top Red";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat"};
	};
	class GhillieSuit_PTIred: GhillieSuit_ColorBase
	{
		displayName = "PTI Custom Ghillie Suit Red";
		descriptionShort="PTI Custom Glowing Ghillie Suit Red";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat"};
	};
	class GhillieHood_PTIred: GhillieHood_ColorBase
	{
		displayName = "PTI Custom Ghillie Hood Red";
		descriptionShort="PTI Custom Glowing Ghillie Hood Red";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat"};
	};
	class GhillieAtt_PTIred: GhillieAtt_ColorBase
	{
		displayName = "PTI Custom Ghillie Weapon Attachment Red";
		descriptionShort="PTI Custom Glowing Ghillie Weapon Attachment Red";
		scope = 2;
		durability = 0.5;
		varWetMax = 0;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa","PTI_Gear\data\ghillies\ghillie_ptired_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat","PTI_Gear\data\ghillies\ghillie.rvmat"};
	};
	
	
	class GhillieBushrag_PTIlava: GhillieBushrag_ColorBase
	{
		displayName = "PTI Custom Ghillie Bushrag Lava";
		descriptionShort="PTI Custom Glowing Ghillie Bushrag Lava";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat"};
	};
	class GhillieTop_PTIlava: GhillieTop_ColorBase
	{
		displayName = "PTI Custom Ghillie Top Lava";
		descriptionShort="PTI Custom Glowing Ghillie Top Lava";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0.2;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat"};
	};
	class GhillieSuit_PTIlava: GhillieSuit_ColorBase
	{
		displayName = "PTI Custom Ghillie Suit Lava";
		descriptionShort="PTI Custom Glowing Ghillie Suit Lava";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0.2;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat"};
	};
	class GhillieHood_PTIlava: GhillieHood_ColorBase
	{
		displayName = "PTI Custom Ghillie Hood Lava";
		descriptionShort="PTI Custom Glowing Ghillie Hood Lava";
		scope = 2;
		heatIsolation = 1;
		varWetMax = 0.2;		
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat"};
	};
	class GhillieAtt_PTIlava: GhillieAtt_ColorBase
	{
		displayName = "PTI Custom Ghillie Weapon Attachment Lava";
		descriptionShort="PTI Custom Glowing Ghillie Weapon Attachment Lava";
		scope = 2;
		durability = 0.5;
		varWetMax = 0.2;
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa","PTI_Gear\data\ghillies\ghillie1_co.paa"};
		hiddenSelectionsMaterials[] = {"PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat","PTI_Gear\data\ghillies\ghillie1.rvmat"};
	};
	class Mich2001Helmet;
	class PTI_Storm_helmet_base: Mich2001Helmet
	{	
		scope=2;
		displayName="PTI Weathered stormtrooper helmet";
		descriptionShort="PTI Weathered stormtrooper helmet";
		model="\PTI_Gear\data\headgear\STHelmet\pti_storm_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		attachments[]=
		{			
			"NVG"			
		};
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask",
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered.rvmat", "\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered.rvmat", "\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_damage.rvmat", "\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_damage.rvmat", "\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_destruct.rvmat", "\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\STHelmet\pti_storm_mf.p3d";
			female="\PTI_Gear\data\headgear\STHelmet\pti_storm_mf.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_Storm_Weathered_white: PTI_Storm_helmet_base
	{	
		scope=2;
		displayName="PTI White Weathered stormtrooper helmet";
		descriptionShort="PTI White/Blue Weathered stormtrooper helmet";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_weathered_co.paa"
		};
		
	};
	
   	class PTI_Storm_Clean_white: PTI_Storm_helmet_base
	{	
		scope=2;
		displayName="PTI White stormtrooper helmet";
		descriptionShort="PTI White/Blue stormtrooper helmet";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_clean_co.paa"
		};
		
	};
	
   	class PTI_Storm_Clean_pink: PTI_Storm_helmet_base
	{	
		scope=2;
		displayName="PTI pink stormtrooper helmet";
		descriptionShort="PTI pink stormtrooper helmet";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_clean_pink_co.paa"
		};
		
	};
	
   	class PTI_Storm_Clean_beige: PTI_Storm_helmet_base
	{	
		scope=2;
		displayName="PTI beige stormtrooper helmet";
		descriptionShort="PTI White/Blue stormtrooper helmet";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_clean_beige_co.paa"
		};
		
	};
	
   	class PTI_Storm_Clean_black: PTI_Storm_helmet_base
	{	
		scope=2;
		displayName="PTI beige stormtrooper helmet";
		descriptionShort="PTI black stormtrooper helmet";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\STHelmet\PTI_Storm_clean_black_co.paa"
		};
		
	};
	
	class PTI_Old_Helmet_base: Clothing
	{	
		scope=2;
		displayName="PTI Old helmet";
		descriptionShort="PTI Old helmet";
		model="\PTI_Gear\data\headgear\OldHelmet\pti_old_helmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet.rvmat", "PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet.rvmat"}},
                        {0.7,{"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet.rvmat", "PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet.rvmat"}},
                        {0.5,{"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_damage.rvmat", "PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_damage.rvmat"}},
                        {0.3,{"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_damage.rvmat", "PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_damage.rvmat"}},
                        {0.0,{"PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_destruct.rvmat", "PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\OldHelmet\pti_old_helmet_m.p3d";
			female="\PTI_Gear\data\headgear\OldHelmet\pti_old_helmet_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_Old_Helmet_Black: PTI_Old_Helmet_base
	{	
		scope=2;
		displayName="PTI Old Black helmet";
		descriptionShort="PTI Old Black helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_black_co.paa"
		};
		
	};
	
   	class PTI_Old_Helmet_Grey: PTI_Old_Helmet_base
	{	
		scope=2;
		displayName="PTI Old Grey helmet";
		descriptionShort="PTI Old Grey helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_grey_co.paa"
		};
		
	};
	
   	class PTI_Old_Helmet_White: PTI_Old_Helmet_base
	{	
		scope=2;
		displayName="PTI Old White helmet";
		descriptionShort="PTI Old White helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_white_co.paa"
		};
		
	};
	
   	class PTI_Old_Helmet_Pink: PTI_Old_Helmet_base
	{	
		scope=2;
		displayName="PTI Old Pink helmet";
		descriptionShort="PTI Old Pink helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\OldHelmet\PTI_Old_Helmet_pink_co.paa"
		};
		
	};
	
	
	
	class PTI_OfficerHat_base: Clothing
	{	
		scope=2;
		displayName="PTI Officers Cap";
		descriptionShort="PTI Old Officers Cap";
		model="\PTI_Gear\data\headgear\OfficerCap\officerhatww2_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\OfficerCap\ww2officercap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\OfficerCap\ww2officercap.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"PTI_Gear\data\headgear\OfficerCap\ww2officercap.rvmat", "PTI_Gear\data\headgear\OfficerCap\ww2officercap.rvmat"}},
                        {0.7,{"PTI_Gear\data\headgear\OfficerCap\ww2officercap.rvmat", "PTI_Gear\data\headgear\OfficerCap\ww2officercap.rvmat"}},
                        {0.5,{"PTI_Gear\data\headgear\OfficerCap\ww2officercap.rvmat", "PTI_Gear\data\headgear\OfficerCap\ww2officercap_damage.rvmat"}},
                        {0.3,{"PTI_Gear\data\headgear\OfficerCap\ww2officercap_damage.rvmat", "PTI_Gear\data\headgear\OfficerCap\ww2officercap_damage.rvmat"}},
                        {0.0,{"PTI_Gear\data\headgear\OfficerCap\ww2officercap_destruct.rvmat", "PTI_Gear\data\headgear\OfficerCap\ww2officercap_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};		
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\OfficerCap\officerhatww2_m.p3d";
			female="\PTI_Gear\data\headgear\OfficerCap\officerhatww2_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_OfficerHat: PTI_OfficerHat_base
	{	
		scope=2;
		displayName="PTI Old Officers Cap";
		descriptionShort="PTI Old Officers Cap";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\OfficerCap\ww2officercap_co.paa"
		};
		
	};
   	class PTI_OfficerHat_Pink: PTI_OfficerHat_base
	{	
		scope=2;
		displayName="PTI Old Officers Cap";
		descriptionShort="PTI Old Officers Cap";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\OfficerCap\ww2officercap_pink_co.paa"
		};
		
	};
	
	class PTI_PilotHelmet2_base: Mich2001Helmet
	{	
		scope=1;
		displayName="PTI Pilot Helmet";
		descriptionShort="PTI Pilot Helmet";
		model="\PTI_Gear\data\headgear\PilotHelmet\pilot_helmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.1,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat",
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_Visor.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat", "PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet.rvmat"}},
                        {0.7,{"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat", "PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet.rvmat"}},
                        {0.5,{"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_damage.rvmat", "PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_damage.rvmat"}},
                        {0.3,{"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_damage.rvmat", "PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_damage.rvmat"}},
                        {0.0,{"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_destruct.rvmat", "PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};		
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\PilotHelmet\pilot_helmet_m.p3d";
			female="\PTI_Gear\data\headgear\PilotHelmet\pilot_helmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_PilotHelmet2: PTI_PilotHelmet2_base
	{	
		scope=2;
		displayName="PTI Pilot Helmet";
		descriptionShort="PTI Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.1,co)"
			
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat",
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_Visor.rvmat"
		};
		
	};
	
   	class PTI_PilotHelmet2_black: PTI_PilotHelmet2_base
	{	
		scope=2;
		displayName="PTI Black Pilot Helmet";
		descriptionShort="PTI Black Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.1,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat",
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_Visor.rvmat"
		};
		
	};
	
   	class PTI_PilotHelmet2_pink: PTI_PilotHelmet2_base
	{	
		scope=2;
		displayName="PTI Pink Pilot Helmet";
		descriptionShort="PTI Black Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_pink_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.1,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat",
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_Visor.rvmat"
		};
		
	};
	
   	class PTI_PilotHelmet2_grey: PTI_PilotHelmet2_base
	{	
		scope=2;
		displayName="PTI Grey Pilot Helmet";
		descriptionShort="PTI Grey Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\pti_pilothelmet_grey_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.1,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet.rvmat",
			"PTI_Gear\data\headgear\PilotHelmet\PTI_Pilot_Helmet_Visor.rvmat"
		};
		
	};
	
	class PTI_DivingHelmet_base: Clothing
	{	
		scope=2;
		displayName="PTI Diving helmet";
		descriptionShort="PTI Diving helmet";
		model="\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask",
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet.rvmat", "\PTI_Gear\data\headgear\DivingHelmet\divinghelmet.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet.rvmat", "\PTI_Gear\data\headgear\DivingHelmet\divinghelmet.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_damage.rvmat", "\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_damage.rvmat", "\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_destruct.rvmat", "\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_m.p3d";
			female="\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_DivingHelmet: PTI_DivingHelmet_Base
	{	
		scope=2;
		displayName="PTI Diving helmet";
		descriptionShort="PTI Diving helmet";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\DivingHelmet\divinghelmet_co.paa"
		};
		
	};
	
	
	
	class PTI_WoolCap_base: Clothing
	{	
		scope=2;
		displayName="PTI wool cap with goggles";
		descriptionShort="PTI wool cap with goggles";
		model="\PTI_Gear\data\headgear\WoolCap\woolcap_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"goggles",
			"glass"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_co.paa",			
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap.rvmat",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles.rvmat",			
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_glass.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\WoolCap\pti_cap.rvmat", "\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\WoolCap\pti_cap.rvmat", "\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\WoolCap\pti_cap_damage.rvmat", "\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\WoolCap\pti_cap_damage.rvmat", "\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\WoolCap\pti_cap_destruct.rvmat", "\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\WoolCap\woolcap_m.p3d";
			female="\PTI_Gear\data\headgear\WoolCap\woolcap_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_WoolCap: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Wool Cap with goggles";
		descriptionShort="PTI Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		
	};
	
   	class PTI_WoolCap_black: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Wool Cap with goggles";
		descriptionShort="PTI Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_black_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		
	};
	
   	class PTI_WoolCap_pink: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Wool Cap with goggles";
		descriptionShort="PTI Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_pink_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		
	};
	
   	class PTI_WoolCap_Green: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Wool Cap with goggles";
		descriptionShort="PTI Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_green_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		
	};
	
   	class PTI_WoolCap_Rev: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Reversed Wool Cap with goggles";
		descriptionShort="PTI Reversed Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
			female="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
		};
		
	};
	
   	class PTI_WoolCap_Rev_black: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Reversed Wool Cap with goggles";
		descriptionShort="PTI Reversed Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_black_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
			female="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
		};
		
		
	};
	
   	class PTI_WoolCap_Rev_pink: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Reversed Wool Cap with goggles";
		descriptionShort="PTI Reversed Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_pink_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
			female="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
		};
		
		
	};
	
   	class PTI_WoolCap__Rev_Green: PTI_WoolCap_Base
	{	
		scope=2;
		displayName="PTI Wool Cap with goggles";
		descriptionShort="PTI Wool Cap with goggles";		
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_green_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\pti_cap_goggles_co.paa",
			"\PTI_Gear\data\headgear\WoolCap\dark_glass_ca.paa"
			
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
			female="\PTI_Gear\data\headgear\WoolCapRev\woolcap_rev_m.p3d";
		};
		
		
	};
	
	
	
	
	class PTI_ReconHelmet_base: Mich2001Helmet
	{	
		scope=2;
		displayName="PTI Recon Helmet";
		descriptionShort="PTI Recon Helmet";
		model="\PTI_Gear\data\headgear\ReconHelmetBase\reconhelmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		attachments[]=
		{			
			"NVG"			
		};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.75;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\ReconHelmetBase\reconhelmet_m.p3d";
			female="\PTI_Gear\data\headgear\ReconHelmetBase\reconhelmet_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_ReconHelmet_sand: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Green(1)Recon Helmet";
		descriptionShort="PTI Recon Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
	
   	class PTI_ReconHelmet_green: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Green(1)Recon Helmet";
		descriptionShort="PTI Recon Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_green_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_green2: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Green(2) Recon Helmet";
		descriptionShort="PTI Recon Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_green2_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_pink: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Pink(1) Recon Helmet";
		descriptionShort="PTI Pink(1) Recon Helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_pink1_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_pink2: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Pink(2) Recon Helmet";
		descriptionShort="PTI Pink(2) Recon Helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_pink2_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_purple: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Purple Recon Helmet";
		descriptionShort="PTI Purple Recon Helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_pu1_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_grey: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Grey Recon Helmet";
		descriptionShort="PTI Grey Recon Helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_grey_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_red: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Red Recon Helmet";
		descriptionShort="PTI Red Recon Helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_red_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_yellow: PTI_ReconHelmet_base
	{	
		scope=2;
		displayName="PTI Yellow Recon Helmet";
		descriptionShort="PTI Yellow Recon Helmet";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_yellow_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet.rvmat"
		};
		
	};
	
	
	
	
	
	class PTI_ReconHelmet_Glow_base: Mich2001Helmet
	{	
		scope=2;
		displayName="PTI Recon Helmet";
		descriptionShort="PTI Recon Helmet Glossy";
		model="\PTI_Gear\data\headgear\ReconHelmet\reconhelmetg_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.75;
		noMask=0;
		attachments[]=
		{			
			"NVG"			
		};
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\ReconHelmet\reconhelmetg_m.p3d";
			female="\PTI_Gear\data\headgear\ReconHelmet\reconhelmetg_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_ReconHelmet_Glow_sand: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Green(1)Recon Helmet";
		descriptionShort="PTI Recon Helmet(Glowing)";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_green: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Green(1)Recon Helmet";
		descriptionShort="PTI Recon Helmet(Glowing)";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_green_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_green2: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Green(2) Recon Helmet";
		descriptionShort="PTI Recon Helmet(Glowing)";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_green2_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_pink: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Pink(1) Recon Helmet";
		descriptionShort="PTI Pink(1) Recon Helmet(Glowing)";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_pink1_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_pink2: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Pink(2) Recon Helmet";
		descriptionShort="PTI Pink(2) Recon Helmet(Glowing)";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_pink2_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_purple: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Purple Recon Helmet";
		descriptionShort="PTI Purple Recon Helmet(Glowing)";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_pu1_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_grey: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Grey Recon Helmet";
		descriptionShort="PTI Grey Recon Helmet(Glowing)";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_grey_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_red: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Red Recon Helmet";
		descriptionShort="PTI Red Recon Helmet(Glowing)";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_red_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	
   	class PTI_ReconHelmet_Glow_yellow: PTI_ReconHelmet_Glow_base
	{	
		scope=2;
		displayName="PTI Yellow Recon Helmet";
		descriptionShort="PTI Yellow Recon Helmet(Glowing)";	
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_yellow_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_chrome.rvmat",
			"\PTI_Gear\data\headgear\ReconHelmet\reconhelmet_visor.rvmat"
		};
		
	};
	class PTI_GermanHelmet_base: Clothing
	{	
		scope=2;
		displayName="PTI German Helmet";
		descriptionShort="PTI German Helmet";
		model="\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.4;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_m.p3d";
			female="\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_GermanHelmet: PTI_GermanHelmet_base
	{	
		scope=2;
		displayName="PTI German Helmet";
		descriptionShort="PTI German Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"
		};
		
	};
   	class PTI_GermanSSHelmet: PTI_GermanHelmet_base
	{	
		scope=2;
		displayName="PTI NSFW German Helmet";
		descriptionShort="PTI NSFW German Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_ss.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"
		};
		
	};
	
	class PTI_GermanHelmet2_base: Clothing
	{	
		scope=1;
		displayName="PTI German Helmet";
		descriptionShort="PTI German Helmet";
		model="\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.4;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_wh_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_m.p3d";
			female="\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_GermanHelmet2: PTI_GermanHelmet2_base
	{	
		scope=2;
		displayName="PTI German Helmet";
		descriptionShort="PTI German Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_wh_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2.rvmat"
		};
		
	};
   	class PTI_GermanSSHelmet2: PTI_GermanHelmet2_base
	{	
		scope=2;
		displayName="PTI NSFW German Helmet";
		descriptionShort="PTI NSFW German Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2.rvmat"
		};
		
	};
	
	class PTI_GermanHelmet2_oversized_base: Clothing
	{	
		scope=1;
		displayName="PTI German 'StarBalls' Helmet";
		descriptionShort="PTI German Helmet - According to Aloaa this is from 'StarBalls'";
		model="\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=2;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.4;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_wh_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\GermanHelmet\germanhelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_oversize.p3d";
			female="\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_oversize.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_GermanHelmet2_oversized: PTI_GermanHelmet2_oversized_base
	{	
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_wh_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2.rvmat"
		};
		
	};
   	class PTI_GermanSSHelmet2_oversized: PTI_GermanHelmet2_oversized_base
	{	
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\GermanHelmet2\germanhelmet2.rvmat"
		};
		
	};
	
	class PTI_CombatHelmet_base: Clothing
	{	
		scope=2;
		displayName="PTI Combat Helmet";
		descriptionShort="PTI Combat Helmet";
		model="\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		attachments[]=
		{			
			"NVG"			
		};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;		
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.75;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet.rvmat",
			"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_visor.rvmat"
		};
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_m.p3d";
			female="\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_CombatHelmet: PTI_CombatHelmet_base
	{	
		scope=2;
		displayName="PTI Combat Helmet";
		descriptionShort="PTI Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet.rvmat",
			"\PTI_Gear\data\headgear\CombatHelmet\pti_combathelmet_visor.rvmat"
		};
		
	};
	class PTI_CloneHelmet_base: Mich2001Helmet
	{	
		scope=2;
		displayName="PTI Clone Helmet";
		descriptionShort="PTI Clone Helmet";
		model="\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		attachments[]=
		{			
			"NVG"			
		};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;		
		weight=1000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.75;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_headCover_improvised"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_co.paa"			
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet.rvmat"
		};
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] = 
                    {
                        {1.0,{"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet.rvmat"}},
                        {0.7,{"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet.rvmat"}},
                        {0.5,{"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_damage.rvmat"}},
                        {0.3,{"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_damage.rvmat"}},
                        {0.0,{"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_destruct.rvmat"}}};
                };
            };

			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_m.p3d";
			female="\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
   	class PTI_CloneHelmet: PTI_CloneHelmet_base
	{	
		scope=2;
		displayName="PTI Clone Helmet";
		descriptionShort="PTI Clone Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet_co.paa"				
		};
		hiddenSelectionsMaterials[]=
		{
			"\PTI_Gear\data\headgear\CloneHelmet\pti_clonehelmet.rvmat"
		};
	};
	

	class Bear_ColorBase;
	class PTI_Bear_ColorBase: Bear_ColorBase
	{ 
		scope=2;
		displayName="PTI Pumped up Teddy";
		descriptionShort="PTI Pumped up Teddy";
		itemsCargoSize[]={4,5};
		absorbency=0;
		isMeleeWeapon=1;
		attachments[]=
		{
			"Dildo",
			"Chemlight",
			"WalkieTalkie",
			"Belt_Right",
			"Belt_Left",
			"Belt_Back",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"VestHolster",
			"VestPouch",
			"VestBackpack",
			"Knife",
			"Mask",
			"EyeWear",
			"Headgear",
			"helmetFlashlight",
			"NVG"
			
		};
		inventorySlot[]=
		{
			"Dildo",
			"Chemlight"
			
		};
	
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="IlyTed_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="HarderTed_SoundSet";
					id=797;
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class PTI_Bear_Beige: PTI_Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\containers\PTI_teddybear_brown_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="IlyTed_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="HarderTed_SoundSet";
					id=797;
				};
			};
		};
	};
	class PTI_Bear_Dark: PTI_Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\containers\PTI_teddybear_dark_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="IlyTed_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="HarderTed_SoundSet";
					id=797;
				};
			};
		};
	};
	class PTI_Bear_Pink: PTI_Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\containers\PTI_teddybear_pink_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="IlyTed_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="HarderTed_SoundSet";
					id=797;
				};
			};
		};
	};
	class PTI_Bear_White: PTI_Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\containers\PTI_teddybear_white_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="IlyTed_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="HarderTed_SoundSet";
					id=797;
				};
			};
		};
	};

	
	//Barrels
	
	class PUPBB: Barrel_ColorBase
	{
		scope=2;
		displayName="P.T.I. Pumped up Barrel(Black)";
		descriptionShort="A barrel on roids, hemorrhoids";

		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIPUBB.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class PTIPUPBB: Barrel_ColorBase
	{
		scope=2;
		displayName="P.T.I. Pumped up Barrel(Black)";
		descriptionShort="A barrel on roids, hemorrhoids";

		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIPUBB.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class PTI_Static_PUPBB: PTIPUPBB
	{
		scope=2;
		displayName="P.T.I. Pumped up Barrel(Black) Static";
		descriptionShort="A barrel on roids, hemorrhoids - Cannot be picked up";

		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIPUBB.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
		
	class PUPBG: Barrel_ColorBase
	{
		scope=2;
		displayName="P.T.I. Pumped up Barrel(Green)";
		descriptionShort="A barrel on roids, hemorrhoids";

		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIPUBG.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class PTIPUPBG: Barrel_ColorBase
	{
		scope=2;
		displayName="P.T.I. Pumped up Barrel(Green)";
		descriptionShort="A barrel on roids, hemorrhoids";

		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIPUBG.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class PTI_Static_PUPBG: PTIPUPBG
	{
		scope=2;
		displayName="P.T.I. Pumped up Barrel(Green) Static";
		descriptionShort="A barrel on roids, hemorrhoids Cannot be picked up";

		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\barrels\PTIPUBG.paa"
		};

		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class GorkaHelmet;
	class GorkaHelmet_Broh: GorkaHelmet
    {
        scope=2;
        displayName="Broh's Maska";
        descriptionShort="Broh's very own cheeki Maska";
        model="\DZ\characters\headgear\Maska_g.p3d";
        repairableWithKits[]={8};
        repairCosts[]={25};
        inventorySlot[]=
        {
            "Headgear"
        };
        attachments[]=
        {
            "Glass"
        };
        simulation="clothing";
        vehicleClass="Clothing";
        itemInfo[]=
        {
            "Clothing",
            "Headgear"
        };
        weight=1100;
        itemSize[]={4,4};
        varWetMax=0.0000000;
        heatIsolation=0.80000001;        
        hiddenSelectionsTextures[]=
        {
            "PTI_Gear\data\headgear\PTIBM.paa",
            "PTI_Gear\data\headgear\PTIBM.paa",
            "PTI_Gear\data\headgear\PTIBM.paa",
        };
	};
	//PTI Cable Reel
	class CableReel;
    class PTI_CableReel: CableReel
    {
        scope = 2;
        displayName = "PTI 4 plug CableReel";
        descriptionShort = "PTI Power CableReel, 30Meters, 4 plugs";
        repairableWithKits[] = {5,7};
        repairCosts[] = {30.0,25.0};
        class EnergyManager
        {
            switchOnAtSpawn = 1;
            powerSocketsCount = 4;
            cordTextureFile = "DZ\gear\camping\Data\plug_orange_CO.paa";
            isPassiveDevice = 1;
            cordLength = 30;
            plugType = 2;
            compatiblePlugTypes[] = {2,6};
        };
    };
	//PTI Batteries
	class Inventory_Base;
	class PTI_Powerbank: Inventory_Base
	{
		scope=2;
		displayName="PTI Powerbank";
		descriptionShort="PTI Powerbank for all your items requiring power. Even powers vehicles";
		model="PTI_Gear\data\batteries\powerbank.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		weight=2000;
		itemSize[]={3,3};
		absorbency=0;
		inventorySlot[]=
		{
			"BatteryD",
			"CarBattery",
			"LargeBattery",
			"ExpansionHelicopterBattery",
			"ExpansionAircraftBattery"
		};
		rotationFlags=2;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=55000;
			energyAtSpawn=55000;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=2;
			plugType=4;
			compatiblePlugTypes[]={1,5,8,6};
			attachmentAction=2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;					
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="carbattery_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class TruckBattery;
	class PTI_TruckBattery: TruckBattery
	{
		scope=2;
		displayName="PTI TruckBattery";
		descriptionShort="The PTI Pumped TruckBattery, straight from Cherno's NPP. Should be ideal for base usage. Like with the PTI Spotlights for example";
		model="\dz\vehicles\parts\battery_truck.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		weight=18000;
		itemSize[]={5,3};
		absorbency=0;
		inventorySlot[]=
		{
			"TruckBattery",
			"LargeBattery"
		};
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\pti_truck_bat_co.paa",
			"PTI_Gear\data\batteries\pti_truck_bat_co.paa",
			"PTI_Gear\data\batteries\pti_truck_bat_co.paa"
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=500000;
			energyAtSpawn=500000;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={8};
			attachmentAction=2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=240;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\truck_bat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\truck_bat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\truck_bat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\truck_bat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\truck_bat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="carbattery_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Carbattery;
	class PTI_CarBattery: CarBattery
	{
		scope=2;
		displayName="PTI Carbattery";
		descriptionShort="The PTI Pumped up CarBattery, straight from Cherno's NPP. Should be ideal for base usage. Like with the PTI Spotlights for example";
		model="\dz\vehicles\parts\battery_car.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		weight=10000;
		itemSize[]={3,3};
		absorbency=0.1;
		inventorySlot[]=
		{
			"CarBattery",
			"LargeBattery"
		};
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\pti_car_bat_co.paa",
			"PTI_Gear\data\batteries\pti_car_bat_co.paa",
			"PTI_Gear\data\batteries\pti_car_bat_co.paa"
		};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=500000;
			energyAtSpawn=500000;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={5,8,6};
			attachmentAction=2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="carbattery_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Battery9V;
	class PTIBattery9VHiPo: Battery9V
	{
		scope=2;
		displayName="High Power 9V battery";
		descriptionShort="An overcharged 9v battery, should last twice as long";
		model="\dz\gear\consumables\9v_battery.p3d";
		isMeleeWeapon=1;
		weight=10;
		absorbency=0.0;
		itemSize[]={1,1};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		
		inventorySlot[]=
		{
			"BatteryD"
		};
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\9v_200_pump.paa",
			"PTI_Gear\data\batteries\9v_200_pump.paa",
			"PTI_Gear\data\batteries\9v_200_pump.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=200;
			energyAtSpawn=200;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class PTIBattery9VNuke: Battery9V
	{
		scope=2;
		displayName="Humming 9V battery";
		descriptionShort="A weirdly humming, and almost hot to the touch 9V Battery. Is this even safe?";
		model="\dz\gear\consumables\9v_battery.p3d";
		isMeleeWeapon=1;
		weight=10;
		absorbency=0.0;
		itemSize[]={1,1};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		inventorySlot[]=
		{
			"BatteryD"
		};
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\9v_nuke.paa",
			"PTI_Gear\data\batteries\9v_nuke.paa",
			"PTI_Gear\data\batteries\9v_nuke.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=19000;
			energyAtSpawn=19000;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class PTIBattery_9V_Varta_Pro: PTIBattery9VHiPo
	{
		scope=2;
		displayName="Varta Pro 9V battery";
		descriptionShort="A professional use 9v battery, should last longer than consumer versions. Longer licking fun guaranteed!";
		model="\dz\gear\consumables\9v_battery.p3d";
		isMeleeWeapon=1;
		weight=10;
		absorbency=0.0;
		itemSize[]={1,1};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		
		inventorySlot[]=
		{
			"BatteryD"
		};
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\PTI_Varta_Pro_co.paa",
			"PTI_Gear\data\batteries\PTI_Varta_Pro_co.paa",
			"PTI_Gear\data\batteries\PTI_Varta_Pro_co.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=400;
			energyAtSpawn=400;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class PTIBattery_9V_Varta: PTIBattery9VHiPo
	{
		scope=2;
		displayName="Varta 9V battery";
		descriptionShort="A regular Varta 9v battery, lick it!";
		model="\dz\gear\consumables\9v_battery.p3d";
		isMeleeWeapon=1;
		weight=10;
		absorbency=0.0;
		itemSize[]={1,1};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		
		inventorySlot[]=
		{
			"BatteryD"
		};
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\Varta_co.paa",
			"PTI_Gear\data\batteries\Varta_co.paa",
			"PTI_Gear\data\batteries\Varta_co.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=200;
			energyAtSpawn=200;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class PTIBattery_9V_Duracell: PTIBattery9VHiPo
	{
		scope=2;
		displayName="Duracell 9V battery";
		descriptionShort="A regular household 9v battery, lick it!";
		model="\dz\gear\consumables\9v_battery.p3d";
		isMeleeWeapon=1;
		weight=10;
		absorbency=0.0;
		itemSize[]={1,1};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		
		inventorySlot[]=
		{
			"BatteryD"
		};
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\Duracell_co.paa",
			"PTI_Gear\data\batteries\Duracell_co.paa",
			"PTI_Gear\data\batteries\Duracell_co.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=200;
			energyAtSpawn=200;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class PTIBattery_9V_Energizer: PTIBattery9VHiPo
	{
		scope=2;
		displayName="Energizer 9V battery";
		descriptionShort="A regular household 9v battery, lick it!";
		model="\dz\gear\consumables\9v_battery.p3d";
		isMeleeWeapon=1;
		weight=10;
		absorbency=0.0;
		itemSize[]={1,1};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		
		inventorySlot[]=
		{
			"BatteryD"
		};
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"PTI_Gear\data\batteries\Energizer_co.paa",
			"PTI_Gear\data\batteries\Energizer_co.paa",
			"PTI_Gear\data\batteries\Energizer_co.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=200;
			energyAtSpawn=200;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class TargetVest;
	class TargetVestNA: TargetVest
	{
		scope = 2;
		displayName = "Target Vest No Armor";
		descriptionShort = "FOR AI ONLY DO NOT PICKUP OR RISK GETTING SHOT!";
		model = "TargetVest\TargetVest_drop.p3d";
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {};
		weight = 3000;
		itemSize[] = {4,4};
		varWetMax = 0.49;
		heatIsolation = 0.5;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		class ClothingTypes
		{
			male = "TargetVest\TargetVest.p3d";
			female = "TargetVest\TargetVest.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		
	};

	//PTI Combat Gasmask
	class GasMask;
	class PTI_GasMask: GasMask
	{
		scope=2;
		displayName="PTI Combat Gasmask";
		descriptionShort="PTI Combat Gasmask - Comes in different colors, should last twice as long and has a built in de-muffler. Allows wearing with helmets.";
		model="\DZ\characters\masks\GasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		rotationFlags=2;
		weight=730;
		itemSize[]={3,4};
		varWetMax=0.0;
		heatIsolation=0.60000002;
		visibilityModifier=0.89999998;
		noHelmet=0;
		noEyewear=0;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityDestroyOnMin=0;		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GasMask_co.paa",
			"\dz\characters\masks\data\GasMask_co.paa",
			"\dz\characters\masks\data\GasMask_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\GasMask.rvmat",
								"DZ\characters\masks\data\GasMask_Glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GasMask.rvmat",
								"DZ\characters\masks\data\GasMask_Glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GasMask_damage.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GasMask_damage.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GasMask_destruct.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\GasMask_m.p3d";
			female="\DZ\characters\masks\GasMask_f.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
	
	class PTI_GasMask_Black: PTI_GasMask
	{
		scope = 2;
		displayName="PTI Black Combat Gasmask";
		visibilityModifier = 0.9;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] = {
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_black_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_black_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_black_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_black_co.paa"
				};
	};
	
	class PTI_GasMask_Grey: PTI_GasMask
	{
		scope = 2;
		displayName="PTI Grey Combat Gasmask";
		visibilityModifier = 0.9;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] = {
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_grey_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_grey_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_grey_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_grey_co.paa"
				};
	};
	
	class PTI_GasMask_Green: PTI_GasMask
	{
		scope = 2;
		displayName="PTI Green Combat Gasmask";
		visibilityModifier = 0.9;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] = {
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_green_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_green_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_green_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_green_co.paa"
				};
	};
	
	class PTI_GasMask_Pink: PTI_GasMask
	{
		scope = 2;
		displayName="PTI Pink Combat Gasmask";
		visibilityModifier = 0.9;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] = {
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_pink_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_pink_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_pink_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_pink_co.paa"
				};
	};
	
	class PTI_GasMask_Purple: PTI_GasMask
	{
		scope = 2;
		displayName="PTI Purple Combat Gasmask";
		visibilityModifier = 0.9;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] = {
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_purple_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_purple_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_purple_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_purple_co.paa"
				};
	};
	class PTI_GasMask_White: PTI_GasMask
	{
		scope = 2;
		displayName="PTI White Combat Gasmask";
		visibilityModifier = 0.9;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] = {
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_white_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_white_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_white_co.paa",
			"\PTI_Gear\data\masks\GasMask\pti_gasmask_white_co.paa"
				};
	};
	//PTI Gym Ninja suit
	class PTI_GymNinja_Mask_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI Gym Ninja Mask";
		descriptionShort = "Only for the real gym ninjas. Makes yo face look toight like a toiga, is somewhat lead and water resistant and should also protect against the cold, but EV usually fatfingers something so no guarantees.";
		model = "\SetComplete\Hood\INKmasks\INKmasks_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 500;
		itemSize[] = {3,3};
		ragQuantity = 2;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		visibilityModifier = 0.9;
		repairableWithKits[] = {2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\INKmasks\data\Balaclava.rvmat"};
		headSelectionsToHide[]= {"Clipping_headCover_improvised","Clipping_Gasmask"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\INKmasks\INKmasks_m.p3d";
			female = "\SetComplete\Hood\INKmasks\INKmasks_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"SetComplete\Hood\INKmasks\data\Balaclava.rvmat"}},{0.7,{"SetComplete\Hood\INKmasks\data\Balaclava.rvmat"}},{0.5,{"SetComplete\Hood\INKmasks\data\Balaclava_damage.rvmat"}},{0.3,{"SetComplete\Hood\INKmasks\data\Balaclava_damage.rvmat"}},{0.1,{"SetComplete\Hood\INKmasks\data\Balaclava_destruct.rvmat"}},{0.01,{"SetComplete\Hood\INKmasks\data\Balaclava_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.95;
					};
					class Shock
					{
						damage = 0.95;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.7;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.7;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.75;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
			class Protection
			{
				biological = 0.3;
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "Shirt_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "Shirt_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_GymNinja_Mask_B: PTI_GymNinja_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Black";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_B_co.paa"};
	};
	class PTI_GymNinja_Mask_PD: PTI_GymNinja_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask PinkD";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_PD_co.paa"};
	};
	
	class PTI_GymNinja_Mask_P: PTI_GymNinja_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Pink";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_P_co.paa"};
	};
	
	
	class PTI_GymNinja_Mask_R: PTI_GymNinja_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Red";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_R_co.paa"};
	};
	
	class PTI_GymNinja_Mask_Pu: PTI_GymNinja_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Purple";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_Pu_co.paa"};
	};
	class PTI_GymNinja_Mask_W: PTI_GymNinja_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask White";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_W_co.paa"};
	};
	class PTI_GymNinja_Top_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI Gym Ninja Top";
		descriptionShort = "Only for the real gym ninjas. Makes yo body look toight like a toiga, is somewhat lead and water resistant and should also protect against the cold, but EV usually fatfingers something so no guarantees.";
		model = "\SetComplete\Tops\INKtops\INKtops_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing","Body"};
		weight = 1000;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,6};
		quickBarBonus = 2;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		ragQuantity = 3;
		repairableWithKits[] = {2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"Torso","ND","PDA","Watch"};
		hiddenSelectionsTextures[] = 
		{
			"\PTI_Gear\data\shirts\PTI_GymNinja_Top_B.paa",
			"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
			"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
			"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
		hiddenSelectionsMaterials[] = {"SetComplete\Tops\INKtops\data\Torso.rvmat","SetComplete\Tops\INKtops\data\ND.rvmat","SetComplete\Tops\INKtops\data\PDA.rvmat","SetComplete\Tops\INKtops\data\Watch.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"SetComplete\Tops\INKtops\data\Torso.rvmat","SetComplete\Tops\INKtops\data\ND.rvmat","SetComplete\Tops\INKtops\data\PDA.rvmat","SetComplete\Tops\INKtops\data\Watch.rvmat"}},{0.7,{"SetComplete\Tops\INKtops\data\Torso.rvmat","SetComplete\Tops\INKtops\data\ND.rvmat","SetComplete\Tops\INKtops\data\PDA.rvmat","SetComplete\Tops\INKtops\data\Watch.rvmat"}},{0.5,{"SetComplete\Tops\INKtops\data\Torso_damage.rvmat","SetComplete\Tops\INKtops\data\ND_damage.rvmat","SetComplete\Tops\INKtops\data\PDA_damage.rvmat","SetComplete\Tops\INKtops\data\Watch_damage.rvmat"}},{0.3,{"SetComplete\Tops\INKtops\data\Torso_damage.rvmat","SetComplete\Tops\INKtops\data\ND_damage.rvmat","SetComplete\Tops\INKtops\data\PDA_damage.rvmat","SetComplete\Tops\INKtops\data\Watch_damage.rvmat"}},{0.1,{"SetComplete\Tops\INKtops\data\Torso_destruct.rvmat","SetComplete\Tops\INKtops\data\ND_destruct.rvmat","SetComplete\Tops\INKtops\data\PDA_destruct.rvmat","SetComplete\Tops\INKtops\data\Watch_destruct.rvmat"}},{0.01,{"SetComplete\Tops\INKtops\data\Torso_destruct.rvmat","SetComplete\Tops\INKtops\data\ND_destruct.rvmat","SetComplete\Tops\INKtops\data\PDA_destruct.rvmat","SetComplete\Tops\INKtops\data\Watch_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SetComplete\Tops\INKtops\INKtops_m.p3d";
			female = "\SetComplete\Tops\INKtops\INKtops_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymNinja_Top_B: PTI_GymNinja_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_B.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	
	class PTI_GymNinja_Top_P: PTI_GymNinja_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_P.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"\PTI_Gear\data\shirts\Watch_b_pink_co.paa"
		};
	};
	
	class PTI_GymNinja_Top_Pu: PTI_GymNinja_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_Pu.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"\PTI_Gear\data\shirts\Watch_b_pink_co.paa"
		};
	};
	
	class PTI_GymNinja_Top_R: PTI_GymNinja_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_R.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	class PTI_GymNinja_Top_G: PTI_GymNinja_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = 
		
		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_G.paa",
		"SetComplete\Tops\INKtops\data\ND_co.paa","SetComplete\Tops\INKtops\data\PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	class PTI_GymNinja_Top_OG: PTI_GymNinja_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = 
		
		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_OG.paa",
		"SetComplete\Tops\INKtops\data\ND_co.paa","SetComplete\Tops\INKtops\data\PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	class PTI_GymNinja_Pants_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI GymNinja Pants";
		descriptionShort = "Only for the real gym ninjas. Makes yo booty look toight like a toiga, is somewhat lead and water resistant and should also protect against the cold, but EV usually fatfingers something so no guarantees.";
		model = "\SetComplete\Pants\INKpants\INKpants_g.p3d";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		weight = 800;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,6};
		quickBarBonus = 2;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		ragQuantity = 3;
		repairableWithKits[] = {2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_B_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Pants\INKpants\data\Pants.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 320;
					healthLevels[] = {{1,{"SetComplete\Pants\INKpants\data\Pants.rvmat"}},{0.7,{"SetComplete\Pants\INKpants\data\Pants.rvmat"}},{0.5,{"SetComplete\Pants\INKpants\data\Pants_damage.rvmat"}},{0.3,{"SetComplete\Pants\INKpants\data\Pants_damage.rvmat"}},{0.1,{"SetComplete\Pants\INKpants\data\Pants_destruct.rvmat"}},{0.01,{"SetComplete\Pants\INKpants\data\Pants_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SetComplete\Pants\INKpants\INKpants_m.p3d";
			female = "\SetComplete\Pants\INKpants\INKpants_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymNinja_Pants_B: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_B_co.paa"};
	};
	
	class PTI_GymNinja_Pants_P: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_P_co.paa"};
	};
	
	class PTI_GymNinja_Pants_P2: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_P2_co.paa"};
	};
	
	
	class PTI_GymNinja_Pants_Pu: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_Pu_co.paa"};
	};
	
	class PTI_GymNinja_Pants_R: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_R_co.paa"};
	};
	
	
	class PTI_GymNinja_Pants_OG: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_OG_co.paa"};
	};
	class PTI_GymNinja_Pants_DG: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_DG_co.paa"};
	};
	class PTI_GymNinja_Pants_Grey: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_Grey_co.paa"};
	};
	class PTI_GymNinja_Pants_White: PTI_GymNinja_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_White_co.paa"};
	};
	class PTI_GymNinja_Shoes_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI GymNinja Shoes";
		descriptionShort = "PTI GymNinja Shoes";
		model = "\SetComplete\Shoes\INKshoes\INKshoes_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		weight = 350;
		itemSize[] = {2,2};
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		soundAttType = "Boots";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\footwear\PTI_GymNinja_Shoes_B_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Shoes\INKshoes\data\Shoes.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"SetComplete\Shoes\INKshoes\data\Shoes.rvmat"}},{0.7,{"SetComplete\Shoes\INKshoes\data\Shoes.rvmat"}},{0.5,{"SetComplete\Shoes\INKshoes\data\Shoes_damage.rvmat"}},{0.3,{"SetComplete\Shoes\INKshoes\data\Shoes_damage.rvmat"}},{0.1,{"SetComplete\Shoes\INKshoes\data\Shoes_destruct.rvmat"}},{0.01,{"SetComplete\Shoes\INKshoes\data\Shoes_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SetComplete\Shoes\INKshoes\INKshoes_m.p3d";
			female = "\SetComplete\Shoes\INKshoes\INKshoes_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymNinja_Shoes_B: PTI_GymNinja_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_B_co.paa"};
	};
	
	class PTI_GymNinja_Shoes_P: PTI_GymNinja_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_P_co.paa"};
	};
	
	class PTI_GymNinja_Shoes_R: PTI_GymNinja_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_R_co.paa"};
	};
	
	
	class PTI_GymNinja_Shoes_Pu: PTI_GymNinja_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_Pu_co.paa"};
	};
	
	//PTI GYMNinja NBC
	//PTI Gym Ninja suit
	class PTI_GymNinja_NBC_Mask_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI Gym Ninja NBC Mask";
		descriptionShort = "Only for the real gym ninjas. Makes yo face look toight like a toiga, is somewhat lead and water resistant and should also protect against the cold, and NBC threats";
		model = "\SetComplete\Hood\INKmasks\INKmasks_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 500;
		itemSize[] = {3,3};
		ragQuantity = 2;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		visibilityModifier = 0.9;
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityDestroyOnMin=0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\INKmasks\data\Balaclava.rvmat"};
		headSelectionsToHide[]= {"Clipping_headCover_improvised","Clipping_Gasmask"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\INKmasks\INKmasks_m.p3d";
			female = "\SetComplete\Hood\INKmasks\INKmasks_f.p3d";
		};
		class Protection
			{
			biological=1;
			chemical=1;
			};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1,{"SetComplete\Hood\INKmasks\data\Balaclava.rvmat"}},{0.7,{"SetComplete\Hood\INKmasks\data\Balaclava.rvmat"}},{0.5,{"SetComplete\Hood\INKmasks\data\Balaclava_damage.rvmat"}},{0.3,{"SetComplete\Hood\INKmasks\data\Balaclava_damage.rvmat"}},{0.1,{"SetComplete\Hood\INKmasks\data\Balaclava_destruct.rvmat"}},{0.01,{"SetComplete\Hood\INKmasks\data\Balaclava_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.95;
					};
					class Shock
					{
						damage = 0.95;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.7;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.7;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.75;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "Shirt_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "Shirt_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_GymNinja_NBC_Mask_B: PTI_GymNinja_NBC_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja NBC Mask Black";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_B_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Mask_P: PTI_GymNinja_NBC_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Pink";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_P_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Mask_R: PTI_GymNinja_NBC_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Pink";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_R_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Mask_Pu: PTI_GymNinja_NBC_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask Black";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_Pu_co.paa"};
	};
	class PTI_GymNinja_NBC_Mask_W: PTI_GymNinja_NBC_Mask_ColorBase
	{
		displayName = "P.T.I. GymNinja Mask White";
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_GymNinja_Mask_W_co.paa"};
	};
	class PTI_GymNinja_NBC_Top_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI NBC Gym Ninja Top";
		descriptionShort = "Only for the real gym ninjas. Makes yo body look toight like a toiga, is somewhat lead and water resistant and should also protect against the cold, but EV usually fatfingers something so no guarantees.";
		model = "\SetComplete\Tops\INKtops\INKtops_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing","Body"};
		weight = 1000;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,6};
		quickBarBonus = 2;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		ragQuantity = 3;
		repairableWithKits[] = {2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"Torso","ND","PDA","Watch"};
		hiddenSelectionsTextures[] = 
		{
			"\PTI_Gear\data\shirts\PTI_GymNinja_Top_B.paa",
			"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
			"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
			"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
		hiddenSelectionsMaterials[] = {"SetComplete\Tops\INKtops\data\Torso.rvmat","SetComplete\Tops\INKtops\data\ND.rvmat","SetComplete\Tops\INKtops\data\PDA.rvmat","SetComplete\Tops\INKtops\data\Watch.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"SetComplete\Tops\INKtops\data\Torso.rvmat","SetComplete\Tops\INKtops\data\ND.rvmat","SetComplete\Tops\INKtops\data\PDA.rvmat","SetComplete\Tops\INKtops\data\Watch.rvmat"}},{0.7,{"SetComplete\Tops\INKtops\data\Torso.rvmat","SetComplete\Tops\INKtops\data\ND.rvmat","SetComplete\Tops\INKtops\data\PDA.rvmat","SetComplete\Tops\INKtops\data\Watch.rvmat"}},{0.5,{"SetComplete\Tops\INKtops\data\Torso_damage.rvmat","SetComplete\Tops\INKtops\data\ND_damage.rvmat","SetComplete\Tops\INKtops\data\PDA_damage.rvmat","SetComplete\Tops\INKtops\data\Watch_damage.rvmat"}},{0.3,{"SetComplete\Tops\INKtops\data\Torso_damage.rvmat","SetComplete\Tops\INKtops\data\ND_damage.rvmat","SetComplete\Tops\INKtops\data\PDA_damage.rvmat","SetComplete\Tops\INKtops\data\Watch_damage.rvmat"}},{0.1,{"SetComplete\Tops\INKtops\data\Torso_destruct.rvmat","SetComplete\Tops\INKtops\data\ND_destruct.rvmat","SetComplete\Tops\INKtops\data\PDA_destruct.rvmat","SetComplete\Tops\INKtops\data\Watch_destruct.rvmat"}},{0.01,{"SetComplete\Tops\INKtops\data\Torso_destruct.rvmat","SetComplete\Tops\INKtops\data\ND_destruct.rvmat","SetComplete\Tops\INKtops\data\PDA_destruct.rvmat","SetComplete\Tops\INKtops\data\Watch_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class ClothingTypes
		{
			male = "\SetComplete\Tops\INKtops\INKtops_m.p3d";
			female = "\SetComplete\Tops\INKtops\INKtops_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymNinja_NBC_Top_B: PTI_GymNinja_NBC_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_B.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	
	class PTI_GymNinja_NBC_Top_P: PTI_GymNinja_NBC_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_P.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"\PTI_Gear\data\shirts\Watch_b_pink_co.paa"
		};
	};
	
	class PTI_GymNinja_NBC_Top_Pu: PTI_GymNinja_NBC_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_Pu.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"\PTI_Gear\data\shirts\Watch_b_pink_co.paa"
		};
	};
	
	class PTI_GymNinja_NBC_Top_R: PTI_GymNinja_NBC_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] =

		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_R.paa",
		"\PTI_Gear\data\shirts\PTI_ND_RG_co.paa",
		"\PTI_Gear\data\shirts\PTI_PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	class PTI_GymNinja_NBC_Top_G: PTI_GymNinja_NBC_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = 
		
		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_G.paa",
		"SetComplete\Tops\INKtops\data\ND_co.paa","SetComplete\Tops\INKtops\data\PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	class PTI_GymNinja_NBC_Top_OG: PTI_GymNinja_NBC_Top_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = 
		
		{
		"\PTI_Gear\data\shirts\PTI_GymNinja_Top_OG.paa",
		"SetComplete\Tops\INKtops\data\ND_co.paa","SetComplete\Tops\INKtops\data\PDA_co.paa",
		"SetComplete\Tops\INKtops\data\Watch_co.paa"
		};
	};
	class PTI_GymNinja_NBC_Pants_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI GymNinja NBC Pants";
		descriptionShort = "Only for the real gym ninjas. Makes yo booty look toight like a toiga, is somewhat lead and water resistant and should also protect against the cold, but EV usually fatfingers something so no guarantees.";
		model = "\SetComplete\Pants\INKpants\INKpants_g.p3d";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		weight = 800;
		itemSize[] = {4,3};
		itemsCargoSize[] = {8,6};
		quickBarBonus = 2;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		ragQuantity = 3;
		repairableWithKits[] = {2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_B_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Pants\INKpants\data\Pants.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 320;
					healthLevels[] = {{1,{"SetComplete\Pants\INKpants\data\Pants.rvmat"}},{0.7,{"SetComplete\Pants\INKpants\data\Pants.rvmat"}},{0.5,{"SetComplete\Pants\INKpants\data\Pants_damage.rvmat"}},{0.3,{"SetComplete\Pants\INKpants\data\Pants_damage.rvmat"}},{0.1,{"SetComplete\Pants\INKpants\data\Pants_destruct.rvmat"}},{0.01,{"SetComplete\Pants\INKpants\data\Pants_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class ClothingTypes
		{
			male = "\SetComplete\Pants\INKpants\INKpants_m.p3d";
			female = "\SetComplete\Pants\INKpants\INKpants_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymNinja_NBC_Pants_B: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_B_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Pants_P: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_P_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Pants_R: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_R_co.paa"};
	};
	
	
	class PTI_GymNinja_NBC_Pants_P2: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_P2_co.paa"};
	};
	
	
	class PTI_GymNinja_NBC_Pants_Pu: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_Pu_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Pants_OG: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_OG_co.paa"};
	};
	class PTI_GymNinja_NBC_Pants_DG: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_DG_co.paa"};
	};
	class PTI_GymNinja_NBC_Pants_Grey: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_Grey_co.paa"};
	};
	class PTI_GymNinja_NBC_Pants_White: PTI_GymNinja_NBC_Pants_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\pants\PTI_GymNinja_Pants_White_co.paa"};
	};
	class PTI_GymNinja_NBC_Shoes_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI GymNinja NBC Shoes";
		descriptionShort = "PTI GymNinja Shoes";
		model = "\SetComplete\Shoes\INKshoes\INKshoes_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		weight = 350;
		itemSize[] = {2,2};
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.8;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		soundAttType = "Boots";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\footwear\PTI_GymNinja_Shoes_B_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Shoes\INKshoes\data\Shoes.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"SetComplete\Shoes\INKshoes\data\Shoes.rvmat"}},{0.7,{"SetComplete\Shoes\INKshoes\data\Shoes.rvmat"}},{0.5,{"SetComplete\Shoes\INKshoes\data\Shoes_damage.rvmat"}},{0.3,{"SetComplete\Shoes\INKshoes\data\Shoes_damage.rvmat"}},{0.1,{"SetComplete\Shoes\INKshoes\data\Shoes_destruct.rvmat"}},{0.01,{"SetComplete\Shoes\INKshoes\data\Shoes_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class ClothingTypes
		{
			male = "\SetComplete\Shoes\INKshoes\INKshoes_m.p3d";
			female = "\SetComplete\Shoes\INKshoes\INKshoes_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GymNinja_NBC_Shoes_B: PTI_GymNinja_NBC_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_B_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Shoes_P: PTI_GymNinja_NBC_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_P_co.paa"};
	};
	
	class PTI_GymNinja_NBC_Shoes_R: PTI_GymNinja_NBC_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_R_co.paa"};
	};
	
	
	class PTI_GymNinja_NBC_Shoes_Pu: PTI_GymNinja_NBC_Shoes_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\footwear\PTI_GymNinja_Shoes_Pu_co.paa"};
	};
	//mask gag
	//masks

	class PTI_Ballgag_Base: Clothing
	{
		scope=2;
		displayName="The PTI shutyourhole";
		descriptionShort="You talk too much!";
		model="\PTI_Gear\data\headgear\Ballgag\pti_ballgag_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=16;
		weight=340;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noHelmet=1;
		headSelectionsToHide[]=
		{
			"Clipping_NioshFaceMask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\Ballgag\pti_ballgag_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\PTI_Gear\data\headgear\Ballgag\Ballgag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\PTI_Gear\data\headgear\Ballgag\Ballgag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\PTI_Gear\data\headgear\Ballgag\Ballgag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\PTI_Gear\data\headgear\Ballgag\Ballgag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\PTI_Gear\data\headgear\Ballgag\Ballgag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\headgear\Ballgag\pti_ballgag_m.p3d";
			female="\PTI_Gear\data\headgear\Ballgag\pti_ballgag_f.p3d";
		};
		class Protection
		{
			biological=1.0;
			chemical=1.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="gag";
		soundVoicePriority=5;
	};
	class PTI_Ballgag: PTI_Ballgag_Base
	{
		scope=2;
		displayName="The PTI shutyourhole";
		descriptionShort="You talk too much!";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\Ballgag\pti_ballgag_co.paa",
		};
	};
	class PTI_Ballgag_Pink: PTI_Ballgag_Base
	{
		scope=2;
		displayName="The PTI shutyourhole";
		descriptionShort="You talk too much!";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\Ballgag\pti_ballgag_pink_co.paa",
		};
	};
	class PTI_Ballgag_purple: PTI_Ballgag_Base
	{
		scope=2;
		displayName="The PTI shutyourhole";
		descriptionShort="You talk too much!";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\headgear\Ballgag\pti_ballgag_purple_co.paa",
		};
	};
	class PTI_TrumpMask_Base: Clothing
	{
		scope=2;
		displayName="The PTI TwumpMask";
		descriptionShort="The PTI TwumpMask";
		model="\PTI_Gear\data\masks\TrumpMask\pti_trumpmask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=2;
		weight=340;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noHelmet=0;
		headSelectionsToHide[]=
		{
			"Clipping_NioshFaceMask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\masks\TrumpMask\pti_trump_mask_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\PTI_Gear\data\masks\TrumpMask\pti_trumpmask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\PTI_Gear\data\masks\TrumpMask\pti_trumpmask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\PTI_Gear\data\masks\TrumpMask\pti_trumpmask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\PTI_Gear\data\masks\TrumpMask\pti_trumpmask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\PTI_Gear\data\masks\TrumpMask\pti_trumpmask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\masks\TrumpMask\pti_trumpmask_m.p3d";
			female="\PTI_Gear\data\masks\TrumpMask\pti_trumpmask_m.p3d";
		};
		class Protection
		{
			biological=1.0;
			chemical=1.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="gag";
		soundVoicePriority=15;
	};
	class PTI_TrumpMask: PTI_TrumpMask_Base
	{
		scope=2;
		displayName="The PTI TwumpMask";
		descriptionShort="The PTI TwumpMask";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\masks\TrumpMask\pti_trump_mask_co.paa",
		};
	};
	
	class PTI_PredMask_Base: Clothing
	{
		scope=2;
		displayName="The PTI Predator Mask";
		descriptionShort="The PTI Predator Mask";
		model="\PTI_Gear\data\masks\PredatorMask\pti_predmask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=32;
		weight=340;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noHelmet=1;
		headSelectionsToHide[]=
		{
			"Clipping_NioshFaceMask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\masks\PredatorMask\pti_predmask_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\PTI_Gear\data\masks\PredatorMask\pti_predmask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\PTI_Gear\data\masks\PredatorMask\pti_predmask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\PTI_Gear\data\masks\PredatorMask\pti_predmask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\PTI_Gear\data\masks\PredatorMask\pti_predmask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\PTI_Gear\data\masks\PredatorMask\pti_predmask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\masks\PredatorMask\pti_predmask_m.p3d";
			female="\PTI_Gear\data\masks\PredatorMask\pti_predmask_m.p3d";
		};
		class Protection
		{
			biological=1.0;
			chemical=1.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_PredatorMask: PTI_PredMask_Base
	{
		scope=2;
		displayName="The PTI Predator Mask";
		descriptionShort="The PTI Predator Mask";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\masks\PredatorMask\pti_predmask_co.paa",
		};
	};
	class SCExecutionersMask_ColorBase;
	class SC_ExecutionersMask_White: SCExecutionersMask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\ExecutionersMask_White_co.paa"};
	};
	class NVGoggles;
	class PTI_NVGlasses_Base: NVGoggles
	{
		scope=2;
		displayName="The PTI NVG Implant";
		descriptionShort="The PTI Implant, sucks to your face like....";
		model="\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_g.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Eyewear",
			"Clothing"
		};
		rotationFlags=2;
		weight=340;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		headSelectionsToHide[]=
		{
			"Clipping_NioshFaceMask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_co.paa",
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		attachments[]=
		{
			"BatteryD"
		};
		NVOptic=1;		
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0019999998;
			plugType=1;
			attachmentAction=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_m.p3d";
			female="\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_m.p3d";
		};
		class Protection
		{
			biological=1.0;
			chemical=1.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_NVGlasses: PTI_NVGlasses_Base
	{
		scope=2;
		displayName="The PTI NVG Implant";
		descriptionShort="The PTI NVG Implant, sucks to your face like....";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\glasses\NVGlasses\pti_nvglasses_co.paa",
		};
	};
	//PTI GROM HOOD
	class PTI_GROMhood_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI NBC Hood";
		descriptionShort = "The PTI Hood, well insulated and damage resistant, can also be used as NBC hood";
		model = "\SetComplete\Hood\GROMhood\GROMhood_g.p3d";
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 650;
		itemSize[] = {4,3};
		ragQuantity = 1;
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.85;
		visibilityModifier = 0.6;
		repairableWithKits[] = {2};
		repairCosts[] = {30,25};
		noMask = 0;
		noEyewear = 0;
		headSelectionsToHide[] = {"Clipping_HeloHelmet"};
		hiddenSelections[] = {"mask","hood"};
		hiddenSelectionsTextures[] = {"SetComplete\Hood\GROMhood\data\Balaclava_co.paa","SetComplete\Hood\GROMhood\data\Hood_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\GROMhood\data\Balaclava.rvmat","SetComplete\Hood\GROMhood\data\Hood.rvmat"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\GROMhood\GROMhood_m.p3d";
			female = "\SetComplete\Hood\GROMhood\GROMhood_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 520;
					healthLevels[] = {{1,{"SetComplete\Hood\GROMhood\data\Balaclava.rvmat","SetComplete\Hood\GROMhood\data\Hood.rvmat"}},{0.7,{"SetComplete\Hood\GROMhood\data\Balaclava.rvmat","SetComplete\Hood\GROMhood\data\Hood.rvmat"}},{0.5,{"SetComplete\Hood\GROMhood\data\Balaclava_damage.rvmat","SetComplete\Hood\GROMhood\data\Hood_damage.rvmat"}},{0.3,{"SetComplete\Hood\GROMhood\data\Balaclava_damage.rvmat","SetComplete\Hood\GROMhood\data\Hood_damage.rvmat"}},{0.1,{"SetComplete\Hood\GROMhood\data\Balaclava_destruct.rvmat","SetComplete\Hood\GROMhood\data\Hood_destruct.rvmat"}},{0.01,{"SetComplete\Hood\GROMhood\data\Balaclava_destruct.rvmat","SetComplete\Hood\GROMhood\data\Hood_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
		class Protection
		{
			biological=1;
			chemical=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_GROMhood: PTI_GROMhood_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
		"SetComplete\Hood\GROMhood\data\Balaclava_co.paa",
		"SetComplete\Hood\GROMhood\data\Hood_co.paa"
		};
	};
	class PTI_GROMhood_Pink: PTI_GROMhood_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Balaclava_Pink_co.paa","\PTI_Gear\data\headgear\PTI_Hood_Pink_co.paa"};
	};
	class PTI_GROMhood_Purple: PTI_GROMhood_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Balaclava_Purple_co.paa","\PTI_Gear\data\headgear\PTI_Hood_Purple_co.paa"};
	};
	class PTI_GROMhood_Grey: PTI_GROMhood_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Balaclava_Grey_co.paa","\PTI_Gear\data\headgear\PTI_Hood_Grey_co.paa"};
	};
	class PTI_GROMhood_White: PTI_GROMhood_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Balaclava_White_co.paa","\PTI_Gear\data\headgear\PTI_Hood_White_co.paa"};
	};
	
	class PTI_GROMhood_Red: PTI_GROMhood_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Balaclava_Red_co.paa","\PTI_Gear\data\headgear\PTI_Hood_White_co.paa"};
	};
	
	//Munghards Fannypack edits
	class fannypack_ColorBase_mung;
	class PTI_fannypack_ColorBase: fannypack_ColorBase_mung
	{
		displayName = "PTI Fannypack";
		descriptionShort = "A fannypack for that little extra space. Some items can be attached. PTI Edition";
		model = "\MunghardsItems\fannypack\fannypack_g.p3d";
		attachments[]=
        {                    
            
            "MassTacticalBag",
            "VestBackpack",
            "VestGrenadeA",
            "VestGrenadeB",
            "VestGrenadeC",
            "VestGrenadeD",
            "VestHolster",
            "VestPouch",
            "Belt_Left",
            "shoulder",
            "Melee",
            "Dildo",
            "compass"
            
        };
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {4,1};
		itemsCargoSize[] = {10,7};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "\MunghardsItems\fannypack\fannypack.p3d";
			female = "\MunghardsItems\fannypack\fannypack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"MunghardsItems\fannypack\data\fannypack.rvmat"}},{0.7,{"MunghardsItems\fannypack\data\fannypack.rvmat"}},{0.5,{"MunghardsItems\fannypack\data\fannypack_damaged.rvmat"}},{0.3,{"MunghardsItems\fannypack\data\fannypack_damaged.rvmat"}},{0.0,{"MunghardsItems\fannypack\data\fannypack_destroyed.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_fannypack_pink: PTI_fannypack_ColorBase
	{
		scope = 2;
		descriptionShort = "PTI pink fannypack";
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\bags\fannypack_co.paa"};
	};
	class PTI_fannypack_black: PTI_fannypack_ColorBase
	{
		scope = 2;
		descriptionShort = "PTI black fannypack";
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\bags\fannypack_black_co.paa"};
	};
	class PTI_fannypack_multi: PTI_fannypack_ColorBase
	{
		scope = 2;
		descriptionShort = "PTI multi fannypack";
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\bags\fannypack_multi_co.paa"};
	};
	class PTI_fannypack_camo: PTI_fannypack_ColorBase
	{
		scope = 2;
		descriptionShort = "PTI camo fannypack";
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\bags\fannypack_camo_co.paa"};
	};
	


	//PTI Medieval Butter Knife
	
	class Sword;
	class PTI_Sword: Sword
	{
		scope=2;
		displayName="Conan's ButterKnife";
		descriptionShort="The butter knife that once belonged to the PTI Pump God. (Also opens cans without spilling all that much!)";
		model="\dz\weapons\melee\blade\medieval_sword.p3d";
		repairableWithKits[]={4};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		RestrainUnlockType=1;
		rotationFlags=12;
		itemSize[]={2,8};
		weight=1800;
		itemBehaviour=2;
		lootTag[]=
		{
			"Historical"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={1,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSword";
				range=2.0;
			};
			class Heavy
			{
				ammo="MeleeSword_Heavy";
				range=2.0;
			};
			class Sprint
			{
				ammo="Bullet_FRP50BMG";
				range=3.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="Toothpick_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Toothpick_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
	class PTI_AdminSword: Sword
	{
		scope=2;
		displayName="Massive Purple Dildo";
		descriptionShort="Massive Purple Dildo";
		model="\PTI_Gear\Admin\PurpleSlammerSword.p3d";
		repairableWithKits[]={4};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		RestrainUnlockType=1;
		rotationFlags=12;
		itemSize[]={2,8};
		weight=1800;
		itemBehaviour=2;
		lootTag[]=
		{
			"Historical"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={1,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\medieval_sword_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeDildo";
				range=2.0;
			};
			class Heavy
			{
				ammo="MeleeDildo_Heavy";
				range=2.0;
			};
			class Sprint
			{
				ammo="MeleeDildo_Heavy";
				range=3.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="Duck_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Duck_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
	
	
//PTI SetComplete by ZoonLi Edit.
//Hoodie
class PTI_Hoodie_Sly_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI Hoodie Sly .Jr";
		descriptionShort = "PTI Hoodie Sly Jr, a bit smaller than his .Sr";
		model = "\SetComplete\Tops\Hoodi\hoodie_g.p3d";
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing","Body"};
		weight = 850;
		itemSize[] = {3,3};
		itemsCargoSize[] = {7,5};
		quickBarBonus = 1;
		absorbency = 0;
		varWetMax=0.0;
		heatIsolation = 0.5;
		ragQuantity = 4;
		repairableWithKits[]={5,3,2};
		repairCosts[]={10,15,25};
		soundAttType = "WoolShirt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\gear\PTI_Hoodie_Sly.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Tops\Hoodi\data\hoodie.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"SetComplete\Tops\Hoodi\data\hoodie.rvmat"}},{0.7,{"SetComplete\Tops\Hoodi\data\hoodie.rvmat"}},{0.5,{"SetComplete\Tops\Hoodi\data\hoodie_damage.rvmat"}},{0.3,{"SetComplete\Tops\Hoodi\data\hoodie_damage.rvmat"}},{0.1,{"SetComplete\Tops\Hoodi\data\hoodie_destruct.rvmat"}},{0.01,{"SetComplete\Tops\Hoodi\data\hoodie_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.5;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SetComplete\Tops\Hoodi\hoodie_m.p3d";
			female = "\SetComplete\Tops\Hoodi\hoodie_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_Hoodie_Sly_Yellow: PTI_Hoodie_Sly_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"PTI_Gear\data\gear\PTI_Hoodie_Sly.paa"};
	};
	
	//Firemans helmet
	class PTI_FirefightersHelmet_ColorBase: Clothing
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_FirefightersHelmet_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_FirefightersHelmet_ColorBase1";
		model = "\SetComplete\Hood\FireHelmet\FireHelmet_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 800;
		itemSize[] = {3,3};
		varWetMax = 0.0;
		heatIsolation = 0.5;
		noMask = 0;
		noEyewear = 0;
		hiddenSelections[] = {"mask","helmet","earmuff"};
		hiddenSelectionsTextures[] = {"SetComplete\Hood\FireHelmet\data\mask.paa","SetComplete\Hood\FireHelmet\data\helmet.paa","SetComplete\Hood\FireHelmet\data\earmuff.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\FireHelmet\data\mask.rvmat","SetComplete\Hood\FireHelmet\data\helmet.rvmat","SetComplete\Hood\FireHelmet\data\earmuff.rvmat"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\FireHelmet\FireHelmet.p3d";
			female = "\SetComplete\Hood\FireHelmet\FireHelmet.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"SetComplete\Hood\FireHelmet\data\mask.rvmat","SetComplete\Hood\FireHelmet\data\helmet.rvmat","SetComplete\Hood\FireHelmet\data\earmuff.rvmat"}},{0.7,{"SetComplete\Hood\FireHelmet\data\mask.rvmat","SetComplete\Hood\FireHelmet\data\helmet.rvmat","SetComplete\Hood\FireHelmet\data\earmuff.rvmat"}},{0.5,{"SetComplete\Hood\FireHelmet\data\mask_damage.rvmat","SetComplete\Hood\FireHelmet\data\helmet_damage.rvmat","SetComplete\Hood\FireHelmet\data\earmuff_damage.rvmat"}},{0.3,{"SetComplete\Hood\FireHelmet\data\mask_damage.rvmat","SetComplete\Hood\FireHelmet\data\helmet_damage.rvmat","SetComplete\Hood\FireHelmet\data\earmuff_damage.rvmat"}},{0.1,{"SetComplete\Hood\FireHelmet\data\mask_destruct.rvmat","SetComplete\Hood\FireHelmet\data\helmet_destruct.rvmat","SetComplete\Hood\FireHelmet\data\earmuff_destruct.rvmat"}},{0.01,{"SetComplete\Hood\FireHelmet\data\mask_destruct.rvmat","SetComplete\Hood\FireHelmet\data\helmet_destruct.rvmat","SetComplete\Hood\FireHelmet\data\earmuff_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.68;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.48;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.48;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.47;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "Shirt_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "Shirt_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_FirefightersHelmet_Orange: PTI_FirefightersHelmet_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\FireHelmet\data\mask.paa","PTI_Gear\data\headgear\PTI_FireFighterHelmet_Orange_Charred_co.paa","SetComplete\Hood\FireHelmet\data\earmuff.paa"};
	};
	class PTI_FirefightersHelmet_White_Burned: PTI_FirefightersHelmet_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\FireHelmet\data\mask.paa","PTI_Gear\data\headgear\PTI_FireFighterHelmet_White_Burnt_co.paa","SetComplete\Hood\FireHelmet\data\earmuff.paa"};
	};
	class PTI_FirefightersHelmet_White_Bloody: PTI_FirefightersHelmet_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\FireHelmet\data\mask.paa","PTI_Gear\data\headgear\PTI_FireFighterHelmet_White_Bloody_co.paa","SetComplete\Hood\FireHelmet\data\earmuff.paa"};
	};
	
	class PTI_Hood_with_mask_ColorBase: Clothing
	{
		scope = 0;
		displayName = "Gorka camouflage hood";
		descriptionShort = "The gorka camouflage hood with mask is designed for use by advanced observers, security professionals, hunters and adventurers. It is waterproof and is able to protect against dirt and dust. The mask is made of synthetic fiber, which allows you to breathe freely. Comes in multiple colors";
		model = "\SetComplete\Hood\Thood\Hood_with_mask_g.p3d";
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 300;
		itemSize[] = {2,3};
		absorbency = 0.0;
		varWetMax = 0.0;
		heatIsolation = 0.85;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_ushanka"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\Thood\Data\hood.rvmat","SetComplete\Hood\Thood\Data\mask.rvmat"};
		hiddenSelections[] = {"camo","mask"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\Thood\Hood_with_mask_m.p3d";
			female = "\SetComplete\Hood\Thood\Hood_with_mask_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 85;
					healthLevels[] = {{1,{"SetComplete\Hood\Thood\Data\hood.rvmat","SetComplete\Hood\Thood\Data\mask.rvmat"}},{0.7,{"SetComplete\Hood\Thood\Data\hood.rvmat","SetComplete\Hood\Thood\Data\mask.rvmat"}},{0.5,{"SetComplete\Hood\Thood\Data\hood_damage.rvmat","SetComplete\Hood\Thood\Data\mask_damage.rvmat"}},{0.3,{"SetComplete\Hood\Thood\Data\hood_damage.rvmat","SetComplete\Hood\Thood\Data\mask_damage.rvmat"}},{0.1,{"SetComplete\Hood\Thood\Data\hood_destruct.rvmat","SetComplete\Hood\Thood\Data\mask_destruct.rvmat"}},{0.01,{"SetComplete\Hood\Thood\Data\hood_destruct.rvmat","SetComplete\Hood\Thood\Data\mask_destruct.rvmat"}}};
				};
			};
		};
		class GlobalArmor
		{
			class Melee
			{
				class Health
				{
					damage = 0.5;
				};
				class Blood
				{
					damage = 0.5;
				};
				class Shock
				{
					damage = 0.5;
				};
			};
			class Infected
			{
				class Health
				{
					damage = 0.5;
				};
				class Blood
				{
					damage = 0.5;
				};
				class Shock
				{
					damage = 0.5;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_Hood_with_mask_woodland: PTI_Hood_with_mask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\Thood\Data\hood_woodland.paa","SetComplete\Hood\Thood\Data\mask.paa"};
	};
	class PTI_Hood_with_mask_usp: PTI_Hood_with_mask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\Thood\Data\hood_usp.paa","SetComplete\Hood\Thood\Data\mask.paa"};
	};
	class PTI_Hood_with_mask_black: PTI_Hood_with_mask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\Thood\Data\hood_black.paa","SetComplete\Hood\Thood\Data\mask.paa"};
	};
	class PTI_Hood_with_mask_winter: PTI_Hood_with_mask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\Thood\Data\hood_winter.paa","SetComplete\Hood\Thood\Data\mask.paa"};
	};
	class PTI_Hood_with_mask_fire: PTI_Hood_with_mask_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SetComplete\Hood\Thood\Data\hood_fire.paa","SetComplete\Hood\Thood\Data\mask.paa"};
	};
	//Pilot Helmet 
	class SC_PilotHelmet_ColorBase;
	class PTI_PilotHelmet_Base: SC_PilotHelmet_ColorBase
	{
		displayName = "Aviation Helmet";
	descriptionShort = "Personal protective equipment for flight personnel. Model By ZoonLi Textures by EV"; 
		model = "\SetComplete\Hood\PilotHelmet\PilotHelmet_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 1800;
		itemSize[] = {4,4};
		varWetMax = 0.0;
		heatIsolation = 0.7;
		noMask = 0;
		noEyewear = 0;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","glass"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\headgear\PTI_PilotHelmet_1_Green_co.paa","SetComplete\Hood\PilotHelmet\data\PH_2_co.paa","SetComplete\Hood\PilotHelmet\data\PH_3_co.paa","SetComplete\Hood\PilotHelmet\data\PH_4_co.paa","SetComplete\Hood\PilotHelmet\data\glass_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\PilotHelmet\data\PH_1.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4.rvmat","SetComplete\Hood\PilotHelmet\data\glass.rvmat"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\PilotHelmet\PilotHelmet.p3d";
			female = "\SetComplete\Hood\PilotHelmet\PilotHelmet.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"SetComplete\Hood\PilotHelmet\data\PH_1.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4.rvmat","SetComplete\Hood\PilotHelmet\data\glass.rvmat"}},{0.7,{"SetComplete\Hood\PilotHelmet\data\PH_1.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4.rvmat","SetComplete\Hood\PilotHelmet\data\glass.rvmat"}},{0.5,{"SetComplete\Hood\PilotHelmet\data\PH_1_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_damage.rvmat","SetComplete\Hood\PilotHelmet\data\glass_damage.rvmat"}},{0.3,{"SetComplete\Hood\PilotHelmet\data\PH_1_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_damage.rvmat","SetComplete\Hood\PilotHelmet\data\glass_damage.rvmat"}},{0.1,{"SetComplete\Hood\PilotHelmet\data\PH_1_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\glass_destruct.rvmat"}},{0.01,{"SetComplete\Hood\PilotHelmet\data\PH_1_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\glass_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.4525;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.45;
					};
				};
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "DarkMotoHelmet_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "DarkMotoHelmet_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_PilotHelmet_Green: PTI_PilotHelmet_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"PTI_Gear\data\headgear\PTI_PilotHelmet_1_Green_co.paa","SetComplete\Hood\PilotHelmet\data\PH_2_co.paa","SetComplete\Hood\PilotHelmet\data\PH_3_co.paa","SetComplete\Hood\PilotHelmet\data\PH_4_co.paa","SetComplete\Hood\PilotHelmet\data\glass_co.paa"};
	};
	class PTI_PilotHelmet_Black: PTI_PilotHelmet_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"PTI_Gear\data\headgear\PTI_PilotHelmet_1_Black_co.paa","SetComplete\Hood\PilotHelmet\data\PH_2_co.paa","SetComplete\Hood\PilotHelmet\data\PH_3_co.paa","SetComplete\Hood\PilotHelmet\data\PH_4_co.paa","SetComplete\Hood\PilotHelmet\data\glass_co.paa"};
	};
	class PTI_PilotHelmet_Navy: PTI_PilotHelmet_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"PTI_Gear\data\headgear\PTI_PilotHelmet_1_Navy_co.paa","SetComplete\Hood\PilotHelmet\data\PH_2_co.paa","SetComplete\Hood\PilotHelmet\data\PH_3_co.paa","SetComplete\Hood\PilotHelmet\data\PH_4_co.paa","SetComplete\Hood\PilotHelmet\data\glass_co.paa"};
	};
	
	class PTI_PilotHelmet_Pink: PTI_PilotHelmet_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"PTI_Gear\data\headgear\PTI_PilotHelmet_1_Pink_co.paa","SetComplete\Hood\PilotHelmet\data\PH_2_co.paa","SetComplete\Hood\PilotHelmet\data\PH_3_co.paa","SetComplete\Hood\PilotHelmet\data\PH_4_co.paa","SetComplete\Hood\PilotHelmet\data\glass_co.paa"};
	};
	//Sniper Veil
	class PTI_SniperVeil_ColorBase: Clothing
	{
		scope = 0;
		displayName = "Sniper Veil";
		descriptionShort = "Sniper Veil, for the real sneaky pumper";
		model = "\SetComplete\Hood\Poncho_S\Poncho_S_g.p3d";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing","Hips"};
		rotationFlags = 2;
		weight = 500;
		itemSize[] = {3,3};
		ragQuantity = 3;
		absorbency = 0.0;
		varWetMax = 0;
		heatIsolation = 0.75;
		visibilityModifier = 0.9;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_Sand_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\Poncho_S\data\Poncho_S.rvmat"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\Poncho_S\Poncho_S.p3d";
			female = "\SetComplete\Hood\Poncho_S\Poncho_S.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 90;
					healthLevels[] = {{1,{"SetComplete\Hood\Poncho_S\data\Poncho_S.rvmat"}},{0.7,{"SetComplete\Hood\Poncho_S\data\Poncho_S.rvmat"}},{0.5,{"SetComplete\Hood\Poncho_S\data\Poncho_S_damage.rvmat"}},{0.3,{"SetComplete\Hood\Poncho_S\data\Poncho_S_damage.rvmat"}},{0.1,{"SetComplete\Hood\Poncho_S\data\Poncho_S_destruct.rvmat"}},{0.01,{"SetComplete\Hood\Poncho_S\data\Poncho_S_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "Shirt_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "Shirt_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_SniperVeil_Sand: PTI_SniperVeil_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_Sand_co.paa"};
	};
	
	class PTI_SniperVeil_White: PTI_SniperVeil_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_W_co.paa"};
	};
	
	class PTI_SniperVeil_Black: PTI_SniperVeil_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_B_co.paa"};
	};
	class PTI_SniperVeil_Grey: PTI_SniperVeil_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_G_co.paa"};
	};
	class PTI_SniperVeil_OG: PTI_SniperVeil_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_OG_co.paa"};
	};
	
	class PTI_SniperVeil_P: PTI_SniperVeil_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SniperVeil_P_co.paa"};
	};
	//Predator Test
	class PTI_PredHelmet_Base: Clothing
	{
		scope = 0;
		displayName = "Predtest Helmet";
	descriptionShort = "Personal protective equipment for flight personnel. Model By ZoonLi Textures by EV"; 
		model = "PTI_Gear\data\predtest.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 1800;
		itemSize[] = {4,4};
		varWetMax = 0.6;
		heatIsolation = 0.5;
		noMask = 0;
		noEyewear = 0;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","glass"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\headgear\PTI_PilotHelmet_1_Green_co.paa","SetComplete\Hood\PilotHelmet\data\PH_2_co.paa","SetComplete\Hood\PilotHelmet\data\PH_3_co.paa","SetComplete\Hood\PilotHelmet\data\PH_4_co.paa","SetComplete\Hood\PilotHelmet\data\glass_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\PilotHelmet\data\PH_1.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4.rvmat","SetComplete\Hood\PilotHelmet\data\glass.rvmat"};
		class ClothingTypes
		{
			male = "PTI_Gear\data\predtest.p3d";
			female = "PTI_Gear\data\predtest.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"SetComplete\Hood\PilotHelmet\data\PH_1.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4.rvmat","SetComplete\Hood\PilotHelmet\data\glass.rvmat"}},{0.7,{"SetComplete\Hood\PilotHelmet\data\PH_1.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4.rvmat","SetComplete\Hood\PilotHelmet\data\glass.rvmat"}},{0.5,{"SetComplete\Hood\PilotHelmet\data\PH_1_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_damage.rvmat","SetComplete\Hood\PilotHelmet\data\glass_damage.rvmat"}},{0.3,{"SetComplete\Hood\PilotHelmet\data\PH_1_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_damage.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_damage.rvmat","SetComplete\Hood\PilotHelmet\data\glass_damage.rvmat"}},{0.1,{"SetComplete\Hood\PilotHelmet\data\PH_1_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\glass_destruct.rvmat"}},{0.01,{"SetComplete\Hood\PilotHelmet\data\PH_1_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_2_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_3_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\PH_4_destruct.rvmat","SetComplete\Hood\PilotHelmet\data\glass_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.4525;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.45;
					};
				};
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "DarkMotoHelmet_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "DarkMotoHelmet_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_Paperbag_ColorBase: Clothing
	{
		scope = 0;
		displayName = "PTI Paperbag mask";
		descriptionShort = "PTI Paperbag mask, because everyone has a right to look pretty once in a while.";
		model = "\SetComplete\Hood\Paperbag\Paperbag_g.p3d";
		inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 65;
		itemSize[] = {3,3};
		absorbency = 0;
		varWetMax = 0;
		heatIsolation = 0.1;
		visibilityModifier = 0.9;
		noMask = 0;
		noEyewear = 0;
		repairableWithKits[] = {5};
		repairCosts[] = {25};
		headSelectionsToHide[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Paperbag_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\Paperbag\data\Paperbag.rvmat"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\Paperbag\Paperbag_m.p3d";
			female = "\SetComplete\Hood\Paperbag\Paperbag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"SetComplete\Hood\Paperbag\data\Paperbag.rvmat"}},{0.7,{"SetComplete\Hood\Paperbag\data\Paperbag.rvmat"}},{0.5,{"SetComplete\Hood\Paperbag\data\Paperbag_damage.rvmat"}},{0.3,{"SetComplete\Hood\Paperbag\data\Paperbag_damage.rvmat"}},{0.1,{"SetComplete\Hood\Paperbag\data\Paperbag_destruct.rvmat"}},{0.01,{"SetComplete\Hood\Paperbag\data\Paperbag_destruct.rvmat"}}};
				};
			};
			class Protection
			{
				biological = 0.25;
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "pickUpPaper_SoundSet";
						id = 797;
					};
				};
			};
		};
	};
	class PTI_Paperbag1: PTI_Paperbag_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Paperbag_co.paa"};
	};
	class PTI_Paperbag2: PTI_Paperbag_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Paperbag2_co.paa"};	
	};
	class PTI_Paperbag3: PTI_Paperbag_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_Paperbag3_co.paa"};
	};
	class PTI_SkullMask_ColorBase: Clothing
	{
		scope = 0;
		displayName = "Skullmask";
		descriptionShort = "Skull-mask, comes in different variants, model by zoonli";
		model = "\SetComplete\Hood\SkullMask\SkullMask_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 600;
		itemSize[] = {2,3};
		absorbency = 0;
		varWetMax = 0;
		heatIsolation = 0.3;
		visibilityModifier = 0.9;
		noHelmet = 0;
		noEyewear = 0;
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camo","skull"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SkullMask_Black_co.paa","SetComplete\Hood\SkullMask\data\SkullMask_skull_co.paa"};
		hiddenSelectionsMaterials[] = {"SetComplete\Hood\SkullMask\data\SkullMask.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull.rvmat"};
		class ClothingTypes
		{
			male = "\SetComplete\Hood\SkullMask\SkullMask_m.p3d";
			female = "\SetComplete\Hood\SkullMask\SkullMask_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"SetComplete\Hood\SkullMask\data\SkullMask.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull.rvmat"}},{0.7,{"SetComplete\Hood\SkullMask\data\SkullMask.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull.rvmat"}},{0.5,{"SetComplete\Hood\SkullMask\data\SkullMask_damage.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull_damage.rvmat"}},{0.3,{"SetComplete\Hood\SkullMask\data\SkullMask_damage.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull_damage.rvmat"}},{0.1,{"SetComplete\Hood\SkullMask\data\SkullMask_destruct.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull_destruct.rvmat"}},{0.01,{"SetComplete\Hood\SkullMask\data\SkullMask_destruct.rvmat","SetComplete\Hood\SkullMask\data\SkullMask_skull_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.5;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.78;
					};
					class Shock
					{
						damage = 0.78;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.5;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
			class Protection
			{
				biological = 0.5;
			};
			class AnimEvents
			{
				class SoundWeapon
				{
					class pickUpItem
					{
						soundSet = "DarkMotoHelmet_pickup_SoundSet";
						id = 797;
					};
					class drop
					{
						soundset = "DarkMotoHelmet_drop_SoundSet";
						id = 898;
					};
				};
			};
		};
	};
	class PTI_Skullmask_Black1: PTI_SkullMask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SkullMask_Black_co.paa","SetComplete\Hood\SkullMask\data\SkullMask_skull_co.paa"};
	};
	class PTI_Skullmask_Black2: PTI_SkullMask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SkullMask_Black2_co.paa","SetComplete\Hood\SkullMask\data\SkullMask_skull_co.paa"};
	};
	class PTI_Skullmask_ODG: PTI_SkullMask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SkullMask_ODG_co.paa","SetComplete\Hood\SkullMask\data\SkullMask_skull_co.paa"};
	};
	class PTI_Skullmask_White: PTI_SkullMask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\headgear\PTI_SkullMask_White_co.paa","\PTI_Gear\data\headgear\PTI_Skull_Black_co.paa"};
	};
	//Invis suit
	class Boots_Invis: MilitaryBoots_ColorBase
	{
		displayName = "P.T.I. AdminInvisBoots";
		descriptionShort = "P.T.I. AdminInvisBoots";
		scope = 2;	
		model = "\PTI_Gear\data\gear\invis.p3d";
		itemSize[] = {2,2};		
		
		inventorySlot = "Feet";
		itemInfo[] = {"Clothing","Feet"};
		visibilityModifier = 0.8;
		weight = 1000;
		durability = 1.0;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		absorbency = 0.0;
		heatIsolation = 1.0;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","PTI_Gear\data\gear\Invis.paa","PTI_Gear\data\gear\Invis.paa"};
	};
	class Pants_Invis: GorkaPants_ColorBase
	{
		displayName = "P.T.I. AdminInvisPants";
		descriptionShort = "P.T.I. AdminInvisPants";
		model = "\PTI_Gear\data\gear\invis.p3d";
		scope = 2;
		visibilityModifier = 0;
		absorbency = 0.0;
		heatIsolation = 1.0;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","PTI_Gear\data\gear\Invis.paa","PTI_Gear\data\gear\Invis.paa"};
	};
	class GorkaEJacket_ColorBase;
	class Jacket_Invis:	GorkaEJacket_ColorBase
	{
		displayName = "P.T.I. AdminInvisJacket";
		descriptionShort = "P.T.I. AdminInvisJacket";
		scope = 2;
		visibilityModifier = 0;
		absorbency = 0.0;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","PTI_Gear\data\gear\Invis.paa","PTI_Gear\data\gear\Invis.paa"};
	};
	
	class Gloves_Invis: Inventory_Base
	{
		displayName = "P.T.I. AdminInvisGloves";
		descriptionShort = "P.T.I. AdminInvisGloves";
		scope = 2;		
		itemSize[] = {2,2};
		model = "\PTI_Gear\data\gear\invis.p3d";
		inventorySlot = "Gloves";
		absorbency = 0.0;
		visibilityModifier = 0;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","PTI_Gear\data\gear\Invis.paa","PTI_Gear\data\gear\Invis.paa"};
	};
	class Head_Invis: Inventory_Base
	{
		scope = 2;
		displayName = "P.T.I. AdminInvisMask";
		descriptionShort = "P.T.I. AdminInvisMask";
		itemSize[] = {2,2};
		model = "\PTI_Gear\data\gear\invis.p3d";
		inventorySlot = "Head";
		simulation = "head";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","PTI_Gear\data\gear\Invis.paa","PTI_Gear\data\gear\Invis.paa"};
	};
	class AliceBag_ColorBase;
	class Backpack_Invis: AliceBag_ColorBase
	{
		displayName = "P.T.I. AdminInvisBackpack";
		descriptionShort = "P.T.I. AdminInvisBackpack";
		scope = 2;
		visibilityModifier = 0;
		itemsCargoSize[] = {10,100};
		absorbency = 0.0;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","PTI_Gear\data\gear\Invis.paa","PTI_Gear\data\gear\Invis.paa"};
	};	
	class WorldContainer_Base;
	
	class PTI_DBCollectorCase: Container_Base
	{
		scope=2;
		displayName="PTI DB Collector Case";
		descriptionShort="The PTI DB Collector Case,to store your dragonballs more conveniently, until you complete the collection. Idea by Gini and Odin";
		model="\dz\gear\containers\Protector_Case.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\PTI_Gear\data\containers\DBCollector.paa","\PTI_Gear\data\containers\DBCollector.paa","\PTI_Gear\data\containers\DBCollector.paa"};
		rotationFlags=17;
		weight=880;
		itemSize[]={2,2};
		canBeDigged=1;
		isMeleeWeapon=1;
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"MassDB1",
			"MassDB2",
			"MassDB3",
			"MassDB4",
			"MassDB5",
			"MassDB6",
			"MassDB7",
			"Massshenron"
		};
		randomQuantity=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3750;
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
	class MassDB1: Container_Base
	{
		inventorySlot = "MassDB1";
		
	};
	class MassDB2: MassDB1
	{
		inventorySlot = "MassDB2";
		
	};
	class MassDB3: MassDB1
	{
		inventorySlot = "MassDB3";
		
	};
	class MassDB4: MassDB1
	{
		inventorySlot = "MassDB4";
		
	};
	class MassDB5: MassDB1
	{
		inventorySlot = "MassDB5";
		
	};
	class MassDB6: MassDB1
	{
		inventorySlot = "MassDB6";
		
	};
	class MassDB7: MassDB1
	{
		inventorySlot = "MassDB7";
		
	};
	class Massshenron: MassDB1
	{
		inventorySlot = "Massshenron";
		
	};
	
	class FirstAidKit;
	class PTI_FirstAidKit_RT: FirstAidKit
	{
		scope = 2;
		inventorySlot[] = {"Belt_Left","Dildo"};
		displayName = "First AidKit";
		descriptionShort = "First AidKit";
		model = "\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {3,3};
		itemsCargoSize[] = {5,6};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {};
	};
	class PTI_validol_FirstAidKit_01: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_01.paa"};
	};
	class PTI_validol_FirstAidKit_02: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_02.paa"};
	};
	class PTI_validol_FirstAidKit_03: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_03.paa"};
	};
	class PTI_validol_FirstAidKit_04: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_04.paa"};
	};
	class PTI_validol_FirstAidKit_05: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_05.paa"};
	};
	class PTI_validol_FirstAidKit_06: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_06.paa"};
	};
	class PTI_validol_FirstAidKit_07: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_07.paa"};
	};
	class PTI_validol_FirstAidKit_08: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_08.paa"};
	};
	class PTI_validol_FirstAidKit_09: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_09.paa"};
	};
	class PTI_validol_FirstAidKit_10: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_10.paa"};
	};
	class PTI_validol_FirstAidKit_11: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_11.paa"};
	};
	class PTI_validol_FirstAidKit_12: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_12.paa"};
	};
	class PTI_validol_FirstAidKit_13: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_13.paa"};
	};
	class PTI_validol_FirstAidKit_14: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_14.paa"};
	};
	class PTI_validol_FirstAidKit_15: PTI_FirstAidKit_RT
	{
		scope = 2;
		displayName = "PTI Medkit";
		descriptionShort = "PTI FirstAidKit Material: 600D nylon fabric - By Validol";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\containers\firstaidkit_15.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.7,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Thermometer;
	class PTI_Thermometer: Thermometer
	{
		scope=2;
		displayName="PTI ThermoHenderson";
		descriptionShort="Keeping your temperature monitored while performing at these levels is critical, this device surprisingly helps with that. Also legend has it that if you smell this long enough, it reminds you of Henderson!";
		model="\PTI_Gear\Admin\PurpleSlammer.p3d";
		inventorySlot[]=
		{
			"Dildo"
		};
		rotationFlags=17;
		itemSize[]={1,2};
		weight=15;
		fragility=0.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\med_tmeter.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\med_tmeter.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\med_tmeter_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\med_tmeter_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\med_tmeter_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source="user";
				animPeriod=0.5;
				initPhase=1;
			};
		};
	};
	class CigarettePack_ColorBase;
	class PTI_CigarettePack_Pump: CigarettePack_ColorBase
	{
		scope=2;
		displayName="PTI Ciggies";
		descriptionShort="They have medicinal props, ye lucky shite!";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\medical\Data\pack_of_cigs_lucky_co.paa",
			"DZ\gear\medical\Data\pack_of_cigs_lucky_co.paa"
		};
	};
	// Stalker energydrinks by Validol
	class Edible_Base;
	class Bottle_Base;
	class SodaCan_Pipsi;
	class CanisterGasoline;
	class PTI_JerryCan_Base: CanisterGasoline
	{
		scope=0;
		displayName="PTI JerryCan";
		descriptionShort="PTI JerryCan, takes any liquid... twice the capacity compared to regular jerrycans";
		model="\PTI_Gear\data\items\jerrycan\pti_jerrycan.p3d";
		weight=4000;
		itemSize[]={5,6};
		absorbency=0;
		canBeSplit=0;
		inventorySlot[]=
		{
			"Dildo",			
		"CanisterGasoline"
		};
		stackedRandom=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=8192;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=40000;
		varQuantityMin=0;
		varQuantityMax=40000;	
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_co.paa",
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_co.paa"
		};
	};
	class PTI_JerryCan_Gasoline: PTI_JerryCan_Base
	{
		scope=2;
		displayName="PTI JerryCan";
		descriptionShort="PTI JerryCan, takes any liquid... twice the capacity compared to regular jerrycans";
		model="\PTI_Gear\data\items\jerrycan\pti_jerrycan.p3d";
		weight=4000;
		itemSize[]={5,6};
		absorbency=0;
		canBeSplit=0;
		inventorySlot[]=
		{
			"Dildo",			
		"CanisterGasoline"
		};
		stackedRandom=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=8192;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=40000;
		varQuantityMin=0;
		varQuantityMax=40000;	
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_co.paa",
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_co.paa"
		};
	};
	class PTI_JerryCan_Water: PTI_JerryCan_Base
	{
		scope=2;
		displayName="PTI Water Canister";
		descriptionShort="PTI Water Canister, has double the wa'ah capacity";
		model="\PTI_Gear\data\items\jerrycan\pti_jerrycan.p3d";
		weight=4000;
		itemSize[]={5,6};
		absorbency=0;
		canBeSplit=0;
		inventorySlot[]=
		{
			"Dildo",			
		"CanisterGasoline"
		};
		stackedRandom=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="512";
		varQuantityInit=40000;
		varQuantityMin=0;
		varQuantityMax=40000;	
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_water_co.paa",
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_water_co.paa"
		};
	};
	class PTI_JerryCan_Vodka: PTI_JerryCan_Base
	{
		scope=2;
		displayName="PTI ElektroVodka Jerrycan";
		descriptionShort="PTI ElektroVodka Jerrycan, can only take 20 liters of Vodka";
		model="\PTI_Gear\data\items\jerrycan\pti_jerrycan.p3d";
		weight=4000;
		itemSize[]={5,6};
		absorbency=0;
		inventorySlot[]=
		{
			"Dildo",			
		"CanisterGasoline"
		};
		canBeSplit=0;
		stackedRandom=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=2048;
		liquidContainerType="2048";
		varQuantityInit=2000;
		varQuantityMin=0;
		varQuantityMax=20000;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_vodka_co.paa",
			"\PTI_Gear\data\items\jerrycan\pti_jerrycan_vodka_co.paa"
		};
		
	};
	
	class PTI_Pump_Pills: Edible_Base
	{
		scope=2;
		displayName="PTI Pump Pills";
		descriptionShort="We were assured the label was a misprint, it's safe for consumption, honestly";
		model="\dz\gear\medical\dexamphetamine.p3d";
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		quantityBar=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=1.0;
			treatment=1.0;
			diseaseExit=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class PTI_Energy_Base: SodaCan_Pipsi
	{
		model = "\dz\gear\drinks\SodaCan.p3d";
		stackedRandom = 0;
		itemSize[] = {1,2};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;
		absorbency = 0.7;
		rotationFlags = 5;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.7,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 500;
			water = 350;
			nutritionalIndex = 1;
			toxicity = -50;
			digestibility = 50;
		};
		class Medicine
		{
			prevention = 0.5;
			treatment = 0.5;
			diseaseExit = 1.0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class PTI_Coke_Plus_01: PTI_Energy_Base
	{
		scope = 2;
		displayName = "PTI Coke Plus";
		descriptionShort = "PTI Coke Plus - Ingredients? No idea, but i can't feel my teeth anymore and why is there a band playing?";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\PTICokePlus01.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "Mexicantrumpet_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Gettothechopper_SoundSet";
					id = 898;
				};
			};
		};
	};
	
	class PTI_Coke_Plus_01_Alcohol: PTI_Energy_Base
	{
		scope = 2;
		displayName = "PTI Coke Plus(Expired)";
		descriptionShort = "PTI Coke Plus - Expiration date is long past, there's no sign of carbonation, but it smells of Vodka. cheers!";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\PTICokePlus01.paa"};
		class Nutrition
		{
			totalVolume = 1;
			energy = 500;
			water = 350;
			nutritionalIndex = 1;
			toxicity = -100;
			digestibility = 50;
		};
		class Medicine
		{
			prevention = 1.0;
			treatment = 1.0;
			diseaseExit = 1.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "Mexicantrumpetslow_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Gettothechopper_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_Pump_Wasser_01: PTI_Energy_Base
	{
		scope = 2;
		displayName = "PTI Pump Wasser";
		descriptionShort = "PTI Pump Wasser - Ingredients? No clue, maybe the PTI Pump tape has to do something with it";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\PTIPumpWasser01.paa"};
	};	
	class PTI_Pump_Wasser_01_Alcohol: PTI_Energy_Base
	{
		scope = 2;
		displayName = "PTI Pump Wasser(Expired)";
		descriptionShort = "PTI Pump Wasser (Expired) - It's way past the expiration date, but has a strong alcohol smell to it. And in these times, anything that smells like alcohol, is alcohol.";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\PTIPumpWasser01.paa"};
		class Nutrition
		{
			totalVolume = 1;
			energy = 500;
			water = 350;
			nutritionalIndex = 1;
			toxicity = -100;
			digestibility = 50;
		};
		class Medicine
		{
			prevention = 1.0;
			treatment = 1.0;
			diseaseExit = 1.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "Mexicantrumpetslow_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Gettothechopper_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_Predator_Potion_01: PTI_Energy_Base
	{
		scope = 2;
		displayName = "PTI Predator Potion";
		descriptionShort = "Unleash the hunter in you. Made from fresh frozen Predator concentrate. Rumored to have Predator attracting properties";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\PTIPredatorPotion01.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "Predator_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "Gettothechopper_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Gettothechopper_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PTI_Monster_Energy_01: PTI_Energy_Base
	{
		scope = 2;
		displayName = "Monster Energy";
		descriptionShort = "Monster Energy HonHonHon";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\SodaEnergy01.paa"};
	};
	class PTI_Stalker_Energy_01: PTI_Energy_Base
	{
		scope = 2;
		displayName = "S.T.A.L.K.E.R. Energy";
		descriptionShort = "S.T.A.L.K.E.R. Energy";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\Energy01.paa"};
	};
	class PTI_Stalker_Energy_02: PTI_Energy_Base
	{
		scope = 2;
		displayName = "Energy NON-STOP";
		descriptionShort = "Energy NON-STOP";
		hiddenSelectionsTextures[] = {"PTI_Gear\data\consumables\Energy02.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "SodaCan_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SodaCan_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class DP_CocaBag;
	class PTI_Pervetin_Pills: DP_CocaBag
	{
		scope=2;
		displayName="PTI Pervetin Pills";
		descriptionShort="To get the most out of your 24hr day!";
		model="\dz\gear\medical\dexamphetamine.p3d";
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\medical\ptipervitinbottle_co.paa"};
		quantityBar=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=1.0;
			treatment=1.0;
			diseaseExit=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class PTI_Panzerschoko_Pills: DP_CocaBag
	{
		scope=2;
		displayName="PTI Panzerschoko Pills";
		descriptionShort="The little kick in the butt we all need sometimes.";
		model="\dz\gear\medical\dexamphetamine.p3d";
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=1;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="pills";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"PTI_Gear\data\medical\ptipanzerschokobottle_co.paa"};
		quantityBar=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=1.0;
			treatment=1.0;
			diseaseExit=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
//testing the dayz vanilla wallet
	class Book_Base;
	class ItemWallet: Book_Base
	{
		displayName="Leather Wallet";
		descriptionShort="A regular old leather wallet";
		scope=2;
		model="\dz\gear\containers\wallet.p3d";
		attachments[]={};
		itemInfo[] = {"Container"};
		weight = 50;
		itemSize[] = {1,1};
		itemsCargoSize[] = {6,6};
		quickBarBonus = 1;
		absorbency = 0;
		varWetMax=0.0;		
		soundAttType = "Book";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					};
			};
		};		
	};
	class anpeq;	
	class PTI_anpeq_sand : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/White)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] =
			{
				"zbytek",
				"glass",
				"beamStart",
				"beamEnd"};
		hiddenSelectionsTextures[] =
			{
				"PTI_Gear\anpeq\data\base_co.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa",
				"dz\gear\tools\data\flashlight_glass.paa",
				"dz\weapons\attachments\data\m4_flashlight_co.paa"
				};
		
	};
	class PTI_anpeq_olive : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/White)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	class PTI_anpeq_black : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/White)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"};
	};
	class PTI_anpeq_camo : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/White)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	class PTI_anpeq_pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/White)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	class PTI_anpeq_grey : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/White)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	//colored anpeg lights
	//Tan
	class PTI_anpeqS_Red : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/Red)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co.paa",
			"PTI_Gear\anpeq\data\colors\base_co.paa",
			"PTI_Gear\anpeq\data\colors\base_co.paa"
		};
	};
	
	class PTI_anpeqS_Green : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/Green)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co.paa",
			"PTI_Gear\anpeq\data\colors\base_co.paa",
			"PTI_Gear\anpeq\data\colors\base_co.paa"
		};
	};
	
	class PTI_anpeqS_Purple : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/Purple)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa"
		};
	};
	
	class PTI_anpeqS_Blue : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/Blue)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa"
		};
	};
	
	class PTI_anpeqS_Pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/Pink)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa"
		};
	};
	
	class PTI_anpeqS_Teal : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Tan/Teal)";
		color = "Tan";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa",
			"PTI_Gear\anpeq\data\base_co.paa"
		};
	};
	//Pink
	class PTI_anpeqP_Red : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/Red)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	
	class PTI_anpeqP_Green : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/Green)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	
	class PTI_anpeqP_Purple : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/Purple)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	
	class PTI_anpeqP_Blue : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/Blue)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	
	class PTI_anpeqP_Pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/Pink)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	
	class PTI_anpeqP_Teal : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Pink/Teal)";
		color = "Pink";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa",
			"PTI_Gear\anpeq\data\colors\base_co_pink.paa"
		};
	};
	//Grey
	class PTI_anpeqG_Red : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/Red)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	
	class PTI_anpeqG_Green : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/Green)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	
	class PTI_anpeqG_Purple : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/Purple)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	
	class PTI_anpeqG_Blue : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/Blue)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	
	class PTI_anpeqG_Pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/Pink)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	
	class PTI_anpeqG_Teal : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Grey/Teal)";
		color = "Grey";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa",
			"PTI_Gear\anpeq\data\colors\base_co_grey.paa"
		};
	};
	//Black
	class PTI_anpeqB_Red : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/Pink)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"
		};
	};
	class PTI_anpeqB_Green : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/Green)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"
		};
	};
	
	class PTI_anpeqB_Purple : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/Pink)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"
		};
	};
	
	class PTI_anpeqB_Blue : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/Pink)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"
		};
	};
	
	class PTI_anpeqB_Pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/Pink)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"
		};
	};
	
	class PTI_anpeqB_Teal : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Black/Teal)";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa",
			"PTI_Gear\anpeq\data\colors\base_co_black.paa"
		};
	};
	//Olive
	class PTI_anpeqO_Red : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/Red)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	class PTI_anpeqO_Green : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/Green)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	
	class PTI_anpeqO_Purple : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/Purple)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	
	class PTI_anpeqO_Blue : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/Blue)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	
	class PTI_anpeqO_Pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/Pink)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	
	class PTI_anpeqO_Teal : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Olive/Teal)";
		color = "Olive";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa",
			"PTI_Gear\anpeq\data\colors\base_co_olive.paa"
		};
	};
	//Camo
	class PTI_anpeqC_Red : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/Red)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	
	
	class PTI_anpeqC_Green : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/Green)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	
	class PTI_anpeqC_Purple : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/Purple)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	
	class PTI_anpeqC_Blue : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/Blue)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	
	class PTI_anpeqC_Pink : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/Pink)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	class PTI_anpeqC_Teal : anpeq
	{
		scope = 2;
		displayName="AN/PEQ-16 Flashlight (Camo/Teal)";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa",
			"PTI_Gear\anpeq\data\colors\base_co_camo.paa"
		};
	};
	//PTI Colored Headtorch
	class Switchable_Base;
	class PTI_Headtorch_Grey: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/White)";
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	
	
	class PTI_Headtorch_GreyGreen: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/Green)";	
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_GreyPink: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/Pink)";	
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_GreyTeal: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/Teal)";		
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_GreyBlue: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/Blue)";	
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_GreyPurple: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/Purple)";		
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_GreyYellow: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Grey/Yellow)";		
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	//Black Headtorch
	class PTI_Headtorch_Black: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/White)";
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_BlackPink: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Pink)";	
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_BlackGreen: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Green)";	
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_BlackTeal: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Teal)";	
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_BlackBlue: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Blue)";		
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_BlackPurple: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Purple)";			
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	class PTI_Headtorch_BlackYellow: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Yellow)";			
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	
	class PTI_Headtorch_BlackParty: Switchable_Base
	{
		scope=2;
		displayName="PTI Headtorch (Black/Party)";			
		descriptionShort="$STR_CfgVehicles_Headtorch_ColorBase1";
		model="\DZ\characters\headgear\HeadTorch_ground.p3d";
		inventorySlot[]=
		{
			"Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0;
		isStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_HeadTorch"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"bulb",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=35;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\HeadTorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\HeadTorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\HeadTorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\HeadTorch_m.p3d";
			female="\DZ\characters\headgear\HeadTorch_f.p3d";
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class Reflectors
		{
			class Beam
			{
				selection="bulb";
			};
		};
	};
	//Trollnade
	class FlashGrenade;
	class PTI_Trollnade1_flash: FlashGrenade
	{
		scope=2;
		displayName="PTI Troll Grenade";
		descriptionShort="PTI Troll Grenade";
		model="\PTI_Gear\data\items\cykachu\cykaball.p3d";
		weight=100;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\flashbang_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet="PTITrollnade1_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
				class pickup
				{
					soundSet="Duck_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Duck_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class PTI_Trollnade2_flash: FlashGrenade
	{
		scope=2;
		displayName="PTI Troll Grenade";
		descriptionShort="PTI Troll Grenade";
		model="\PTI_Gear\data\items\cykachu\cykaball.p3d";
		weight=100;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\flashbang_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet="PTITrollnade2_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
				class pickup
				{
					soundSet="Duck_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Duck_SoundSet";
					id=898;
				};
			};
		};
	};
	class EasterEgg;
	class PTI_Cykaball: EasterEgg
	{
		scope=2;
		displayName="PTI CykaBall";
		descriptionShort="PTI CykaBall - Cyka Cyka blyat.";
		model="\PTI_Gear\data\items\cykachu\cykaball.p3d";
		weight=100;
		itemSize[]={1,1};
		stackedUnit="g";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=1;
		quantityBar=1;
		ammoType="G_GrenadeHand";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"PTI_Gear\data\items\cykachu\cykaball.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"PTI_Gear\data\items\cykachu\cykaball.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"PTI_Gear\data\items\cykachu\cykaball_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"PTI_Gear\data\items\cykachu\cykaball_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"PTI_Gear\data\items\cykachu\cykaball_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	//PartySpot
	
	class PTI_Party_SpotLight: Inventory_Base
	{
		scope=2;
		displayName="PTI Party Spotlight";
		descriptionShort="PTI Party Spotlight, almost the same as original but better";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.01;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=35;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=5;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	//Spotlights
	class PTI_Spotlight: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight";
		descriptionShort="PTI Spotlight, almost the same as original but better";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_Spotlight_Pink: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Pink)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_Spotlight_Red: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Red)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class PTI_Spotlight_Green: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Green)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PTI_Spotlight_Teal: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Teal)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	
	class PTI_Spotlight_Blue: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Blue)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class PTI_Spotlight_Purple: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Purple)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class PTI_Spotlight_Yellow: Inventory_Base
	{
		scope=2;
		displayName="PTI Spotlight (Yellow)";	
		descriptionShort="$STR_CfgVehicles_Spotlight1";
		model="\dz\gear\camping\spotlight.p3d";
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={18,18,18};
		hiddenSelections[]=
		{
			"placing",
			"cord_folded",
			"cord_plugged",
			"glass_unfolded",
			"reflector_unfolded",
			"glass_folded",
			"reflector_folded"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\spotlight_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\plug_yellow_co.paa",
			"dz\gear\camping\data\spotlight_glass_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\spotlight.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\spotlight_glass.rvmat"
		};
		hologramMaterial="spotlight";
		hologramMaterialPath="dz\gear\camping\data";
		weight=1700;
		itemSize[]={3,7};
		itemBehaviour=2;
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\spotlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\spotlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\spotlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.14;
			cordTextureFile="DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength=15;
			plugType=2;
			updateInterval=50;
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.80000001,0.89999998,1,1};
				brightness=20;
				radius=60;
				angle=140;
				angleInnerRatio=0.25;
				dayLight=1;
				position="beamStart";
				direction="beamTarget";
				hitpoint="glass_unfolded";
				selection="glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class reflector_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class glass_unfolded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class spotlight_folded_cord_folded
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpSpotLightLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSpotLight_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="spotlight_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class maglite_mung;
	class PTI_maglite_Party: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Party)";
		descriptionShort = "Maglite (Party)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	class PTI_maglite_Blue: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Blue)";
		descriptionShort = "Maglite (Blue)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	
	class PTI_maglite_Green: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Green)";
		descriptionShort = "Maglite (Green)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	
	class PTI_maglite_Pink: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Pink)";
		descriptionShort = "Maglite (Pink)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	
	class PTI_maglite_Purple: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Purple)";
		descriptionShort = "Maglite (Purple)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	class PTI_maglite_Red: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Red)";
		descriptionShort = "Maglite (Red)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	
	class PTI_maglite_Teal: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Teal)";
		descriptionShort = "Maglite (Teal)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	
	class PTI_maglite_Yellow: maglite_mung
	{
		scope = 2;
		displayName = "Maglite (Yellow)";
		descriptionShort = "Maglite (Yellow)";
		model = "\MunghardsItems\maglite\maglite.p3d";
		rotationFlags = 64;
		SingleUseActions[] = {509,510};
		itemSize[] = {3,1};
		weight = 210;
		animClass = "Pistol";
		lootTag[] = {"Civilian","Office"};
		hiddenSelections[] = {"cylinder"};
		hiddenSelectionsMaterials[] = {"\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat","\MunghardsItems\maglite\maglite.rvmat"};
	};
	class Shovel;
	class PTI_PioneerShovel_Base: Shovel
	{
		scope = 0;
		displayName = "PTI PioneerShovel";
		descriptionShort = "PTI PioneerShovel, does everything a proper pioneer shovel does, used to build, deconstruct, dig, open cans and possibly more";
		model = "\dz\gear\tools\CSLA_Field_Shovel.p3d";
		rotationFlags = 17;
		suicideAnim = "woodaxe";
		itemSize[] = {2,3};
		weight = 1100;
		fragility = 0.008;
		itemBehaviour = 2;
		inventorySlot[] = {"Shoulder","Melee"};		
		build_action_type = 4;
		dismantle_action_type = 4;
		openItemSpillRange[] = {0,10};
		hiddenSelections[] = {"zbytek"};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 550;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\CSLA_Field_Shovel.rvmat"}},{0.7,{"DZ\gear\tools\data\CSLA_Field_Shovel.rvmat"}},{0.5,{"DZ\gear\tools\data\CSLA_Field_Shovel_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\CSLA_Field_Shovel_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\CSLA_Field_Shovel_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFieldShovel";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeFieldShovel_Heavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeFieldShovel_Heavy";
				range = 3.3;
			};
		};
		class Horticulture
		{
			ToolAnim = "DIGGINGSHOVEL";
			DiggingTimeToComplete = 6.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet = "pickUpShovelLight_SoundSet";
					id = 796;
				};
				class pickUpShovel
				{
					soundSet = "pickUpShovel_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "shovel_drop_SoundSet";
					id = 898;
				};
				class ShoulderR_Hide
				{
					soundset = "ShoulderR_Hide_SoundSet";
					id = 1210;
				};
				class ShoulderR_Show
				{
					soundset = "ShoulderR_Show_SoundSet";
					id = 1211;
				};
			};
		};
	};
	class PTI_PioneerShovel: PTI_PioneerShovel_Base
	{		
		scope=2;
		displayName = "PTI Black PioneerShovel";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\csla_field_shovel_co.paa"
		};
	};
	class PTI_PioneerShovel_Black: PTI_PioneerShovel
	{		
		scope=2;
		displayName = "PTI Black PioneerShovel";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\tools\csla_field_shovel_black_co.paa"
		};
	};
	class PTI_PioneerShovel_Green: PTI_PioneerShovel
	{		
		scope=2;
		displayName = "PTI Green PioneerShovel";
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\tools\csla_field_shovel_green_co.paa"
		};
	};
	
	class Animal_BosTaurus;
	class Animal_BosTaurus_Milka: Animal_BosTaurus
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\animals\bull_milka_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_brown.rvmat"
		};
	};
	class Animal_BosTaurusF;
	class Animal_BosTaurusF_Milka: Animal_BosTaurusF
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\PTI_Gear\data\animals\cow_milka_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_brown.rvmat"
		};
	};
	
class ZmbF_MilkMaidOld_Black;
	class ZmbF_Grannysmall: ZmbF_MilkMaidOld_Black
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ZmbF_GrannyLarge: ZmbF_MilkMaidOld_Black
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
		};
	};
	class ZmbM_priestPopSkinny_Base;
	class ZmbM_priestPopSkinnyLarge: ZmbM_priestPopSkinny_Base
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
		};
	};
	class ZmbM_priestPopSkinnySmall: ZmbM_priestPopSkinny_Base
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAnpeq: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"helmetFlashlight"
		};
		model="\PTI_Gear\data\headgear\CombatHelmet\anpeq_prox.p3d";
	};
	class ProxyCassetteProx: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"PTI_pump_Cassette"
		};
		model="\PTI_Gear\data\items\baseitems\CassetteProx.p3d";
	};
	class ProxyJukeboxProx: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"PTI_Radio"
		};
		model="\PTI_Gear\data\items\baseitems\JukeboxProx.p3d";
	};
	class ProxyRadioProx: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"PTI_Radio2"
		};
		model="\PTI_Gear\data\items\baseitems\RadioProx.p3d";
	};
};
