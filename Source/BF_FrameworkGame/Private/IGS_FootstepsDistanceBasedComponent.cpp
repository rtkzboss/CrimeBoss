#include "IGS_FootstepsDistanceBasedComponent.h"

UIGS_FootstepsDistanceBasedComponent::UIGS_FootstepsDistanceBasedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StepLength = 250.00f;
    this->CrouchStepLength = 150.00f;
}


