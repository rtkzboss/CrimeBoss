#include "IGS_GUIController.h"
#include "ComponentInstanceDataCache.h"

UIGS_GUIController::UIGS_GUIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_GUIController::ToggleTextChatMenu() {
}

void UIGS_GUIController::ToggleGameMenu() {
}

void UIGS_GUIController::SwitchToWheelMenuType(EIGS_WheelMenuType inType) {
}

void UIGS_GUIController::SetupGUIVisible(bool inGUIVisible, bool inIgnoreLook, bool inIgnoreMove, bool inIgnoreInteraction, bool inShowMouse) {
}

void UIGS_GUIController::SetShouldShowVirtualCursor(bool inShow) {
}

bool UIGS_GUIController::OpenWheelMenuInternal(EIGS_WheelMenuType inType) {
    return false;
}

bool UIGS_GUIController::OpenWheelMenu() {
    return false;
}

void UIGS_GUIController::OpenTextChat() {
}

void UIGS_GUIController::OpenSystemMenu() {
}

void UIGS_GUIController::OpenGameMenu() {
}

void UIGS_GUIController::OnScreenOpen() {
}

void UIGS_GUIController::OnScreenClosed() {
}

void UIGS_GUIController::OnRadialMenuAnalogY(float inAxis) {
}

void UIGS_GUIController::OnRadialMenuAnalogX(float inAxis) {
}

bool UIGS_GUIController::IsTextChatOpen() const {
    return false;
}

bool UIGS_GUIController::IsGameMenuOpen() const {
    return false;
}

bool UIGS_GUIController::IsAnyWheelMenuOpen() const {
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

void UIGS_GUIController::CloseWheelMenu() {
}

void UIGS_GUIController::CloseTextChat() {
}

void UIGS_GUIController::CloseSystemMenu() {
}

void UIGS_GUIController::CloseGameMenu() {
}

void UIGS_GUIController::CloseAnyMenu() {
}

bool UIGS_GUIController::CanWheelMenuBeOpen_Implementation(EIGS_WheelMenuType inType) const {
    return false;
}


