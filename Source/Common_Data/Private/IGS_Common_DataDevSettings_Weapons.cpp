#include "IGS_Common_DataDevSettings_Weapons.h"

UIGS_Common_DataDevSettings_Weapons::UIGS_Common_DataDevSettings_Weapons() {
    (*this).WeaponSkinDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DT_WeaponSkinDatabase.DT_WeaponSkinDatabase"), TEXT(""));
    (*this).MeleeWeaponDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DT_MeleeWeaponDatabase.DT_MeleeWeaponDatabase"), TEXT(""));
    (*this).ThrowablesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Equipment/DT_ThrowablesDatabase.DT_ThrowablesDatabase"), TEXT(""));
    (*this).WeaponDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DT_WeaponDatabase.DT_WeaponDatabase"), TEXT(""));
    (*this).GadgetDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Gadgets/DT_GadgetDatabase.DT_GadgetDatabase"), TEXT(""));
    (*this).AmmoDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DT_AmmoDatabase.DT_AmmoDatabase"), TEXT(""));
    (*this).ModDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DT_ModDatabase.DT_ModDatabase"), TEXT(""));
    (*this).EquipmentDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Equipment/DT_EquipmentDatabase.DT_EquipmentDatabase"), TEXT(""));
    (*this).CarryablesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Carryables/DT_CarryableItemsDatabase.DT_CarryableItemsDatabase"), TEXT(""));
    (*this).WeaponClassDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DA_PerWeaponClassSettings.DA_PerWeaponClassSettings"), TEXT(""));
    (*this).CarryablePickupDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Carryables/Pickups/BP_CarryablePickup_Default.BP_CarryablePickup_Default_C"), TEXT(""));
    (*this).WeaponDefinitionsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/DefinitionTables/DT_WeaponDefinitions.DT_WeaponDefinitions"), TEXT(""));
    (*this).WeaponSkinMaterialToChange = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/Materials/MI_Weapon_Skin_Default.MI_Weapon_Skin_Default"), TEXT(""));
    (*this).WeaponLowResTortilla = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Weapons/MI_Weapons_lowres_Tortilla.MI_Weapons_lowres_Tortilla"), TEXT(""));
}


