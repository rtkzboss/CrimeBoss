#include "IGS_DialogueCharacterLinesRow.h"
#include "EIGS_DialogueGroup.h"

FIGS_DialogueCharacterLinesRow::FIGS_DialogueCharacterLinesRow() {
    (*this).ID.DialogueGroup = EIGS_DialogueGroup::None;
    (*this).ID.DialogueCharacter = 0;
    (*this).CharacterDataTable = nullptr;
}

