#include "META_StoryGraph.h"
#include "META_BaseEdge_SG.h"
#include "META_BaseNode_SG.h"

UMETA_StoryGraph::UMETA_StoryGraph() {
    this->Name = TEXT("Story Graph");
    this->NodeType = UMETA_BaseNode_SG::StaticClass();
    this->EdgeType = UMETA_BaseEdge_SG::StaticClass();
    this->Type = EMETA_RandEventCategory::None;
}

void UMETA_StoryGraph::ResetGraph_Implementation() {
}

UStoryGraphManager* UMETA_StoryGraph::GetOwningManager() {
    return NULL;
}

UMETA_BaseNode_SG* UMETA_StoryGraph::GetNode(const int32 NodeId) {
    return NULL;
}

void UMETA_StoryGraph::EndGraph(AMETA_BaseGameMode* inGameMode, EMETA_GoalStatus inResultResult) {
}


