#include "IGS_WieldableHelpers.h"

UIGS_WieldableHelpers::UIGS_WieldableHelpers() {
}

bool UIGS_WieldableHelpers::WieldAnyItemCustomSocket(AIGS_GameCharacterFramework* inWielder, AActor* inActorToWield, EIGS_WieldingHand inWieldingHand, FName inSocket, bool inForce) {
    return false;
}

bool UIGS_WieldableHelpers::WieldAnyItem(AIGS_GameCharacterFramework* inWielder, AActor* inActorToWield, EIGS_WieldingHand inWieldingHand, bool inForce) {
    return false;
}

void UIGS_WieldableHelpers::RemoveWieldedItemOfClass(AIGS_GameCharacterFramework* inWielder, TSoftClassPtr<AActor> inClassToRemove, bool inBothHands) {
}

void UIGS_WieldableHelpers::RemoveWieldedItem(AIGS_GameCharacterFramework* inWielder, EIGS_WieldingHand inWieldingHand) {
}

EIGS_WieldingHand UIGS_WieldableHelpers::GetFreeHand(AIGS_GameCharacterFramework* inWielder, EIGS_WieldingHand inPreferredHand) {
    return EIGS_WieldingHand::RightHand;
}

void UIGS_WieldableHelpers::DropWieldedItemOfClass(AIGS_GameCharacterFramework* inWielder, TSoftClassPtr<AActor> inClassToRemove, bool inBothHands) {
}

void UIGS_WieldableHelpers::DropWieldedItem(AIGS_GameCharacterFramework* inWielder, EIGS_WieldingHand inWieldingHand) {
}


