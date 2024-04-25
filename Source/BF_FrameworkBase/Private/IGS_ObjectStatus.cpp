#include "IGS_ObjectStatus.h"
#include "Net/UnrealNetwork.h"

UIGS_ObjectStatus::UIGS_ObjectStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCurrentHealthWasReplicated = false;
    this->MaxHealth = 100.00f;
    this->MaxShield = 0.00f;
    this->mR_ReplicatedCurrentHealth = 0.00f;
    this->R_IsDead = false;
    this->Unkillable = false;
    this->ScriptInvulnerable = false;
    this->DifficultyInvulnerable = false;
    this->HealthDecayDisabled = false;
    this->InstantKillable = false;
    this->HealthState = EIGS_HealthState::HS_Normal;
    this->IsInjured = false;
    this->AccumulateDamagePeriod = 0.03f;
    this->m_OverrideReportingOfDamageDealt = false;
    this->m_OverrideReportingOfDamageDealtValue = false;
}

void UIGS_ObjectStatus::SetHealthDecayDisabled(bool inDisabled) {
}

void UIGS_ObjectStatus::ServerSetScriptInvulnerable(bool InValue) {
}

void UIGS_ObjectStatus::Reset() {
}

void UIGS_ObjectStatus::OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UIGS_ObjectStatus::OnTakeAnyDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, AController* inInstigatedBy, AActor* inDamageCauser) {
}

void UIGS_ObjectStatus::OnRep_ReplicatedCurrentHealth() {
}

void UIGS_ObjectStatus::OnRep_IsDead() {
}

void UIGS_ObjectStatus::OnRep_HealthState() const {
}

void UIGS_ObjectStatus::Multicast_SetMaxHealth_Implementation(float inMaxHealth) {
}
bool UIGS_ObjectStatus::Multicast_SetMaxHealth_Validate(float inMaxHealth) {
    return true;
}

void UIGS_ObjectStatus::Multicast_SetAllData_Implementation(float inHealthChange, float inMaxHealth, EIGS_HealthState inHealthState, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead) {
}
bool UIGS_ObjectStatus::Multicast_SetAllData_Validate(float inHealthChange, float inMaxHealth, EIGS_HealthState inHealthState, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead) {
    return true;
}

void UIGS_ObjectStatus::Multicast_DoHeal_Implementation(float inHealthChange, const FIGS_HealInfo& inHealInfo) {
}
bool UIGS_ObjectStatus::Multicast_DoHeal_Validate(float inHealthChange, const FIGS_HealInfo& inHealInfo) {
    return true;
}

void UIGS_ObjectStatus::Multicast_DoDamage_Implementation(float inHealthChange, const FIGS_HitInfo& inHitInfo) {
}
bool UIGS_ObjectStatus::Multicast_DoDamage_Validate(float inHealthChange, const FIGS_HitInfo& inHitInfo) {
    return true;
}

void UIGS_ObjectStatus::Multicast_Die_Implementation(float inHealthChange, const FIGS_HitInfo& inHitInfo) {
}
bool UIGS_ObjectStatus::Multicast_Die_Validate(float inHealthChange, const FIGS_HitInfo& inHitInfo) {
    return true;
}

void UIGS_ObjectStatus::Multicast_ChangeHealthState_Implementation(EIGS_HealthState inHealthState) {
}
bool UIGS_ObjectStatus::Multicast_ChangeHealthState_Validate(EIGS_HealthState inHealthState) {
    return true;
}

void UIGS_ObjectStatus::Multicast_ChangeHealth_Implementation(float inHealthChange, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead) {
}
bool UIGS_ObjectStatus::Multicast_ChangeHealth_Validate(float inHealthChange, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead) {
    return true;
}

void UIGS_ObjectStatus::MessageToServer_DoHeal_Implementation(float inHealthChange, const FIGS_HealInfo& inHealInfo) {
}
bool UIGS_ObjectStatus::MessageToServer_DoHeal_Validate(float inHealthChange, const FIGS_HealInfo& inHealInfo) {
    return true;
}

bool UIGS_ObjectStatus::IsDeadForSomeTime() const {
    return false;
}

bool UIGS_ObjectStatus::IsAliveInNormalHealthState() const {
    return false;
}

bool UIGS_ObjectStatus::IsAlive() const {
    return false;
}

bool UIGS_ObjectStatus::HasRecentlyDownstated() const {
    return false;
}

bool UIGS_ObjectStatus::HasRecentlyDied() const {
    return false;
}

float UIGS_ObjectStatus::GetRelativeShield() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetRelativeHealth() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetMaxShield() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetMaxHealth() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetLastShieldDelta() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetLastHealthDelta() const {
    return 0.0f;
}

EIGS_HealthState UIGS_ObjectStatus::GetHealthState() const {
    return EIGS_HealthState::HS_Normal;
}

bool UIGS_ObjectStatus::GetHealthDecayDisabled() {
    return false;
}

float UIGS_ObjectStatus::GetCurrentShield() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetCurrentHealthWithAccumulatedDamage() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetCurrentHealthNormalized() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetCurrentHealth() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetBaseReviveHealth() const {
    return 0.0f;
}

float UIGS_ObjectStatus::GetBaseMaxHealth() const {
    return 0.0f;
}

void UIGS_ObjectStatus::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_ObjectStatus, MaxHealth);
    DOREPLIFETIME(UIGS_ObjectStatus, MaxShield);
    DOREPLIFETIME(UIGS_ObjectStatus, mR_ReplicatedCurrentHealth);
    DOREPLIFETIME(UIGS_ObjectStatus, R_IsDead);
    DOREPLIFETIME(UIGS_ObjectStatus, Unkillable);
    DOREPLIFETIME(UIGS_ObjectStatus, ScriptInvulnerable);
    DOREPLIFETIME(UIGS_ObjectStatus, DifficultyInvulnerable);
    DOREPLIFETIME(UIGS_ObjectStatus, HealthDecayDisabled);
    DOREPLIFETIME(UIGS_ObjectStatus, InstantKillable);
    DOREPLIFETIME(UIGS_ObjectStatus, HealthState);
    DOREPLIFETIME(UIGS_ObjectStatus, IsInjured);
    DOREPLIFETIME(UIGS_ObjectStatus, m_OverrideReportingOfDamageDealt);
    DOREPLIFETIME(UIGS_ObjectStatus, m_OverrideReportingOfDamageDealtValue);
}


