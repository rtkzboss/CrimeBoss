#include "META_MusicPacksTableRow.h"

FMETA_MusicPacksTableRow::FMETA_MusicPacksTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Music.Collection");
    (*this).MusicPacks.Empty();
}

