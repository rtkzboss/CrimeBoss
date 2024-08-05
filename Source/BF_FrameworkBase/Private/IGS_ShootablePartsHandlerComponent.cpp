#include "IGS_ShootablePartsHandlerComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_ShootablePartsHandlerComponent::UIGS_ShootablePartsHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShootOffVelocity = 1.500000000e+03f;
    (*this).SpawnDistance = 5.000000000e+01f;
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


