#include "META_BaseNode_SG.h"

UMETA_BaseNode_SG::UMETA_BaseNode_SG() {
    (*this).bShouldBeResetted = true;
}

void UMETA_BaseNode_SG::ResetNodeToDefault_Implementation() {
}

int32 UMETA_BaseNode_SG::ExecuteNode_Implementation(AMETA_BaseGameMode* inGameMode) {
    return 0;
}


