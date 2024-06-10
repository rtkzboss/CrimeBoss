#include "IGS_CoverPointComponentsManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_CoverPointComponentsManager::UIGS_CoverPointComponentsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AutomaticStart = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_CoverPointComponentsManager::SetCoverPointComponents(const TArray<UIGS_CoverPointComponent*>& inComponents) {
}

void UIGS_CoverPointComponentsManager::DeactivateCovers() {
}

void UIGS_CoverPointComponentsManager::ActivateCovers() {
}


