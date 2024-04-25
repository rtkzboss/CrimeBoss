#include "IGS_CoverPointComponentsManager.h"

UIGS_CoverPointComponentsManager::UIGS_CoverPointComponentsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutomaticStart = true;
    this->ShouldCheckMoving = false;
}

void UIGS_CoverPointComponentsManager::SetCoverPointComponents(const TArray<UIGS_CoverPointComponent*>& inComponents) {
}

void UIGS_CoverPointComponentsManager::DeactivateCovers() {
}

void UIGS_CoverPointComponentsManager::ActivateCovers() {
}


