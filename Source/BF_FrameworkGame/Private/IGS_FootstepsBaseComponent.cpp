#include "IGS_FootstepsBaseComponent.h"

UIGS_FootstepsBaseComponent::UIGS_FootstepsBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMakesNoise = false;
    this->LandingNoiseRange = 1600.00f;
    this->JumpingNoiseRange = 0.00f;
    this->WalkingNoiseRange = 800.00f;
    this->RunningNoiseRange = 800.00f;
    this->SprintingNoiseRange = 1450.00f;
    this->CrouchingNoiseRange = 0.00f;
    this->ImpactID = NULL;
}


