#include "PaybackRobotCharacter.h"
#include "IGS_WeakSpotComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"

APaybackRobotCharacter::APaybackRobotCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).WeakSpotCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("WeakSpotCollisionComponent"));
    (*this).WeakSpotHealth = 5.000000000e+01f;
    (*this).WeakSpotAIDamageMultiplier = 2.000000030e-01f;
    (*this).MaxHealthPercentageTaken = 5.000000000e-01f;
    (*this).OverloadOuterDamageRadius = 6.000000000e+02f;
    (*this).OverloadInnerDamageRadius = 2.000000000e+02f;
    (*this).OverloadEffectRadius = 1.500000000e+03f;
    (*this).OverloadBaseDamage = 5.000000000e+02f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).OverloadAnimationTag, 0)) = TEXT("Anim.Combat.Robot.Overload");
    (*this).m_WeakSpotComponent = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
    (*this).WeakSpotCollision->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
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



void APaybackRobotCharacter::OnEnableVfx_Implementation(const bool inEnable) {
}

void APaybackRobotCharacter::OnEffectApplied(const FGameplayTag inGameplayTag, int32 inCount) {
}

void APaybackRobotCharacter::OnAnyWeakSpotCompromisedEvent(const UPrimitiveComponent* inWeakSpotReference, const FIGS_HitInfo& inLastHitInfo) {
}

void APaybackRobotCharacter::OnAnyShootablePartShotOff(const UActorComponent* InComponent, float inDamageAmount, const FIGS_HitInfo& inHit) {
}

void APaybackRobotCharacter::Multicast_Overload_Implementation(AController* inInstigator) {
}

void APaybackRobotCharacter::EnableVfx(const bool inEnable) {
}


