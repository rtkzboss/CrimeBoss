#include "BTService_OverrideStateWhenRelevant.h"

UBTService_OverrideStateWhenRelevant::UBTService_OverrideStateWhenRelevant() {
    this->NodeName = TEXT("Override Character State When Relevant");
    this->ForcedCharacterState = EIGS_CharacterState::Calm;
}


