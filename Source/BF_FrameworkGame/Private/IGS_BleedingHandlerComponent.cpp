#include "IGS_BleedingHandlerComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_BleedingHandlerComponent::UIGS_BleedingHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseDownState = true;
    this->CanBeRevived = false;
    this->ReviveTime = 5.00f;
    this->InuredHealthTresholdPercantage = 0.30f;
    this->InjuredChance = 0.00f;
    this->InjuredLifetimeMin = 5.00f;
    this->InjuredLifetimeMax = 30.00f;
    this->BleedChanceFromNormal = 0.00f;
    this->BleedChanceFromInjured = 0.00f;
    this->BleedRestoreHealthPercantage = 0.25f;
    this->BleedMoveableWithCoversWeight = 0.60f;
    this->BleedMoveableWeight = 0.25f;
    this->BleedPinnedWeight = 0.15f;
    this->BleedMoveableWithCoversLifetimeMin = 15.00f;
    this->BleedMoveableWithCoversLifetimeMax = 30.00f;
    this->BleedMoveableLifetimeMin = 6.00f;
    this->BleedMoveableLifetimeMax = 15.00f;
    this->BleedPinnedLifetimeMin = 5.00f;
    this->BleedPinnedLifetimeMax = 12.00f;
    this->BleedDamageInterval = 0.20f;
    this->HeadshotMaterial = NULL;
    this->BleedOutDamageType = NULL;
    this->mR_NextInjuryType = EIGS_BleedType::BT_None;
    this->mR_NextBleedType = EIGS_BleedType::BT_None;
    this->InvulnerableInDownstate = false;
}

void UIGS_BleedingHandlerComponent::Multicast_StartInjured_Implementation(EIGS_BleedType BleedType, const FIGS_HitInfo& inHitInfo) {
}
bool UIGS_BleedingHandlerComponent::Multicast_StartInjured_Validate(EIGS_BleedType BleedType, const FIGS_HitInfo& inHitInfo) {
    return true;
}

void UIGS_BleedingHandlerComponent::Multicast_StartBleeding_Implementation(EIGS_BleedType BleedType, const FIGS_HitInfo& inHitInfo) {
}
bool UIGS_BleedingHandlerComponent::Multicast_StartBleeding_Validate(EIGS_BleedType BleedType, const FIGS_HitInfo& inHitInfo) {
    return true;
}

void UIGS_BleedingHandlerComponent::Multicast_Revive_Implementation() {
}
bool UIGS_BleedingHandlerComponent::Multicast_Revive_Validate() {
    return true;
}

void UIGS_BleedingHandlerComponent::Multicast_Die_Implementation(float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo) {
}
bool UIGS_BleedingHandlerComponent::Multicast_Die_Validate(float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo) {
    return true;
}

void UIGS_BleedingHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_BleedingHandlerComponent, CanBeRevived);
    DOREPLIFETIME(UIGS_BleedingHandlerComponent, BleedChanceFromNormal);
    DOREPLIFETIME(UIGS_BleedingHandlerComponent, BleedChanceFromInjured);
    DOREPLIFETIME(UIGS_BleedingHandlerComponent, mR_NextInjuryType);
    DOREPLIFETIME(UIGS_BleedingHandlerComponent, mR_NextBleedType);
    DOREPLIFETIME(UIGS_BleedingHandlerComponent, InvulnerableInDownstate);
}


