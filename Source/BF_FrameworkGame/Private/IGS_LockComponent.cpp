#include "IGS_LockComponent.h"

UIGS_LockComponent::UIGS_LockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLocked = false;
    this->KeyRoomType = EIGS_RoomType::Street;
    this->KeyRoomSecurityType = EIGS_RoomSecurityType::Outside;
    this->UniqueKeyID = -1;
    this->EmployeeKeyClass = NULL;
    this->SecurityKeyClass = NULL;
}

void UIGS_LockComponent::SetLockState(bool inLocked) {
}

bool UIGS_LockComponent::GetLockState() const {
    return false;
}

void UIGS_LockComponent::GetLockedStateForPlayer(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerLockState& outBranches) {
}


