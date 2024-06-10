#include "IGS_LootCollectionTableRow.h"
#include "GameplayTagContainer.h"

FIGS_LootCollectionTableRow::FIGS_LootCollectionTableRow() {
    (*this).ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.PlacementType, 0)) = TEXT("Loot.None");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.LootCategory, 0)) = TEXT("Loot");
}

