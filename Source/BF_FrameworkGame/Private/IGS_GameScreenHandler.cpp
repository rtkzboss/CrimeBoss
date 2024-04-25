#include "IGS_GameScreenHandler.h"
#include "Templates/SubclassOf.h"

UIGS_GameScreenHandler::UIGS_GameScreenHandler() {
    this->GoDirectlyToMainMenu = false;
    this->m_BaseScreen = NULL;
    this->m_SystemMenuScreen = NULL;
    this->m_Settings = NULL;
}

void UIGS_GameScreenHandler::SwitchBackToMainScreen(bool directlyToMainMenu) {
}

void UIGS_GameScreenHandler::RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_GameScreenHandler::RequestOpenScreenByTag(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_GameScreenHandler::RequestOpenScreen(UObject* inWCO, UIGS_Screen* inScreen, bool AddToViewport) {
}

void UIGS_GameScreenHandler::RequestCloseScreenByTag(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_GameScreenHandler::RequestCloseScreen(UObject* inWCO, UIGS_Screen* inScreen, bool destroyAfterClose) {
}

void UIGS_GameScreenHandler::RefreshFocus() {
}

void UIGS_GameScreenHandler::OpenSystemMenuScreen() {
}

void UIGS_GameScreenHandler::InitializeMenuScreen(TSubclassOf<UIGS_SystemMenuScreen> inMenuScreenClass) {
}

UIGS_BaseMenuWidget* UIGS_GameScreenHandler::InitializeBaseScreen(TSubclassOf<UIGS_BaseMenuWidget> inBaseScreenClass) {
    return NULL;
}

void UIGS_GameScreenHandler::GoBackOnTopScreen() {
}

int32 UIGS_GameScreenHandler::GetScreensStackCount() const {
    return 0;
}

UIGS_BaseMenuWidget* UIGS_GameScreenHandler::GetBaseScreen() const {
    return NULL;
}

void UIGS_GameScreenHandler::CloseSystemMenuScreen() {
}


