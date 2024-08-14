#include "IGS_TileItemDataConvertorsBFL.h"

UIGS_TileItemDataConvertorsBFL::UIGS_TileItemDataConvertorsBFL() {
}

UIGS_TileItemData* UIGS_TileItemDataConvertorsBFL::UnlockItemToTileItemData(FIGS_UnlockItemInfo inUnlockItemInfo, EIGS_TileItemState inState, UObject* inWCO) {
    return NULL;
}

TArray<UIGS_TileItemWeaponFamilyData*> UIGS_TileItemDataConvertorsBFL::SortWeaponFamilyData(TArray<UIGS_TileItemWeaponFamilyData*> inArray) {
    return TArray<UIGS_TileItemWeaponFamilyData*>();
}

TArray<UIGS_TileItemData*> UIGS_TileItemDataConvertorsBFL::SortTileItemData(TArray<UIGS_TileItemData*> inArray) {
    return TArray<UIGS_TileItemData*>();
}

TArray<UIGS_TileItemData*> UIGS_TileItemDataConvertorsBFL::SortedUnlockItemsToTileItemData(TArray<FIGS_UnlockItemInfo> inUnlockItemsInfo, EIGS_TileItemState inState, UObject* inWCO) {
    return TArray<UIGS_TileItemData*>();
}

TArray<UIGS_TileItemData*> UIGS_TileItemDataConvertorsBFL::SortedBaseObjectsToTileItemData(const UIGS_UnlockManager* inUnlockManager, TArray<UMETA_BaseObject*> inObjects, EIGS_TileItemState inState, UObject* inWCO) {
    return TArray<UIGS_TileItemData*>();
}

UIGS_TileItemData* UIGS_TileItemDataConvertorsBFL::MetaBaseObjectToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BaseObject* inBaseObject, EIGS_TileItemState inState, UObject* inWCO) {
    return NULL;
}

FIGS_CharacterPanelDataStruct UIGS_TileItemDataConvertorsBFL::HeisterDataToCharacterPanelData(FCommonHeisterData& inHeisterData, UObject* inWCO) {
    return FIGS_CharacterPanelDataStruct{};
}

FIGS_UITileQualityColors UIGS_TileItemDataConvertorsBFL::GetColorSetForQuality(EMETA_ItemQuality inQuality) {
    return FIGS_UITileQualityColors{};
}

FIGS_CharacterPanelDataStruct UIGS_TileItemDataConvertorsBFL::CharacterToCharacterPanelData(UObject* inWCO, UMETA_Character* inCharacter) {
    return FIGS_CharacterPanelDataStruct{};
}

UIGS_TileItemData* UIGS_TileItemDataConvertorsBFL::BossCharacterToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BossCharacter* inBossCharacter) {
    return NULL;
}


