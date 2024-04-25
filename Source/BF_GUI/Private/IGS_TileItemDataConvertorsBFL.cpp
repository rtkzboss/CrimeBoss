#include "IGS_TileItemDataConvertorsBFL.h"

UIGS_TileItemDataConvertorsBFL::UIGS_TileItemDataConvertorsBFL() {
}

UIGS_TileItemData* UIGS_TileItemDataConvertorsBFL::UnlockItemToTileItemData(FIGS_UnlockItemInfo inUnlockItemInfo, EIGS_TileItemState inState) {
    return NULL;
}

TArray<UIGS_TileItemData*> UIGS_TileItemDataConvertorsBFL::SortTileItemData(TArray<UIGS_TileItemData*> inArray) {
    return TArray<UIGS_TileItemData*>();
}

TArray<UIGS_TileItemData*> UIGS_TileItemDataConvertorsBFL::SortedUnlockItemsToTileItemData(TArray<FIGS_UnlockItemInfo> inUnlockItemsInfo, EIGS_TileItemState inState) {
    return TArray<UIGS_TileItemData*>();
}

TArray<UIGS_TileItemData*> UIGS_TileItemDataConvertorsBFL::SortedBaseObjectsToTileItemData(const UIGS_UnlockManager* inUnlockManager, TArray<UMETA_BaseObject*> inObjects, EIGS_TileItemState inState) {
    return TArray<UIGS_TileItemData*>();
}

UIGS_TileItemData* UIGS_TileItemDataConvertorsBFL::MetaBaseObjectToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BaseObject* inBaseObject, EIGS_TileItemState inState) {
    return NULL;
}

FIGS_CharacterPanelDataStruct UIGS_TileItemDataConvertorsBFL::CharacterToCharacterPanelData(UMETA_Character* inCharacter) {
    return FIGS_CharacterPanelDataStruct{};
}

UIGS_TileItemData* UIGS_TileItemDataConvertorsBFL::BossCharacterToTileItemData(const UIGS_UnlockManager* inUnlockManager, const UMETA_BossCharacter* inBossCharacter) {
    return NULL;
}


