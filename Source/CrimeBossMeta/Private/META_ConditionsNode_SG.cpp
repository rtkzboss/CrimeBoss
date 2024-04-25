#include "META_ConditionsNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_ConditionsNode_SG::UMETA_ConditionsNode_SG() {
    this->Type = EMETA_NodeType::Conditions;
    this->ConditionOperator = EMETA_ConditionExprOperator::And;
}


