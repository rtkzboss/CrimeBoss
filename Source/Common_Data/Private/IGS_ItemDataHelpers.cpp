#include "IGS_ItemDataHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_ItemDataHelpers::UIGS_ItemDataHelpers() {
}

TArray<FMETA_WeaponAmountInfo> UIGS_ItemDataHelpers::SortWeaponStash(TArray<FMETA_WeaponAmountInfo> inWeaponArray) {
    return TArray<FMETA_WeaponAmountInfo>();
}

TArray<UMETA_Equipment*> UIGS_ItemDataHelpers::SortEquipmentStash(TArray<UMETA_Equipment*> inEquipmentArray) {
    return TArray<UMETA_Equipment*>();
}

FMETA_HeisterLoadout UIGS_ItemDataHelpers::MakeMetaHeisterLoadoutFromSave(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, FMETA_WeaponSaveData inPrimaryWeaponSaveData, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, FMETA_WeaponSaveData inSecondaryWeaponSaveData, FMETA_EquipmentSaveData inEquipmentSaveData) {
    return FMETA_HeisterLoadout{};
}

FMETA_HeisterLoadout UIGS_ItemDataHelpers::MakeMetaHeisterLoadoutChains(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, FMETA_WeaponSaveData inPrimaryWeaponSaveData, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, FMETA_WeaponSaveData inSecondaryWeaponSaveData, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inPrimaryWeapons, const TArray<TSubclassOf<UMETA_WeaponInventoryObject>>& inSecondaryWeapons, FMETA_EquipmentSaveData inEquipmentSaveData, const TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>& inChainEquipments) {
    return FMETA_HeisterLoadout{};
}

FMETA_HeisterLoadout UIGS_ItemDataHelpers::MakeMetaHeisterLoadout(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, const TSubclassOf<UIGS_EquipmentInventoryObject>& inEquipment) {
    return FMETA_HeisterLoadout{};
}

bool UIGS_ItemDataHelpers::IsShotgun_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsShotgun(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsSecondary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsSecondary(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPrimary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPrimary(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPowerWeapon(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPerkInBitmask(EIGS_PerkCategory inPerkCategory, int32 inBitmask) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPerkClassInBitmask(EIGS_PerkClass inPerkClass, int32 inBitmask) {
    return false;
}

bool UIGS_ItemDataHelpers::IsMelee_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsMelee(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsFrag(FIGS_ThrowableData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsFlash(FIGS_ThrowableData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsExplosive_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsExplosive(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

FIGS_WieldableBaseData UIGS_ItemDataHelpers::GetWieldableDataForClassBP(const UObject* inWCO, const TSubclassOf<UIGS_WieldableInventoryObjectBase> inItemClass) {
    return FIGS_WieldableBaseData{};
}

FIGS_WeaponDefinitionTableRow UIGS_ItemDataHelpers::GetWeaponDefinitionDataBP(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject> inWeaponDefinitionID) {
    return FIGS_WeaponDefinitionTableRow{};
}

EIGS_UnlockCategory UIGS_ItemDataHelpers::GetUnlockCategoryFromID(FGameplayTag inTagID) {
    return EIGS_UnlockCategory::UC_Weapons;
}

TArray<UMETA_Weapon*> UIGS_ItemDataHelpers::GetUnequippedWeapons(const FMETA_WeaponAmountInfo& inWeaponArray) {
    return TArray<UMETA_Weapon*>();
}

TSubclassOf<UIGS_ThrowableInventoryObject> UIGS_ItemDataHelpers::GetThrowableForEquipment(const UObject* inWCO, TSubclassOf<UIGS_EquipmentInventoryObject> inEquipment) {
    return NULL;
}

TSoftClassPtr<UIGS_ThrowableInventoryObject> UIGS_ItemDataHelpers::GetSoftThrowableForEquipment(const UObject* inWCO, TSoftClassPtr<UIGS_EquipmentInventoryObject> inEquipment) {
    return NULL;
}

TSoftClassPtr<UIGS_EquipmentInventoryObject> UIGS_ItemDataHelpers::GetSoftEquipmentForThrowable(const UObject* inWCO, TSoftClassPtr<UIGS_ThrowableInventoryObject> inThrowable) {
    return NULL;
}

TArray<EIGS_PerkCategory> UIGS_ItemDataHelpers::GetPerksFromBitmask(int32 inBitmask) {
    return TArray<EIGS_PerkCategory>();
}

TArray<EIGS_PerkClass> UIGS_ItemDataHelpers::GetPerksClassesFromBitmask(int32 inBitmask) {
    return TArray<EIGS_PerkClass>();
}

FIGS_ModTableRow UIGS_ItemDataHelpers::GetModDataFromObject(UIGS_ModInventoryObject* inModObject) {
    return FIGS_ModTableRow{};
}

FIGS_LootItemsData UIGS_ItemDataHelpers::GetLootItemData(UObject* inWCO, TSubclassOf<UIGS_LootItemInventoryObject> inClass, bool& outSucceeded) {
    return FIGS_LootItemsData{};
}

EIGS_ItemType UIGS_ItemDataHelpers::GetItemTypeFromObject(const UIGS_InventoryObjectFramework* inItem) {
    return EIGS_ItemType::Item_Weapon;
}

EIGS_ItemType UIGS_ItemDataHelpers::GetItemTypeFromClass(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass) {
    return EIGS_ItemType::Item_Weapon;
}

FString UIGS_ItemDataHelpers::GetItemNameFromID(FGameplayTag inTagID) {
    return TEXT("");
}

TSubclassOf<UIGS_EquipmentInventoryObject> UIGS_ItemDataHelpers::GetEquipmentForThrowable(const UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowable) {
    return NULL;
}

FIGS_CommonItemData UIGS_ItemDataHelpers::GetCommonDataForClassBP(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass) {
    return FIGS_CommonItemData{};
}

FIGS_CarryableTableRow UIGS_ItemDataHelpers::GetCarryableDataFromObject(UIGS_CarryableInventoryObject* inCarryableObject) {
    return FIGS_CarryableTableRow{};
}

bool UIGS_ItemDataHelpers::DoesItemClassHaveProperty(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, EIGS_ItemPropertyFlags inItemFlag) {
    return false;
}

TArray<UMETA_Weapon*> UIGS_ItemDataHelpers::CreateArrayOfWeaponAndLenght(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponClass, UObject* inOuter, int32 inWeaponAmount) {
    return TArray<UMETA_Weapon*>();
}


