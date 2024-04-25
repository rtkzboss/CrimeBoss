#include "IGS_DamageHandlerComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_DamageHandlerComponent::UIGS_DamageHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanSkipDownstate = true;
    this->SkipDownStateOverdamage = 1000000.00f;
    this->ShieldPenetrationMultiplier = 0.10f;
    this->UnknownBodyPartMultiplier = 1.00f;
    this->ApplyPlayerFriendlyFire = false;
    this->ApplyAIFriendlyFire = false;
    this->ApplyPlayerNeutralFire = true;
    this->ApplyAINeutralFire = false;
    this->ApplyGangsterNeutralFire = true;
    this->FriendlyFireMultiplier = 0.10f;
    this->FriendlyFireMinHealth = 1.00f;
    this->SelfDamageMultiplier = 0.30f;
    this->SelfDamageMinHealth = 0.00f;
    this->ApplySelfDamage = true;
    this->StealthDamageAllowedTeamSides = 129;
    this->DamageReceivedMultiplierAttribute = 1.00f;
    this->BulletDamageReceivedMultiplierAttribute = 1.00f;
    this->ExplosiveDamageReceivedMultiplierAttribute = 1.00f;
    this->FireDamageReceivedMultiplierAttribute = 1.00f;
    this->MeleeDamageReceivedMultiplierAttribute = 1.00f;
    this->GlobalEnemyAIDamageReceivedAttribute = 1.00f;
}

void UIGS_DamageHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DamageHandlerComponent, bCanSkipDownstate);
}


