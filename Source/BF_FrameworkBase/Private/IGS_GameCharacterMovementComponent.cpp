#include "IGS_GameCharacterMovementComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/MovementComponent.h"

UIGS_GameCharacterMovementComponent::UIGS_GameCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SlopeAngleMax = 3.000000000e+01f;
    (*this).SlopeNoCrouchAI = 3.000000000e+01f;
    (*this).SlopeCheckDist = 5.000000000e+00f;
    (*this).SlopeBufferCapacity = 5;
    (*this).SlideDuration = 1.000000000e+00f;
    (*this).SlideSpeedMultiplier = 1.000000000e+00f;
    (*this).SlideSlowdownThreshold = 5.000000000e-01f;
    (*this).SlideSpeedFalloff = 5.000000000e-01f;
    (*this).StopSlideSpeed = 2.800000000e+02f;
    (*this).SlideLookTurnMultiplier = 3.000000119e-01f;
    (*this).SlideLowerBodyMultiplier = 3.000000119e-01f;
    static ConstructorHelpers::FObjectFinder<UClass> gen249(TEXT("/Game/00_Main/GameplayAbilitySystem/Effects/GE_MoveSpeedMultiplier.GE_MoveSpeedMultiplier_C"));
    (*this).MoveSpeedMultiplierGE = gen249.Object;
    (*this).CalmWalkSpeed = 1.000000000e+02f;
    (*this).CalmRunSpeed = 2.800000000e+02f;
    (*this).CalmSprintSpeed = 4.900000000e+02f;
    (*this).AlertedWalkSpeed = 1.000000000e+02f;
    (*this).AlertedRunSpeed = 2.800000000e+02f;
    (*this).AlertedSprintSpeed = 4.900000000e+02f;
    (*this).CombatWalkSpeed = 1.000000000e+02f;
    (*this).CombatRunSpeed = 2.800000000e+02f;
    (*this).CombatSprintSpeed = 4.900000000e+02f;
    (*this).ZiptiedSpeed = 2.800000000e+02f;
    (*this).DownstateSpeed = 6.000000000e+01f;
    (*this).CrouchCoef = 6.999999881e-01f;
    (*this).CrouchMax = 1.800000000e+02f;
    (*this).InjuredCoef = 6.999999881e-01f;
    (*this).InjuredMax = 1.800000000e+02f;
    (*this).StairsCoefUp = 6.999999881e-01f;
    (*this).StairsCoefDown = 6.000000238e-01f;
    (*this).BackwardsCoefPlayer = 1.000000000e+00f;
    (*this).BackwardsCoef = 8.000000119e-01f;
    (*this).AimDownSightsCoef = 6.999999881e-01f;
    (*this).BagCoef = 8.999999762e-01f;
    (*this).CarryingSprintCoef = 8.000000119e-01f;
    (*this).LerpSpeed = 3.000000000e+02f;
    (*this).LerpMaxDistance = 6.000000000e+01f;
    (*this).SpeedWalkSlow = 1.000000000e+02f;
    (*this).SpeedWalkFast = 2.000000000e+02f;
    (*this).SpeedRunSlow = 4.000000000e+02f;
    (*this).SpeedRunFast = 6.000000000e+02f;
    (*this).SpeedSprint = 1.200000000e+03f;
    (*this).MinSprintSpeed = 4.000000000e+02f;
    (*this).MaxCharacterSpeed = 7.000000000e+02f;
    (*this).MoveSpeedMultiplierAttribute = 1.000000000e+00f;
    (*this).SprintSpeedMultiplierAttribute = 1.000000000e+00f;
    (*this).CrouchSpeedMultiplierAttribute = 1.000000000e+00f;
    (*this).CarryingSpeedMultiplierAttribute = 1.000000000e+00f;
    (*this).ADSMovementSpeedMultiplierAttribute = 1.000000000e+00f;
    (*this).PerWeaponADSMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).PerWieldableMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).SpeedThreshold = 1.000000015e-01f;
    (*this).ObstacleCreationDelay = 1.000000000e+00f;
    (*this).bAlwaysCheckFloor = false;
    (*this).bUpdateNavAgentWithOwnersCollision = false;
}

void UIGS_GameCharacterMovementComponent::StopSlidingOnZipline() {
}

void UIGS_GameCharacterMovementComponent::StartRappelling() {
}

void UIGS_GameCharacterMovementComponent::SlideOnZipline(const FVector& inStartLocation, const FVector& inEndLocation) {
}

void UIGS_GameCharacterMovementComponent::SetMovementSpeed(EIGS_Speed inMovementSpeed) {
}

void UIGS_GameCharacterMovementComponent::SetLeaning(EIGS_CharacterLeaningDirectionEnum InDirection) {
}

void UIGS_GameCharacterMovementComponent::SetIsMantling(bool inIsMantling) {
}

void UIGS_GameCharacterMovementComponent::RemoveMovementSpeedMultiplier(UObject* Owner) {
}

void UIGS_GameCharacterMovementComponent::OnStartedFalling() {
}

void UIGS_GameCharacterMovementComponent::OnLanded() {
}

bool UIGS_GameCharacterMovementComponent::IsUsingBuzzsaw() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsSprinting() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsSlidingOnZipline() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsSliding() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsSlideInCooldown() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsRappelling() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsPartiallyInWater() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsOnRope() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsOnLadder() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsMantling() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsLeaning() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsInWater() const {
    return false;
}

bool UIGS_GameCharacterMovementComponent::IsInVentShaft() const {
    return false;
}

float UIGS_GameCharacterMovementComponent::GetWalkSpeed() const {
    return 0.0f;
}

float UIGS_GameCharacterMovementComponent::GetSprintSpeed() const {
    return 0.0f;
}

bool UIGS_GameCharacterMovementComponent::GetShouldRotateView() const {
    return false;
}

float UIGS_GameCharacterMovementComponent::GetMovementSpeedMultiplier() const {
    return 0.0f;
}

EIGS_Speed UIGS_GameCharacterMovementComponent::GetMovementSpeed() const {
    return EIGS_Speed::MS_Walk;
}

EIGS_CharacterLeaningDirectionEnum UIGS_GameCharacterMovementComponent::GetLeaningDirection() const {
    return EIGS_CharacterLeaningDirectionEnum::None;
}

FVector UIGS_GameCharacterMovementComponent::GetLastGroundedLocation() const {
    return FVector{};
}

float UIGS_GameCharacterMovementComponent::GetFullRunSpeed() const {
    return 0.0f;
}

FVector UIGS_GameCharacterMovementComponent::GetAdvancedMoveInteractionLocation() const {
    return FVector{};
}

FVector UIGS_GameCharacterMovementComponent::GetAdvancedMoveForwardDir() const {
    return FVector{};
}

bool UIGS_GameCharacterMovementComponent::CanMoveOnLadder() const {
    return false;
}

void UIGS_GameCharacterMovementComponent::AddMovementSpeedMultiplier(UObject* Owner, float Multiplier) {
}


