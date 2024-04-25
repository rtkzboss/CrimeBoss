#include "IGS_GUIController.h"

UIGS_GUIController::UIGS_GUIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetSystemMenuClass = NULL;
    this->WidgetUnlockRadialMenuClass = NULL;
    this->WidgetBotSelectionClass = NULL;
    this->WidgetPingClass = NULL;
    this->WidgetTextChatClass = NULL;
    this->WidgetUnlockMenu = NULL;
    this->WidgetBotSelectionMenu = NULL;
    this->WidgetPingMenu = NULL;
    this->bIsGUIOpen = false;
    this->bIsTextChatOpen = false;
    this->bIsPendingClose = false;
    this->m_GameScreenHandler = NULL;
}

void UIGS_GUIController::ToggleTextChatMenu() {
}

void UIGS_GUIController::ToggleGameMenu() {
}

void UIGS_GUIController::SetupGUIVisible(bool inGUIVisible, bool inIgnoreLook, bool inIgnoreMove, bool inIgnoreInteraction, bool inShowMouse) {
}

void UIGS_GUIController::SetShouldShowVirtualCursor(bool inShow) {
}

bool UIGS_GUIController::OpenUnlockMethodMenu(FGameplayTagContainer inMethods) {
    return false;
}

void UIGS_GUIController::OpenTextChat() {
}

void UIGS_GUIController::OpenSystemMenu() {
}

void UIGS_GUIController::OpenPingMenu() {
}

void UIGS_GUIController::OpenGameMenu() {
}

void UIGS_GUIController::OpenBotSelectionMenu() {
}

void UIGS_GUIController::OnScreenOpen() {
}

void UIGS_GUIController::OnScreenClosed() {
}

void UIGS_GUIController::OnRadialMenuAnalogY(float inAxis) {
}

void UIGS_GUIController::OnRadialMenuAnalogX(float inAxis) {
}

bool UIGS_GUIController::IsUnlockMenuOpen() const {
    return false;
}

bool UIGS_GUIController::IsTextChatOpen() const {
    return false;
}

bool UIGS_GUIController::IsPingMenuOpen() const {
    return false;
}

bool UIGS_GUIController::IsGameMenuOpen() const {
    return false;
}

bool UIGS_GUIController::IsBotMenuOpen() const {
    return false;
}

bool UIGS_GUIController::IsAnyModalMenuOpen() const {
    return false;
}

bool UIGS_GUIController::IsAnyMenuOpen() const {
    return false;
}

bool UIGS_GUIController::GetShouldShowVirtualCursor() {
    return false;
}

void UIGS_GUIController::CloseUnlockMethodMenu() {
}

void UIGS_GUIController::CloseTextChat() {
}

void UIGS_GUIController::CloseSystemMenu() {
}

void UIGS_GUIController::ClosePingMenu(bool bForceClose) {
}

void UIGS_GUIController::CloseGameMenu() {
}

void UIGS_GUIController::CloseBotSelectionMenu() {
}

void UIGS_GUIController::CloseAnyMenu() {
}


