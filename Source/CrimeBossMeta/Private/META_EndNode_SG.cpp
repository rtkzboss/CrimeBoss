#include "META_EndNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_EndNode_SG::UMETA_EndNode_SG() {
    (*this).Result = EMETA_GoalStatus::Success;
    (*this).Type = EMETA_NodeType::End;
}


