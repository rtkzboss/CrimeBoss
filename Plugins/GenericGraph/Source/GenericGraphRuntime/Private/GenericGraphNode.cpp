#include "GenericGraphNode.h"

UGenericGraphNode::UGenericGraphNode() {
    this->Graph = NULL;
}

void UGenericGraphNode::RefreshValuesOnSaveGraph() {
}

bool UGenericGraphNode::IsLeafNode() const {
    return false;
}

int32 UGenericGraphNode::GetNodeId() const {
    return 0;
}

UGenericGraph* UGenericGraphNode::GetGraph() const {
    return NULL;
}

UGenericGraphEdge* UGenericGraphNode::GetEdge(UGenericGraphNode* ChildNode) {
    return NULL;
}

FText UGenericGraphNode::GetDescription_Implementation() const {
    return FText::GetEmpty();
}


