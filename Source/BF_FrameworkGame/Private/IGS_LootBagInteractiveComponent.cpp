#include "IGS_LootBagInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_LootBagInteractiveComponent::UIGS_LootBagInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_LootBagInteractiveComponent::PutItemToInventory(AIGS_GameCharacterFramework* inInstigator) {
    return false;
}

void UIGS_LootBagInteractiveComponent::OnRep_Items() {
}

void UIGS_LootBagInteractiveComponent::OnCantBePicked_Implementation() {
}

TArray<FIGS_LootBagSingleItem> UIGS_LootBagInteractiveComponent::GetItems() {
    return TArray<FIGS_LootBagSingleItem>();
}

void UIGS_LootBagInteractiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_LootBagInteractiveComponent, mR_ItemInfo);
}


