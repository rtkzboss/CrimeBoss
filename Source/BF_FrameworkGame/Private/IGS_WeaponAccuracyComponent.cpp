#include "IGS_WeaponAccuracyComponent.h"

UIGS_WeaponAccuracyComponent::UIGS_WeaponAccuracyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombinedHalfAngleInRadians = 0.00f;
    this->SpreadHalfAngleInRadians = 0.00f;
    this->MovementMultiplier = 1.00f;
    this->bIsAiming = false;
    this->bIsVR = false;
    this->bIsDrawingDebug = false;
}

float UIGS_WeaponAccuracyComponent::GetCurrentSpreadConeHalfAngleInRadians() const {
    return 0.0f;
}


