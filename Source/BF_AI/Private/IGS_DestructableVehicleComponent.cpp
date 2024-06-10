#include "IGS_DestructableVehicleComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_DestructableVehicleComponent::UIGS_DestructableVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bCanBeDestroyed = true;
    (*this).bExplodeOutDoors = true;
    (*this).EngineHealth = 4.000000000e+03f;
    (*this).R_EngineHealth = 4.000000000e+03f;
    (*this).CoolerPercentStartPosX = 9.269999862e-01f;
    (*this).CoolerPercentStartPosWidth = 3.334999979e-01f;
    (*this).CoolerPercentStartPosZ = 3.499999940e-01f;
    (*this).CoolerPercentEndPosZ = 5.450000167e-01f;
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

void UIGS_DestructableVehicleComponent::OnRep_IsExploded() {
}

void UIGS_DestructableVehicleComponent::Multicast_ExplodeVehicle_Implementation() {
}
bool UIGS_DestructableVehicleComponent::Multicast_ExplodeVehicle_Validate() {
    return true;
}

void UIGS_DestructableVehicleComponent::ExplodeVehicle() {
}

void UIGS_DestructableVehicleComponent::ClearFire() {
}

void UIGS_DestructableVehicleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DestructableVehicleComponent, R_EngineHealth);
    DOREPLIFETIME(UIGS_DestructableVehicleComponent, R_DoorHealth);
    DOREPLIFETIME(UIGS_DestructableVehicleComponent, R_IsExploded);
}


