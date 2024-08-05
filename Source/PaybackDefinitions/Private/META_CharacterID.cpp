#include "META_CharacterID.h"

FMETA_CharacterID::FMETA_CharacterID() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqGenericId = -1;
}

