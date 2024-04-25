#include "IGS_CharacterData.h"
#include "Net/UnrealNetwork.h"

UIGS_CharacterData::UIGS_CharacterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInCombat = true;
    this->bWasEverLooting = false;
    this->TargetFirstSeenTime = -1.00f;
    this->TargetLostTime = -1.00f;
    this->VisibleTarget = NULL;
    this->AggroTarget = NULL;
    this->LastTarget = NULL;
    this->TraceTarget = NULL;
    this->DistanceToTargetOnNavmesh = 340282346638528859811704183484516925440.00f;
    this->NeedHideFromGuard = false;
    this->TargetProximity = EIGS_TargetProximity::None;
    this->EnteringDistanceProximity = -1.00f;
    this->ProximityForEnteringDistanceProximity = EIGS_TargetProximity::None;
    this->CurrRoom = NULL;
    this->CurrentSecurityLocation = EIGS_RoomSecurityType::Outside;
    this->CurrentRoomType = EIGS_RoomType::Street;
    this->CurrentRoomIndex = -1;
    this->CoverExpirationTime = 0.00f;
    this->HasValidCover = false;
    this->CoverInvalidateTime = 0.00f;
    this->CurrentCover = NULL;
    this->LastCover = NULL;
    this->IsInsideValidCover = false;
    this->CoverAttackSide = EIGS_CoverAttackSide::CAS_None;
    this->CharacterID = 0;
    this->SniperShouldHit = false;
    this->HasEverMoved = false;
    this->IsMovingWithSprint = false;
    this->IsTryingToSurprisePlayer = false;
    this->IsTriggeredByBumping = false;
    this->FollowActor = NULL;
    this->FollowActorDistance = 0.00f;
    this->mR_HasReactionEnabledByScript = true;
    this->InjuryPlaying = EIGS_AIMontageType::AIM_Unknown;
    this->ThrowRequestComponent = NULL;
    this->IsDefending = false;
    this->bIsCharging = false;
    this->isTarget = false;
    this->PushForTarget = EIGS_PushForTarget::None;
    this->m_CarType = EIGS_CarType::C_Unknown;
    this->m_SeatVariant = EIGS_CarSeatVariant::CS_Unknown;
    this->bIsOnNavlink = false;
    this->bIsTraversingNavlink = false;
    this->bR_IsZiptied = false;
    this->bCanAbortAnimation = true;
    this->bIsPanicking = false;
    this->bWasEverPanicking = false;
    this->bIsComplaining = false;
    this->bIsAlerting = false;
    this->bDuty = false;
    this->bGetDownKneel = false;
    this->bGoingToGround = false;
    this->bScared = false;
    this->bIsLayingOnGround = false;
    this->bIsEscaping = false;
    this->bIsRunningForAlarmDevice = false;
    this->AlarmDeviceType = EIGS_AlarmDeviceType::AD_Unknown;
    this->m_DutyAlertingCharacter = false;
    this->bAlreadyUsedAlarmDevice = false;
    this->bIsSticky = false;
    this->SpawnedByWaveManager = false;
    this->mR_WalkieTalkieStatus = EIGS_WalkieTalkieStatus::WalkieTalkie_None;
    this->mR_CurrentDetection = 0.00f;
    this->mR_DetectionSecondPhase = false;
    this->mR_ReportDetection = true;
    this->m_StealthTakedownPossibleCharacter = NULL;
    this->m_StealthTakedownPossibleCharacterCached = NULL;
    this->mR_SubdueAllowed = false;
    this->mR_Reviving = false;
    this->mR_LockPicking = false;
    this->mR_Inspecting = false;
}

void UIGS_CharacterData::UpdateIsCharging(bool inIsCharging) {
}

void UIGS_CharacterData::OnRep_WalkieTalkieStatus() {
}

void UIGS_CharacterData::OnRep_StickyChanged() {
}

void UIGS_CharacterData::OnRep_SecurityLocation(EIGS_RoomSecurityType inOldTier) {
}

void UIGS_CharacterData::OnRep_OnZiptieChanged() {
}

void UIGS_CharacterData::OnRep_OnRevivingChanged() {
}

void UIGS_CharacterData::OnRep_OnReportDetectionChanged() {
}

void UIGS_CharacterData::OnRep_OnLockPickingChanged() {
}

void UIGS_CharacterData::OnRep_OnInspectingChanged() {
}

void UIGS_CharacterData::OnRep_OnDetectionChanged() {
}

void UIGS_CharacterData::OnRep_IsPanicking() {
}

void UIGS_CharacterData::OnRep_IsOnGroundChanged() {
}

void UIGS_CharacterData::OnRep_GoingToGroundChanged() {
}

void UIGS_CharacterData::OnRep_EscapingChanged() {
}

void UIGS_CharacterData::OnRep_DetectionSecondPhase() {
}

void UIGS_CharacterData::OnRep_DetectingPlayers() {
}

void UIGS_CharacterData::OnComponentEndOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inOtherComponent, int32 ini) {
}

void UIGS_CharacterData::OnComponentBeginOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inOtherComponent, int32 ini, bool inArg, const FHitResult& inHitResult) {
}

void UIGS_CharacterData::Multicast_SetSeatVariant_Implementation(const EIGS_CarSeatVariant inSeatVariant) {
}

void UIGS_CharacterData::Multicast_SetCarType_Implementation(const EIGS_CarType inCarType) {
}

bool UIGS_CharacterData::IsShoutHint() {
    return false;
}

AActor* UIGS_CharacterData::GetStealthTakedownActor() {
    return NULL;
}

bool UIGS_CharacterData::GetStealthKill() {
    return false;
}

bool UIGS_CharacterData::GetPlayerCanBreak() {
    return false;
}

FVector UIGS_CharacterData::GetLastNavmeshLocation() const {
    return FVector{};
}

AIGS_GameCharacterFramework* UIGS_CharacterData::GetCharacterOwner() const {
    return NULL;
}

void UIGS_CharacterData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_CharacterData, VisibleTarget);
    DOREPLIFETIME(UIGS_CharacterData, CurrentSecurityLocation);
    DOREPLIFETIME(UIGS_CharacterData, mR_HasReactionEnabledByScript);
    DOREPLIFETIME(UIGS_CharacterData, InjuryPlaying);
    DOREPLIFETIME(UIGS_CharacterData, IsDefending);
    DOREPLIFETIME(UIGS_CharacterData, bIsCharging);
    DOREPLIFETIME(UIGS_CharacterData, m_CarType);
    DOREPLIFETIME(UIGS_CharacterData, m_SeatVariant);
    DOREPLIFETIME(UIGS_CharacterData, bR_IsZiptied);
    DOREPLIFETIME(UIGS_CharacterData, bIsPanicking);
    DOREPLIFETIME(UIGS_CharacterData, bWasEverPanicking);
    DOREPLIFETIME(UIGS_CharacterData, bIsComplaining);
    DOREPLIFETIME(UIGS_CharacterData, bIsAlerting);
    DOREPLIFETIME(UIGS_CharacterData, bDuty);
    DOREPLIFETIME(UIGS_CharacterData, bGetDownKneel);
    DOREPLIFETIME(UIGS_CharacterData, bGoingToGround);
    DOREPLIFETIME(UIGS_CharacterData, bScared);
    DOREPLIFETIME(UIGS_CharacterData, bIsLayingOnGround);
    DOREPLIFETIME(UIGS_CharacterData, bIsEscaping);
    DOREPLIFETIME(UIGS_CharacterData, bIsRunningForAlarmDevice);
    DOREPLIFETIME(UIGS_CharacterData, AlarmDeviceType);
    DOREPLIFETIME(UIGS_CharacterData, bIsSticky);
    DOREPLIFETIME(UIGS_CharacterData, mR_WalkieTalkieStatus);
    DOREPLIFETIME(UIGS_CharacterData, mR_CurrentDetection);
    DOREPLIFETIME(UIGS_CharacterData, mR_DetectionSecondPhase);
    DOREPLIFETIME(UIGS_CharacterData, mR_DetectingPlayers);
    DOREPLIFETIME(UIGS_CharacterData, mR_ReportDetection);
    DOREPLIFETIME(UIGS_CharacterData, mR_SubdueAllowed);
    DOREPLIFETIME(UIGS_CharacterData, mR_Reviving);
    DOREPLIFETIME(UIGS_CharacterData, mR_LockPicking);
    DOREPLIFETIME(UIGS_CharacterData, mR_Inspecting);
}


