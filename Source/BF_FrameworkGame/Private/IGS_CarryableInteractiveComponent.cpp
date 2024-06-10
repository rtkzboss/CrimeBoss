#include "IGS_CarryableInteractiveComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_CarryableInteractiveComponent::UIGS_CarryableInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_CarryableInteractiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_CarryableInteractiveComponent, mR_CarryableInventoryObject);
}


