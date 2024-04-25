#include "META_BaseNode_SG.h"

UMETA_BaseNode_SG::UMETA_BaseNode_SG() {
    this->ID = 0;
    this->Type = EMETA_NodeType::None;
    this->bShouldBeResetted = true;
}

void UMETA_BaseNode_SG::ResetNodeToDefault_Implementation() {
}

int32 UMETA_BaseNode_SG::ExecuteNode_Implementation(AMETA_BaseGameMode* inGameMode) {
    return 0;
}


