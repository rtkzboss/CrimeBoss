#include "IGS_MenuBackgroundManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_MenuBackgroundManager::UIGS_MenuBackgroundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGameplayTag UIGS_MenuBackgroundManager::GetMenuBackgroundTagToShow() {
    return FGameplayTag{};
}


