#include "META_LoopBranchNode.h"
#include "EMETA_NodeType.h"

UMETA_LoopBranchNode::UMETA_LoopBranchNode() {
    this->Type = EMETA_NodeType::LoopBranch;
    this->AmountOfActivations = 0;
    this->CurrentAmountOfActivation = 0;
    this->LimitExceededNodeId = -1;
    this->ContinueNodeId = 0;
}

void UMETA_LoopBranchNode::SetSaveData(FMETA_LoopBranchNodeSaveData SaveData) {
}

void UMETA_LoopBranchNode::GetSaveData(FMETA_LoopBranchNodeSaveData& SaveData) {
}


