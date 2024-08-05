#include "GameMetaTransferComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Templates/SubclassOf.h"

UGameMetaTransferComponent::UGameMetaTransferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGameMetaTransferComponent::RegisterKill(EIGS_TeamSideEnum teamType) {
}

void UGameMetaTransferComponent::RegisterInventoryLoot(TSubclassOf<UIGS_InventoryObjectFramework> inLootItem) {
}

void UGameMetaTransferComponent::RegisterCarryableLoot(TSubclassOf<UIGS_InventoryObjectFramework> inCarryableItem) {
}


