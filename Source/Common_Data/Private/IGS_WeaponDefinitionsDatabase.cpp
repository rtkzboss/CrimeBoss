#include "IGS_WeaponDefinitionsDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_WeaponDefinitionsDatabase::UIGS_WeaponDefinitionsDatabase() {
}

void UIGS_WeaponDefinitionsDatabase::SetWeaponIcon(FIGS_WeaponDefinitionTableRow& inStructRef, TSoftObjectPtr<UIGS_WeaponSkinData> inWeaponSkin, TSoftObjectPtr<UTexture2D> inWeaponIcon) {
}

FGameplayTag UIGS_WeaponDefinitionsDatabase::GetWiedableClassById(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId) {
    return FGameplayTag{};
}

TSoftObjectPtr<UTexture2D> UIGS_WeaponDefinitionsDatabase::GetWeaponIcon(UObject* inWCO, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponObject, TSoftObjectPtr<UDataAsset> inWeaponSkin) {
    return NULL;
}

FIGS_WeaponDefinitionTableRow UIGS_WeaponDefinitionsDatabase::GetDataWeaponByTagID(const UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded) {
    return FIGS_WeaponDefinitionTableRow{};
}

FIGS_WeaponDefinitionTableRow UIGS_WeaponDefinitionsDatabase::GetDataWeapon(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_WeaponDefinitionTableRow{};
}

FIGS_WeaponDefinitionTableRow UIGS_WeaponDefinitionsDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_WeaponDefinitionTableRow{};
}

TArray<FIGS_WeaponDefinitionTableRow> UIGS_WeaponDefinitionsDatabase::GetDatabaseTableBP() {
    return TArray<FIGS_WeaponDefinitionTableRow>();
}


