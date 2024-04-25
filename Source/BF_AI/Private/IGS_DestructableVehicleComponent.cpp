#include "IGS_DestructableVehicleComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_DestructableVehicleComponent::UIGS_DestructableVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkelCarMesh = NULL;
    this->StaticCarMesh = NULL;
    this->BurnMaterialSlot0 = false;
    this->ExplosionMaterialSlot0 = NULL;
    this->BurnMaterialSlot1 = false;
    this->ExplosionMaterialSlot1 = NULL;
    this->BurnMaterialSlot2 = false;
    this->ExplosionMaterialSlot2 = NULL;
    this->BurnMaterialSlot3 = false;
    this->ExplosionMaterialSlot3 = NULL;
    this->ExplosionFireParticle = NULL;
    this->bCanBeDestroyed = true;
    this->VehicleCarOwner = NULL;
    this->ObjectStatus = NULL;
    this->bTakeDamageOnlyInFront = false;
    this->bExplodeOutDoors = true;
    this->EngineHealth = 4000.00f;
    this->R_EngineHealth = 4000.00f;
    this->CoolerPercentStartPosX = 0.93f;
    this->CoolerPercentStartPosWidth = 0.33f;
    this->CoolerPercentStartPosZ = 0.35f;
    this->CoolerPercentEndPosZ = 0.55f;
    this->DoorHealth[0] = 0.00f;
    this->DoorHealth[1] = 0.00f;
    this->DoorHealth[2] = 0.00f;
    this->DoorHealth[3] = 0.00f;
    this->DoorHealth[4] = 0.00f;
    this->R_DoorHealth[0] = 0.00f;
    this->R_DoorHealth[1] = 0.00f;
    this->R_DoorHealth[2] = 0.00f;
    this->R_DoorHealth[3] = 0.00f;
    this->R_DoorHealth[4] = 0.00f;
    this->SkelDestructedMesh = NULL;
    this->StaticDestructedMesh = NULL;
    this->bFireParticleSpawned = false;
    this->bSmokeParticleSpawned = false;
    this->bBlackSmokeParticleSpawned = false;
    this->bShakeDynamicCar = false;
    this->ExplosionWarningWidget = NULL;
    this->LastHitFromCharacter = NULL;
    this->AkAudioComponent = NULL;
    this->ExplosionGraySmoke = NULL;
    this->ExplosionBlackSmoke = NULL;
    this->SettingsLoaded = NULL;
}

void UIGS_DestructableVehicleComponent::UpdateShakeCar() {
}

void UIGS_DestructableVehicleComponent::UpdateFire() const {
}

void UIGS_DestructableVehicleComponent::SetPrimitiveDataOnStaticMesh(UStaticMeshComponent* inStaticMesh) {
}

void UIGS_DestructableVehicleComponent::SelfDamage(float inDamage) {
}

void UIGS_DestructableVehicleComponent::OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void UIGS_DestructableVehicleComponent::ExplodeVehicle() {
}

void UIGS_DestructableVehicleComponent::ClearFire() {
}

void UIGS_DestructableVehicleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DestructableVehicleComponent, R_EngineHealth);
    DOREPLIFETIME(UIGS_DestructableVehicleComponent, R_DoorHealth);
}


