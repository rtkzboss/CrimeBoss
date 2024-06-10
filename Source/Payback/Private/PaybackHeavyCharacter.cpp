#include "PaybackHeavyCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_WeakSpotComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

APaybackHeavyCharacter::APaybackHeavyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakSpotCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WeakSpot Capsule"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HeadPhysicalMaterial = NULL;
    this->WeakSpotComponent = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    this->ParticleSocketName = TEXT("pelvis");
    this->ShockChargeMeshComponent1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 1"));
    this->ShockChargeMeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 2"));
    this->ShockChargeMeshComponent3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 3"));
    this->ShockChargeMeshComponent4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 4"));
    this->ShockChargeMesh = NULL;
    this->ShockChargeMeshComponentAttachBone = TEXT("neck_01");
    this->m_ParticleComponent = NULL;
    this->PSObject = NULL;
    this->ShockChargeMeshComponent1->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->ShockChargeMeshComponent2->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->ShockChargeMeshComponent3->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->ShockChargeMeshComponent4->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->WeakSpotCapsule->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
}

void APaybackHeavyCharacter::OnWeakSpotCompromised(const UPrimitiveComponent* inWeakSpotComponent, const FIGS_HitInfo& inLastHitInfo) {
}

void APaybackHeavyCharacter::OnRep_RemainingMeshComps() {
}

void APaybackHeavyCharacter::OnInjuredEnd() {
}


void APaybackHeavyCharacter::Multicast_StartDoomTimer_Implementation(FVector inImpactPoint, FVector inRotVec) {
}

void APaybackHeavyCharacter::Multicast_OnShockChargeBegin_Implementation() {
}

void APaybackHeavyCharacter::Multicast_OnInjuredStart_Implementation() {
}

void APaybackHeavyCharacter::Multicast_OnInjuredEnd_Implementation() {
}

void APaybackHeavyCharacter::Multicast_OnDoomTimerEnd_Implementation() {
}

void APaybackHeavyCharacter::Multicast_EnableHeadWeakSpot_Implementation() {
}

void APaybackHeavyCharacter::HandleDeath(float inCurrentHealth, float inCurrentShield, float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo) {
}

void APaybackHeavyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APaybackHeavyCharacter, mR_ActiveMeshComps);
}


