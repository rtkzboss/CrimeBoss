#include "IGS_UPlayerAnimationComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"

UIGS_UPlayerAnimationComponent::UIGS_UPlayerAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnarmedArmsAnimClass = NULL;
    this->UnarmedCharacterClass = NULL;
    this->CombatTimerAlpha = 1.00f;
    this->UnarmedUnholsterTime = 0.50f;
    this->SkipAnimationHolsterTime = 0.50f;
    this->FirstPersonAnimations = NULL;
    this->FirstPersonThrowablesAnimations = NULL;
    this->FirstPersonCarryableItemsAnimations = NULL;
    this->FirstPersonMeleeDatabase = NULL;
    this->ThirdPersonAnimations = NULL;
    this->ThirdPersonMeleeAnimDatabase = NULL;
    this->ThirdPersonThrowablesDatabase = NULL;
    this->ThirdPersonCarryablesDatabase = NULL;
    this->PatrolAnimations = NULL;
    this->ReactionAnimations = NULL;
    this->MeleePushAnimations = NULL;
    this->CombatAnimations = NULL;
    this->PlayerDeathAnimationsData = NULL;
    this->AvoidanceAnimationsTable = NULL;
    this->DownStateDatabase = NULL;
    this->SpawnAnimsTable = NULL;
    this->CarAnimsTable = NULL;
    this->BreachingDatabase = NULL;
    this->SmartLink_OpenDoor = NULL;
    this->SmartLink_Jump_OverObstacle = NULL;
    this->AimInSpeed = 15.00f;
    this->AimOutSpeed = 12.00f;
    this->m_Physical_animation = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("Physics_Animation"));
    this->FirstEquip = true;
    this->IsUsingSetableAnimClass = false;
    this->IsUsingTPPSetableAnimClass = false;
    this->SlideTransitionEndDuration = 0.10f;
    this->m_WieldableBase = NULL;
}

void UIGS_UPlayerAnimationComponent::OnWeaponChange() const {
}


