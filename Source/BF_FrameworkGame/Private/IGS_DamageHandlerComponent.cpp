#include "IGS_DamageHandlerComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_DamageHandlerComponent::UIGS_DamageHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bCanSkipDownstate = true;
    (*this).SkipDownStateOverdamage = 1.000000000e+06f;
    (*this).ShieldPenetrationMultiplier = 1.000000015e-01f;
    (*this).UnknownBodyPartMultiplier = 1.000000000e+00f;
    (*this).ApplyPlayerNeutralFire = true;
    (*this).AINeutralFireMultiplier = 2.500000000e-01f;
    (*this).FriendlyFireMultiplier = 1.000000015e-01f;
    (*this).FriendlyFireMinHealth = 1.000000000e+00f;
    (*this).SelfDamageMultiplier = 3.000000119e-01f;
    (*this).ApplySelfDamage = true;
    (*this).StealthDamageAllowedTeamSides = 129;
    (*this).DamageReceivedMultiplierAttribute = 1.000000000e+00f;
    (*this).BulletDamageReceivedMultiplierAttribute = 1.000000000e+00f;
    (*this).ExplosiveDamageReceivedMultiplierAttribute = 1.000000000e+00f;
    (*this).FireDamageReceivedMultiplierAttribute = 1.000000000e+00f;
    (*this).MeleeDamageReceivedMultiplierAttribute = 1.000000000e+00f;
    (*this).GlobalEnemyAIDamageReceivedAttribute = 1.000000000e+00f;
}

void UIGS_DamageHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DamageHandlerComponent, bCanSkipDownstate);
}


