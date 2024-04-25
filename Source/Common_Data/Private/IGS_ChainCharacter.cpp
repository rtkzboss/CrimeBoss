#include "IGS_ChainCharacter.h"

FIGS_ChainCharacter::FIGS_ChainCharacter() {
    this->CharacterID = EIGS_CharacterID::Char_Gen_Start;
    this->CharacterLoadout = NULL;
    this->bOverrideState = false;
    this->OverrideState = EMETA_CharacterState::None;
}

