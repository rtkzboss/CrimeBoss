#include "GenericGraph.h"
#include "GenericGraphEdge.h"
#include "GenericGraphNode.h"

UGenericGraph::UGenericGraph() {
    this->END_GRAPH_VALUE = -2;
    this->START_GRAPH_VALUE = -1;
    this->NodeType = UGenericGraphNode::StaticClass();
    this->EdgeType = UGenericGraphEdge::StaticClass();
    this->RootNode = NULL;
}

void UGenericGraph::Print(bool ToConsole, bool ToScreen) {
}

void UGenericGraph::GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes) {
}

int32 UGenericGraph::GetLevelNum() const {
    return 0;
}


