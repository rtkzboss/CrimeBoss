#include "IGS_UnlockedCharacterSaveData.h"

FIGS_UnlockedCharacterSaveData::FIGS_UnlockedCharacterSaveData() {
    (*this).CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).bCharacterMaxLeveled = false;
    (*this).bCharacterQuestlineCompleted = false;
}

