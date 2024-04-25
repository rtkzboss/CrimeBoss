#include "BTDecorator_IsCharacterState.h"

UBTDecorator_IsCharacterState::UBTDecorator_IsCharacterState() {
    this->NodeName = TEXT("Is Character State");
    this->bIsCharacterBlackboardBased = false;
    this->DesiredCharacterState = EIGS_CharacterState::Calm;
}


