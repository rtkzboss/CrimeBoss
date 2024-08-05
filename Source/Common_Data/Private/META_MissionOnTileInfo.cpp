#include "META_MissionOnTileInfo.h"

FMETA_MissionOnTileInfo::FMETA_MissionOnTileInfo() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).OwningTileTag, 0)) = NAME_None;
    (*this).TilePositionIndex = -1;
}

