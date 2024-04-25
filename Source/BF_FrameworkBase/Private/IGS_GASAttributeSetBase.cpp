#include "IGS_GASAttributeSetBase.h"
#include "Net/UnrealNetwork.h"

UIGS_GASAttributeSetBase::UIGS_GASAttributeSetBase() {
}

void UIGS_GASAttributeSetBase::OnRep_WeaponDamageMult(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_StunEffectivity(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_SprintSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ReviveSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ReloadSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_MoveSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_MeleeDamageReceived(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_MeleeDamageMult(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_LookSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_HolsterSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_HipFireSpread(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_HealthRegenDelay(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_HealthMultiplier(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_FlashEffectivity(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_FireDamageReceived(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ExtraBag(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ExplosiveDamageReceived(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_DownStateDuration(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_DetectionSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_DamageReceived(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_CrouchSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_CarryingSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_BulletDamageReceived(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_BeingRevivedSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_AimingStability(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ADSSpread(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ADSSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_ADSMovementSpeed(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_AdditionalDownStateCount(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_AbilityRegenSpeedMult(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::OnRep_Ability1Charges(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GASAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_GASAttributeSetBase, MoveSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, SprintSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, CrouchSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, CarryingSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ADSMovementSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, WeaponDamageMult);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, MeleeDamageMult);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ReloadSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ADSSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, HolsterSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, LookSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, HipFireSpread);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ADSSpread);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, AimingStability);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, DetectionSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ExtraBag);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, DamageReceived);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, BulletDamageReceived);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ExplosiveDamageReceived);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, FireDamageReceived);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, MeleeDamageReceived);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, HealthMultiplier);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, HealthRegenDelay);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, FlashEffectivity);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, StunEffectivity);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, ReviveSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, BeingRevivedSpeed);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, DownStateDuration);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, AdditionalDownStateCount);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, Ability1Charges);
    DOREPLIFETIME(UIGS_GASAttributeSetBase, AbilityRegenSpeedMult);
}


