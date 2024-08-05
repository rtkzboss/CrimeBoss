#include "IGS_SuspicionManager.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_SuspicionManager::UIGS_SuspicionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AlarmReason = EIGS_AlarmReason::Alarm_UNKNOWN;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 2.000000000e+00f;
}

bool UIGS_SuspicionManager::WouldStrikeCauseAlarm(int32 inStrikeCount) const {
    return false;
}

void UIGS_SuspicionManager::ReportCivStartEscaping(AIGS_GameCharacterFramework* inCivilian) {
}

void UIGS_SuspicionManager::ReportCivEscaped(AIGS_GameCharacterFramework* inCivilian) {
}

void UIGS_SuspicionManager::OnRep_Strikes(int32 inLastStrikes) {
}

void UIGS_SuspicionManager::OnRep_Alarm() {
}

void UIGS_SuspicionManager::Multicast_OnStrikeAdded_Implementation(int32 inNewStrikes, int32 inIncrease, const FGameplayTag inBlameTag) {
}

void UIGS_SuspicionManager::Multicast_AddSuspicionInfoMessage_Implementation(int32 inStrikesIncrease, const FText& inBlame) {
}

void UIGS_SuspicionManager::IsSuitableForHeist(const bool inIsSuitable) {
}

bool UIGS_SuspicionManager::IsStrikeAllowed() const {
    return false;
}

bool UIGS_SuspicionManager::IsLastStrike() const {
    return false;
}

UIGS_SuspicionManager* UIGS_SuspicionManager::GetSuspicionManager(const UObject* inWCO) {
    return NULL;
}

float UIGS_SuspicionManager::GetHQSuspicion() {
    return 0.0f;
}

void UIGS_SuspicionManager::CanShowHeistHint(const bool inCanShow) {
}

void UIGS_SuspicionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_SuspicionManager, CurrentStrikes);
    DOREPLIFETIME(UIGS_SuspicionManager, BlameTag);
    DOREPLIFETIME(UIGS_SuspicionManager, AlarmReason);
    DOREPLIFETIME(UIGS_SuspicionManager, IsAlarmed);
}


