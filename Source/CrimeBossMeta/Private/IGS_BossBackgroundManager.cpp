#include "IGS_BossBackgroundManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_BossBackgroundManager::UIGS_BossBackgroundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_BossBackgroundManager::UnloadIncorrectLevel(FName inLevelToUnload) {
}

void UIGS_BossBackgroundManager::LoadCorrectLevel(FName inLevelToLoad) {
}

void UIGS_BossBackgroundManager::LevelHandlingFinished() {
}

bool UIGS_BossBackgroundManager::IsBackgroundChangeInProgress() {
    return false;
}

bool UIGS_BossBackgroundManager::IsAnyBackgroundLoaded() {
    return false;
}

void UIGS_BossBackgroundManager::IncorrectLevelUnloaded() {
}

void UIGS_BossBackgroundManager::HandleBackgroundSublevel(FName inLevelToLoad) {
}

FName UIGS_BossBackgroundManager::GetNameForLevel(int32 inLevel) {
    return NAME_None;
}

TArray<FName> UIGS_BossBackgroundManager::GetLoadedBackgroundLevelNames() const {
    return TArray<FName>();
}


