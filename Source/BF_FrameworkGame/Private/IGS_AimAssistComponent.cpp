#include "IGS_AimAssistComponent.h"

UIGS_AimAssistComponent::UIGS_AimAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableSlowdown = true;
    this->bEnableSoftLock = false;
    this->bEnableBulletBending = false;
    this->bEnableScaling = false;
    this->bScalingByResolution = true;
    this->BaseResolutionForScaling = 1080.00f;
    this->bScalingByFOV = true;
    this->BaseFOVForScaling = 90.00f;
    this->bDrawCircles = false;
    this->bDrawCirclesOnlyWithValidTarget = false;
    this->bDrawCrosshair = false;
    this->bDebugOverlayBox = false;
    this->bShowValidTargetSockets = false;
    this->bDebugTargetTraces = false;
    this->MouseAimAssistDataAsset = NULL;
    this->ControllerAimAssistDataAsset = NULL;
    this->CurrentAimAssistDataAsset = NULL;
    this->ObstacleCheckTraceType = TraceTypeQuery3;
    this->InputDeviceChangedToGamepadDelay = 0.20f;
}

void UIGS_AimAssistComponent::OnTargetDestroyed(AActor* inDestroyedActor) {
}

bool UIGS_AimAssistComponent::IsZoneScalingEnabledForSoftLock() const {
    return false;
}

bool UIGS_AimAssistComponent::IsZoneScalingEnabledForSlowdown() const {
    return false;
}

bool UIGS_AimAssistComponent::IsZoneScalingEnabledForBulletBending() const {
    return false;
}

bool UIGS_AimAssistComponent::IsSoftLockEnabled() const {
    return false;
}

bool UIGS_AimAssistComponent::IsSlowdownEnabled() const {
    return false;
}

bool UIGS_AimAssistComponent::IsBulletBendingEnabled() const {
    return false;
}

FTransform UIGS_AimAssistComponent::GetCurrentBulletBendingTransform() const {
    return FTransform{};
}

void UIGS_AimAssistComponent::GetControlMultipliers(float& outPitchMult, float& outYawMult) const {
}


