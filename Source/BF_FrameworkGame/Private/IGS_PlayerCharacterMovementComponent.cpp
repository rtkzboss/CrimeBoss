#include "IGS_PlayerCharacterMovementComponent.h"

UIGS_PlayerCharacterMovementComponent::UIGS_PlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdvancedMovementData = NULL;
    this->MinAnalogValueForSprint = 0.70f;
    this->SprintOutInSeconds = 0.12f;
    this->ReloadToShootInSeconds = 0.10f;
    this->SlideRequiredSprintSpeed = 280.00f;
    this->SlideCooldown = 1.50f;
    this->SlideLookTurnLimit = 96.00f;
    this->SlideLookTurnDotLimit = -0.10f;
    this->SlideCameraDirToVelocityMaxDot = 0.10f;
    this->MantleAbility = NULL;
    this->DistanceToMantle = 25.00f;
    this->MaxMantleHeight = 120.00f;
    this->MaxMantleAngle = 40.00f;
    this->MinMantleHeight = 40.00f;
    this->MantleDuration = 0.30f;
    this->LerpCurveVector = NULL;
    this->LerpCurve = NULL;
    this->LadderGrabFromTopDistance = 45.00f;
    this->LadderBottomFaceAlignSpeed = 200.00f;
    this->LadderBottomStepAlignSpeed = 200.00f;
    this->LadderTopPointInterpAlignSpeed = 200.00f;
    this->LadderLeaveRM_StartTopDistance = 173.00f;
    this->MaxRappelSpeed = 15000.00f;
    this->MaxRappelAcceleration = 1500.00f;
    this->RappelLookTurnLimit = 53.00f;
    this->RappelLookTurnDotLimit = 0.60f;
    this->RappelForwardOffset = 5.00f;
    this->MaxSlideOnZiplineSpeed = 7000.00f;
    this->MaxSlideOnZiplineAcceleration = 1000.00f;
    this->ZiplineLookTurnLimit = 90.00f;
    this->ZiplineLookTurnDotLimit = -0.00f;
    this->CameraShake = NULL;
    this->RappelCameraShake = NULL;
    this->CameraShakeScale = 5.00f;
    this->CameraShakeScaleLadder = 5.00f;
}

void UIGS_PlayerCharacterMovementComponent::StopUsingBuzzsaw() {
}

void UIGS_PlayerCharacterMovementComponent::StartUsingBuzzsaw() {
}

void UIGS_PlayerCharacterMovementComponent::Server_LadderEnterInterpolationClientSyncPoint_Implementation() {
}
bool UIGS_PlayerCharacterMovementComponent::Server_LadderEnterInterpolationClientSyncPoint_Validate() {
    return true;
}

void UIGS_PlayerCharacterMovementComponent::NetMulticast_LadderTopEnterInterpolationFinished_Implementation() {
}

void UIGS_PlayerCharacterMovementComponent::NetMulticast_LadderBottomEnterStage2InterpolationFinished_Implementation() {
}

void UIGS_PlayerCharacterMovementComponent::NetMulticast_LadderBottomEnterStage1InterpolationFinished_Implementation() {
}

void UIGS_PlayerCharacterMovementComponent::NetMulticast_BotSlideOnZiplineStarted_Implementation() {
}

void UIGS_PlayerCharacterMovementComponent::NetMulticast_BotSlideOnZiplineEnded_Implementation() {
}


