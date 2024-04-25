#include "META_BranchNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_BranchNode_SG::UMETA_BranchNode_SG() {
    this->Type = EMETA_NodeType::Branch;
    this->ConditionOperator = EMETA_ConditionExprOperator::And;
    this->TrueNodeId = -1;
    this->FalseNodeId = -1;
}


