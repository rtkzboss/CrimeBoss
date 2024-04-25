#include "IGS_PlayerWorldTracingComponent.h"

UIGS_PlayerWorldTracingComponent::UIGS_PlayerWorldTracingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackingDistance = 10000.00f;
    this->DistanceToLean = 100.00f;
    this->LeanSphereCheckRadius = 50.00f;
    this->LeanSideCheckOffset = 30.00f;
    this->LeanUpCheckOffset = 30.00f;
    this->CapsuleZSizeAdd = 5.00f;
    this->CapsuleCheckZOffsetUp = 5.00f;
    this->MantleDownSweepOffsetMult = 1.90f;
}

bool UIGS_PlayerWorldTracingComponent::IsAimingAtFriendly(bool inNeedsAlive) const {
    return false;
}

bool UIGS_PlayerWorldTracingComponent::IsAimingAtEnemyBounds() const {
    return false;
}

bool UIGS_PlayerWorldTracingComponent::IsAimingAtEnemy(bool inNeedsAlive) const {
    return false;
}

bool UIGS_PlayerWorldTracingComponent::IsAimCharacterAlive() const {
    return false;
}

EIGS_MantleType UIGS_PlayerWorldTracingComponent::GetCurrentMantleType() const {
    return EIGS_MantleType::MantleType_None;
}

FVector UIGS_PlayerWorldTracingComponent::GetCurrentMantleLocation() const {
    return FVector{};
}

EIGS_LeanSide UIGS_PlayerWorldTracingComponent::GetCurrentLeanSide() const {
    return EIGS_LeanSide::LeanSide_None;
}

FVector UIGS_PlayerWorldTracingComponent::GetAimPoint() const {
    return FVector{};
}

EIGS_TeamSideEnum UIGS_PlayerWorldTracingComponent::GetAimCharacterTeamside() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

TEnumAsByte<ETeamAttitude::Type> UIGS_PlayerWorldTracingComponent::GetAimCharacterAttitude() const {
    return ETeamAttitude::Friendly;
}

AIGS_GameCharacterFramework* UIGS_PlayerWorldTracingComponent::GetAimCharacter() const {
    return NULL;
}

AActor* UIGS_PlayerWorldTracingComponent::GetAimActor() const {
    return NULL;
}

bool UIGS_PlayerWorldTracingComponent::CanMantle() const {
    return false;
}

bool UIGS_PlayerWorldTracingComponent::CanLean() const {
    return false;
}


