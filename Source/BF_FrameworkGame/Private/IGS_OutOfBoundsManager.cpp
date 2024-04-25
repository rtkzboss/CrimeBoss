#include "IGS_OutOfBoundsManager.h"

UIGS_OutOfBoundsManager::UIGS_OutOfBoundsManager() {
    this->OutOfBoundsWidgetClass = NULL;
    this->OutOfBoundsWidget = NULL;
}

void UIGS_OutOfBoundsManager::ResetOutOfBoundsCounter(AIGS_PlayerCharacter* inCharacter) {
}

void UIGS_OutOfBoundsManager::LeftOutOfBoundsArea(AIGS_PlayerCharacter* inCharacter) {
}

bool UIGS_OutOfBoundsManager::IsOutOfBounds(const AIGS_PlayerCharacter* inCharacter) const {
    return false;
}

TArray<AIGS_LevelBlockingBounds*> UIGS_OutOfBoundsManager::GetAllLevelBlockingBoundsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const {
    return TArray<AIGS_LevelBlockingBounds*>();
}

TArray<AIGS_LevelBlockingBounds*> UIGS_OutOfBoundsManager::GetAllLevelBlockingBounds() const {
    return TArray<AIGS_LevelBlockingBounds*>();
}

void UIGS_OutOfBoundsManager::EnteredOutOfBoundsArea(AIGS_PlayerCharacter* inCharacter) {
}


