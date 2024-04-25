#include "META_SubGraphNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_SubGraphNode_SG::UMETA_SubGraphNode_SG() {
    this->Type = EMETA_NodeType::Subgraph;
    this->TrueNodeId = 0;
    this->FalseNodeId = 0;
    this->LoadedSubGraph = NULL;
    this->Result = EMETA_GoalStatus::None;
    this->OldConnectionsCount = -1;
}

void UMETA_SubGraphNode_SG::SetSubGraphResult(EMETA_GoalStatus inResult) {
}

int32 UMETA_SubGraphNode_SG::GetNextNodeIDByResult() {
    return 0;
}


