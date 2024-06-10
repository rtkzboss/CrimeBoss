#include "META_SubGraphNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_SubGraphNode_SG::UMETA_SubGraphNode_SG() {
    (*this).SubGraph = nullptr;
    (*this).OldConnectionsCount = -1;
    (*this).Type = EMETA_NodeType::Subgraph;
}

void UMETA_SubGraphNode_SG::SetSubGraphResult(EMETA_GoalStatus inResult) {
}

int32 UMETA_SubGraphNode_SG::GetNextNodeIDByResult() {
    return 0;
}


