#include "META_LoopBranchNode.h"
#include "EMETA_NodeType.h"

UMETA_LoopBranchNode::UMETA_LoopBranchNode() {
    (*this).LimitExceededNodeId = -1;
    (*this).Type = EMETA_NodeType::LoopBranch;
}

void UMETA_LoopBranchNode::SetSaveData(FMETA_LoopBranchNodeSaveData SaveData) {
}

void UMETA_LoopBranchNode::GetSaveData(FMETA_LoopBranchNodeSaveData& SaveData) {
}


