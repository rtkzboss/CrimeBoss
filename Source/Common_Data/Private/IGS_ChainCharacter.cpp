#include "IGS_ChainCharacter.h"

FIGS_ChainCharacter::FIGS_ChainCharacter() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CharacterTagID, 0)) = NAME_None;
    (*this).CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CharacterLoadout = nullptr;
    (*this).bOverrideState = false;
    (*this).OverrideState = EMETA_CharacterState::None;
}

