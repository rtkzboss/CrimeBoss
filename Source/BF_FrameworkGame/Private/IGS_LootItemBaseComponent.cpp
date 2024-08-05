#include "IGS_LootItemBaseComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_LootItemBaseComponent::UIGS_LootItemBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bCanEverAffectNavigation = false;
}

FIGS_LootItemsData UIGS_LootItemBaseComponent::GetLootItemData() {
    return FIGS_LootItemsData{};
}


