#include "IGS_ComplexPathFollowingComponent.h"
#include "Templates/SubclassOf.h"

UIGS_ComplexPathFollowingComponent::UIGS_ComplexPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAcceptPartialPaths = true;
}

bool UIGS_ComplexPathFollowingComponent::ProjectPointToNavigation(const FVector& inPoint, TSubclassOf<UNavigationQueryFilter> inFilterClass, FVector inQueryExtent, FVector& inProjectedLocation) const {
    return false;
}

void UIGS_ComplexPathFollowingComponent::ForceStopTransition() {
}


