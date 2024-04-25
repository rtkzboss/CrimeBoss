#include "IGS_SimpleShooter.h"
#include "Net/UnrealNetwork.h"

UIGS_SimpleShooter::UIGS_SimpleShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotAILoudness = 1.00f;
    this->TracerEffect = NULL;
    this->TrailEffect = NULL;
    this->TracerEffectNiagara = NULL;
    this->TracerEffectChance = 100.00f;
    this->TrailEffectChance = 10.00f;
    this->TracerEffectNiagaraChance = 0.00f;
    this->mR_bIsShooting = false;
}

void UIGS_SimpleShooter::StopAttack(const bool inForced) {
}

void UIGS_SimpleShooter::SetWeaponObject(UIGS_WeaponInventoryObject* inWeaponObject) {
}

void UIGS_SimpleShooter::OnRep_ShootingChanged(bool inWasShooting) {
}

void UIGS_SimpleShooter::IsShooting(bool& outIsShooting) {
}

void UIGS_SimpleShooter::InitializeMuzzleReference(UChildActorComponent* inMuzzleComponent) {
}

void UIGS_SimpleShooter::InitAkComponent(UAkComponent* inAkComponent) {
}

void UIGS_SimpleShooter::BeginAttack(const bool inForced) {
}

void UIGS_SimpleShooter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_SimpleShooter, mR_bIsShooting);
}


