#include "IGS_OutOfBoundsManager.h"
#include "IGS_LevelBlockingBoundsSettings.h"

UIGS_OutOfBoundsManager::UIGS_OutOfBoundsManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_LevelBlockingBoundsSettings> gen608(TEXT("/Game/00_Main/Blueprints/Gameplay/Colliders/LevelBounds/DA_LevelBlockingBoundsSettings.DA_LevelBlockingBoundsSettings"));
    (*this).Settings = gen608.Object;
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


