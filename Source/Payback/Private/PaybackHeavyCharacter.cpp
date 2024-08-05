#include "PaybackHeavyCharacter.h"
#include "IGS_WeakSpotComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "Net/UnrealNetwork.h"

APaybackHeavyCharacter::APaybackHeavyCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).WeakSpotCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("WeakSpot Capsule"));
    (*this).CompromisedDamageMultiplier.Value = 2.000000000e+00f;
    (*this).WeakSpotComponent = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeakSpotCompromisedAnimation, 0)) = TEXT("Anim.Combat.Heavy.HelmOff");
    (*this).PSTemplate = nullptr;
    (*this).ParticleScale.X = 1.000000000e+00f;
    (*this).ParticleScale.Y = 1.000000000e+00f;
    (*this).ParticleScale.Z = 1.000000000e+00f;
    (*this).ParticleSocketName = TEXT("pelvis");
    (*this).ShockChargeMeshComponent1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 1"));
    (*this).ShockChargeMeshComponent2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 2"));
    (*this).ShockChargeMeshComponent3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 3"));
    (*this).ShockChargeMeshComponent4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shock Charge Static Mesh Component 4"));
    (*this).ShockChargeMeshScale.X = 1.000000000e+00f;
    (*this).ShockChargeMeshScale.Y = 1.000000000e+00f;
    (*this).ShockChargeMeshScale.Z = 1.000000000e+00f;
    (*this).ShockChargeMeshComponentAttachBone = TEXT("neck_01");
    (*this).WeakSpotCapsule->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
    (*this).ShockChargeMeshComponent1->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
    (*this).ShockChargeMeshComponent2->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
    (*this).ShockChargeMeshComponent3->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
    (*this).ShockChargeMeshComponent4->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
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


