#include "IGS_TileItemData.h"

UIGS_TileItemData::UIGS_TileItemData() {
}

void UIGS_TileItemData::SetTileState(EIGS_TileItemState inState) {
}

void UIGS_TileItemData::SetIsTaken(bool inIsTaken) {
}

void UIGS_TileItemData::SetIsNew(bool inIsNew) {
}

void UIGS_TileItemData::SetIsEquiped(bool inIsSelected) {
}

void UIGS_TileItemData::SetIsChallenge(bool inIsChallenge) {
}

void UIGS_TileItemData::SetData(FIGS_TileItemDataStruct inData) {
}

EIGS_TileItemState UIGS_TileItemData::GetState() const {
    return EIGS_TileItemState::Locked;
}

EMETA_ItemQuality UIGS_TileItemData::GetRarity() const {
    return EMETA_ItemQuality::None;
}

int32 UIGS_TileItemData::GetPrice() const {
    return 0;
}

FText UIGS_TileItemData::GetName() const {
    return FText::GetEmpty();
}

bool UIGS_TileItemData::GetIsTaken() const {
    return false;
}

bool UIGS_TileItemData::GetIsNew() const {
    return false;
}

bool UIGS_TileItemData::GetIsEquiped() const {
    return false;
}

bool UIGS_TileItemData::GetIsChallenge() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UIGS_TileItemData::GetImage() const {
    return NULL;
}

FGameplayTag UIGS_TileItemData::GetId() const {
    return FGameplayTag{};
}

bool UIGS_TileItemData::GetHasCustomAction() const {
    return false;
}

FGameplayTag UIGS_TileItemData::GetEntitlementTag() const {
    return FGameplayTag{};
}

FText UIGS_TileItemData::GetDescription() const {
    return FText::GetEmpty();
}

FIGS_TileItemDataStruct UIGS_TileItemData::GetData() const {
    return FIGS_TileItemDataStruct{};
}

FText UIGS_TileItemData::GetCustomTakenText() const {
    return FText::GetEmpty();
}

FText UIGS_TileItemData::GetCustomEquipedText() const {
    return FText::GetEmpty();
}

FText UIGS_TileItemData::GetCustomActionText() const {
    return FText::GetEmpty();
}

FIGS_UITileQualityColors UIGS_TileItemData::GetColorSetForThisItem() const {
    return FIGS_UITileQualityColors{};
}

EIGS_UnlockCategory UIGS_TileItemData::GetCategory() const {
    return EIGS_UnlockCategory::UC_Weapons;
}


