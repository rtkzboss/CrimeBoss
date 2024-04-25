#include "META_BaseCondition.h"

UMETA_BaseCondition::UMETA_BaseCondition() {
    this->InvertResult = false;
}

bool UMETA_BaseCondition::ExecuteCondition_Implementation(AMETA_BaseGameMode* inGameMode) {
    return false;
}


