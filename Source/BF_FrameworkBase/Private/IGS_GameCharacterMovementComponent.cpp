#include "IGS_GameCharacterMovementComponent.h"

UIGS_GameCharacterMovementComponent::UIGS_GameCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateNavAgentWithOwnersCollision = false;
    this->bAlwaysCheckFloor = false;
    this->UseDafultUnrealRotation_TMP = false;
    this->SlopeAngleMin = 0.00f;
    this->SlopeAngleMax = 30.00f;
    this->SlopeNoCrouchAI = 30.00f;
    this->SlopeNormalized = 0.00f;
    this->SlopeNormalizedNormal = 0.00f;
    this->SlopeNoCrouchAINormalized = 0.00f;
    this->SlopeCheckDist = 5.00f;
    this->SlopeBufferCapacity = 5;
    this->SlideDuration = 1.00f;
    this->SlideSpeedMultiplier = 1.00f;
    this->SlideSlowdownThreshold = 0.50f;
    this->SlideSpeedFalloff = 0.50f;
    this->StopSlideSpeed = 280.00f;
    this->SlideLookTurnMultiplier = 0.30f;
    this->SlideLowerBodyMultiplier = 0.30f;
    this->bIsInLocomotionState = false;
    this->FootStepWalkType = EIGS_MovementSlope::FSW_Normal;
    this->CalmWalkSpeed = 100.00f;
    this->CalmRunSpeed = 280.00f;
    this->CalmSprintSpeed = 490.00f;
    this->AlertedWalkSpeed = 100.00f;
    this->AlertedRunSpeed = 280.00f;
    this->AlertedSprintSpeed = 490.00f;
    this->CombatWalkSpeed = 100.00f;
    this->CombatRunSpeed = 280.00f;
    this->CombatSprintSpeed = 490.00f;
    this->ZiptiedSpeed = 280.00f;
    this->DownstateSpeed = 60.00f;
    this->CrouchCoef = 0.70f;
    this->CrouchMax = 180.00f;
    this->InjuredCoef = 0.70f;
    this->InjuredMax = 180.00f;
    this->StairsCoefUp = 0.70f;
    this->StairsCoefDown = 0.60f;
    this->BackwardsCoefPlayer = 1.00f;
    this->BackwardsCoef = 0.80f;
    this->AimDownSightsCoef = 0.70f;
    this->BagCoef = 0.90f;
    this->CarryingSprintCoef = 0.80f;
    this->LerpSpeed = 300.00f;
    this->LerpMaxDistance = 60.00f;
    this->SpeedWalkSlow = 100.00f;
    this->SpeedWalkFast = 200.00f;
    this->SpeedRunSlow = 400.00f;
    this->SpeedRunFast = 600.00f;
    this->SpeedSprint = 1200.00f;
    this->MinSprintSpeed = 400.00f;
    this->MaxCharacterSpeed = 700.00f;
    this->m_IsInWater = false;
    this->DefaultMovementSpeed = EIGS_Speed::MS_Walk;
    this->m_MovementSpeed = EIGS_Speed::MS_Walk;
    this->MoveSpeedMultiplierAttribute = 1.00f;
    this->SprintSpeedMultiplierAttribute = 1.00f;
    this->CrouchSpeedMultiplierAttribute = 1.00f;
    this->CarryingSpeedMultiplierAttribute = 1.00f;
    this->ADSMovementSpeedMultiplierAttribute = 1.00f;
    this->PerWeaponADSMovementSpeedMultiplier = 1.00f;
    this->PerWieldableMovementSpeedMultiplier = 1.00f;
    this->bCreateDynamicObstacle = false;
    this->SpeedThreshold = 0.10f;
    this->ObstacleCreationDelay = 1.00f;
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


