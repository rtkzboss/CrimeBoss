#include "IGS_ItemDropComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Templates/SubclassOf.h"

UIGS_ItemDropComponent::UIGS_ItemDropComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_ItemDropComponent::DropItem(TSubclassOf<UIGS_InventoryObjectFramework> inClass) const {
}

void UIGS_ItemDropComponent::Client_DropBags_Implementation() const {
}

void UIGS_ItemDropComponent::AddItemToDropUponTie(TSubclassOf<UIGS_InventoryObjectFramework> inClass) {
}

void UIGS_ItemDropComponent::AddItemToDropUponDeath(TSubclassOf<UIGS_InventoryObjectFramework> inClass) {
}

void UIGS_ItemDropComponent::AddItemToDropForCharacter(AIGS_GameCharacterFramework* inCharacter, TSubclassOf<UIGS_InventoryObjectFramework> inClass, FIGS_ItemDropped inDelegateHandle) {
}


