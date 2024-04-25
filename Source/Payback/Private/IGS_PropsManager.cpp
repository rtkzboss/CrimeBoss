#include "IGS_PropsManager.h"

UIGS_PropsManager::UIGS_PropsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialized = false;
}

void UIGS_PropsManager::Setup(int32 InSeed) {
}

int32 UIGS_PropsManager::GetInitialSeed() const {
    return 0;
}


