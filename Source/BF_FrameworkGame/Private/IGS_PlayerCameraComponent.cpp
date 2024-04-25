#include "IGS_PlayerCameraComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_PlayerCameraComponent::UIGS_PlayerCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentEyeHeightTargetType = EIGS_EyeHeightTargetType::EHT_Unknown;
    this->CurrentEyeHeightTarget = 77.00f;
    this->CurrentInterpSpeed = 10.00f;
    this->CameraBoneWrongAxisFix = false;
    this->CameraLadderTopEndInterpSpeed = 15.00f;
    this->CameraLadderRootMotionInterpSpeed = 15.00f;
    this->FOVInterpolationEndTolerance = 0.00f;
    this->CameraBoneAttachment = TEXT("camera_root");
}

void UIGS_PlayerCameraComponent::StopCameraShake(const FGameplayTag inCameraShakeTag) {
}

void UIGS_PlayerCameraComponent::SetCameraFOVOverrideInterpolated(bool inOverrideFOV, float inFOVValue, bool inTortillaEnabled, float inInterpSpeed) {
}

void UIGS_PlayerCameraComponent::SetCameraFOVOverride(bool inOverrideFOV, float inFOVValue, float inTortillaBlendEffect) {
}

void UIGS_PlayerCameraComponent::PlayCameraShake(const FGameplayTag inCameraShakeTag, float inIntensity) {
}

void UIGS_PlayerCameraComponent::OnRep_CameraShakeTags() {
}

EIGS_EyeHeightTargetType UIGS_PlayerCameraComponent::GetEyeHeightTarget(AIGS_PlayerCharacter* inPlayerCharacter, bool inAiming) {
    return EIGS_EyeHeightTargetType::EHT_Unknown;
}

void UIGS_PlayerCameraComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_PlayerCameraComponent, ActiveCameraShakes);
}


