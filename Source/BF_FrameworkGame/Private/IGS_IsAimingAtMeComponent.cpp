#include "IGS_IsAimingAtMeComponent.h"

UIGS_IsAimingAtMeComponent::UIGS_IsAimingAtMeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsAimingAtMe = false;
    this->SeePlayerConeHalfAngleDeg = 45.00f;
    this->SeePlayerDistance = 600.00f;
    this->PlayerAimingAtHalfAngleDeg = 5.00f;
    this->ShouldCheckLineTrace = true;
}


