#include "IGS_DeflatableTireComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_DeflatableTireComponent::UIGS_DeflatableTireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBreakableEnabled = true;
    this->DeflateCurve = NULL;
    this->DeflateMaterial = NULL;
    this->DeflatedTireMesh = NULL;
    this->TireRimRadius = 23.00f;
    this->TireHeightChange = 2.50f;
    this->ChildHeightChange = 7.00f;
    this->PunctureAudio = NULL;
    this->PunctureParticle = NULL;
    this->mR_IsDeflated = false;
    this->OwnerRef = NULL;
    this->ChassisComponentRef = NULL;
}

void UIGS_DeflatableTireComponent::TireTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UIGS_DeflatableTireComponent::SetBreakable(bool Enabled) {
}

void UIGS_DeflatableTireComponent::OnRep_TireDeflated() {
}

void UIGS_DeflatableTireComponent::OnDeflateUpdate(float CurveValue) {
}

bool UIGS_DeflatableTireComponent::IsBreakable() {
    return false;
}

void UIGS_DeflatableTireComponent::FinishDeflate() {
}

void UIGS_DeflatableTireComponent::All_StartDeflate_Implementation(FVector_NetQuantize HitLocation, FVector_NetQuantizeNormal FromDirection) {
}

void UIGS_DeflatableTireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DeflatableTireComponent, mR_IsDeflated);
}


