#include "META_MusicScenarioPacksTableRow.h"

FMETA_MusicScenarioPacksTableRow::FMETA_MusicScenarioPacksTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ScenarioID, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MusicCollectionID, 0)) = TEXT("Music.Collection");
}

