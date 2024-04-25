#include "IGS_CharacterHelpers.h"

UIGS_CharacterHelpers::UIGS_CharacterHelpers() {
}

bool UIGS_CharacterHelpers::SetMovementSpeed(AIGS_GameCharacterFramework* inCharacter, EIGS_Speed speedType) {
    return false;
}

EIGS_Speed UIGS_CharacterHelpers::GetMovementSpeed(AIGS_GameCharacterFramework* inCharacter) {
    return EIGS_Speed::MS_Walk;
}

FString UIGS_CharacterHelpers::GetActiveNodeName(AIGS_GameCharacterFramework* inCharacter) {
    return TEXT("");
}


