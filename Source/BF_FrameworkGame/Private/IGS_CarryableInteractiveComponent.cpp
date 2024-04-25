#include "IGS_CarryableInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_CarryableInteractiveComponent::UIGS_CarryableInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->mR_CarryableInventoryObject = NULL;
}

void UIGS_CarryableInteractiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_CarryableInteractiveComponent, mR_CarryableInventoryObject);
}


