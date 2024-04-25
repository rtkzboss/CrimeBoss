#include "PaybackRobotCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_WeakSpotComponent.h"
#include "Components/BoxComponent.h"

APaybackRobotCharacter::APaybackRobotCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakSpotCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("WeakSpotCollisionComponent"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->WeakSpotHealth = 50.00f;
    this->WeakSpotAIDamageMultiplier = 0.20f;
    this->MaxHealthPercentageTaken = 0.50f;
    this->ForcedOverloadTime = 0.00f;
    this->OverloadOuterDamageRange = 300.00f;
    this->m_WeakSpotComponent = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    this->WeakSpotCollision->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
}

void APaybackRobotCharacter::StartOverloadSequenceDelayed(AController* inInstigator, const float inDelay) {
}

void APaybackRobotCharacter::StartOverloadSequence(AController* inInstigator) {
}




void APaybackRobotCharacter::OnOverloadForcedTimeEnd(AController* inInstigator) {
}


void APaybackRobotCharacter::OnOverloadAnimationEvent(EIGS_AnimationEventType inEventType, AController* inInstigator) {
}

void APaybackRobotCharacter::OnOverloadAnimationEnd(EIGS_AnimationTaskFinishedReason inReason, AController* inInstigator) {
}

void APaybackRobotCharacter::OnHealthChangedWithCompromisedWeakSpot(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}



void APaybackRobotCharacter::OnEffectApplied(const FGameplayTag inGameplayTag, int32 inCount) {
}

void APaybackRobotCharacter::OnAnyWeakSpotCompromisedEvent(const UPrimitiveComponent* inWeakSpotReference, const FIGS_HitInfo& inLastHitInfo) {
}

void APaybackRobotCharacter::OnAnyShootablePartShotOff(const UActorComponent* InComponent, float inDamageAmount, const FIGS_HitInfo& inHit) {
}

void APaybackRobotCharacter::Multicast_Overload_Implementation(AController* inInstigator) {
}


