#include "META_BaseMissionSave.h"
#include "GameplayTagContainer.h"

FMETA_BaseMissionSave::FMETA_BaseMissionSave() {
    (*this).MissionID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionOnTileInfo.OwningTileTag, 0)) = NAME_None;
    (*this).MissionOnTileInfo.TilePositionIndex = -1;
}

