#include "IGS_ScreenHandler.h"
#include "Templates/SubclassOf.h"

UIGS_ScreenHandler::UIGS_ScreenHandler() {
    this->m_InputDeviceManager = NULL;
}

void UIGS_ScreenHandler::UnregisterScreen(const UIGS_Screen* inScreen) {
}

void UIGS_ScreenHandler::SetInputEnabled(bool Enabled) {
}

void UIGS_ScreenHandler::RegisterScreen(UIGS_Screen* inScreen) {
}

UIGS_Screen* UIGS_ScreenHandler::OpenScreenByClass(const TSubclassOf<UIGS_Screen> inClass, EScreenZOrder zOrderOverride) {
    return NULL;
}

void UIGS_ScreenHandler::OnWidgetInputReleased(EIGS_InputAction InAction) {
}

void UIGS_ScreenHandler::OnWidgetInputPressed(EIGS_InputAction InAction) {
}

void UIGS_ScreenHandler::OnInputDeviceChanged(EIGS_InputDevice newDevice) {
}

void UIGS_ScreenHandler::OnGameStateSet(AGameStateBase* GameState) {
}

void UIGS_ScreenHandler::OnAnalogInputRequested(EIGS_InputThumbstickType Type, FVector2D Value) {
}

TArray<EIGS_InputAction> UIGS_ScreenHandler::KeyEventToInputActions(const FKeyEvent& InKeyEvent) const {
    return TArray<EIGS_InputAction>();
}

bool UIGS_ScreenHandler::IsScreenWithTagOpen(FGameplayTag inTag, bool includeOverlay) const {
    return false;
}

bool UIGS_ScreenHandler::IsScreenRegistered(FGameplayTag inGameplayTag) const {
    return false;
}

bool UIGS_ScreenHandler::IsModalScreenOpen() const {
    return false;
}

bool UIGS_ScreenHandler::IsAnyScreenOpen(bool includeOverlays) const {
    return false;
}

void UIGS_ScreenHandler::InitializeDeviceManager() {
}

bool UIGS_ScreenHandler::HandleBack(UIGS_Screen* screen) {
    return false;
}

FGameplayTag UIGS_ScreenHandler::GetTopScreenTag(bool includeOverlay) const {
    return FGameplayTag{};
}

UIGS_Screen* UIGS_ScreenHandler::GetTopScreen(bool includeOverlay) const {
    return NULL;
}

UIGS_Screen* UIGS_ScreenHandler::GetOpenedScreenByTag(FGameplayTag inTag) const {
    return NULL;
}

bool UIGS_ScreenHandler::AreOnlyOverlaysOpen() const {
    return false;
}


