#include "IGS_PlayerControllerRoot.h"
#include "IGS_InputDeviceDetectorComponent.h"
#include "Components/SphereComponent.h"
#include "ActiveSubControllerHandler.h"
#include "IGS_AimAssistComponent.h"
#include "IGS_PlayerBotOrderComponent.h"
#include "IGS_PlayerDataComponent.h"
#include "IGS_SubControllerHuman.h"
#include "IGS_SubControllerMountable.h"
#include "IGS_SubControllerVehicle.h"

AIGS_PlayerControllerRoot::AIGS_PlayerControllerRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToPawn = true;
    this->ClickEventKeys.AddDefaulted(1);
    this->bEntranceUnlockMenuOpen = false;
    this->bIsCurrentlySwappingPawns = false;
    this->bInvertLook = false;
    this->bAllowShootingInSprint = false;
    this->bAllowAimingInSprint = false;
    this->bAllowReloadingInSprint = false;
    this->bAllowSwitchFireModeInSprint = true;
    this->bAllowChangeSlotInSprint = true;
    this->bToggleSprint = false;
    this->bToggleCrouch = true;
    this->bToggleAim = false;
    this->bSprintInterruptsReload = false;
    this->bMagCheckInSprintAllowed = false;
    this->bGamepadPrioritizeUseInsteadOfReload = true;
    this->HoldTimeInSeconds = 0.20f;
    this->StartHeistHoldTimeInSeconds = 2.00f;
    this->DoublePingThresholdInSeconds = 0.00f;
    this->ContextualDoublePingThresholdInSeconds = 0.25f;
    this->PingCooldownInSeconds = 0.10f;
    this->ActiveSubControllerHandler = CreateDefaultSubobject<UActiveSubControllerHandler>(TEXT("ActiveSubControllerHandler"));
    this->SubControllerHuman = CreateDefaultSubobject<UIGS_SubControllerHuman>(TEXT("SubControllerHuman"));
    this->SubControllerMountable = CreateDefaultSubobject<UIGS_SubControllerMountable>(TEXT("SubControllerMountable"));
    this->SubControllerVehicle = CreateDefaultSubobject<UIGS_SubControllerVehicle>(TEXT("SubControllerVehicle"));
    this->m_ActiveSubController = NULL;
    this->m_StreamingVolumeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("StreamingVolumeInstigator Sphere Collisions"));
    this->m_InputDeviceDetectorComponent = CreateDefaultSubobject<UIGS_InputDeviceDetectorComponent>(TEXT("InputDeviceDetectorComponent"));
    this->PlayerDataComponent = CreateDefaultSubobject<UIGS_PlayerDataComponent>(TEXT("PlayerDataComponent"));
    this->PlayerBotOrderComponent = CreateDefaultSubobject<UIGS_PlayerBotOrderComponent>(TEXT("PlayerBotOrderComponent"));
    this->CurrentPlayerCharacter = NULL;
    this->CurrentlySpectatedPlayer = NULL;
    this->m_AimAssistComponent = CreateDefaultSubobject<UIGS_AimAssistComponent>(TEXT("AimAssistComponent"));
    this->m_GivingUpTime = 2.00f;
    this->m_StreamingVolumeCollision->SetupAttachment(RootComponent);
}

void AIGS_PlayerControllerRoot::TryPossessSpectatedBot() {
}


void AIGS_PlayerControllerRoot::ShowErrorMessage(const FText& inMessageText) const {
}

void AIGS_PlayerControllerRoot::SetShowMainCanvas(bool inShowMainCanvas) const {
}

void AIGS_PlayerControllerRoot::SetIgnoreRadialMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerControllerRoot::SetIgnorePingInput(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::SetIgnoreMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerControllerRoot::SetIgnoreInteractionInput(bool bNewInteractionInput) {
}

void AIGS_PlayerControllerRoot::SetIgnoreBotSwapInput(bool bNewBotSwapInput) {
}

void AIGS_PlayerControllerRoot::SetIgnoreAllInput(bool bNewAllInput) {
}

void AIGS_PlayerControllerRoot::Server_UnlockMethodChosen_Implementation(const FGameplayTag inMethod) {
}

void AIGS_PlayerControllerRoot::Server_PossessSpectatedBot_Implementation(AIGS_PlayerCharacter* inPlayerToSpectate) {
}

void AIGS_PlayerControllerRoot::Server_GiveUpInPinnedDownState_Implementation() const {
}
bool AIGS_PlayerControllerRoot::Server_GiveUpInPinnedDownState_Validate() {
    return true;
}

void AIGS_PlayerControllerRoot::ResetIgnoreRadialMenuInput() {
}

void AIGS_PlayerControllerRoot::ResetIgnoreMenuInput() {
}

void AIGS_PlayerControllerRoot::ResetIgnoreInteractionInput() {
}

void AIGS_PlayerControllerRoot::ResetIgnoreBotSwapInput() {
}

void AIGS_PlayerControllerRoot::ReleaseHeldKeys() {
}

bool AIGS_PlayerControllerRoot::OpenUnlockMethodMenu(FGameplayTagContainer inMethods) {
    return false;
}

void AIGS_PlayerControllerRoot::OnSystemMenuInput_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnRadialMenuAnalogY_Implementation(float inAxis) {
}

void AIGS_PlayerControllerRoot::OnRadialMenuAnalogX_Implementation(float inAxis) {
}

bool AIGS_PlayerControllerRoot::OnOpenUnlockMenu_Implementation(FGameplayTagContainer inMethods) {
    return false;
}

void AIGS_PlayerControllerRoot::OnOpenTextChatMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnOpenNotepadMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnOpenInventoryMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnOpenBotSwitch_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnInputDeviceChanged_Implementation(EIGS_InputDevice inNewInputDevice) {
}

void AIGS_PlayerControllerRoot::OnGameMenuInput_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnCloseUnlockMenu_Implementation() {
}


void AIGS_PlayerControllerRoot::OnBotStandby_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnBotPossessInMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnBotFollow_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnBotCancelInMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

float AIGS_PlayerControllerRoot::OnAddYawInput_Implementation(float inYaw) {
    return 0.0f;
}

float AIGS_PlayerControllerRoot::OnAddPitchInput_Implementation(float InPitch) {
    return 0.0f;
}

bool AIGS_PlayerControllerRoot::IsUsingKeyboardAndMouse() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsUsingGamepad() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsSpectatingBot() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsSpectating() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsRadialMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsPingInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsInteractionInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsBotSwapInputIgnored() const {
    return false;
}


float AIGS_PlayerControllerRoot::GetStartHeistHoldTimeInSeconds() const {
    return 0.0f;
}

float AIGS_PlayerControllerRoot::GetPingCooldownInSeconds() const {
    return 0.0f;
}

float AIGS_PlayerControllerRoot::GetHoldTimeInSeconds() const {
    return 0.0f;
}

float AIGS_PlayerControllerRoot::GetDoublePingThresholdInSeconds() const {
    return 0.0f;
}

EIGS_InputDevice AIGS_PlayerControllerRoot::GetCurrentInputDeviceType() const {
    return EIGS_InputDevice::ID_UNKNOWN;
}

float AIGS_PlayerControllerRoot::GetContextualDoublePingThresholdInSeconds() {
    return 0.0f;
}

UIGS_AimAssistComponent* AIGS_PlayerControllerRoot::GetAimAssistComponent() const {
    return NULL;
}




void AIGS_PlayerControllerRoot::CloseUnlockMethodMenu() {
}


void AIGS_PlayerControllerRoot::ClientSwitchToSpectator3PVCamera_Implementation(AIGS_GameCharacterFramework* inSpectatorCharacter) {
}

void AIGS_PlayerControllerRoot::ClientIgnoreSuspiciousInput_Implementation(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::ClientIgnoreRealMoveInput_Implementation(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::ClientIgnoreAllInput_Implementation(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::ClientFadeScreen_Implementation(bool inIsFadeOut, float inFadeDuration) {
}

void AIGS_PlayerControllerRoot::Client_UnlockMethodChosen_Implementation(const FGameplayTag inMethod) {
}



