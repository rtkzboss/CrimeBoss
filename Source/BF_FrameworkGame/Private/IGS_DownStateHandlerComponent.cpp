#include "IGS_DownStateHandlerComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_DownStateHandlerComponent::UIGS_DownStateHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BleedOutDamageType = NULL;
    this->DownedEffect = NULL;
    this->AfterRevivedSomeoneEffect = NULL;
    this->AfterBeingRevivedEffect = NULL;
    this->DownstatePhase1StartAkEventFPP = NULL;
    this->DownstatePhase2StartAkEventFPP = NULL;
    this->DeathAKEventFPP = NULL;
    this->ReviveStartedAkEventFPP = NULL;
    this->ReviveFinishedAkEventFPP = NULL;
    this->DownstatePhase1StartAkEventTPP = NULL;
    this->DownstatePhase2StartAkEventTPP = NULL;
    this->DeathAKEventTPP = NULL;
    this->ReviveStartedAkEventTPP = NULL;
    this->ReviveFinishedAkEventTPP = NULL;
    this->GracePeriodGoingDownEndTimestamp = 0.00f;
    this->GracePeriodAfterReviveEndTimestamp = 0.00f;
    this->CurrentDownStatesCount = 3;
    this->BaseDownStatesCount = 3;
}

void UIGS_DownStateHandlerComponent::OnRep_DownStateCount() {
}

void UIGS_DownStateHandlerComponent::Multicast_ReviveChange_Implementation(APawn* inHealer, bool Inactive, bool inIsFinished) {
}

void UIGS_DownStateHandlerComponent::Multicast_HealthStateChange_Implementation(EIGS_HealthState inHealthState) {
}

void UIGS_DownStateHandlerComponent::Multicast_DownStateCount_Implementation(int32 inCount) {
}

int32 UIGS_DownStateHandlerComponent::GetCurrentDownStatesCount() const {
    return 0;
}

int32 UIGS_DownStateHandlerComponent::GetBaseDownStatesCount() const {
    return 0;
}

void UIGS_DownStateHandlerComponent::ForceSetDownStatesCount(int32 inCount) {
}

void UIGS_DownStateHandlerComponent::ForceDeath() {
}

void UIGS_DownStateHandlerComponent::ForceChangeState(EIGS_HealthState inState) {
}

void UIGS_DownStateHandlerComponent::Client_ReviveChange_Implementation(APawn* inHealer, bool Inactive, bool inIsFinished) {
}

void UIGS_DownStateHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DownStateHandlerComponent, CurrentDownStatesCount);
    DOREPLIFETIME(UIGS_DownStateHandlerComponent, BaseDownStatesCount);
}


