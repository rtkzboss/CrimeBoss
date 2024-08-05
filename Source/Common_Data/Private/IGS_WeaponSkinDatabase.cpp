#include "IGS_WeaponSkinDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_WeaponSkinDatabase::UIGS_WeaponSkinDatabase() {
}

void UIGS_WeaponSkinDatabase::ModAppendDataTable(UDataTable* inNewTable) {
}

FGameplayTag UIGS_WeaponSkinDatabase::GetWeaponSkinTagFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin, TSubclassOf<UIGS_InventoryObjectFramework> inWeaponId) {
    return FGameplayTag{};
}

FIGS_WeaponSkinStruct UIGS_WeaponSkinDatabase::GetWeaponSkinStructFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin, TSubclassOf<UIGS_InventoryObjectFramework> inWeaponId) {
    return FIGS_WeaponSkinStruct{};
}

FIGS_WeaponSkinStruct UIGS_WeaponSkinDatabase::GetWeaponSkinStructData(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded) {
    return FIGS_WeaponSkinStruct{};
}

UIGS_WeaponSkinDatabase* UIGS_WeaponSkinDatabase::GetWeaponSkinDatabaseInstance(UObject* inWCO) {
    return NULL;
}

FGameplayTag UIGS_WeaponSkinDatabase::GetSkinTagFromDefaultSkin(UObject* inWCO, TSoftObjectPtr<UIGS_WeaponSkinData> inDefaultSkin) {
    return FGameplayTag{};
}

TSoftObjectPtr<UIGS_WeaponSkinData> UIGS_WeaponSkinDatabase::GetDefaultSkinMaterialSlotFromTag(UObject* inWCO, FGameplayTag inWeaponSkinTag) {
    return NULL;
}

TSoftObjectPtr<UIGS_WeaponSkinData> UIGS_WeaponSkinDatabase::GetDefaultSkinFromTag(UObject* inWCO, FGameplayTag inSkinTag) {
    return NULL;
}

FIGS_WeaponSkinTableRow UIGS_WeaponSkinDatabase::GetDataWeaponSkin(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded, bool inSearchMaterialSlots) {
    return FIGS_WeaponSkinTableRow{};
}


