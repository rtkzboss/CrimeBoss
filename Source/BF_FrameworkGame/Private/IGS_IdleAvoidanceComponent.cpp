#include "IGS_IdleAvoidanceComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_IdleAvoidanceComponent::UIGS_IdleAvoidanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityTreshold = 50.00f;
    this->AvoidanceWeihgtOverride = -1.00f;
    this->m_CharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::None;
}

void UIGS_IdleAvoidanceComponent::OnRep_CharacterVsHeistersCollisionStatus() {
}

void UIGS_IdleAvoidanceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_IdleAvoidanceComponent, m_CharacterVsHeistersCollisionStatus);
}


