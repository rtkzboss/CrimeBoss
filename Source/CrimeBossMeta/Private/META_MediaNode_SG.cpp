#include "META_MediaNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_MediaNode_SG::UMETA_MediaNode_SG() {
    (*this).ExpireTimerResultNode = -1;
    (*this).Type = EMETA_NodeType::Media;
}

int32 UMETA_MediaNode_SG::GetTargetNodeID(int32 inResult) {
    return 0;
}


