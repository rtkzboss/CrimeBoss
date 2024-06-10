#include "IGS_BleedingHandlerComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_BleedingHandlerComponent::UIGS_BleedingHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ReviveTime = 5.000000000e+00f;
    (*this).InuredHealthTresholdPercantage = 3.000000119e-01f;
    (*this).InjuredLifetimeMin = 5.000000000e+00f;
    (*this).InjuredLifetimeMax = 3.000000000e+01f;
    (*this).BleedRestoreHealthPercantage = 2.500000000e-01f;
    (*this).BleedMoveableWithCoversWeight = 6.000000238e-01f;
    (*this).BleedMoveableWeight = 2.500000000e-01f;
    (*this).BleedPinnedWeight = 1.500000060e-01f;
    (*this).BleedMoveableWithCoversLifetimeMin = 1.500000000e+01f;
    (*this).BleedMoveableWithCoversLifetimeMax = 3.000000000e+01f;
    (*this).BleedMoveableLifetimeMin = 6.000000000e+00f;
    (*this).BleedMoveableLifetimeMax = 1.500000000e+01f;
    (*this).BleedPinnedLifetimeMin = 5.000000000e+00f;
    (*this).BleedPinnedLifetimeMax = 1.200000000e+01f;
    (*this).BleedDamageInterval = 2.000000030e-01f;
    (*this).UseDownState = true;
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


