#include "IGS_GameScreenHandler.h"
#include "Templates/SubclassOf.h"
#include "IGS_BlueprintUtilities.h"
#include "IGS_Screen.h"

UIGS_GameScreenHandler::UIGS_GameScreenHandler() {
}

void UIGS_GameScreenHandler::SwitchBackToMainScreen(bool directlyToMainMenu) {
}

void UIGS_GameScreenHandler::RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_GameScreenHandler::RequestOpenScreenByTag(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_GameScreenHandler::RequestOpenScreen(UObject* inWCO, UIGS_Screen* inScreen, bool AddToViewport) {
    if (AddToViewport)
    {
        inScreen->AddScreenToViewport();
    }
    inScreen->ActivateWidget();
}

void UIGS_GameScreenHandler::RequestCloseScreenByTag(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_GameScreenHandler::RequestCloseScreen(UObject* inWCO, UIGS_Screen* inScreen, bool destroyAfterClose) {
    inScreen->SetVisibility(ESlateVisibility::Collapsed);
    inScreen->DeactivateWidget();
}

void UIGS_GameScreenHandler::RefreshFocus() {
}

void UIGS_GameScreenHandler::OpenSystemMenuScreen() {
}

void UIGS_GameScreenHandler::OnMovieFinished_Internal() {
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


