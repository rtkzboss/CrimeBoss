#include "IGS_TutorialsManager.h"

UIGS_TutorialsManager::UIGS_TutorialsManager() {
    this->m_SaveManager = NULL;
    this->m_SaveGameAccount = NULL;
}

void UIGS_TutorialsManager::ResetAllTutorials() {
}

bool UIGS_TutorialsManager::IsTutorialCompleted(const FGameplayTag inTag) const {
    return false;
}

bool UIGS_TutorialsManager::GetTutorialsEnabled() const {
    return false;
}


