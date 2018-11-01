class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[]=
		{
			"Shirt_CheckRed",
			"Hoodie_Blue",
			"Hoodie_Black",
			"Hoodie_Brown",
			"Hoodie_Green",
			"Hoodie_Grey",
			"Hoodie_Red",
			"MaleTorso",
			"FemaleTorso"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class M65Jacket_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_M65Jacket_ColorBase0";
		descriptionShort="$STR_CfgVehicles_M65Jacket_ColorBase1";
		model="\DZ\characters\tops\M65_Jacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1630;
		itemSize[]={4,3};
		itemsCargoSize[]={8,3};
		quickBarBonus=3;
		absorbency=0.2;
		heatIsolation=10;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageArmor
		{
			bleed=0.2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\tops\Data\M65_Jacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\M65_Jacket_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health=0.89999998;
					Blood=0.80000001;
					Shock=0.89999998;
				};
				class Melee
				{
					Health=0.89999998;
					Blood=0.80000001;
					Shock=0.89999998;
				};
				class Infected
				{
					Health=0.89999998;
					Blood=0.80000001;
					Shock=0.89999998;
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\tops\M65_Jacket_m.p3d";
			female="\DZ\characters\tops\M65_Jacket_f.p3d";
		};
	};
	class M65Jacket_BlueStaff: M65Jacket_ColorBase
	{
		scope=2;
		descriptionShort="$STR_CfgVehicles_M65Jacket_Black0";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\staffjacket\data\M65_Jacket_BlueStaff_co.paa",
			"\staffjacket\data\M65_Jacket_BlueStaff_co.paa",
			"\staffjacket\data\M65_Jacket_BlueStaff_co.paa"
		};
	};
	class M65Jacket_RenameMeStaff: M65Jacket_ColorBase
	{
		scope=2;
		descriptionShort="$STR_CfgVehicles_M65Jacket_Black0";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\staffjacket\data\M65_Jacket_BlueStaff_co.paa",
			"\staffjacket\data\M65_Jacket_BlueStaff_co.paa",
			"\staffjacket\data\M65_Jacket_BlueStaff_co.paa"
		};
	};
};

