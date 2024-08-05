#include "IGS_FootstepsDistanceBasedComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_FootstepsDistanceBasedComponent::UIGS_FootstepsDistanceBasedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StepLength = 2.500000000e+02f;
    (*this).CrouchStepLength = 1.500000000e+02f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


