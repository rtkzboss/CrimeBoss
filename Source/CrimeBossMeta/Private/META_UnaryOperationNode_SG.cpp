#include "META_UnaryOperationNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_UnaryOperationNode_SG::UMETA_UnaryOperationNode_SG() {
    this->Type = EMETA_NodeType::UnaryOperation;
    this->UnaryOperation = EMETA_UnaryOperation::Increment;
}


