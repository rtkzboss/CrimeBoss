#include "AkPortalComponent.h"
#include "ComponentInstanceDataCache.h"

UAkPortalComponent::UAkPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InitialState = AkAcousticPortalState::Open;
    (*this).ObstructionCollisionChannel = ECC_GameTraceChannel8;
    (*this).bUseAttachParentBound = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

bool UAkPortalComponent::PortalPlacementValid() const {
    return false;
}

void UAkPortalComponent::OpenPortal() {
}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const {
    return NULL;
}

AkAcousticPortalState UAkPortalComponent::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void UAkPortalComponent::ClosePortal() {
}


