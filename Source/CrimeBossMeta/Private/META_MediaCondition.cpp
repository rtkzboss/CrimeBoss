#include "META_MediaCondition.h"

UMETA_MediaCondition::UMETA_MediaCondition() {
    this->CachedGameMode = NULL;
}


FText UMETA_MediaCondition::GetEdgeResultText_Implementation(uint8 inResultID) {
    return FText::GetEmpty();
}


