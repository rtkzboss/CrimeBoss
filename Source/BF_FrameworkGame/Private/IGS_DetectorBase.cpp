#include "IGS_DetectorBase.h"
#include "IGS_ObjectStatus.h"
#include "Engine/EngineTypes.h"
#include "DetectorRotation.h"
#include "IGS_DamageHandlerComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_DetectorBase::AIGS_DetectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->DefaultController = NULL;
    this->SquadID = 118999881;
    this->bDisableOnAlarm = true;
    this->BeforeReenablingEventTime = 1.00f;
    this->TeamSide = EIGS_TeamSideEnum::TS_Security;
    this->RotationType = EIGS_RotationType::Clamped;
    this->RotationPoint = NULL;
    this->DetectionConeOrigin = NULL;
    this->DetectorRotation = CreateDefaultSubobject<UDetectorRotation>(TEXT("DetectorRotation"));
    this->ShouldMoveWhenNoTarget = true;
    this->ShouldRotateToHiddenTarget = false;
    this->ObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("ObjectStatus"));
    this->DamageHandlerComponent = CreateDefaultSubobject<UIGS_DamageHandlerComponent>(TEXT("DamageHandlerComponent"));
    this->TotalHorizontalRotationAngleDegrees = 120.00f;
    this->TotalVerticalRotationAngleDegrees = 0.00f;
    this->FullRotationSpeed = 50.00f;
    this->FollowRotationSpeed = 50.00f;
    this->PatrollingRotationSpeed = 15.00f;
    this->ControlledRotationSpeed = 35.00f;
    this->DetectorState = EIGS_DetectorState::Patrolling;
    this->mR_TargetDetection = 0.00f;
    this->mR_WalkieTalkieStatus = EIGS_WalkieTalkieStatus::WalkieTalkie_None;
    this->mR_Target = NULL;
}

void AIGS_DetectorBase::SetTeamSideID(EIGS_TeamSideEnum inNewID) {
}

void AIGS_DetectorBase::OnRep_WTSatusChanged() {
}

void AIGS_DetectorBase::OnRep_OnTargetChanged() {
}

void AIGS_DetectorBase::OnRep_OnDetectionChanged(float inOldDetection) {
}

void AIGS_DetectorBase::OnRep_DetectorState(EIGS_DetectorState inOldState) {
}

void AIGS_DetectorBase::OnRep_DetectingPlayers() {
}


void AIGS_DetectorBase::Multicast_CosmeticDetectorEnabled_Implementation() {
}

void AIGS_DetectorBase::Multicast_CosmeticDetectorDisabled_Implementation() {
}

void AIGS_DetectorBase::Multicast_CosmeticDetectorDestroyed_Implementation() {
}

void AIGS_DetectorBase::Multicast_CosmeticDetectorControlled_Implementation() {
}

bool AIGS_DetectorBase::IsDisabled() const {
    return false;
}

bool AIGS_DetectorBase::IsDestroyed() const {
    return false;
}

EIGS_TeamSideEnum AIGS_DetectorBase::GetTeamSideId() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

FVector AIGS_DetectorBase::GetFocusPoint() const {
    return FVector{};
}

void AIGS_DetectorBase::Freeze(float InTime) {
}

void AIGS_DetectorBase::EnableDetectorDelayed(AActor* inInstigator, float inDelay) {
}

void AIGS_DetectorBase::EnableDetector(AActor* inInstigator) {
}

void AIGS_DetectorBase::EnableDetection(bool InValue) {
}

void AIGS_DetectorBase::Enable() {
}

void AIGS_DetectorBase::DisableDetector(AActor* inInstigator) {
}

void AIGS_DetectorBase::Disable() {
}

void AIGS_DetectorBase::DestroyDetector(AActor* inInstigator) {
}







void AIGS_DetectorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_DetectorBase, mR_DetectingPlayers);
    DOREPLIFETIME(AIGS_DetectorBase, DetectorState);
    DOREPLIFETIME(AIGS_DetectorBase, mR_TargetDetection);
    DOREPLIFETIME(AIGS_DetectorBase, mR_WalkieTalkieStatus);
    DOREPLIFETIME(AIGS_DetectorBase, mR_Target);
}


