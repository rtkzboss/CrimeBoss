#include "IGS_PlayerCharacterMovementComponent.h"
#include "EIGS_MovementSlope.h"
#include "EIGS_Speed.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/MovementComponent.h"

UIGS_PlayerCharacterMovementComponent::UIGS_PlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MinAnalogValueForSprint = 6.999999881e-01f;
    (*this).SprintOutInSeconds = 1.199999973e-01f;
    (*this).ReloadToShootInSeconds = 1.000000015e-01f;
    (*this).SlideRequiredSprintSpeed = 2.800000000e+02f;
    (*this).SlideCooldown = 1.500000000e+00f;
    (*this).SlideLookTurnLimit = 9.600000000e+01f;
    (*this).SlideLookTurnDotLimit = -1.045285091e-01f;
    (*this).SlideCameraDirToVelocityMaxDot = 1.000000015e-01f;
    (*this).DistanceToMantle = 2.500000000e+01f;
    (*this).MaxMantleHeight = 1.200000000e+02f;
    (*this).MaxMantleAngle = 4.000000000e+01f;
    (*this).MinMantleHeight = 4.000000000e+01f;
    (*this).MantleDuration = 3.000000119e-01f;
    (*this).LadderGrabFromTopDistance = 4.500000000e+01f;
    (*this).LadderBottomFaceAlignSpeed = 2.000000000e+02f;
    (*this).LadderBottomStepAlignSpeed = 2.000000000e+02f;
    (*this).LadderTopPointInterpAlignSpeed = 2.000000000e+02f;
    (*this).LadderLeaveRM_StartTopDistance = 1.730000000e+02f;
    (*this).MaxRappelSpeed = 1.500000000e+04f;
    (*this).MaxRappelAcceleration = 1.500000000e+03f;
    (*this).RappelLookTurnLimit = 5.300000000e+01f;
    (*this).RappelLookTurnDotLimit = 6.018150449e-01f;
    (*this).RappelForwardOffset = 5.000000000e+00f;
    (*this).MaxSlideOnZiplineSpeed = 7.000000000e+03f;
    (*this).MaxSlideOnZiplineAcceleration = 1.000000000e+03f;
    (*this).ZiplineLookTurnLimit = 9.000000000e+01f;
    (*this).ZiplineLookTurnDotLimit = -4.371138829e-08f;
    (*this).CameraShakeScale = 5.000000000e+00f;
    (*this).CameraShakeScaleLadder = 5.000000000e+00f;
    (*this).MaxStepHeight = 4.000000000e+01f;
    (*this).JumpZVelocity = 3.400000000e+02f;
    (*UCharacterMovementComponent::StaticClass()->FindPropertyByName("WalkableFloorAngle")->ContainerPtrToValuePtr<float>(&(*this), 0)) = 5.050000000e+01f;
    (*UCharacterMovementComponent::StaticClass()->FindPropertyByName("WalkableFloorZ")->ContainerPtrToValuePtr<float>(&(*this), 0)) = 6.360782385e-01f;
    (*this).CrouchedHalfHeight = 6.000000000e+01f;
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


