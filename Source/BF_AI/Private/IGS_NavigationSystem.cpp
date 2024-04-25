#include "IGS_NavigationSystem.h"

UIGS_NavigationSystem::UIGS_NavigationSystem() {
    this->SupportedAgents.AddDefaulted(2);
}

void UIGS_NavigationSystem::UnPauseNavigationAutoUpdate(const UObject* WorldContextObject) {
}

void UIGS_NavigationSystem::PauseNavigationAutoUpdate(const UObject* WorldContextObject) {
}

bool UIGS_NavigationSystem::IsNavigationAutoUpdatePaused(const UObject* WorldContextObject) {
    return false;
}


