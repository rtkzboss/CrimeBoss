#include "IGS_IntelligentGameCharacter.h"
#include "IGS_CharacterWieldablesHolderComponent.h"
#include "IGS_SignificanceComponent.h"
#include "Components/ArrowComponent.h"
#include "IGS_AimAssistTargetComponent.h"
#include "IGS_AnimBudgetAllocatorComponent.h"
#include "IGS_CharacterPressureWatcherComponent.h"
#include "IGS_DamageHandlerComponent.h"
#include "IGS_DecalContactShadowComponent.h"
#include "IGS_FallDamageComponent.h"
#include "IGS_FootstepsEventBasedComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_IntelligentGameCharacter::AIGS_IntelligentGameCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_DamageHandlerComponent>(TEXT("DamageHandlerComponent2"))) {
    this->CurrentWieldable = NULL;
    this->SignificanceComponent = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
    this->GunDownAbility = NULL;
    this->CharacterWieldablesHolderComponent = CreateDefaultSubobject<UIGS_CharacterWieldablesHolderComponent>(TEXT("CharacterWieldablesHolderComponent"));
    this->bIsAiming = false;
    this->bIsValidForAimAssist = true;
    this->ExplorationZoomMagnification = 1.25f;
    this->ExplorationZoomInSpeedMult = 1.00f;
    this->ExplorationZoomOutSpeedMult = 1.00f;
    this->LookAtMaxAngleDeg = 90.00f;
    this->DoNotReduceWeaponPickupDamageForTeamSides = 1;
    this->bUseAnimationForVisionCone = false;
    this->HeadBoneName = TEXT("head");
    this->ChestBoneName = TEXT("spine_03");
    this->AimDummySocketName = TEXT("AimRSocket");
    this->DeathAkEvent = NULL;
    this->FootstepEventBaseComponent = CreateDefaultSubobject<UIGS_FootstepsEventBasedComponent>(TEXT("FootstepEventBaseComponent"));
    this->LootBagComponent = NULL;
    this->FallDamageComponent = CreateDefaultSubobject<UIGS_FallDamageComponent>(TEXT("FallDamageComponent"));
    this->ShootablePartsHandlerComponent = NULL;
    this->ZiptieComponent = NULL;
    this->SniperAimComponent = NULL;
    this->AimAtArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("AimAtDirection"));
    this->LookAtArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("LookAtDirection"));
    this->PawnDirArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("PawnDirection"));
    this->AnimBudgetAllocatorComponent = CreateDefaultSubobject<UIGS_AnimBudgetAllocatorComponent>(TEXT("AnimBudgetAllocatorComponent"));
    this->DecalContactShadowComponent = CreateDefaultSubobject<UIGS_DecalContactShadowComponent>(TEXT("DecalContactShadowComponent"));
    this->PressureWatcherComponent = CreateDefaultSubobject<UIGS_CharacterPressureWatcherComponent>(TEXT("PressureWatcherComponent"));
    this->AimAssistTargetComponent = CreateDefaultSubobject<UIGS_AimAssistTargetComponent>(TEXT("AimAssistTargetComponent"));
    this->mR_NextRandomAnimationSeed = -1;
    this->AimAtArrowComp->SetupAttachment(RootComponent);
    this->LookAtArrowComp->SetupAttachment(RootComponent);
    this->PawnDirArrowComp->SetupAttachment(RootComponent);
}

void AIGS_IntelligentGameCharacter::ThrowAwayBag() const {
}

void AIGS_IntelligentGameCharacter::SpawnPocketBag(FTransform InTransform) const {
}

void AIGS_IntelligentGameCharacter::SpawnBag(FTransform InTransform) const {
}

void AIGS_IntelligentGameCharacter::SelectPreviousOrNextWeaponSlot(bool inPrevious) {
}

void AIGS_IntelligentGameCharacter::SelectPreviousOrNextWeaponInActiveSlot(bool inPrevious) {
}

void AIGS_IntelligentGameCharacter::SaveHeadSnapshot() {
}

void AIGS_IntelligentGameCharacter::OverrideHeadComponent(USkeletalMeshComponent* InComponent) {
}

void AIGS_IntelligentGameCharacter::OnRep_AnimationSeed() {
}

void AIGS_IntelligentGameCharacter::OnPostSignificance_Implementation(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue) {
}

void AIGS_IntelligentGameCharacter::MagCheck() const {
}

bool AIGS_IntelligentGameCharacter::IsUsingMountedWeaponAndCanLeave() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsUsingMountedWeapon() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsReloading() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsMagChecking() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsInspecting() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsBashing() const {
    return false;
}

void AIGS_IntelligentGameCharacter::InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inIsForce) const {
}

void AIGS_IntelligentGameCharacter::InterruptMagCheck() const {
}

void AIGS_IntelligentGameCharacter::InterruptInspecting() const {
}

void AIGS_IntelligentGameCharacter::InspectWieldable() const {
}

void AIGS_IntelligentGameCharacter::HolsterWeapon() const {
}

UIGS_LootBagComponent* AIGS_IntelligentGameCharacter::GetLootBagComponent() const {
    return NULL;
}

USkeletalMeshComponent* AIGS_IntelligentGameCharacter::GetHeadComp() {
    return NULL;
}

UIGS_BleedingHandlerComponent* AIGS_IntelligentGameCharacter::GetBleedingComponent() {
    return NULL;
}

void AIGS_IntelligentGameCharacter::DropBag() const {
}

void AIGS_IntelligentGameCharacter::DebugTick_Implementation(float InDeltaTime) {
}

bool AIGS_IntelligentGameCharacter::CanInterruptReload() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::CanInterruptMagCheck() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::CanInterruptInspecting() const {
    return false;
}

void AIGS_IntelligentGameCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_IntelligentGameCharacter, mR_NextRandomAnimationSeed);
}


