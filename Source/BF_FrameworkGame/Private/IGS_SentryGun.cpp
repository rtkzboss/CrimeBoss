#include "IGS_SentryGun.h"
#include "Net/UnrealNetwork.h"

AIGS_SentryGun::AIGS_SentryGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInvulnerable = false;
    this->DownTime = 5.00f;
    this->WeaponObjectClass = NULL;
    this->Shooter = NULL;
    this->AkComponent = NULL;
    this->weaponObject = NULL;
    this->ShootAngleDegrees = 15.00f;
}

void AIGS_SentryGun::SetSentryCanShoot(bool inEnabled) {
}

void AIGS_SentryGun::OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void AIGS_SentryGun::Multicast_CosmeticShootStopped_Implementation() {
}

void AIGS_SentryGun::Multicast_CosmeticShootStarted_Implementation() {
}



void AIGS_SentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_SentryGun, bIsInvulnerable);
}


