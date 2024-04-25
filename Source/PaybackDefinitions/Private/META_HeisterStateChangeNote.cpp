#include "META_HeisterStateChangeNote.h"

FMETA_HeisterStateChangeNote::FMETA_HeisterStateChangeNote() {
    this->PrevState = EMETA_CharacterState::None;
    this->NewState = EMETA_CharacterState::None;
    this->ChangeDay = 0;
}

