#include "META_TaskNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_TaskNode_SG::UMETA_TaskNode_SG() {
    this->Type = EMETA_NodeType::TaskNode;
    this->bOverrideTaskExecution = false;
    this->OverrideNodeID = 0;
    this->Task = NULL;
}


