#include "IGS_PlayerCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_CampThreatMeterComponent.h"
#include "IGS_PostProcessManagerComponent.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "IGS_BasherComponent.h"
#include "IGS_CarryableInteractiveComponent.h"
#include "IGS_DownStateHandlerComponent.h"
#include "IGS_FootstepsPlayerComponent.h"
#include "IGS_GASAttributeSetPlayer.h"
#include "IGS_ListInventory.h"
#include "IGS_LootBagComponent.h"
#include "IGS_LootBagInteractiveComponent.h"
#include "IGS_PlayerCameraComponent.h"
#include "IGS_PlayerCharacterMovementComponent.h"
#include "IGS_PlayerCommandComponent.h"
#include "IGS_PlayerDamageHandlerComponent.h"
#include "IGS_PlayerEffectsComponent.h"
#include "IGS_PlayerGASComponent.h"
#include "IGS_PlayerIgnoreCollisionComponent.h"
#include "IGS_PlayerLoadoutComponent.h"
#include "IGS_PlayerMetaTransferComponent.h"
#include "IGS_PlayerPingComponent.h"
#include "IGS_PlayerStatus.h"
#include "IGS_PlayerSuppressionHandlerComponent.h"
#include "IGS_PlayerSuspicionComponent.h"
#include "IGS_PlayerWorldTracingComponent.h"
#include "IGS_ReviveComponent.h"
#include "IGS_UseComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_PlayerCharacter::AIGS_PlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_PlayerCharacterMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<UIGS_PlayerStatus>(TEXT("Object Status")).SetDefaultSubobjectClass<UIGS_PlayerDamageHandlerComponent>(TEXT("DamageHandlerComponent2")).SetDefaultSubobjectClass<UIGS_PlayerGASComponent>(TEXT("GASComponent")).SetDefaultSubobjectClass<UIGS_GASAttributeSetPlayer>(TEXT("GASAttributeSet")).SetDefaultSubobjectClass<UIGS_FootstepsPlayerComponent>(TEXT("FootstepEventBaseComponent"))) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->AIControllerClass = NULL;
    this->DownStateHandlerComponent = CreateDefaultSubobject<UIGS_DownStateHandlerComponent>(TEXT("DownStateHandlerComponent"));
    this->bRegisterOnBeginPlay = false;
    this->bIsValidForAimAssist = false;
    this->LootBagComponent = CreateDefaultSubobject<UIGS_LootBagComponent>(TEXT("LootBagComponent"));
    this->UseComponent = CreateDefaultSubobject<UIGS_UseComponent>(TEXT("Use Component"));
    this->PingComponent = CreateDefaultSubobject<UIGS_PlayerPingComponent>(TEXT("Ping Component"));
    this->ReviveComponent = CreateDefaultSubobject<UIGS_ReviveComponent>(TEXT("Revive Component"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->PlayerSuspicionComponent = CreateDefaultSubobject<UIGS_PlayerSuspicionComponent>(TEXT("Player Suspicion Component"));
    this->SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->PlayerCommandComponent = CreateDefaultSubobject<UIGS_PlayerCommandComponent>(TEXT("PlayerCommandComponent"));
    this->PlayerWorldTracingComponent = CreateDefaultSubobject<UIGS_PlayerWorldTracingComponent>(TEXT("AimPoint Updater Component"));
    this->UnarmedMeleeBasherComponent = CreateDefaultSubobject<UIGS_BasherComponent>(TEXT("Unarmed Melee Basher Component"));
    this->EthnicityVoices = NULL;
    this->DefaultUnarmedMeleeItemClass = NULL;
    this->DefaultUnarmedMeleeAbility = NULL;
    this->DefaultAimingChangePercent = 0.80f;
    this->VisibilityCrouchMultiplier = 0.50f;
    this->Child3PVCameraActor = NULL;
    this->PlayerInventory = CreateDefaultSubobject<UIGS_ListInventory>(TEXT("Player Character List Inventory"));
    this->DeathCamUnskippableTime = 1.00f;
    this->DeathCamMaximumTime = 15.00f;
    this->bIsSomeoneSpectating = false;
    this->bIsInDeathCam = false;
    this->bDeathCamSkippable = false;
    this->bIsInSpectatingCam = false;
    this->R_Yaw = 0;
    this->bCanSlide = true;
    this->bCanUseUnarmedMelee = true;
    this->m_IsPendingCarryable = false;
    this->CachedLootBagCount = 0;
    this->Camera = CreateDefaultSubobject<UIGS_PlayerCameraComponent>(TEXT("Camera"));
    this->m_ArmsActor = NULL;
    this->PostProcessManagerComponent = CreateDefaultSubobject<UIGS_PostProcessManagerComponent>(TEXT("PostProcessManagerComponent"));
    this->PlayerEffectsComponent = CreateDefaultSubobject<UIGS_PlayerEffectsComponent>(TEXT("PlayerEffectsComponent"));
    this->SuppressionHandlerComponent = CreateDefaultSubobject<UIGS_PlayerSuppressionHandlerComponent>(TEXT("SuppressionHandlerCapsuleComponent"));
    this->PlayerIgnoreCollisionComponent = CreateDefaultSubobject<UIGS_PlayerIgnoreCollisionComponent>(TEXT("PlayerWithPlayerCollisionHandlerComponent"));
    this->PlayerLoadoutComponent = CreateDefaultSubobject<UIGS_PlayerLoadoutComponent>(TEXT("PlayerLoadoutComponent"));
    this->PlayerMetaTransferComponent = CreateDefaultSubobject<UIGS_PlayerMetaTransferComponent>(TEXT("PlayerMetaTransferComponent"));
    this->CampThreatMeterComponent = CreateDefaultSubobject<UIGS_CampThreatMeterComponent>(TEXT("CampThreatMeterComponent"));
    this->LootBagInteractiveComponent = CreateDefaultSubobject<UIGS_LootBagInteractiveComponent>(TEXT("LootBagInteractiveComponent"));
    this->CarryableInteractiveComponent = CreateDefaultSubobject<UIGS_CarryableInteractiveComponent>(TEXT("CarryableInteractiveComponent"));
    this->FallAkAudioEvent = NULL;
    this->FallDeathAkAudioEvent = NULL;
    this->ZiptieMountAkAudioEvent = NULL;
    this->ZiptieDismountAkAudioEvent = NULL;
    this->RappelMountAkAudioEvent = NULL;
    this->RappelDismountAkAudioEvent = NULL;
    this->RappelSlowDownAkAudioEvent = NULL;
    this->NotOutOfBoundsAkState = NULL;
    this->OutOfBoundsAkState = NULL;
    this->PersonPrespectiveFPPAkSwitch = NULL;
    this->PersonPrespectiveTPPAkSwitch = NULL;
    this->Camera->SetupAttachment(RootComponent);
    this->SuppressionHandlerComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->LootBagInteractiveComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->CarryableInteractiveComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->ReviveComponent->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->SpringArmComponent->SetupAttachment(RootComponent);
}

void AIGS_PlayerCharacter::Use(bool inIsHolding) {
}

void AIGS_PlayerCharacter::UpdateSpectatingCam(bool inIsSpectating) {
}

void AIGS_PlayerCharacter::UnarmedMeleeAttack() {
}

void AIGS_PlayerCharacter::SwitchToDeathCamera_Implementation() {
}




void AIGS_PlayerCharacter::Shout(bool inIsHolding) {
}

void AIGS_PlayerCharacter::SetRandomVoiceAccordingToEthnicityAndGender() {
}

void AIGS_PlayerCharacter::SetPlayerVisibility_Implementation(bool inVisible) {
}

void AIGS_PlayerCharacter::SetIsInInteraction(const bool InValue) {
}

void AIGS_PlayerCharacter::SetIsInElevator(const bool InValue) {
}

void AIGS_PlayerCharacter::SetIgnoreRoomSecurityOffence(bool inIgnore) const {
}

void AIGS_PlayerCharacter::SetIgnoreRadialMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerCharacter::SetIgnorePingInput(bool bIgnore) {
}

void AIGS_PlayerCharacter::SetIgnoreMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerCharacter::SetIgnoreLockpickInput(bool bIgnore) {
}

void AIGS_PlayerCharacter::SetIgnoreInteractionInput(bool bNewInteractionInput) {
}

void AIGS_PlayerCharacter::SetIgnoreBotSwapInput(bool bNewBotSwapInput) {
}

void AIGS_PlayerCharacter::SetFaceRotation(FRotator NewControlRotation) {
}

void AIGS_PlayerCharacter::SetArmsTortillaEffect(float InValue) {
}

void AIGS_PlayerCharacter::SetArmsHidden(bool inHidden) {
}

void AIGS_PlayerCharacter::Server_Shout_Implementation(FShoutScanData inScanData) {
}
bool AIGS_PlayerCharacter::Server_Shout_Validate(FShoutScanData inScanData) {
    return true;
}

void AIGS_PlayerCharacter::Server_RequestStopCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Server_RequestPlayCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Server_ProxyEnterCameraFeed_Implementation() {
}
bool AIGS_PlayerCharacter::Server_ProxyEnterCameraFeed_Validate() {
    return true;
}

void AIGS_PlayerCharacter::Server_PerformStealthTakedown_Implementation(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_PlayerCharacter::Server_OnInteractionEnded_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool AIGS_PlayerCharacter::Server_OnInteractionEnded_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void AIGS_PlayerCharacter::Server_OnInteracting_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool AIGS_PlayerCharacter::Server_OnInteracting_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void AIGS_PlayerCharacter::Server_OnBagCountChanged_Implementation(int32 inCount) {
}
bool AIGS_PlayerCharacter::Server_OnBagCountChanged_Validate(int32 inCount) {
    return true;
}

void AIGS_PlayerCharacter::Server_HandleSpectating_Implementation() {
}
bool AIGS_PlayerCharacter::Server_HandleSpectating_Validate() {
    return true;
}

void AIGS_PlayerCharacter::Server_AbilityUnequip_Implementation() {
}
bool AIGS_PlayerCharacter::Server_AbilityUnequip_Validate() {
    return true;
}

void AIGS_PlayerCharacter::ResetIgnoreRadialMenuInput() {
}

void AIGS_PlayerCharacter::ResetIgnoreMenuInput() {
}

void AIGS_PlayerCharacter::ResetIgnoreInteractionInput() {
}

void AIGS_PlayerCharacter::ResetIgnoreBotSwapInput() {
}

void AIGS_PlayerCharacter::ProxyEnterCameraFeed(AIGS_SecurityCameraViewer* InViewer) {
}


void AIGS_PlayerCharacter::Ping() const {
}

void AIGS_PlayerCharacter::OwnerUnpossess_Implementation() {
}

void AIGS_PlayerCharacter::OwnerPossess_Implementation() {
}

void AIGS_PlayerCharacter::OnPlayerStateChanged_Implementation(AIGS_PlayerStateGame* inPlayerState) {
}

void AIGS_PlayerCharacter::NotifyDeathCameraSkippable() {
}

void AIGS_PlayerCharacter::NotifyDeathCameraEnded() {
}

void AIGS_PlayerCharacter::Multicast_RequestStopCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Multicast_RequestPlayCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Multicast_PlayZiptieMountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayZiptieDismountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayRappelSlowDownEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayRappelMountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayRappelDismountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_OnInteractionEnded_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}

void AIGS_PlayerCharacter::Multicast_OnInteracting_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}

void AIGS_PlayerCharacter::Multicast_OnBagCountChanged_Implementation(int32 inCount) {
}

void AIGS_PlayerCharacter::Multicast_DeathSoundEffect_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_CheatChangeSize_Implementation(float InSize) {
}

void AIGS_PlayerCharacter::MessageToServer_LadderInput_Implementation(FIGS_ReplicatedLadder inLadderData) {
}
bool AIGS_PlayerCharacter::MessageToServer_LadderInput_Validate(FIGS_ReplicatedLadder inLadderData) {
    return true;
}

void AIGS_PlayerCharacter::LeaveLadder() const {
}

void AIGS_PlayerCharacter::JumpFromLadder() const {
}

bool AIGS_PlayerCharacter::IsUsingVehicle() const {
    return false;
}

bool AIGS_PlayerCharacter::IsUsingBuzzsaw() const {
    return false;
}

bool AIGS_PlayerCharacter::IsThirdPersonCamActive() {
    return false;
}

bool AIGS_PlayerCharacter::IsSlidingOnZipline() const {
    return false;
}

bool AIGS_PlayerCharacter::IsSliding() const {
    return false;
}

bool AIGS_PlayerCharacter::IsRappelling() const {
    return false;
}

bool AIGS_PlayerCharacter::IsRadialMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsPingInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsOnLadder() const {
    return false;
}

bool AIGS_PlayerCharacter::IsMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInVentShaft() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInteractionInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInInteraction() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInElevator() const {
    return false;
}

bool AIGS_PlayerCharacter::IsFalling() const {
    return false;
}

bool AIGS_PlayerCharacter::IsBotSwapInputIgnored() const {
    return false;
}

void AIGS_PlayerCharacter::HandleSpectating() {
}

EIGS_DialogueHeisterCharacter AIGS_PlayerCharacter::GetVoiceAccordingToEthnicityAndGender(UIGS_EthnicityVoices* inEthnicityVoices, EIGS_Ethnicity inEthnicity, bool inIsFemale) {
    return EIGS_DialogueHeisterCharacter::None;
}

AIGS_RideableVehicleBaseFramework* AIGS_PlayerCharacter::GetUsedVehicle() const {
    return NULL;
}

UIGS_PlayerCommandComponent* AIGS_PlayerCharacter::GetPlayerCommandComponent() const {
    return NULL;
}

UIGS_PlayerCharacterMovementComponent* AIGS_PlayerCharacter::GetPlayerCharacterMovementComponent() {
    return NULL;
}

UIGS_PlayerCameraComponent* AIGS_PlayerCharacter::GetPlayerCamera() const {
    return NULL;
}

bool AIGS_PlayerCharacter::GetIsAimingAtFriendly() const {
    return false;
}

bool AIGS_PlayerCharacter::GetIsAimingAtEnemy() const {
    return false;
}

EIGS_Ethnicity AIGS_PlayerCharacter::GetEthnicityFromMutable(UCustomizableSkeletalComponent* inCSCBody) {
    return EIGS_Ethnicity::White;
}

EIGS_TeamSideEnum AIGS_PlayerCharacter::GetAimingAtTeamside() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

EIGS_TeamSideEnum AIGS_PlayerCharacter::GetAimAtTeam() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

AIGS_GameCharacterFramework* AIGS_PlayerCharacter::GetAimAtCharacter() const {
    return NULL;
}

AActor* AIGS_PlayerCharacter::GetAimAtActor() const {
    return NULL;
}

float AIGS_PlayerCharacter::GetAbilityRechargeMult() const {
    return 0.0f;
}

int32 AIGS_PlayerCharacter::GetAbility1ChargeCount() const {
    return 0;
}

void AIGS_PlayerCharacter::ForceCancelHoldInputs() {
}

void AIGS_PlayerCharacter::ForceAndUseInteraction(UIGS_InteractiveComponent* inInteraction) {
}

void AIGS_PlayerCharacter::ForceAndUseClientInteraction(UIGS_InteractiveComponent* inInteraction) {
}

void AIGS_PlayerCharacter::EnableSpectateCamera_Implementation() {
}

void AIGS_PlayerCharacter::DoMantle() const {
}

void AIGS_PlayerCharacter::DisableSpectateCamera_Implementation() {
}

void AIGS_PlayerCharacter::DisableDeathCam_Implementation() {
}

void AIGS_PlayerCharacter::Client_ForceUseInteraction_Implementation(UIGS_InteractiveComponent* inInteraction) {
}

void AIGS_PlayerCharacter::Client_CameraSpy_Implementation(AIGS_SecurityCameraViewer* inCamera) {
}
bool AIGS_PlayerCharacter::Client_CameraSpy_Validate(AIGS_SecurityCameraViewer* inCamera) {
    return true;
}

void AIGS_PlayerCharacter::Client_AddItemsAfterSwitch_Implementation(const TArray<TSubclassOf<UIGS_InventoryObjectFramework>>& inItems) {
}

void AIGS_PlayerCharacter::Client_AddItem_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd) {
}

bool AIGS_PlayerCharacter::CanMoveOnLadder() const {
    return false;
}

void AIGS_PlayerCharacter::CancelAndRemoveAbility1() {
}

void AIGS_PlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PlayerCharacter, R_Yaw);
}


