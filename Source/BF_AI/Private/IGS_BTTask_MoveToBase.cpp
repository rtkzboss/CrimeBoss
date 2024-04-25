#include "IGS_BTTask_MoveToBase.h"

UIGS_BTTask_MoveToBase::UIGS_BTTask_MoveToBase() {
    this->CanSprint = false;
    this->CanEndInDanger = false;
    this->m_MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
}


