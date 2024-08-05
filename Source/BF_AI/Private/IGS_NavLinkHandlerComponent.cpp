#include "IGS_NavLinkHandlerComponent.h"
#include "ComponentInstanceDataCache.h"
#include "EIGS_TransitionState.h"

UIGS_NavLinkHandlerComponent::UIGS_NavLinkHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CanUseDoors = true;
}


