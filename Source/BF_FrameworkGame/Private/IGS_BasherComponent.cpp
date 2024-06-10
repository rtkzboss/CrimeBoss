#include "IGS_BasherComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_BasherComponent::UIGS_BasherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TraceChannel = TraceTypeQuery3;
}


