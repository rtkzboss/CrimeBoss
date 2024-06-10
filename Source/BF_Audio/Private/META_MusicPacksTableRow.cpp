#include "META_MusicPacksTableRow.h"

FMETA_MusicPacksTableRow::FMETA_MusicPacksTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Music.Collection");
    auto& gen3424 = (*this).MusicPacks;
    gen3424.Empty();
}

