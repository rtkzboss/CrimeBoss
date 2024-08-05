#include "IGS_TransitionHandlerBaseComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_TransitionHandlerBaseComponent::UIGS_TransitionHandlerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AngleToStartTransition = 4.000000000e+00f;
    (*this).DistToStartTransition = 5.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}


