#include "IGS_AimAssistComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AimAssistComponent::UIGS_AimAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bEnableSlowdown = true;
    (*this).bScalingByResolution = true;
    (*this).BaseResolutionForScaling = 1.080000000e+03f;
    (*this).bScalingByFOV = true;
    (*this).BaseFOVForScaling = 9.000000000e+01f;
    (*this).ObstacleCheckTraceType = TraceTypeQuery3;
    (*this).InputDeviceChangedToGamepadDelay = 2.000000030e-01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
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


