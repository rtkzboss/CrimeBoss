#include "IGS_TutorialsManager.h"

UIGS_TutorialsManager::UIGS_TutorialsManager() {
}

bool UIGS_TutorialsManager::TryToDisplayPendingTutorials() {
    return false;
}

void UIGS_TutorialsManager::SetForbiddenScreensForTutorials(const TArray<FGameplayTag>& inForbiddenScreens) {
}

void UIGS_TutorialsManager::ResetAllTutorials() {
}

bool UIGS_TutorialsManager::IsTutorialCompleted(const FGameplayTag inTag) const {
    return false;
}

bool UIGS_TutorialsManager::IsAnyTutorialPending() const {
    return false;
}

bool UIGS_TutorialsManager::IsAnyTutorialOpened() const {
    return false;
}

UIGS_TutorialsManager* UIGS_TutorialsManager::GetTutorialsManager(const UObject* inWCO) {
    return NULL;
}

bool UIGS_TutorialsManager::GetTutorialsEnabled() const {
    return false;
}

TArray<UIGS_Screen*> UIGS_TutorialsManager::GetPendingTutorials() const {
    return TArray<UIGS_Screen*>();
}

bool UIGS_TutorialsManager::CanOpenTutorialScreen(const UIGS_ScreenHandler* inScreenHandler) const {
    return false;
}

void UIGS_TutorialsManager::AddPendingTutorialScreen(UIGS_Screen* inScreen) {
}


