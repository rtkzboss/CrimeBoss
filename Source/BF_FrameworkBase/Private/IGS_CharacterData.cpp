#include "IGS_CharacterData.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_CharacterData::UIGS_CharacterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsInCombat = true;
    (*this).TargetFirstSeenTime = -1.000000000e+00f;
    (*this).TargetLostTime = -1.000000000e+00f;
    (*this).DistanceToTargetOnNavmesh = 3.402823466e+38f;
    (*this).EnteringDistanceProximity = -1.000000000e+00f;
    (*this).CurrentRoomType = EIGS_RoomType::Street;
    (*this).CurrentRoomIndex = -1;
    (*this).mR_HasReactionEnabledByScript = true;
    (*this).InjuryPlaying = EIGS_AIMontageType::AIM_Unknown;
    (*this).m_CarType = EIGS_CarType::C_Unknown;
    (*this).m_SeatVariant = EIGS_CarSeatVariant::CS_Unknown;
    (*this).m_LastNavmeshLocation.X = 3.402823466e+38f;
    (*this).m_LastNavmeshLocation.Y = 3.402823466e+38f;
    (*this).m_LastNavmeshLocation.Z = 3.402823466e+38f;
    (*this).bCanAbortAnimation = true;
    (*this).AlarmDeviceType = EIGS_AlarmDeviceType::AD_Unknown;
    (*this).mR_ReportDetection = true;
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

AIGS_GameCharacterFramework* UIGS_CharacterData::GetSubduedBy() const {
    return NULL;
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

TArray<AIGS_GameCharacterFramework*> UIGS_CharacterData::GetDetectingPlayers() const {
    return TArray<AIGS_GameCharacterFramework*>();
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


