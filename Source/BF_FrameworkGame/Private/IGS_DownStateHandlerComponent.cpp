#include "IGS_DownStateHandlerComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_DownStateHandlerComponent::UIGS_DownStateHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DownStateHealthMax.Value = 1.000000000e+03f;
    (*this).ReviveTime.Value = 3.000000000e+00f;
    (*this).ReviveTimePinned.Value = 6.000000000e+00f;
    (*this).DownStateLengthInSeconds.Value = 1.200000000e+01f;
    (*this).PinnedDownStateLengthInSeconds.Value = 4.500000000e+01f;
    (*this).DownStateDamageGracePeriod.Value = 2.000000000e+00f;
    (*this).GracePeriodAfterRevive.Value = 2.000000000e+00f;
    (*this).PinnedHealthThreshold.Value = 3.000000119e-01f;
    (*this).HealthDecayTickPeriod.Value = 5.000000075e-02f;
    (*this).DownStateMovementSpeedMultiplier.Value = 5.000000000e-01f;
    (*this).CurrentDownStatesCount = 3;
    (*this).BaseDownStatesCount = 3;
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

void UIGS_DownStateHandlerComponent::CallOnCanSelfrevive() {
}

void UIGS_DownStateHandlerComponent::CallGoToDownstateAnimationDone() {
}

void UIGS_DownStateHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DownStateHandlerComponent, CurrentDownStatesCount);
    DOREPLIFETIME(UIGS_DownStateHandlerComponent, BaseDownStatesCount);
}


