#include "IGS_MenuBackgroundManager.h"

UIGS_MenuBackgroundManager::UIGS_MenuBackgroundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGameplayTag UIGS_MenuBackgroundManager::GetMenuBackgroundTagToShow() {
    return FGameplayTag{};
}


