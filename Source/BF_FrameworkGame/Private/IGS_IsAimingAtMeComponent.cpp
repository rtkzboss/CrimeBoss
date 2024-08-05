#include "IGS_IsAimingAtMeComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_IsAimingAtMeComponent::UIGS_IsAimingAtMeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SeePlayerConeHalfAngleDeg = 4.500000000e+01f;
    (*this).SeePlayerDistance = 6.000000000e+02f;
    (*this).PlayerAimingAtHalfAngleDeg = 5.000000000e+00f;
    (*this).ShouldCheckLineTrace = true;
}


