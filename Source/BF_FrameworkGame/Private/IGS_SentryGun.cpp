#include "IGS_SentryGun.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "EIGS_DetectorState.h"
#include "EIGS_RotationType.h"
#include "Net/UnrealNetwork.h"

AIGS_SentryGun::AIGS_SentryGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DownTime = 5.000000000e+00f;
    (*this).ShootAngleDegrees = 1.500000000e+01f;
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


