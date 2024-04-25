#include "IGS_LootItemBaseComponent.h"

UIGS_LootItemBaseComponent::UIGS_LootItemBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->LootItem = NULL;
    this->LootOrderIndex = 0;
    this->Value = 0;
    this->ItemWeight = 0;
}

FIGS_LootItemsData UIGS_LootItemBaseComponent::GetLootItemData() {
    return FIGS_LootItemsData{};
}


