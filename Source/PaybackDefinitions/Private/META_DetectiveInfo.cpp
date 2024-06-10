#include "META_DetectiveInfo.h"

FMETA_DetectiveInfo::FMETA_DetectiveInfo() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CurrentTurfTileID, 0)) = NAME_None;
    (*this).bCurrentTileNeutralized = false;
    (*this).DaysLeftToStayOnCurrentTile = 0;
    (*this).NeutralizedTiles.Empty();
}

