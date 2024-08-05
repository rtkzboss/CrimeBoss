#include "IGS_ShielderComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_ShielderComponent::UIGS_ShielderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HandleHolsterFromCode = true;
}

void UIGS_ShielderComponent::OnShieldTakeAnyDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, AController* inInstigatedBy, AActor* inDamageCauser) {
}

void UIGS_ShielderComponent::OnRep_MaxBreakableWindowHealth(const float inOldMaxHealth) {
}

void UIGS_ShielderComponent::OnBreakableWindowObjectStatusHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void UIGS_ShielderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_ShielderComponent, MaxBreakableWindowHealth);
    DOREPLIFETIME(UIGS_ShielderComponent, CurrentBreakableWindowHealth);
}


