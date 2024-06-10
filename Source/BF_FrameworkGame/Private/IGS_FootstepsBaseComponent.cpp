#include "IGS_FootstepsBaseComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_FootstepsBaseComponent::UIGS_FootstepsBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LandingNoiseRange = 1.600000000e+03f;
    (*this).WalkingNoiseRange = 8.000000000e+02f;
    (*this).RunningNoiseRange = 8.000000000e+02f;
    (*this).SprintingNoiseRange = 1.450000000e+03f;
}


