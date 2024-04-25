#include "IGS_GameCharacterFramework.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "SkinnedDecalSampler.h"
#include "IGS_CharacterData.h"
#include "IGS_DamageHandlerComponentFramework.h"
#include "IGS_DealtDamageEventsWatcher.h"
#include "IGS_GASAttributeSetBase.h"
#include "IGS_GASComponentBase.h"
#include "IGS_GameCharacterMovementComponent.h"
#include "IGS_ObjectStatus.h"
#include "IGS_OutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_GameCharacterFramework::AIGS_GameCharacterFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UIGS_GameCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->AkEnviroSwitchIndoors = NULL;
    this->AkEnviroSwitchOutdoors = NULL;
    this->AkEnviroStateIndoors = NULL;
    this->AkEnviroStateOutdoors = NULL;
    this->bSpawnedForFirstTime = true;
    this->LeftHandAttachedActor = NULL;
    this->RightHandAttachedActor = NULL;
    this->CharacterData = CreateDefaultSubobject<UIGS_CharacterData>(TEXT("Character Data"));
    this->ObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("Object Status"));
    this->DamageHandlerComponent2 = CreateDefaultSubobject<UIGS_DamageHandlerComponentFramework>(TEXT("DamageHandlerComponent2"));
    this->DealtDamageEventsWatcher = CreateDefaultSubobject<UIGS_DealtDamageEventsWatcher>(TEXT("DealtDamageEventsWatcher"));
    this->DownStateHandlerComponent = NULL;
    this->OutlineComponent = CreateDefaultSubobject<UIGS_OutlineComponent>(TEXT("Outline Component"));
    this->GASComponent = CreateDefaultSubobject<UIGS_GASComponentBase>(TEXT("GASComponent"));
    this->SkinnedDecalSampler = CreateDefaultSubobject<USkinnedDecalSampler>(TEXT("kinned Decal Sampler"));
    this->GASAttributeSet = CreateDefaultSubobject<UIGS_GASAttributeSetBase>(TEXT("GASAttributeSet"));
    this->SquadID = -1;
    this->LastSquadID = -1;
    this->CurrentAim = 0.00f;
    this->bWantsAim = false;
    this->bCanAttack = true;
    this->bStartsWithCombatStance = false;
    this->bCombatStance = false;
    this->mR_IsMovementDisabled = false;
    this->CharacterIDEnum = EIGS_CharacterID::Char_Unknown;
    this->GenericCharacterID = -1;
    this->bIsMaxLeveled = false;
    this->GameCMC = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

bool AIGS_GameCharacterFramework::WantsAim() const {
    return false;
}

void AIGS_GameCharacterFramework::UpdateBodyInfo() {
}

void AIGS_GameCharacterFramework::TriggerFallDeath_Implementation() {
}

void AIGS_GameCharacterFramework::SubdueBy(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_GameCharacterFramework::Stun(const float inDuration) const {
}

void AIGS_GameCharacterFramework::SetSquad(AIGS_SquadFramework* inSquad) {
}

void AIGS_GameCharacterFramework::SetLookAtPoint(FIGS_InterestPointHolder inInterestPoint) {
}

void AIGS_GameCharacterFramework::SetHiddenPlayerIncludingWeapon(bool inHidden) {
}

void AIGS_GameCharacterFramework::SetFacePoint(FIGS_InterestPointHolder inInterestPoint, bool inForcePoint) {
}

void AIGS_GameCharacterFramework::SetDisableVoice(bool inState) {
}

void AIGS_GameCharacterFramework::SetCharacterHidden(bool inHidden) {
}

void AIGS_GameCharacterFramework::SetCharacterCanAttack(bool inAttack) {
}

void AIGS_GameCharacterFramework::SetCanSelectPrimaryWeaponSlots(bool inEnabled) const {
}

void AIGS_GameCharacterFramework::SetCanBeUnholstered(bool inEnabled) const {
}

void AIGS_GameCharacterFramework::SetAimAtPoint(FIGS_InterestPointHolder inInterestPoint) {
}

void AIGS_GameCharacterFramework::RequestStopCustomMontage(FGameplayTag inCustomAnimType) {
}

void AIGS_GameCharacterFramework::RequestPlayCustomMontage(FGameplayTag inCustomAnimType) {
}

void AIGS_GameCharacterFramework::ReportDamageDealt(const FHitResult& inHitResult) {
}

void AIGS_GameCharacterFramework::RemoveGameplayTagsCounted(FGameplayTagContainer inTagsToRemove, int32 inCount, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::RemoveGameplayTags(FGameplayTagContainer inTagsToRemove, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::RemoveGameplayTagCounted(FGameplayTag inTagToRemove, int32 inCount, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::RemoveGameplayTag(FGameplayTag inTagToRemove, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::PerformStealthTakedown(AIGS_GameCharacterFramework* inCharacter) {
}



void AIGS_GameCharacterFramework::OnRep_IsMovementDisabled() {
}

void AIGS_GameCharacterFramework::OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}

void AIGS_GameCharacterFramework::Multicast_ReportDamageDealt_Implementation(const FHitResult& inHitResult) {
}

bool AIGS_GameCharacterFramework::IsRobot() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsNPC() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsMeleeOnly() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsLocallyControlledPlayer() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsHoldingAim() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsCombatStance() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsAliveInNormalHealthState() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsAlive() const {
    return false;
}

bool AIGS_GameCharacterFramework::IsAiming() {
    return false;
}

bool AIGS_GameCharacterFramework::IsAIControlled() const {
    return false;
}

EIGS_UnitSpecialization AIGS_GameCharacterFramework::GetUnitSpecialization() const {
    return EIGS_UnitSpecialization::US_None;
}

EIGS_TeamSideEnum AIGS_GameCharacterFramework::GetTeamSideId() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

AIGS_SquadFramework* AIGS_GameCharacterFramework::GetSquad() const {
    return NULL;
}

USkinnedDecalSampler* AIGS_GameCharacterFramework::GetSkinnedDecalSampler() const {
    return NULL;
}

int32 AIGS_GameCharacterFramework::GetMaxBagCount() const {
    return 0;
}

TSubclassOf<UIGS_CharacterMaskBase> AIGS_GameCharacterFramework::GetMaskID_Implementation() const {
    return NULL;
}

FIGS_InterestPointHolder AIGS_GameCharacterFramework::GetLookAtPoint() const {
    return FIGS_InterestPointHolder{};
}

bool AIGS_GameCharacterFramework::GetIsCarryingLootBag() const {
    return false;
}

bool AIGS_GameCharacterFramework::GetIsCarrying() const {
    return false;
}

FVector AIGS_GameCharacterFramework::GetHeadOffset() const {
    return FVector{};
}

FVector AIGS_GameCharacterFramework::GetHeadBoneLocation() {
    return FVector{};
}

UIGS_GameCharacterMovementComponent* AIGS_GameCharacterFramework::GetGameCharacterMovementComponent() const {
    return NULL;
}

FVector AIGS_GameCharacterFramework::GetFeetLocation() const {
    return FVector{};
}

FIGS_InterestPointHolder AIGS_GameCharacterFramework::GetFacePoint() const {
    return FIGS_InterestPointHolder{};
}

FVector AIGS_GameCharacterFramework::GetEyesLocation(float inHeightRelativeMult) const {
    return FVector{};
}

int32 AIGS_GameCharacterFramework::GetDialogueGroupID() const {
    return 0;
}

EIGS_DialogueGroup AIGS_GameCharacterFramework::GetDialogueGroup() const {
    return EIGS_DialogueGroup::None;
}

EIGS_LevelRangeBit AIGS_GameCharacterFramework::GetDialogueCharacterLevel() const {
    return EIGS_LevelRangeBit::None;
}

FIGS_DialogueGroupCharacterHolder AIGS_GameCharacterFramework::GetDialogueCharacterHolder() const {
    return FIGS_DialogueGroupCharacterHolder{};
}

uint8 AIGS_GameCharacterFramework::GetDialogueCharacter() const {
    return 0;
}

int32 AIGS_GameCharacterFramework::GetCurrentBagCount() const {
    return 0;
}

float AIGS_GameCharacterFramework::GetCurrentAim() const {
    return 0.0f;
}

FVector AIGS_GameCharacterFramework::GetChestOffset() const {
    return FVector{};
}

FVector AIGS_GameCharacterFramework::GetChestBoneLocation() {
    return FVector{};
}

UIGS_CharacterWieldablesHolderComponent* AIGS_GameCharacterFramework::GetCharacterWieldableHolder() const {
    return NULL;
}

float AIGS_GameCharacterFramework::GetCharacterWieldableFPVModelScaleMultiplier() const {
    return 0.0f;
}

float AIGS_GameCharacterFramework::GetCharacterWieldable3PVModelScaleMultiplier() const {
    return 0.0f;
}

bool AIGS_GameCharacterFramework::GetCharacterCanAttack() {
    return false;
}

bool AIGS_GameCharacterFramework::GetCanSelectPrimaryWeaponSlots() const {
    return false;
}

bool AIGS_GameCharacterFramework::GetCanBeUnholstered() const {
    return false;
}

float AIGS_GameCharacterFramework::GetBagsPercentage() const {
    return 0.0f;
}

UAkComponent* AIGS_GameCharacterFramework::GetAkAudioComponent() const {
    return NULL;
}

FVector AIGS_GameCharacterFramework::GetAimAtPosition() const {
    return FVector{};
}

FIGS_InterestPointHolder AIGS_GameCharacterFramework::GetAimAtPoint() const {
    return FIGS_InterestPointHolder{};
}

bool AIGS_GameCharacterFramework::GameplayTagsMatchesQuery(const FGameplayTagQuery& inQuery) const {
    return false;
}

void AIGS_GameCharacterFramework::EnableMovementAndCollision() {
}

bool AIGS_GameCharacterFramework::DoesBagExist() const {
    return false;
}

void AIGS_GameCharacterFramework::DisableMovementAndCollision() {
}

void AIGS_GameCharacterFramework::CancelCurrentAnimationTask(EIGS_AnimationTaskFinishedReason inReason) const {
}

bool AIGS_GameCharacterFramework::CanBeUnarmed() const {
    return false;
}

void AIGS_GameCharacterFramework::CanBeStealthTakedownedBy(AIGS_GameCharacterFramework* inCharacter, bool InValue) {
}

bool AIGS_GameCharacterFramework::CanAim() const {
    return false;
}

void AIGS_GameCharacterFramework::Aim(bool inOn, bool inForceStop) {
}

void AIGS_GameCharacterFramework::AddTimedGameplayTags(FGameplayTagContainer inTagsToAdd, float inDuration) {
}

void AIGS_GameCharacterFramework::AddTimedGameplayTag(FGameplayTag inTagToAdd, float inDuration) {
}

void AIGS_GameCharacterFramework::AddGameplayTagsCounted(FGameplayTagContainer inTagsToAdd, int32 inCount, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::AddGameplayTags(FGameplayTagContainer inTagsToAdd, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::AddGameplayTagCounted(FGameplayTag inTagToAdd, int32 inCount, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::AddGameplayTag(FGameplayTag inTagToAdd, bool inRemoveTimed) {
}

void AIGS_GameCharacterFramework::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GameCharacterFramework, mR_IsMovementDisabled);
    DOREPLIFETIME(AIGS_GameCharacterFramework, CharacterIDEnum);
    DOREPLIFETIME(AIGS_GameCharacterFramework, GenericCharacterID);
}


