#include "IGS_PlayerCameraComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_PlayerCameraComponent::UIGS_PlayerCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CurrentEyeHeightTarget = 7.700000000e+01f;
    (*this).CurrentInterpSpeed = 1.000000000e+01f;
    (*this).CameraLadderTopEndInterpSpeed = 1.500000000e+01f;
    (*this).CameraLadderRootMotionInterpSpeed = 1.500000000e+01f;
    (*this).FOVInterpolationEndTolerance = 4.999999888e-03f;
    (*this).CameraBoneAttachment = TEXT("camera_root");
    (*this).PrimaryComponentTick.TickGroup = TG_PrePhysics;
    (*this).PrimaryComponentTick.bCanEverTick = true;
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


