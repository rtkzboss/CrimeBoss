#include "GameMetaTransferComponent.h"
#include "Templates/SubclassOf.h"

UGameMetaTransferComponent::UGameMetaTransferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalLootSpawned = 0;
}

void UGameMetaTransferComponent::RegisterKill(EIGS_TeamSideEnum teamType) {
}

void UGameMetaTransferComponent::RegisterInventoryLoot(TSubclassOf<UIGS_InventoryObjectFramework> inLootItem) {
}

void UGameMetaTransferComponent::RegisterCarryableLoot(TSubclassOf<UIGS_InventoryObjectFramework> inCarryableItem) {
}


