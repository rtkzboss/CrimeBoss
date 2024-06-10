#include "META_BranchNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_BranchNode_SG::UMETA_BranchNode_SG() {
    (*this).TrueNodeId = -1;
    (*this).FalseNodeId = -1;
    (*this).Type = EMETA_NodeType::Branch;
}


