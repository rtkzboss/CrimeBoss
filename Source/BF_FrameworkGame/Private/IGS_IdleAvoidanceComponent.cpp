#include "IGS_IdleAvoidanceComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_IdleAvoidanceComponent::UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).VelocityTreshold = 5.000000000e+01f;
    (*this).AvoidanceWeihgtOverride = -1.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 2.000000030e-01f;
}

void UIGS_IdleAvoidanceComponent::OnRep_CharacterVsHeistersCollisionStatus() {
}

void UIGS_IdleAvoidanceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_IdleAvoidanceComponent, m_CharacterVsHeistersCollisionStatus);
}


