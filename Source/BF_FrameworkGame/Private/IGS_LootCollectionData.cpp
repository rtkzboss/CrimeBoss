#include "IGS_LootCollectionData.h"

FIGS_LootCollectionData::FIGS_LootCollectionData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PlacementType, 0)) = TEXT("Loot.None");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootCategory, 0)) = TEXT("Loot");
    (*this).LootCollection = nullptr;
}

