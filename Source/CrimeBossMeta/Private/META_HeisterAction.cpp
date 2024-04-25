#include "META_HeisterAction.h"

UMETA_HeisterAction::UMETA_HeisterAction() {
    this->HeistersSource = EMETA_HeistersSourceEvent::FromEventManagerMap;
    this->Index = -1;
    this->ActionScope = EMETA_HeisterActionScope::None;
    this->AmountOfHeisters = 0;
    this->CharacterID = EIGS_CharacterID::Char_Unknown;
    this->ConditionOperator = EMETA_ConditionExprOperator::And;
    this->MaxAmountOfSortedHeisters = 1;
    this->IncludeBoss = false;
    this->IncludeDead = false;
}


