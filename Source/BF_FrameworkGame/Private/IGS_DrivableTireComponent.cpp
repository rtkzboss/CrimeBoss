#include "IGS_DrivableTireComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_DrivableTireComponent::UIGS_DrivableTireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bBreakableEnabled = true;
    this->DeflatedTireMesh = NULL;
    this->TireRimRadius = 23.00f;
    this->TireHeightChange = 2.50f;
    this->ChildHeightChange = 7.00f;
    this->BlowoutAudio = NULL;
    this->BlowoutParticle = NULL;
    this->mR_IsDeflated = false;
    this->OwnerRef = NULL;
    this->m_BlowoutParticleComponent = NULL;
}

void UIGS_DrivableTireComponent::TireTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UIGS_DrivableTireComponent::SetTireAngle(float SpinAngle, float TurnAngle, bool InverseAngle) {
}

void UIGS_DrivableTireComponent::SetBreakable(bool Enabled) {
}

void UIGS_DrivableTireComponent::OnRep_TireDeflated() {
}

bool UIGS_DrivableTireComponent::IsBreakable() {
    return false;
}

void UIGS_DrivableTireComponent::All_StartDeflate_Implementation(bool inDropin) {
}

void UIGS_DrivableTireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DrivableTireComponent, mR_IsDeflated);
}


