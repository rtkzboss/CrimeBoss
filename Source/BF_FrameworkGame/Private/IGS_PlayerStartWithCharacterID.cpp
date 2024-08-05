#include "IGS_PlayerStartWithCharacterID.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_PlayerStartWithCharacterID::AIGS_PlayerStartWithCharacterID(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CharacterID = EIGS_CharacterID::Char_Unknown;
}


