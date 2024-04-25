#include "IGS_ShootablePartsHandlerComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_ShootablePartsHandlerComponent::UIGS_ShootablePartsHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartPhysMatOverride = NULL;
    this->ShootOffVelocity = 1500.00f;
    this->SpawnDistance = 50.00f;
}

void UIGS_ShootablePartsHandlerComponent::OnRep_VisibleComponents() {
}

void UIGS_ShootablePartsHandlerComponent::OnRep_CollisionComponents() {
}

void UIGS_ShootablePartsHandlerComponent::Multicast_ShootOffPart_Implementation(UActorComponent* inCollisionComponent, UActorComponent* inVisibleComponent, const FIGS_HitInfo& inHit, float inDamage) {
}

void UIGS_ShootablePartsHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_ShootablePartsHandlerComponent, mR_CollisionComponents);
    DOREPLIFETIME(UIGS_ShootablePartsHandlerComponent, mR_VisibleComponents);
}


